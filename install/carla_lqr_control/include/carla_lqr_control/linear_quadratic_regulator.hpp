#pragma once
#include<Eigen/Core>
#include<iostream>


namespace control
{
    using Matrix = Eigen::MatrixXd;
    void SolveLQRProblem(const Eigen::MatrixXd& A, const Eigen::MatrixXd& B,
                         const Eigen::MatrixXd& Q, const Eigen::MatrixXd& R,
                         const Eigen::MatrixXd& M, const double tolerance,
                         const uint max_num_iteration, Eigen::MatrixXd *ptr_K)
    {
        if(A.rows() != A.cols() || B.rows() != A.rows() || Q.rows() != Q.cols() ||
           Q.rows() != A.rows() || R.rows() != R.cols() || R.rows() != B.cols() ||
           M.rows() != Q.rows() || M.cols() != R.cols())
        {
            std::cout<< "LQR solver: one or more matrices have incompatible dimensions."<<std::endl;;
            return;
        }

        Matrix AT = A.transpose();
        Matrix BT = B.transpose();
        Matrix MT = M.transpose();

        Matrix P = Q;
        uint num_iteration = 0;
        double diff = std::numeric_limits<double>::max();
        while (num_iteration++ < max_num_iteration && diff > tolerance)
        {
            Matrix P_next = AT * P * A -
                            (AT * P * B + M) * (R + BT * P * B).inverse() * (BT * P * A + MT) + Q;
            diff = fabs((P_next - P).maxCoeff());
            P = P_next;
        }
        if (num_iteration >= max_num_iteration)
        {
        std::cout << "LQR solver cannot converge to a solution, "
                "last consecutive result diff is: "
            << diff <<std::endl;
        } 
        else 
        {
        std::cout << "LQR solver converged at iteration: " << num_iteration
            << ", max consecutive result diff.: " << diff <<std::endl;
        }
        *ptr_K = (R + BT * P * B).inverse() * (BT * P * A + MT);
    }

    void SolveLQRProblem(const Eigen::MatrixXd& A, const Eigen::MatrixXd& B,
                         const Eigen::MatrixXd& Q, const Eigen::MatrixXd& R,
                         const double tolerance, const uint max_num_iteration, 
                         Eigen::MatrixXd *ptr_K)
    {
        Matrix M = Matrix::Zero(Q.rows(), R.cols());
        SolveLQRProblem(A, B, Q, R, M, tolerance, max_num_iteration, ptr_K);
        
    }         

}
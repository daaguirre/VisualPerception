#ifndef __VP_POINT_TRIANGULATOR_H_
#define __VP_POINT_TRIANGULATOR_H_

#include <Eigen/Eigen>

#include "types.h"

namespace vp
{

class PointTriangulator
{
public:
    Eigen::MatrixXd run(const Eigen::Matrix3d& K, const Eigen::Vector3d& c1,
                        const Eigen::Matrix3d& R1, const Eigen::Vector3d& c2,
                        const Eigen::Matrix3d& R2, const Eigen::MatrixXd& x1,
                        const Eigen::MatrixXd& x2) const;

};

}  // namespace vp

#endif  // __VP_POINT_TRIANGULATOR_H_
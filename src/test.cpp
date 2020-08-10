/* ----------------------------------------------------------------------------
 * Copyright 2020, Jesus Tordesillas Torres, Aerospace Controls Laboratory
 * Massachusetts Institute of Technology
 * All Rights Reserved
 * Authors: Jesus Tordesillas, et al.
 * See LICENSE file for the license information
 * -------------------------------------------------------------------------- */

#include <iostream>
#include <array>
#include "separator.hpp"

int main()
{
  separator::Separator separator_solver;  // 0.0, 0.0, 0.0

  std::vector<Eigen::Vector3d> pointsA;
  std::vector<Eigen::Vector3d> pointsB;

  // for (int i = 0; i < 3; i++)
  // {
  //   pointsA.push_back(Eigen::Vector3d(1.0, 2.0, 3.0));
  // }

  // for (int i = 0; i < 3; i++)
  // {
  //   pointsB.push_back(Eigen::Vector3d(3.0, 4.0, 5.0));
  // }

  // pointsA.push_back(Eigen::Vector3d(1.3901, 1.336, -5.578));
  // pointsA.push_back(Eigen::Vector3d(1.7901, 1.336, -5.578));
  // pointsA.push_back(Eigen::Vector3d(1.7901, 1.736, 6.422));
  // pointsA.push_back(Eigen::Vector3d(1.7901, 1.336, 6.422));
  // pointsA.push_back(Eigen::Vector3d(1.7901, 1.736, -5.578));
  // pointsA.push_back(Eigen::Vector3d(1.3901, 1.736, 6.422));
  // pointsA.push_back(Eigen::Vector3d(1.3901, 1.736, -5.578));
  // pointsA.push_back(Eigen::Vector3d(1.3901, 1.336, 6.422));

  // pointsB.push_back(Eigen::Vector3d(4.4376, 4.6171, 1));
  // pointsB.push_back(Eigen::Vector3d(4.4376, 4.6171, 1));
  // pointsB.push_back(Eigen::Vector3d(4.4376, 4.6171, 1));
  // pointsB.push_back(Eigen::Vector3d(4.4376, 4.6171, 1));

  // Going to solve model with pointsA.size() = 96 pointsA.push_back(Eigen::Vector3d(-3.5084, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-3.5084, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-3.5084, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-3.5084, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-3.5084, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-3.5084, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-3.5084, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-3.5084, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-3.5243, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-3.5243, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-3.5243, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-3.5243, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-3.5243, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-3.5243, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-3.5243, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-3.5243, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-3.4102, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-3.4102, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-3.4102, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-3.4102, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-3.4102, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-3.4102, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-3.4102, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-3.4102, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-3.2107, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-3.2107, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-3.2107, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-3.2107, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-3.2107, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-3.2107, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-3.2107, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-3.2107, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-3.3197, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-3.3197, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-3.3197, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-3.3197, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-3.3197, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-3.3197, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-3.3197, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-3.3197, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-3.0647, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-3.0647, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-3.0647, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-3.0647, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-3.0647, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-3.0647, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-3.0647, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-3.0647, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-2.3605, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-2.3605, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-2.3605, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-2.3605, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-2.3605, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-2.3605, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-2.3605, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-2.3605, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-2.1056, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-2.1056, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-2.1056, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-2.1056, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-2.1056, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-2.1056, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-2.1056, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-2.1056, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-2.2145, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-2.2145, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-2.2145, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-2.2145, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-2.2145, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-2.2145, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-2.2145, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-2.2145, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-2.015, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-2.015, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-2.015, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-2.015, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-2.015, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-2.015, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-2.015, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-2.015, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-1.9009, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-1.9009, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-1.9009, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-1.9009, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-1.9009, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-1.9009, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-1.9009, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-1.9009, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-1.9168, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-1.9168, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-1.9168, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-1.9168, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-1.9168, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-1.9168, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-1.9168, 8.5725e-16, 1));
  pointsA.push_back(Eigen::Vector3d(-1.9168, 8.5725e-16, 1));

  // Going to solve model with pointsB.size() = 160
  pointsB.push_back(Eigen::Vector3d(-0.28268, -0.28268, 2.6788));
  pointsB.push_back(Eigen::Vector3d(-0.28268, -0.68268, 2.2788));
  pointsB.push_back(Eigen::Vector3d(-0.28268, -0.28268, 2.2788));
  pointsB.push_back(Eigen::Vector3d(-0.28268, -0.68268, 2.6788));
  pointsB.push_back(Eigen::Vector3d(-0.68268, -0.68268, 2.2788));
  pointsB.push_back(Eigen::Vector3d(-0.68268, -0.28268, 2.6788));
  pointsB.push_back(Eigen::Vector3d(-0.68268, -0.28268, 2.2788));
  pointsB.push_back(Eigen::Vector3d(-0.68268, -0.68268, 2.6788));
  pointsB.push_back(Eigen::Vector3d(-0.28268, -0.28268, 2.6788));
  pointsB.push_back(Eigen::Vector3d(-0.28268, -0.68268, 2.2788));
  pointsB.push_back(Eigen::Vector3d(-0.28268, -0.28268, 2.2788));
  pointsB.push_back(Eigen::Vector3d(-0.28268, -0.68268, 2.6788));
  pointsB.push_back(Eigen::Vector3d(-0.68268, -0.68268, 2.2788));
  pointsB.push_back(Eigen::Vector3d(-0.68268, -0.28268, 2.6788));
  pointsB.push_back(Eigen::Vector3d(-0.68268, -0.28268, 2.2788));
  pointsB.push_back(Eigen::Vector3d(-0.68268, -0.68268, 2.6788));
  pointsB.push_back(Eigen::Vector3d(-0.28268, -0.28268, 2.6788));
  pointsB.push_back(Eigen::Vector3d(-0.28268, -0.68268, 2.2788));
  pointsB.push_back(Eigen::Vector3d(-0.28268, -0.28268, 2.2788));
  pointsB.push_back(Eigen::Vector3d(-0.28268, -0.68268, 2.6788));
  pointsB.push_back(Eigen::Vector3d(-0.68268, -0.68268, 2.2788));
  pointsB.push_back(Eigen::Vector3d(-0.68268, -0.28268, 2.6788));
  pointsB.push_back(Eigen::Vector3d(-0.68268, -0.28268, 2.2788));
  pointsB.push_back(Eigen::Vector3d(-0.68268, -0.68268, 2.6788));
  pointsB.push_back(Eigen::Vector3d(-0.28268, -0.28268, 2.6788));
  pointsB.push_back(Eigen::Vector3d(-0.28268, -0.68268, 2.2788));
  pointsB.push_back(Eigen::Vector3d(-0.28268, -0.28268, 2.2788));
  pointsB.push_back(Eigen::Vector3d(-0.28268, -0.68268, 2.6788));
  pointsB.push_back(Eigen::Vector3d(-0.68268, -0.68268, 2.2788));
  pointsB.push_back(Eigen::Vector3d(-0.68268, -0.28268, 2.6788));
  pointsB.push_back(Eigen::Vector3d(-0.68268, -0.28268, 2.2788));
  pointsB.push_back(Eigen::Vector3d(-0.68268, -0.68268, 2.6788));
  pointsB.push_back(Eigen::Vector3d(-0.20939, -0.20939, 2.6421));
  pointsB.push_back(Eigen::Vector3d(-0.20939, -0.60939, 2.2421));
  pointsB.push_back(Eigen::Vector3d(-0.20939, -0.20939, 2.2421));
  pointsB.push_back(Eigen::Vector3d(-0.20939, -0.60939, 2.6421));
  pointsB.push_back(Eigen::Vector3d(-0.60939, -0.60939, 2.2421));
  pointsB.push_back(Eigen::Vector3d(-0.60939, -0.20939, 2.6421));
  pointsB.push_back(Eigen::Vector3d(-0.60939, -0.20939, 2.2421));
  pointsB.push_back(Eigen::Vector3d(-0.60939, -0.60939, 2.6421));
  pointsB.push_back(Eigen::Vector3d(-0.23147, -0.23147, 2.6532));
  pointsB.push_back(Eigen::Vector3d(-0.23147, -0.63147, 2.2532));
  pointsB.push_back(Eigen::Vector3d(-0.23147, -0.23147, 2.2532));
  pointsB.push_back(Eigen::Vector3d(-0.23147, -0.63147, 2.6532));
  pointsB.push_back(Eigen::Vector3d(-0.63147, -0.63147, 2.2532));
  pointsB.push_back(Eigen::Vector3d(-0.63147, -0.23147, 2.6532));
  pointsB.push_back(Eigen::Vector3d(-0.63147, -0.23147, 2.2532));
  pointsB.push_back(Eigen::Vector3d(-0.63147, -0.63147, 2.6532));
  pointsB.push_back(Eigen::Vector3d(-0.31505, -0.31505, 2.695));
  pointsB.push_back(Eigen::Vector3d(-0.31505, -0.71505, 2.295));
  pointsB.push_back(Eigen::Vector3d(-0.31505, -0.31505, 2.295));
  pointsB.push_back(Eigen::Vector3d(-0.31505, -0.71505, 2.695));
  pointsB.push_back(Eigen::Vector3d(-0.71505, -0.71505, 2.295));
  pointsB.push_back(Eigen::Vector3d(-0.71505, -0.31505, 2.695));
  pointsB.push_back(Eigen::Vector3d(-0.71505, -0.31505, 2.295));
  pointsB.push_back(Eigen::Vector3d(-0.71505, -0.71505, 2.695));
  pointsB.push_back(Eigen::Vector3d(-0.39051, -0.39051, 2.7327));
  pointsB.push_back(Eigen::Vector3d(-0.39051, -0.79051, 2.3327));
  pointsB.push_back(Eigen::Vector3d(-0.39051, -0.39051, 2.3327));
  pointsB.push_back(Eigen::Vector3d(-0.39051, -0.79051, 2.7327));
  pointsB.push_back(Eigen::Vector3d(-0.79051, -0.79051, 2.3327));
  pointsB.push_back(Eigen::Vector3d(-0.79051, -0.39051, 2.7327));
  pointsB.push_back(Eigen::Vector3d(-0.79051, -0.39051, 2.3327));
  pointsB.push_back(Eigen::Vector3d(-0.79051, -0.79051, 2.7327));
  pointsB.push_back(Eigen::Vector3d(-0.35008, -0.35008, 2.7125));
  pointsB.push_back(Eigen::Vector3d(-0.35008, -0.75008, 2.3125));
  pointsB.push_back(Eigen::Vector3d(-0.35008, -0.35008, 2.3125));
  pointsB.push_back(Eigen::Vector3d(-0.35008, -0.75008, 2.7125));
  pointsB.push_back(Eigen::Vector3d(-0.75008, -0.75008, 2.3125));
  pointsB.push_back(Eigen::Vector3d(-0.75008, -0.35008, 2.7125));
  pointsB.push_back(Eigen::Vector3d(-0.75008, -0.35008, 2.3125));
  pointsB.push_back(Eigen::Vector3d(-0.75008, -0.75008, 2.7125));
  pointsB.push_back(Eigen::Vector3d(-0.44021, -0.44021, 2.7575));
  pointsB.push_back(Eigen::Vector3d(-0.44021, -0.84021, 2.3575));
  pointsB.push_back(Eigen::Vector3d(-0.44021, -0.44021, 2.3575));
  pointsB.push_back(Eigen::Vector3d(-0.44021, -0.84021, 2.7575));
  pointsB.push_back(Eigen::Vector3d(-0.84021, -0.84021, 2.3575));
  pointsB.push_back(Eigen::Vector3d(-0.84021, -0.44021, 2.7575));
  pointsB.push_back(Eigen::Vector3d(-0.84021, -0.44021, 2.3575));
  pointsB.push_back(Eigen::Vector3d(-0.84021, -0.84021, 2.7575));
  pointsB.push_back(Eigen::Vector3d(-0.66322, -0.66322, 2.869));
  pointsB.push_back(Eigen::Vector3d(-0.66322, -1.0632, 2.469));
  pointsB.push_back(Eigen::Vector3d(-0.66322, -0.66322, 2.469));
  pointsB.push_back(Eigen::Vector3d(-0.66322, -1.0632, 2.869));
  pointsB.push_back(Eigen::Vector3d(-1.0632, -1.0632, 2.469));
  pointsB.push_back(Eigen::Vector3d(-1.0632, -0.66322, 2.869));
  pointsB.push_back(Eigen::Vector3d(-1.0632, -0.66322, 2.469));
  pointsB.push_back(Eigen::Vector3d(-1.0632, -1.0632, 2.869));
  pointsB.push_back(Eigen::Vector3d(-0.74057, -0.74057, 2.9077));
  pointsB.push_back(Eigen::Vector3d(-0.74057, -1.1406, 2.5077));
  pointsB.push_back(Eigen::Vector3d(-0.74057, -0.74057, 2.5077));
  pointsB.push_back(Eigen::Vector3d(-0.74057, -1.1406, 2.9077));
  pointsB.push_back(Eigen::Vector3d(-1.1406, -1.1406, 2.5077));
  pointsB.push_back(Eigen::Vector3d(-1.1406, -0.74057, 2.9077));
  pointsB.push_back(Eigen::Vector3d(-1.1406, -0.74057, 2.5077));
  pointsB.push_back(Eigen::Vector3d(-1.1406, -1.1406, 2.9077));
  pointsB.push_back(Eigen::Vector3d(-0.7066, -0.7066, 2.8907));
  pointsB.push_back(Eigen::Vector3d(-0.7066, -1.1066, 2.4907));
  pointsB.push_back(Eigen::Vector3d(-0.7066, -0.7066, 2.4907));
  pointsB.push_back(Eigen::Vector3d(-0.7066, -1.1066, 2.8907));
  pointsB.push_back(Eigen::Vector3d(-1.1066, -1.1066, 2.4907));
  pointsB.push_back(Eigen::Vector3d(-1.1066, -0.7066, 2.8907));
  pointsB.push_back(Eigen::Vector3d(-1.1066, -0.7066, 2.4907));
  pointsB.push_back(Eigen::Vector3d(-1.1066, -1.1066, 2.8907));
  pointsB.push_back(Eigen::Vector3d(-0.76787, -0.76787, 2.9214));
  pointsB.push_back(Eigen::Vector3d(-0.76787, -1.1679, 2.5214));
  pointsB.push_back(Eigen::Vector3d(-0.76787, -0.76787, 2.5214));
  pointsB.push_back(Eigen::Vector3d(-0.76787, -1.1679, 2.9214));
  pointsB.push_back(Eigen::Vector3d(-1.1679, -1.1679, 2.5214));
  pointsB.push_back(Eigen::Vector3d(-1.1679, -0.76787, 2.9214));
  pointsB.push_back(Eigen::Vector3d(-1.1679, -0.76787, 2.5214));
  pointsB.push_back(Eigen::Vector3d(-1.1679, -1.1679, 2.9214));
  pointsB.push_back(Eigen::Vector3d(-0.80292, -0.80292, 2.9389));
  pointsB.push_back(Eigen::Vector3d(-0.80292, -1.2029, 2.5389));
  pointsB.push_back(Eigen::Vector3d(-0.80292, -0.80292, 2.5389));
  pointsB.push_back(Eigen::Vector3d(-0.80292, -1.2029, 2.9389));
  pointsB.push_back(Eigen::Vector3d(-1.2029, -1.2029, 2.5389));
  pointsB.push_back(Eigen::Vector3d(-1.2029, -0.80292, 2.9389));
  pointsB.push_back(Eigen::Vector3d(-1.2029, -0.80292, 2.5389));
  pointsB.push_back(Eigen::Vector3d(-1.2029, -1.2029, 2.9389));
  pointsB.push_back(Eigen::Vector3d(-0.79802, -0.79802, 2.9364));
  pointsB.push_back(Eigen::Vector3d(-0.79802, -1.198, 2.5364));
  pointsB.push_back(Eigen::Vector3d(-0.79802, -0.79802, 2.5364));
  pointsB.push_back(Eigen::Vector3d(-0.79802, -1.198, 2.9364));
  pointsB.push_back(Eigen::Vector3d(-1.198, -1.198, 2.5364));
  pointsB.push_back(Eigen::Vector3d(-1.198, -0.79802, 2.9364));
  pointsB.push_back(Eigen::Vector3d(-1.198, -0.79802, 2.5364));
  pointsB.push_back(Eigen::Vector3d(-1.198, -1.198, 2.9364));
  pointsB.push_back(Eigen::Vector3d(-0.79544, -0.79544, 2.9352));
  pointsB.push_back(Eigen::Vector3d(-0.79544, -1.1954, 2.5352));
  pointsB.push_back(Eigen::Vector3d(-0.79544, -0.79544, 2.5352));
  pointsB.push_back(Eigen::Vector3d(-0.79544, -1.1954, 2.9352));
  pointsB.push_back(Eigen::Vector3d(-1.1954, -1.1954, 2.5352));
  pointsB.push_back(Eigen::Vector3d(-1.1954, -0.79544, 2.9352));
  pointsB.push_back(Eigen::Vector3d(-1.1954, -0.79544, 2.5352));
  pointsB.push_back(Eigen::Vector3d(-1.1954, -1.1954, 2.9352));
  pointsB.push_back(Eigen::Vector3d(-0.79544, -0.79544, 2.9352));
  pointsB.push_back(Eigen::Vector3d(-0.79544, -1.1954, 2.5352));
  pointsB.push_back(Eigen::Vector3d(-0.79544, -0.79544, 2.5352));
  pointsB.push_back(Eigen::Vector3d(-0.79544, -1.1954, 2.9352));
  pointsB.push_back(Eigen::Vector3d(-1.1954, -1.1954, 2.5352));
  pointsB.push_back(Eigen::Vector3d(-1.1954, -0.79544, 2.9352));
  pointsB.push_back(Eigen::Vector3d(-1.1954, -0.79544, 2.5352));
  pointsB.push_back(Eigen::Vector3d(-1.1954, -1.1954, 2.9352));
  pointsB.push_back(Eigen::Vector3d(-0.79544, -0.79544, 2.9352));
  pointsB.push_back(Eigen::Vector3d(-0.79544, -1.1954, 2.5352));
  pointsB.push_back(Eigen::Vector3d(-0.79544, -0.79544, 2.5352));
  pointsB.push_back(Eigen::Vector3d(-0.79544, -1.1954, 2.9352));
  pointsB.push_back(Eigen::Vector3d(-1.1954, -1.1954, 2.5352));
  pointsB.push_back(Eigen::Vector3d(-1.1954, -0.79544, 2.9352));
  pointsB.push_back(Eigen::Vector3d(-1.1954, -0.79544, 2.5352));
  pointsB.push_back(Eigen::Vector3d(-1.1954, -1.1954, 2.9352));
  pointsB.push_back(Eigen::Vector3d(-0.79544, -0.79544, 2.9352));
  pointsB.push_back(Eigen::Vector3d(-0.79544, -1.1954, 2.5352));
  pointsB.push_back(Eigen::Vector3d(-0.79544, -0.79544, 2.5352));
  pointsB.push_back(Eigen::Vector3d(-0.79544, -1.1954, 2.9352));
  pointsB.push_back(Eigen::Vector3d(-1.1954, -1.1954, 2.5352));
  pointsB.push_back(Eigen::Vector3d(-1.1954, -0.79544, 2.9352));
  pointsB.push_back(Eigen::Vector3d(-1.1954, -0.79544, 2.5352));
  pointsB.push_back(Eigen::Vector3d(-1.1954, -1.1954, 2.9352));

  Eigen::Vector3d n;
  double d;
  bool solved = separator_solver.solveModel(n, d, pointsA, pointsB);
  std::cout << "solved= " << solved << std::endl;
  std::cout << "n= " << n.transpose() << std::endl;
  std::cout << "d= " << d << std::endl;

  return 0;
};

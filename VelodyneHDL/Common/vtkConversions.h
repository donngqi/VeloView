//=========================================================================
//
// Copyright 2012,2013,2014,2019 Kitware, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//=========================================================================

#ifndef VTK_CONVERSIONS_H
#define VTK_CONVERSIONS_H

// VTK
#include <vtkPoints.h>
#include <vtkSmartPointer.h>

// Eigen
#include <Eigen/Dense>

/// This function creates a vector of Eigen::Vector3d from vtkPoints.
std::vector<Eigen::Vector3d> vtkPointsToEigenVector(vtkPoints* points);

/// This function creates a vtkPoints from a vector of Eigen::Vector3d. (Warning: loss of precision because vtkPoints are in float)
vtkSmartPointer<vtkPoints> eigenVectorToVTKPoints(std::vector<Eigen::Vector3d> const& points);

#endif

//
//  GLUtils.h
//  MNN
//
//  Created by MNN on 2019/01/31.
//  Copyright © 2018, Alibaba Group Holding Limited
//

#ifndef GLUTILS_H
#define GLUTILS_H
#include "Macro.h"
#include <vector>
namespace MNN {
namespace OpenGL {
    void setLocalSize(std::vector<std::string>& prefix, int* localSize, int setLocalSizeX, int setLocalSizeY, int setLocalSizeZ);
} // namespace OpenGL
} // namespace MNN
#endif

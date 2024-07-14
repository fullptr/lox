#pragma once
#include "vm.h"
#include "object.h"

#ifdef __cplusplus
extern "C" {
#endif

ObjFunction* compile(const char* source);
void markCompilerRoots();

#ifdef __cplusplus
}
#endif
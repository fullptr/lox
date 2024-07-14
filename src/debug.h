#pragma once

#include "chunk.h"

#ifdef __cplusplus
extern "C" {
#endif

void disassembleChunk(Chunk* chunk, const char* name);
int disassembleInstruction(Chunk* chunk, int offset);

#ifdef __cplusplus
}
#endif
#ifndef LLVM_TRANSFORMS_CGRA_H
#define LLVM_TRANSFORMS_CGRA_H

#include "llvm/IR/PassManager.h"

namespace llvm {

class CGRAPass : public PassInfoMixin<CGRAPass> {
public:
  PreservedAnalyses run(Function &F, FunctionAnalysisManager &AM);
};

} // namespace llvm

#endif // LLVM_TRANSFORMS_CGRA_H

#include "llvm/IR/Function.h"

#include "llvm/Transforms/Utils/CGRA.h"

using namespace llvm;

PreservedAnalyses CGRAPass::run(Function &F,
				FunctionAnalysisManager &AM) {
    errs() << F.getName() << "\n";
    return PreservedAnalyses::all();
}

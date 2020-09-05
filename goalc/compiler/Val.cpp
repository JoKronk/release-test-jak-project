#include "Val.h"

/*!
 * Fallback to_gpr if a more optimized one is not provided.
 */
const RegVal* Val::to_gpr(FunctionEnv* fe) const {
  (void)fe;
  throw std::runtime_error("Val::to_gpr NYI");  // todo
}

/*!
 * Fallback to_xmm if a more optimized one is not provided.
 */
const RegVal* Val::to_xmm(FunctionEnv* fe) const {
  (void)fe;
  throw std::runtime_error("Val::to_xmm NYI");  // todo
}


const RegVal* RegVal::to_reg(FunctionEnv* fe) const {
  (void)fe;
  return this;
}

const RegVal * RegVal::to_gpr(FunctionEnv* fe) const {
  (void)fe;
  if(m_ireg.kind == emitter::RegKind::GPR) {
    return this;
  } else {
    throw std::runtime_error("RegVal::to_gpr NYI"); // todo
  }
}

const RegVal * RegVal::to_xmm(FunctionEnv* fe) const {
  (void)fe;
  if(m_ireg.kind == emitter::RegKind::XMM) {
    return this;
  } else {
    throw std::runtime_error("RegVal::to_xmm NYI"); // todo
  }
}
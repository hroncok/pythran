#ifndef PYTHONIC_INCLUDE_OPERATOR_TRUEDIV_HPP
#define PYTHONIC_INCLUDE_OPERATOR_TRUEDIV_HPP

#include "pythonic/include/utils/functor.hpp"

PYTHONIC_NS_BEGIN

namespace operator_
{
  template <class A, class B>
  auto truediv(A const &a, B const &b) -> decltype(a / (double)b);

  DEFINE_FUNCTOR(pythonic::operator_, truediv);
}
PYTHONIC_NS_END

#endif

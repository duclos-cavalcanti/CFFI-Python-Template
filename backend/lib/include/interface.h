#ifndef _INTERFACE_BACKEND_CPP_H
#define _INTERFACE_BACKEND_CPP_H

#include "backend.h"

extern "C"
{
  extern int cffi_my_add(int a, int b)
  {
    return my_add(a, b);
  }

  extern int cffi_my_sub(int a, int b)
  {
    return my_sub(a, b);
  }

  extern int cffi_my_mul(int a, int b)
  {
    return my_mul(a, b);
  }
}

#endif

#ifndef SIMPLE_H_INCLUDED
#define SIMPLE_H_INCLUDED

#ifdef __cplusplus
#define EXPORT extern "C" __declspec (dllexport)
#else
#define EXPORT __declspec (dllexport)
#endif // __cplusplus

#include <windows.h>

EXPORT  int pow2(int a);
EXPORT  void upstr(char *str, char *s);

#endif // SIMPLE_H_INCLUDED

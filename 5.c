#include <stdio.h>
#include <stdarg.h>

void DynamicParameter(int arg_num , ...) {
 va_list args;
 int iValue , iCount;

  if (arg_num < 1) return;

  va_start(args , arg_num);

 for (iCount = 0 ; iCount < arg_num ; iCount++) {
    iValue = va_arg(args , int);
    printf("Á¦ %d ÀÎ¼ö = %d\n" , iCount + 2 , iValue);
  }

 va_end(args);
}

int main() {
  DynamicParameter(4 , 10 , 20 , 30 , 40);
  return 0;
}

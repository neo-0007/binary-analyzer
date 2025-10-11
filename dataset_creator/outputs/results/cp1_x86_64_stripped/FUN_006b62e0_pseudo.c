
long * FUN_006b62e0(long *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  
  if ((ulong)param_1[1] < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_0066ea20("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::erase",
                 param_2);
  }
  if (param_3 != 0xffffffffffffffff) {
    if (param_3 == 0) {
      return param_1;
    }
    uVar1 = param_1[1] - param_2;
    if (uVar1 <= param_3) {
      param_3 = uVar1;
    }
    FUN_006b59b0(param_1,param_2,param_3);
    return param_1;
  }
  param_1[1] = param_2;
  *(undefined4 *)(*param_1 + param_2 * 4) = 0;
  return param_1;
}


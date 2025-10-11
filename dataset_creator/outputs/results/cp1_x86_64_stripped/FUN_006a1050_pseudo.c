
long * FUN_006a1050(long *param_1,long *param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_2[1];
  if (param_3 <= uVar1) {
    *param_1 = (long)(param_1 + 2);
    uVar2 = uVar1 - param_3;
    if (param_4 < uVar1 - param_3) {
      uVar2 = param_4;
    }
    FUN_006a0e00(param_1,*param_2 + param_3,*param_2 + param_3 + uVar2);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0066ea20("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::substr",
               param_3,uVar1);
}


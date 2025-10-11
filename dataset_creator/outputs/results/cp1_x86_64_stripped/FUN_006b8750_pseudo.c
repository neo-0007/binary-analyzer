
long * FUN_006b8750(long *param_1,long *param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_2[1];
  if (param_3 <= uVar2) {
    *param_1 = (long)(param_1 + 2);
    uVar3 = uVar2 - param_3;
    if (param_4 < uVar2 - param_3) {
      uVar3 = param_4;
    }
    lVar1 = *param_2 + param_3 * 4;
    FUN_006b8500(param_1,lVar1,lVar1 + uVar3 * 4);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0066ea20("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::substr",
               param_3,uVar2);
}


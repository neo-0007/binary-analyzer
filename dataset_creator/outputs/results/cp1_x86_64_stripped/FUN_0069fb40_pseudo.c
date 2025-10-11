
void FUN_0069fb40(long param_1,ulong param_2,ulong param_3,long *param_4,ulong param_5,ulong param_6
                 )

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_4[1];
  uVar3 = uVar1 - param_5;
  if (param_6 < uVar1 - param_5) {
    uVar3 = param_6;
  }
  if (uVar1 < param_5) {
                    /* WARNING: Subroutine does not return */
    FUN_0066ea20("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::replace",
                 param_5,uVar1,uVar3);
  }
  uVar1 = *(ulong *)(param_1 + 8);
  uVar2 = uVar1 - param_2;
  if (param_3 < uVar1 - param_2) {
    uVar2 = param_3;
  }
  if (param_2 <= uVar1) {
    FUN_0069f220(param_1,param_2,uVar2,*param_4 + param_5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0066ea20("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::replace",
               param_2,uVar1,uVar3);
}


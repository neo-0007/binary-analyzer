
void FUN_006c7850(long *param_1,long param_2,long param_3,long param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = param_1[1];
  uVar4 = param_2 - *param_1;
  uVar2 = uVar1 - uVar4;
  uVar3 = param_3 - param_2;
  if (uVar2 < (ulong)(param_3 - param_2)) {
    uVar3 = uVar2;
  }
  if (uVar4 <= uVar1) {
    FUN_0069f220(param_1,uVar4,uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0066ea20("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::replace",
               uVar4,uVar1,param_5 - param_4,uVar4,uVar2);
}


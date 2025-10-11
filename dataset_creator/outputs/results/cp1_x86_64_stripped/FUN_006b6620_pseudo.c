
void FUN_006b6620(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  uVar2 = uVar1 - param_2;
  if (param_3 < uVar1 - param_2) {
    uVar2 = param_3;
  }
  if (param_2 <= uVar1) {
    FUN_006b6430(param_1,param_2,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0066ea20("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::replace",
               param_2,uVar1);
}


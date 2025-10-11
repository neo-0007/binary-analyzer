
void FUN_0063bed0(undefined8 param_1,undefined8 param_2,long *param_3,ulong param_4,ulong param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = *param_3;
  uVar2 = *(ulong *)(lVar1 + -0x18);
  uVar3 = uVar2 - param_4;
  if (param_5 < uVar2 - param_4) {
    uVar3 = param_5;
  }
  if (param_4 <= uVar2) {
    FUN_0063bcf0(param_1,param_2,lVar1 + param_4 * 4,uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0066ea20("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::insert",
               param_4,uVar2,param_5,uVar2,lVar1);
}


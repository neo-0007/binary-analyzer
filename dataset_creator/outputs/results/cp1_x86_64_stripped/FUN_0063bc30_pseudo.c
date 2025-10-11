
void FUN_0063bc30(undefined8 param_1,long *param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(*param_2 + -0x18);
  uVar2 = uVar1 - param_3;
  if (uVar2 <= param_4) {
    param_4 = uVar2;
  }
  if (param_3 <= uVar1) {
    FUN_0063baf0(param_1,*param_2 + param_3 * 4,param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0066ea20("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::assign");
}


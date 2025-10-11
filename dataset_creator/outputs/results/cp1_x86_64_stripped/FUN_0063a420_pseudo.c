
ulong FUN_0063a420(long *param_1,undefined4 *param_2,ulong param_3,ulong param_4)

{
  undefined4 *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(*param_1 + -0x18);
  if (uVar2 < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_0066ea20("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::copy",
                 param_4,uVar2);
  }
  uVar3 = uVar2 - param_4;
  if (param_3 < uVar2 - param_4) {
    uVar3 = param_3;
  }
  if (uVar3 != 0) {
    puVar1 = (undefined4 *)(*param_1 + param_4 * 4);
    if (uVar3 == 1) {
      *param_2 = *puVar1;
      return 1;
    }
    FUN_00771ea0(param_2,puVar1,uVar3,0x3fffffffffffffff);
  }
  return uVar3;
}


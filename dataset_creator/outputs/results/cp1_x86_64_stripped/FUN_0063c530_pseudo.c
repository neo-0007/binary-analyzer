
void FUN_0063c530(long *param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(*param_1 + -0x18);
  if (0xffffffffffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00403998("basic_string::resize");
  }
  if (uVar1 > param_2 || param_2 == uVar1) {
    if (uVar1 <= param_2) {
      return;
    }
    FUN_0063b2f0(param_1,param_2,uVar1 - param_2,0);
    return;
  }
  FUN_0063c460(param_1,param_2 - uVar1);
  return;
}


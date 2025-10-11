
void FUN_00639060(long *param_1,ulong param_2,char param_3)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(*param_1 + -0x18);
  if (0x3ffffffffffffff9 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00403998("basic_string::resize");
  }
  if (uVar1 > param_2 || param_2 == uVar1) {
    if (uVar1 <= param_2) {
      return;
    }
    FUN_00637f00(param_1,param_2,uVar1 - param_2,0);
    return;
  }
  FUN_00638fa0(param_1,param_2 - uVar1,(int)param_3);
  return;
}


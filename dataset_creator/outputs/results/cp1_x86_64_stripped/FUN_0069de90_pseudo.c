
void FUN_0069de90(undefined8 param_1,ulong *param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (0x3fffffffffffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00403998("basic_string::_M_create");
  }
  if ((param_3 < uVar1) && (param_3 = param_3 * 2, uVar1 < param_3)) {
    if (0x3fffffffffffffff < param_3) {
      *param_2 = 0x3fffffffffffffff;
      FUN_006c31f0(0x4000000000000000);
      return;
    }
    *param_2 = param_3;
    uVar1 = param_3;
  }
  FUN_006c31f0(uVar1 + 1);
  return;
}


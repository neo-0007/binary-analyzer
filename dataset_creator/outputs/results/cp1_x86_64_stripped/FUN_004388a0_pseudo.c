
undefined8 FUN_004388a0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    *param_3 = &DAT_0093b410;
    return 3;
  }
  if ((param_4 - 0x1a3U < 9) && ((0x111UL >> ((ulong)(param_4 - 0x1a3U) & 0x3f) & 1) != 0)) {
    uVar1 = FUN_00438770(param_4);
    *param_2 = uVar1;
    return 1;
  }
  *param_2 = 0;
  return 0;
}



undefined8 FUN_005396d0(undefined4 *param_1,undefined4 *param_2,ulong param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_3 < 0x1d) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *(undefined4 *)(&DAT_0092dec0 + param_3 * 0x20);
    }
    uVar1 = 1;
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(&DAT_0092dec4 + param_3 * 0x20);
    }
  }
  return uVar1;
}


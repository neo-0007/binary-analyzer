
ulong FUN_004aaf30(long param_1,uint param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,long param_7,ulong *param_8)

{
  ulong uVar1;
  uint uVar2;
  
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004aaf6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x18))();
    return uVar1;
  }
  uVar2 = param_2 & 0xffffff7f;
  if (((uVar2 - 2 < 2) || (uVar2 == 5)) && (0x7fffffff < param_4)) {
LAB_004aaff4:
    uVar1 = 0xffffffffffffffff;
  }
  else {
    if (param_7 < 1) {
      uVar1 = (**(code **)(param_1 + 0x10))();
      if ((long)uVar1 < 1) {
        return uVar1;
      }
      if (-1 < (char)param_2) {
        return uVar1;
      }
      if (uVar2 == 6) {
        return uVar1;
      }
    }
    else {
      if ((-1 < (char)param_2) || (uVar2 == 6)) {
                    /* WARNING: Could not recover jumptable at 0x004aaff2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(param_1 + 0x10))();
        return uVar1;
      }
      if (0x7fffffff < *param_8) goto LAB_004aaff4;
      uVar1 = (**(code **)(param_1 + 0x10))();
      if ((long)uVar1 < 1) {
        return uVar1;
      }
    }
    *param_8 = uVar1;
    uVar1 = 1;
  }
  return uVar1;
}


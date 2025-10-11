
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00433230(long *param_1)

{
  uint uVar1;
  
  uVar1 = 1;
  if (param_1 != (long *)0x0) {
    if ((param_1[1] == _DAT_0093fd88 && *param_1 == _DAT_0093fd80) &&
       ((int)param_1[2] == DAT_0093fd90)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    uVar1 = uVar1 ^ 1;
  }
  return uVar1;
}


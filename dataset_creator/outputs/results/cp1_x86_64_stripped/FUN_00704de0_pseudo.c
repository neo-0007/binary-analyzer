
uint * FUN_00704de0(uint *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                   uint param_5)

{
  uint uVar1;
  long lVar2;
  long in_FS_OFFSET;
  
  if ((param_1[0x1d] & 2) == 0) {
    uVar1 = FUN_0076d890();
  }
  else {
    uVar1 = FUN_0076e620(param_2,param_3,param_4);
  }
  if ((int)uVar1 < 0) {
    return (uint *)0x0;
  }
  param_1[0x1c] = uVar1;
  *param_1 = *param_1 & 0xffffeff3 | param_5 & 0x100c;
  if ((param_5 & 0x1004) == 0x1004) {
    lVar2 = *(long *)(param_1 + 0x36);
    if (0x827 < lVar2 - 0x93f160U) {
      FUN_00703130();
    }
    lVar2 = (**(code **)(lVar2 + 0x80))(param_1,0,2);
    if ((lVar2 == -1) && (*(int *)(in_FS_OFFSET + -0x58) != 0x1d)) {
      FUN_0076e4b0(uVar1);
      return (uint *)0x0;
    }
  }
  FUN_007061e0(param_1);
  return param_1;
}


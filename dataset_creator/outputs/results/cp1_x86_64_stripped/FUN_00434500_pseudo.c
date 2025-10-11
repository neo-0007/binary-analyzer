
undefined8 FUN_00434500(int param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0x2a1) {
    uVar1 = 0x36;
  }
  else {
    if (0x2a1 < param_1) {
      uVar1 = 0xffffffff;
      if (param_1 == 0x2a2) {
        uVar1 = 0x35;
      }
      return uVar1;
    }
    uVar1 = 0x33;
    if (param_1 != 0x40) {
      uVar1 = 0xffffffff;
      if (param_1 == 0x2a0) {
        uVar1 = 0x34;
      }
      return uVar1;
    }
  }
  return uVar1;
}


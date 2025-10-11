
uint FUN_007c0850(uint param_1,uint param_2)

{
  uint uVar1;
  
  if (param_1 < 0x80) {
    uVar1 = param_1 << 0x18 | param_2 & 0xffffff;
  }
  else {
    if (param_1 < 0x10000) {
      return (param_1 << 0x10) >> 0x18 | (param_1 << 0x10 & 0xff0000) >> 8 | (param_2 & 0xff00) << 8
             | param_2 << 0x18;
    }
    uVar1 = param_1 | param_2;
    if (param_1 < 0x1000000) {
      param_1 = param_1 << 8;
      return param_1 >> 0x18 | (param_1 & 0xff0000) >> 8 | (param_1 & 0xff00) << 8 | param_2 << 0x18
      ;
    }
  }
  return uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
}


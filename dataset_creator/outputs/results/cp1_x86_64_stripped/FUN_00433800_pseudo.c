
undefined * FUN_00433800(int param_1,undefined8 *param_2)

{
  if (param_1 == 0x2a3) {
    *param_2 = 0x13;
    return &DAT_007dd2f0;
  }
  if (param_1 < 0x2a4) {
    if (param_1 == 0x101) {
      *param_2 = 0x12;
      return &DAT_007dd3b0;
    }
    if (param_1 < 0x102) {
      if (param_1 == 0x40) {
        *param_2 = 0xf;
        return &DAT_007dd368;
      }
      if (param_1 == 0x75) {
        *param_2 = 0xf;
        return &DAT_007dd378;
      }
      if (param_1 == 4) {
        *param_2 = 0x12;
        return &DAT_007dd390;
      }
    }
    else {
      if (param_1 == 0x2a1) {
        *param_2 = 0x13;
        return &DAT_007dd330;
      }
      if (param_1 == 0x2a2) {
        *param_2 = 0x13;
        return &DAT_007dd310;
      }
      if (param_1 == 0x2a0) {
        *param_2 = 0x13;
        return &DAT_007dd350;
      }
    }
  }
  else if (param_1 - 0x446U < 6) {
    if (param_1 - 0x447U < 5) {
      *param_2 = 0x13;
      switch(param_1) {
      case 0x447:
        return &DAT_007dd2b0;
      case 0x448:
        return &DAT_007dd290;
      case 0x449:
        return &DAT_007dd270;
      case 0x44a:
        return &DAT_007dd250;
      case 1099:
        return &DAT_007dd230;
      }
    }
    *param_2 = 0x13;
    return &DAT_007dd2d0;
  }
  return (undefined *)0x0;
}


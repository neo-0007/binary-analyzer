
undefined1  [16] FUN_006c9dc0(undefined8 param_1,uint param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar2._0_8_ = CONCAT44(0,param_2);
  if (0x83 < (int)param_2) goto LAB_006c9e0e;
  if ((int)param_2 < 0x47) {
    if ((int)param_2 < 0xf) {
      if ((int)param_2 < 0) goto LAB_006c9e0e;
      goto LAB_006c9df7;
    }
    if (0x33 < param_2 - 0x10) goto LAB_006c9e0e;
    uVar1 = 0x8f0000dffffff >> ((ulong)(param_2 - 0x10) & 0x3f);
  }
  else {
    uVar1 = 0x18401d9ffd7e2019 >> ((ulong)(param_2 - 0x47) & 0x3f);
  }
  if ((uVar1 & 1) == 0) {
LAB_006c9e0e:
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = auVar2._0_8_;
    return auVar3;
  }
LAB_006c9df7:
  auVar2._8_8_ = &PTR_PTR_0093d6e0;
  return auVar2;
}



undefined8 FUN_006fe4a0(uint *param_1,long param_2,uint param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  
  if (2 < param_3) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
    return 0xffffffffffffffff;
  }
  if ((int)param_4 != 0) {
    if ((int)param_1[0x30] < 0) {
      if (*(long *)(param_1 + 0x12) != 0) {
        if ((param_3 == 1) && ((*param_1 & 0x100) != 0)) {
          param_2 = param_2 - (*(long *)(param_1 + 4) - *(long *)(param_1 + 2));
        }
        FUN_00706520();
        param_4 = param_4 & 0xffffffff;
      }
    }
    else if ((param_1[0x30] != 0) && (*(long *)(*(long *)(param_1 + 0x28) + 0x40) != 0)) {
      if ((param_3 == 1) && ((*param_1 & 0x100) != 0)) {
        uVar2 = FUN_00404db6();
        return uVar2;
      }
      FUN_006ffe00();
      param_4 = param_4 & 0xffffffff;
    }
  }
  lVar1 = *(long *)(param_1 + 0x36);
  if (0x827 < lVar1 - 0x93f160U) {
    FUN_00703130();
    param_4 = param_4 & 0xffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x006fe532. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(lVar1 + 0x48))(param_1,param_2,param_3,param_4);
  return uVar2;
}


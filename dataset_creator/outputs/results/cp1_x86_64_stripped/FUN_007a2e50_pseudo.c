
undefined8 FUN_007a2e50(long *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long lVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  
  uVar1 = param_1[1];
  if (uVar1 == 0) {
    if (param_3 < 4) {
      uVar6 = 0x10;
    }
    else {
      uVar6 = 4;
      if (param_3 < 8) {
        lVar2 = param_1[2];
        lVar5 = param_3 * 8;
        uVar6 = 8;
        goto joined_r0x007a2e96;
      }
    }
  }
  else {
    uVar6 = uVar1 + 1 + (uVar1 >> 1);
    if (uVar6 <= uVar1) {
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
      return 0;
    }
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar6;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_3;
  lVar5 = SUB168(auVar3 * auVar4,0);
  if (SUB168(auVar3 * auVar4,8) != 0) {
    return 0;
  }
  lVar2 = param_1[2];
joined_r0x007a2e96:
  if (lVar2 == param_2) {
    lVar5 = FUN_007101b0(lVar5);
    if (lVar5 == 0) {
      return 0;
    }
    if (param_2 != 0) {
      lVar5 = thunk_FUN_00713a50(lVar5,param_2,param_3 * *param_1);
    }
  }
  else {
    lVar5 = FUN_00710840();
    if (lVar5 == 0) {
      return 0;
    }
  }
  param_1[1] = uVar6;
  param_1[2] = lVar5;
  return 1;
}


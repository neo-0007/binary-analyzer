
undefined8 FUN_007125e0(long *param_1,ulong param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long in_FS_OFFSET;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_3;
  uVar3 = SUB168(auVar1 * auVar2,0);
  if ((((param_3 | param_2) >> 0x20 != 0) && (param_2 != 0)) && (SUB168(auVar1 * auVar2,8) != 0)) {
    if ((long *)*param_1 != param_1 + 2) {
      FUN_007104f0();
    }
    *param_1 = (long)(param_1 + 2);
    param_1[1] = 0x400;
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
    return 0;
  }
  uVar4 = 1;
  if ((ulong)param_1[1] < uVar3) {
    if ((long *)*param_1 != param_1 + 2) {
      FUN_007104f0();
    }
    lVar5 = FUN_007101b0(uVar3);
    if (lVar5 == 0) {
      *param_1 = (long)(param_1 + 2);
      param_1[1] = 0x400;
      uVar4 = 0;
    }
    else {
      param_1[1] = uVar3;
      *param_1 = lVar5;
      uVar4 = 1;
    }
  }
  return uVar4;
}


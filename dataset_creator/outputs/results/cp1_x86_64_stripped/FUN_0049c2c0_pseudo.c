
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_0049c2c0(undefined1 (*param_1) [16],uint param_2,undefined8 param_3,long param_4,ulong param_5)

{
  undefined1 (*extraout_RDX) [16];
  undefined8 *extraout_RDX_00;
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined1 auVar5 [16];
  undefined8 extraout_XMM0_Qb_04;
  
  FUN_0049c770();
  auVar5 = *param_1;
  uVar3 = FUN_0049c500();
  puVar2 = &DAT_0049c8f0;
  if (param_4 == 0) {
    *(undefined8 *)*extraout_RDX = uVar3;
    *(undefined8 *)(*extraout_RDX + 8) = extraout_XMM0_Qb;
  }
  else {
    auVar5 = pshufb(auVar5,*(undefined1 (*) [16])(&DAT_0049c8f0 + param_5));
    *extraout_RDX = auVar5;
    param_5 = param_5 ^ 0x30;
  }
  if (param_2 < 0xc1) {
    if (param_2 == 0xc0) {
      FUN_0049c500(*(undefined8 *)(*param_1 + 8));
      lVar1 = 4;
      uVar3 = extraout_XMM0_Qb_01;
      while( true ) {
        FUN_0049c440();
        FUN_0049c530(uVar3);
        FUN_0049c420();
        FUN_0049c530();
        auVar5._0_8_ = FUN_0049c440();
        auVar5._8_8_ = extraout_XMM0_Qb_02;
        lVar1 = lVar1 + -1;
        if (lVar1 == 0) break;
        FUN_0049c530();
        FUN_0049c420();
      }
    }
    else {
      lVar1 = 10;
      while( true ) {
        auVar5._0_8_ = FUN_0049c440();
        auVar5._8_8_ = extraout_XMM0_Qb_00;
        lVar1 = lVar1 + -1;
        if (lVar1 == 0) break;
        FUN_0049c530();
      }
    }
  }
  else {
    FUN_0049c500(*(undefined8 *)param_1[1]);
    lVar1 = 7;
    while( true ) {
      FUN_0049c530();
      auVar5._0_8_ = FUN_0049c440();
      auVar5._8_8_ = extraout_XMM0_Qb_03;
      lVar1 = lVar1 + -1;
      if (lVar1 == 0) break;
      FUN_0049c530();
      FUN_0049c461();
    }
  }
  uVar4 = auVar5._0_8_;
  if (param_4 == 0) {
    auVar5 = pshufb(auVar5,*(undefined1 (*) [16])(puVar2 + param_5));
    uVar4 = auVar5._0_8_;
  }
  uVar3 = FUN_0049c500(uVar4 ^ (ulong)DAT_0049c940);
  *extraout_RDX_00 = uVar3;
  extraout_RDX_00[1] = extraout_XMM0_Qb_04;
  return ZEXT816(0);
}


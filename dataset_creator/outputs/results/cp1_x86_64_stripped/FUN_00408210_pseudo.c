
undefined1  [16]
FUN_00408210(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5,
            undefined8 *param_6)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  ulong extraout_RDX;
  ulong uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  lVar7 = 0;
  if (param_4 != 0) {
    lVar4 = thunk_FUN_00712710(param_4,0x3a);
    lVar7 = lVar4 - param_4;
    if (lVar4 == 0) {
      lVar7 = thunk_FUN_007129d0(param_4);
    }
  }
  auVar8 = FUN_00418710(*param_6);
  uVar6 = auVar8._8_8_;
  if (auVar8._0_8_ != 0) {
    iVar3 = FUN_004188b0(auVar8._0_8_,param_4,lVar7);
    uVar6 = extraout_RDX;
    if (iVar3 != 0) {
      uVar6 = (ulong)(iVar3 - 1U);
      uVar1 = *(uint *)(param_6 + 1);
      if ((iVar3 - 1U < 0x7fffff) && (uVar5 = uVar1 - 1, uVar6 = (ulong)uVar5, uVar5 < 0xff)) {
        if (param_1 == 0) {
          auVar8 = FUN_00417730(*param_6,0,&DAT_008dd2c0);
          uVar6 = auVar8._8_8_;
          param_1 = auVar8._0_8_;
          if (param_1 == 0) goto LAB_004082f9;
        }
        uVar2 = param_6[8];
        auVar9._0_8_ = FUN_004254f0(param_1,param_3,uVar1 | iVar3 << 8,param_5,param_2,param_6[7]);
        auVar9._8_8_ = uVar2;
        return auVar9;
      }
    }
  }
LAB_004082f9:
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar6;
  return auVar8 << 0x40;
}


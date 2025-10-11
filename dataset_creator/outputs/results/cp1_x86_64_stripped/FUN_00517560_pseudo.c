
undefined1  [16]
FUN_00517560(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5,
            undefined8 *param_6)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  uVar3 = 0;
  if (param_4 != 0) {
    lVar2 = thunk_FUN_00712710(param_4,0x3a);
    uVar3 = lVar2 - param_4;
    if (lVar2 == 0) {
      uVar3 = thunk_FUN_007129d0(param_4);
    }
  }
  lVar2 = FUN_00418710(*param_6);
  if (lVar2 != 0) {
    auVar4 = FUN_004188b0(lVar2,param_4,uVar3);
    uVar3 = auVar4._8_8_;
    if (auVar4._0_4_ != 0) {
      if (param_1 == 0) {
        auVar5 = FUN_00417730(*param_6,10,&DAT_00904080);
        uVar3 = auVar5._8_8_;
        param_1 = auVar5._0_8_;
        if (param_1 == 0) goto LAB_0051762c;
      }
      puVar1 = PTR_FUN_0093af10;
      auVar5._0_8_ = FUN_004254f0(param_1,param_3,auVar4._0_8_ & 0xffffffff,param_5,param_2,
                                  FUN_00517500);
      auVar5._8_8_ = puVar1;
      return auVar5;
    }
  }
LAB_0051762c:
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar3;
  return auVar4 << 0x40;
}


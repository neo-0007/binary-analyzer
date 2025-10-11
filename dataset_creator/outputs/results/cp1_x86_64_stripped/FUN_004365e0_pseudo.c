
undefined1  [16]
FUN_004365e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 *param_6)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar2 = FUN_00418710(*param_6);
  uVar1 = auVar2._8_8_;
  if (auVar2._0_8_ != 0) {
    auVar2 = FUN_00418920(auVar2._0_8_,param_4);
    uVar1 = auVar2._8_8_;
    if (auVar2._0_4_ != 0) {
      if (param_1 == 0) {
        auVar3 = FUN_00417730(*param_6,0xf,&DAT_008eaa30);
        uVar1 = auVar3._8_8_;
        param_1 = auVar3._0_8_;
        if (param_1 == 0) goto LAB_0043667c;
      }
      auVar3._0_8_ = FUN_004254f0(param_1,param_3,auVar2._0_8_ & 0xffffffff,param_5,param_2,
                                  thunk_FUN_00436b90);
      auVar3._8_8_ = thunk_FUN_00436bc0;
      return auVar3;
    }
  }
LAB_0043667c:
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar1;
  return auVar2 << 0x40;
}


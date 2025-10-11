
undefined1  [16] FUN_0052d9b0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  undefined1 auVar4 [16];
  ulong uStack_10;
  
  if ((DAT_0094b59c._3_1_ & 2) == 0) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_3;
    return auVar2 << 0x40;
  }
  iVar3 = FUN_00490980(0,0,0,0,0,0,0);
  if (iVar3 != 0) {
    auVar4._8_8_ = uStack_10;
    auVar4._0_8_ = &DAT_0093c7c0;
    return auVar4;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uStack_10;
  return auVar1 << 0x40;
}


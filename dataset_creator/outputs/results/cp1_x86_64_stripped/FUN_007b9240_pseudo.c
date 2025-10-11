
undefined8 FUN_007b9240(ulong param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2;
  if ((((param_1 | param_2) >> 0x20 != 0) && (param_2 != 0)) && (SUB168(auVar1 * auVar2,8) != 0)) {
    return 0;
  }
  uVar3 = FUN_007101b0(SUB168(auVar1 * auVar2,0));
  return uVar3;
}


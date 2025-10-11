
undefined8 FUN_005c1020(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_3;
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = param_2;
  return SUB168(auVar2 / auVar1,0);
}


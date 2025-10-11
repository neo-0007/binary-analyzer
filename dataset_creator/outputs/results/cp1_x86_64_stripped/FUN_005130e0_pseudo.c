
void FUN_005130e0(undefined8 param_1,ulong *param_2,ulong *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *param_3;
  FUN_00513340(0,param_2,0x26,param_3[1],SUB168(auVar1 * auVar2,0),
               *param_2 * param_3[1] + SUB168(auVar1 * auVar2,8) + param_2[1] * *param_3);
  return;
}



void FUN_00513060(undefined8 param_1,ulong *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2[1];
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2[4];
  FUN_00512f80(param_1,param_2,SUB168(ZEXT816(0x1db42) * auVar3,8),
               SUB168(ZEXT816(0x1db42) * auVar1,8),SUB168(ZEXT816(0x1db42) * auVar2,0),
               SUB168(ZEXT816(0x1db42) * auVar2,8));
  return;
}


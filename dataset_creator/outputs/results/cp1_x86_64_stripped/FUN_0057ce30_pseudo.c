
undefined1  [16] FUN_0057ce30(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  
  if (param_3 == (undefined *)0x0) {
    param_3 = &DAT_00941320;
  }
  iVar1 = FUN_004079d0(0,"SHA224",0,param_1,param_2,param_3);
  if (iVar1 == 0) {
    param_3 = (undefined *)0x0;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_3;
  return auVar2;
}


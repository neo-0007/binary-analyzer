
void FUN_00427fb0(undefined8 *param_1)

{
  long lVar1;
  
  FUN_00422300(*param_1);
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    FUN_00545bd0(lVar1,FUN_00427c40);
    FUN_00545790(lVar1);
    param_1[1] = 0;
  }
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    FUN_00545bd0(lVar1,FUN_00427c40);
    FUN_00545790(lVar1);
    param_1[2] = 0;
  }
  param_1[3] = 0;
  FUN_0041ad60(param_1,"../crypto/property/property_string.c",0x53);
  return;
}


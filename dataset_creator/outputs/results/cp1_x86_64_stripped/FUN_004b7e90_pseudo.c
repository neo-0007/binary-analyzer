
void FUN_004b7e90(undefined8 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_004b7e80(param_1,8);
  if (iVar1 != 0) {
    FUN_0041c0b0(*param_1,(long)*(int *)((long)param_1 + 0xc) << 3,"../crypto/bn/bn_lib.c",0xcd);
    return;
  }
  if (param_2 != 0) {
    FUN_0041aef0(*param_1,(long)*(int *)((long)param_1 + 0xc) << 3,"../crypto/bn/bn_lib.c",0xcf);
    return;
  }
  FUN_0041ad60(*param_1,"../crypto/bn/bn_lib.c",0xd1);
  return;
}


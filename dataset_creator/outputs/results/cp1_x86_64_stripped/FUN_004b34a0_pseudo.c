
int FUN_004b34a0(long param_1,long param_2,undefined8 param_3,long *param_4,undefined8 param_5)

{
  int iVar1;
  
  iVar1 = FUN_004b7ba0(param_4);
  if (iVar1 == 0) {
    iVar1 = 0;
    if (*(long *)(*param_4 + -8 + (long)(int)param_4[1] * 8) == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/bn/bn_div.c",0xe1,"BN_div");
      FUN_0051f8f0(3,0x6b,0);
    }
    else {
      iVar1 = FUN_004b2ff0(param_1,param_2,param_3,param_4,param_5);
      if (iVar1 != 0) {
        if (param_1 != 0) {
          FUN_004b8490(param_1);
        }
        if (param_2 != 0) {
          FUN_004b8490(param_2);
        }
      }
    }
  }
  else {
    FUN_0051f420();
    iVar1 = 0;
    FUN_0051f540("../crypto/bn/bn_div.c",0xd7,"BN_div");
    FUN_0051f8f0(3,0x67,0);
  }
  return iVar1;
}


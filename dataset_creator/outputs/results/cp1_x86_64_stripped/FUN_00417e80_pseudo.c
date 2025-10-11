
bool FUN_00417e80(undefined8 param_1,int param_2,int param_3,long param_4,undefined4 *param_5)

{
  int iVar1;
  bool bVar2;
  
  if (param_5 == (undefined4 *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/core_fetch.c",0x42,"ossl_method_construct_postcondition");
    FUN_0051f8f0(0xf,0xc0102,0);
    bVar2 = false;
  }
  else {
    *param_5 = 1;
    if (param_3 != 0) {
      if (*(int *)(param_4 + 0x14) == 0) {
        return true;
      }
    }
    iVar1 = FUN_00421bd0(param_1,(long)param_2);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}



long FUN_005cd2a0(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = FUN_00436480(*(undefined8 *)(param_1 + 8));
    if (0 < iVar1) {
      iVar1 = FUN_00436480(*(undefined8 *)(param_1 + 8));
      lVar2 = FUN_004364a0(*(undefined8 *)(param_1 + 8),iVar1 + -1);
      if (lVar2 == 0) {
        FUN_0051f420(0);
        lVar2 = 0;
        FUN_0051f540("../crypto/dso/dso_dlfcn.c",0xb7,"dlfcn_bind_func");
        FUN_0051f8f0(0x25,0x68,0);
      }
      else {
        lVar2 = FUN_007093d0(lVar2,param_2);
        if (lVar2 == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/dso/dso_dlfcn.c",0xbc,"dlfcn_bind_func");
          uVar3 = FUN_00708e00();
          FUN_0051f8f0(0x25,0x6a,"symname(%s): %s",param_2,uVar3);
        }
      }
      return lVar2;
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/dso/dso_dlfcn.c",0xb2,"dlfcn_bind_func");
    FUN_0051f8f0(0x25,0x69,0);
    return 0;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/dso/dso_dlfcn.c",0xae,"dlfcn_bind_func");
  FUN_0051f8f0(0x25,0xc0102,0);
  return 0;
}


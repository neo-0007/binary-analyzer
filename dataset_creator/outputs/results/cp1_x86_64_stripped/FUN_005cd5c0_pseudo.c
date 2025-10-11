
undefined8 FUN_005cd5c0(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_1 != 0) {
    uVar3 = 1;
    iVar1 = FUN_00436480(*(undefined8 *)(param_1 + 8));
    if (0 < iVar1) {
      lVar2 = FUN_00436020(*(undefined8 *)(param_1 + 8));
      if (lVar2 == 0) {
        FUN_0051f420(0);
        uVar3 = 0;
        FUN_0051f540("../crypto/dso/dso_dlfcn.c",0x99,"dlfcn_unload");
        FUN_0051f8f0(0x25,0x68,0);
        FUN_00435f80(*(undefined8 *)(param_1 + 8),0);
      }
      else {
        FUN_00708de0();
      }
    }
    return uVar3;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/dso/dso_dlfcn.c",0x92,"dlfcn_unload");
  FUN_0051f8f0(0x25,0xc0102,0);
  return 0;
}


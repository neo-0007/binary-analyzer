
undefined4 FUN_005cd420(long param_1)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  lVar2 = FUN_004db3d0(param_1,0);
  puVar3 = (undefined4 *)FUN_006d2700();
  uVar6 = *puVar3;
  if (lVar2 == 0) {
    FUN_0051f420();
    uVar6 = 0;
    FUN_0051f540("../crypto/dso/dso_dlfcn.c",0x69,"dlfcn_load");
    FUN_0051f8f0(0x25,0x6f,0);
    FUN_0041ad60(0,"../crypto/dso/dso_dlfcn.c",0x88);
  }
  else {
    lVar4 = FUN_007092c0(lVar2,(-(uint)((*(uint *)(param_1 + 0x14) & 0x20) == 0) & 0xffffff00) +
                               0x102);
    if (lVar4 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/dso/dso_dlfcn.c",0x76,"dlfcn_load");
      uVar5 = FUN_00708e00();
      FUN_0051f8f0(0x25,0x67,"filename(%s): %s",lVar2,uVar5);
      FUN_0041ad60(lVar2,"../crypto/dso/dso_dlfcn.c",0x88);
      return 0;
    }
    *puVar3 = uVar6;
    iVar1 = FUN_00435f80(*(undefined8 *)(param_1 + 8),lVar4);
    if (iVar1 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/dso/dso_dlfcn.c",0x80,"dlfcn_load");
      FUN_0051f8f0(0x25,0x69,0);
      FUN_0041ad60(lVar2,"../crypto/dso/dso_dlfcn.c",0x88);
      FUN_00708de0(lVar4);
      return 0;
    }
    *(long *)(param_1 + 0x40) = lVar2;
    uVar6 = 1;
  }
  return uVar6;
}


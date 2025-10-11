
long FUN_005cd170(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  char *pcVar5;
  int iVar6;
  
  iVar1 = thunk_FUN_007129d0(param_2);
  lVar3 = thunk_FUN_00712710(param_2,0x2f);
  if (lVar3 == 0) {
    uVar2 = FUN_004dad60(param_1);
    iVar6 = iVar1 + 4;
    if ((uVar2 & 2) == 0) {
      iVar6 = iVar1 + 7;
    }
    lVar3 = FUN_0041ad90((long)iVar6,"../crypto/dso/dso_dlfcn.c",0x10b);
    if (lVar3 != 0) {
      uVar4 = FUN_004dad60(param_1);
      pcVar5 = "lib%s.so";
      if ((uVar4 & 2) != 0) {
        pcVar5 = "%s.so";
      }
      FUN_00771b70(lVar3,1,0xffffffffffffffff,pcVar5,param_2);
      return lVar3;
    }
  }
  else {
    lVar3 = FUN_0041ad90((long)(iVar1 + 1),"../crypto/dso/dso_dlfcn.c",0x10b);
    if (lVar3 != 0) {
      thunk_FUN_00712800(lVar3,param_2);
      return lVar3;
    }
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/dso/dso_dlfcn.c",0x10d,"dlfcn_name_converter");
  FUN_0051f8f0(0x25,0x6d,0);
  return 0;
}


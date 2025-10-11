
undefined8 FUN_0041f3f0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_0041aec0(0x10,"../crypto/provider_core.c",0x2ee);
  if (plVar2 == (long *)0x0) goto LAB_0041f4af;
  if (*param_1 == 0) {
    lVar3 = FUN_00436410();
    *param_1 = lVar3;
    if (lVar3 != 0) goto LAB_0041f430;
LAB_0041f47d:
    lVar3 = *plVar2;
  }
  else {
LAB_0041f430:
    lVar3 = FUN_0041c2c0(param_2,"../crypto/provider_core.c",0x2f1);
    *plVar2 = lVar3;
    if (lVar3 != 0) {
      lVar3 = FUN_0041c2c0(param_3,"../crypto/provider_core.c",0x2f2);
      plVar2[1] = lVar3;
      if ((lVar3 != 0) && (iVar1 = FUN_00435f80(*param_1,plVar2), 0 < iVar1)) {
        return 1;
      }
      goto LAB_0041f47d;
    }
  }
  FUN_0041ad60(lVar3,"../crypto/provider_core.c",0x2f7);
  FUN_0041ad60(plVar2[1],"../crypto/provider_core.c",0x2f8);
  FUN_0041ad60(plVar2,"../crypto/provider_core.c",0x2f9);
LAB_0041f4af:
  FUN_0051f420();
  FUN_0051f540("../crypto/provider_core.c",0x2fb,"infopair_add");
  FUN_0051f8f0(0xf,0xc0100,0);
  return 0;
}


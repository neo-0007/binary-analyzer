
long * FUN_0053f1e0(long *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)param_1[1];
  if ((long *)param_1[1] != (long *)0x0) {
    plVar3 = (long *)FUN_0041ad90(0x10,"../crypto/evp/mac_lib.c",0x3a);
    if (plVar3 == (long *)0x0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/mac_lib.c",0x3c,"EVP_MAC_CTX_dup");
      FUN_0051f8f0(6,0xc0100,0);
    }
    else {
      lVar1 = param_1[1];
      lVar4 = *param_1;
      *plVar3 = *param_1;
      plVar3[1] = lVar1;
      iVar2 = FUN_0053fe50(lVar4);
      if (iVar2 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/evp/mac_lib.c",0x42,"EVP_MAC_CTX_dup");
        FUN_0051f8f0(6,0xc0100,0);
        FUN_0041ad60(plVar3,"../crypto/evp/mac_lib.c",0x43);
        plVar3 = (long *)0x0;
      }
      else {
        lVar4 = (**(code **)(*param_1 + 0x38))(param_1[1]);
        plVar3[1] = lVar4;
        if (lVar4 == 0) {
          FUN_0053f190(plVar3);
          plVar3 = (long *)0x0;
        }
      }
    }
  }
  return plVar3;
}


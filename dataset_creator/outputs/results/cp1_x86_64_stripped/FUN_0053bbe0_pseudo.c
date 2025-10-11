
long * FUN_0053bbe0(long *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1 == (long *)0x0) {
    return (long *)0x0;
  }
  plVar2 = (long *)param_1[1];
  if ((long *)param_1[1] != (long *)0x0) {
    if (*(long *)(*param_1 + 0x38) == 0) {
      return (long *)0x0;
    }
    plVar2 = (long *)FUN_0041ad90(0x10,"../crypto/evp/kdf_lib.c",0x3e);
    if (plVar2 == (long *)0x0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/kdf_lib.c",0x40,"EVP_KDF_CTX_dup");
      FUN_0051f8f0(6,0xc0100,0);
    }
    else {
      lVar3 = param_1[1];
      *plVar2 = *param_1;
      plVar2[1] = lVar3;
      iVar1 = FUN_0053c3d0();
      if (iVar1 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/evp/kdf_lib.c",0x46,"EVP_KDF_CTX_dup");
        FUN_0051f8f0(6,0xc0100,0);
        FUN_0041ad60(plVar2,"../crypto/evp/kdf_lib.c",0x47);
        plVar2 = (long *)0x0;
      }
      else {
        lVar3 = (**(code **)(*param_1 + 0x38))(param_1[1]);
        plVar2[1] = lVar3;
        if (lVar3 == 0) {
          FUN_0053bb90(plVar2);
          plVar2 = (long *)0x0;
        }
      }
    }
  }
  return plVar2;
}


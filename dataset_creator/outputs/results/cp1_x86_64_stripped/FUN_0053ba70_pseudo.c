
undefined8 * FUN_0053ba70(undefined8 *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (param_1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar3 = (undefined8 *)FUN_0041aec0(0x10,"../crypto/evp/kdf_lib.c",0x1e);
  if (puVar3 == (undefined8 *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/kdf_lib.c",0x22,"EVP_KDF_CTX_new");
    FUN_0051f8f0(6,0xc0100,0);
  }
  else {
    pcVar1 = (code *)param_1[6];
    uVar4 = FUN_00420b60(*param_1);
    lVar5 = (*pcVar1)(uVar4);
    puVar3[1] = lVar5;
    if (lVar5 != 0) {
      iVar2 = FUN_0053c3d0(param_1);
      if (iVar2 != 0) {
        *puVar3 = param_1;
        return puVar3;
      }
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/kdf_lib.c",0x22,"EVP_KDF_CTX_new");
    FUN_0051f8f0(6,0xc0100,0);
    (*(code *)param_1[8])(puVar3[1]);
  }
  FUN_0041ad60(puVar3,"../crypto/evp/kdf_lib.c",0x25);
  return (undefined8 *)0x0;
}


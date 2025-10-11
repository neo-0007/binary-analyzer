
undefined8 * FUN_0040ec60(void)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)FUN_0041aec0(0x98,"../crypto/evp/p_lib.c",0x590);
  if (puVar2 == (undefined8 *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/p_lib.c",0x593,"EVP_PKEY_new");
    FUN_0051f8f0(6,0xc0100,0);
    return (undefined8 *)0x0;
  }
  *puVar2 = 0;
  LOCK();
  *(undefined4 *)(puVar2 + 6) = 1;
  UNLOCK();
  lVar3 = FUN_00422240();
  puVar2[7] = lVar3;
  if (lVar3 == 0) {
    FUN_0051f420();
    uVar4 = 0x59d;
  }
  else {
    *(undefined4 *)(puVar2 + 9) = 1;
    iVar1 = FUN_004196b0(0x11,puVar2,puVar2 + 10);
    if (iVar1 != 0) {
      return puVar2;
    }
    FUN_0051f420();
    uVar4 = 0x5a4;
  }
  FUN_0051f540("../crypto/evp/p_lib.c",uVar4,"EVP_PKEY_new");
  FUN_0051f8f0(6,0xc0100,0);
  FUN_00422300(puVar2[7]);
  FUN_0041ad60(puVar2,"../crypto/evp/p_lib.c",0x5ac);
  return (undefined8 *)0x0;
}


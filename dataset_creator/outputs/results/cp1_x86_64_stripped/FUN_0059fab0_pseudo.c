
undefined4 * FUN_0059fab0(void)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined4 *)FUN_0041aec0(0xa0,"../crypto/x509/x509_lu.c",0xb6);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/x509_lu.c",0xb9,"X509_STORE_new");
    FUN_0051f8f0(0xb,0xc0100,0);
    return (undefined4 *)0x0;
  }
  lVar3 = FUN_00436420(FUN_0059f650);
  *(long *)(puVar2 + 2) = lVar3;
  if (lVar3 == 0) {
    FUN_0051f420();
    uVar4 = 0xbd;
  }
  else {
    *puVar2 = 1;
    lVar3 = FUN_00436410();
    *(long *)(puVar2 + 4) = lVar3;
    if (lVar3 == 0) {
      FUN_0051f420();
      uVar4 = 0xc2;
    }
    else {
      lVar3 = FUN_005a8b60();
      *(long *)(puVar2 + 6) = lVar3;
      if (lVar3 == 0) {
        FUN_0051f420();
        uVar4 = 199;
      }
      else {
        iVar1 = FUN_004196b0(4,puVar2,puVar2 + 0x20);
        if (iVar1 == 0) {
          FUN_0051f420();
          uVar4 = 0xcb;
        }
        else {
          lVar3 = FUN_00422240();
          *(long *)(puVar2 + 0x26) = lVar3;
          if (lVar3 != 0) {
            LOCK();
            puVar2[0x24] = 1;
            UNLOCK();
            return puVar2;
          }
          FUN_0051f420();
          uVar4 = 0xd1;
        }
      }
    }
  }
  FUN_0051f540("../crypto/x509/x509_lu.c",uVar4,"X509_STORE_new");
  FUN_0051f8f0(0xb,0xc0100,0);
  FUN_005a8ad0(*(undefined8 *)(puVar2 + 6));
  FUN_004360b0(*(undefined8 *)(puVar2 + 2));
  FUN_004360b0(*(undefined8 *)(puVar2 + 4));
  FUN_0041ad60(puVar2,"../crypto/x509/x509_lu.c",0xdb);
  return (undefined4 *)0x0;
}


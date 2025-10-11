
long FUN_0059fda0(long param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  iVar3 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  while( true ) {
    iVar2 = FUN_00436480(uVar1);
    if (iVar2 <= iVar3) {
      lVar4 = FUN_0059f790(param_2);
      if (lVar4 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/x509/x509_lu.c",0x118,"X509_STORE_add_lookup");
        FUN_0051f8f0(0xb,0xc0100,0);
      }
      else {
        *(long *)(lVar4 + 0x18) = param_1;
        iVar3 = FUN_00435f80(*(undefined8 *)(param_1 + 0x10),lVar4);
        if (iVar3 == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/x509/x509_lu.c",0x120,"X509_STORE_add_lookup");
          FUN_0051f8f0(0xb,0xc0100,0);
          FUN_0059f830(lVar4);
          return 0;
        }
      }
      return lVar4;
    }
    lVar4 = FUN_004364a0(uVar1,iVar3);
    if (*(long *)(lVar4 + 8) == param_2) break;
    iVar3 = iVar3 + 1;
  }
  return lVar4;
}


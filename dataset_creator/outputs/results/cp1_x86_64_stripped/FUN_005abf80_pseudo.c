
undefined8 FUN_005abf80(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 == 0) {
    lVar2 = FUN_00436420(FUN_005abb20);
    *(long *)(param_1 + 0x30) = lVar2;
    if (lVar2 == 0) goto LAB_005abfd2;
  }
  iVar1 = FUN_00435f80(lVar2,param_2);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x50) = 1;
    return 1;
  }
LAB_005abfd2:
  FUN_0051f420();
  FUN_0051f540("../crypto/x509/x_crl.c",0x16b,"X509_CRL_add0_revoked");
  FUN_0051f8f0(0xd,0xc0100,0);
  return 0;
}


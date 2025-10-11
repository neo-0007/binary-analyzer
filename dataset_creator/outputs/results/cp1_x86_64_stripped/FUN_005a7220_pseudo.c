
undefined8 FUN_005a7220(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    if (*(long *)(param_1 + 8) == 0) {
      iVar1 = FUN_00436480(*(undefined8 *)(param_1 + 0x10));
      if (0 < iVar1) {
        uVar2 = FUN_004364a0(*(undefined8 *)(param_1 + 0x10),0);
        *(undefined8 *)(param_1 + 8) = uVar2;
      }
    }
    uVar2 = FUN_005a6db0(param_1);
    return uVar2;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/x509/x509_vfy.c",0xfd,"X509_STORE_CTX_verify");
  FUN_0051f8f0(0xb,0xc0102,0);
  return 0xffffffff;
}


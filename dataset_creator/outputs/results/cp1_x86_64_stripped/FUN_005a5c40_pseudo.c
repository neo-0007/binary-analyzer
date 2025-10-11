
undefined8 FUN_005a5c40(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((param_1 == 0) || (iVar1 = FUN_0040dee0(), iVar1 != 0)) {
    iVar1 = 0;
    while( true ) {
      iVar2 = FUN_00436480(param_2);
      if (iVar2 <= iVar1) {
        FUN_0051f420();
        FUN_0051f540("../crypto/x509/x509_vfy.c",0x7d2,"X509_get_pubkey_parameters");
        FUN_0051f8f0(0xb,0x6b,0);
        return 0;
      }
      uVar3 = FUN_004364a0(param_2,iVar1);
      lVar4 = FUN_0059ef80(uVar3);
      if (lVar4 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/x509/x509_vfy.c",0x7ca,"X509_get_pubkey_parameters");
        FUN_0051f8f0(0xb,0x6c,0);
        return 0;
      }
      iVar2 = FUN_0040dee0(lVar4);
      if (iVar2 == 0) break;
      iVar1 = iVar1 + 1;
    }
    while (iVar1 != 0) {
      iVar1 = iVar1 + -1;
      uVar3 = FUN_004364a0(param_2,iVar1);
      uVar3 = FUN_0059ef80(uVar3);
      uVar3 = FUN_00410570(uVar3,lVar4);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
    }
    if (param_1 != 0) {
      uVar3 = FUN_00410570(param_1,lVar4);
      return uVar3;
    }
  }
  return 1;
}


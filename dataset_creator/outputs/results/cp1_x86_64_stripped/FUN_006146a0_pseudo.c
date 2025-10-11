
undefined8 FUN_006146a0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_006145c0(param_2);
  if (-1 < iVar1) {
    *param_1 = param_2;
    return 1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/x509/x509_trust.c",0x74,"X509_TRUST_set");
  FUN_0051f8f0(0xb,0x7b,0);
  return 0;
}


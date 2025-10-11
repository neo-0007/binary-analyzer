
undefined8 FUN_0059ea50(long param_1)

{
  undefined8 uVar1;
  long local_10 [2];
  
  local_10[0] = param_1;
  if (param_1 != 0) {
    uVar1 = FUN_0059e9b0(local_10);
    return uVar1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/x509/x509_cmp.c",0xe7,"X509_add_certs");
  FUN_0051f8f0(0xb,0xc0102,0);
  return 0;
}


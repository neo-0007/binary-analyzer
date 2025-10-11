
undefined8 X509_set1_notBefore(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = ossl_x509_set1_time(param_1 + 0x38);
    return uVar1;
  }
  return 0;
}


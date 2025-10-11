
undefined8 X509_CRL_set1_nextUpdate(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = ossl_x509_set1_time(param_1 + 0x28);
    return uVar1;
  }
  return 0;
}



ulong ossl_ec_encoding_name2id(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  if (param_1 != 0) {
    uVar2 = OPENSSL_strcasecmp(param_1,"explicit");
    if ((int)uVar2 != 0) {
      iVar1 = OPENSSL_strcasecmp(param_1,"named_curve");
      uVar2 = (ulong)((-(uint)(iVar1 == 0) & 2) - 1);
    }
    return uVar2;
  }
  return 1;
}


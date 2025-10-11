
bool nc_minmax_valid_isra_0(ASN1_INTEGER *param_1,long param_2)

{
  int iVar1;
  BIGNUM *a;
  bool bVar2;
  
  bVar2 = param_2 == 0;
  if (param_1 != (ASN1_INTEGER *)0x0) {
    a = ASN1_INTEGER_to_BN(param_1,(BIGNUM *)0x0);
    if ((a == (BIGNUM *)0x0) || (iVar1 = BN_is_zero(a), iVar1 == 0)) {
      bVar2 = false;
    }
    BN_free(a);
    return bVar2;
  }
  return bVar2;
}


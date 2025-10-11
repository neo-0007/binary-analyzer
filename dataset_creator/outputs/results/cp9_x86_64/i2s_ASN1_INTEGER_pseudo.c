
char * i2s_ASN1_INTEGER(X509V3_EXT_METHOD *meth,ASN1_INTEGER *aint)

{
  int iVar1;
  BIGNUM *a;
  char *pcVar2;
  
  if (aint == (ASN1_INTEGER *)0x0) {
    return (char *)0x0;
  }
  a = ASN1_INTEGER_to_BN(aint,(BIGNUM *)0x0);
  if (a != (BIGNUM *)0x0) {
    iVar1 = BN_num_bits(a);
    if (iVar1 < 0x80) {
      pcVar2 = BN_bn2dec(a);
    }
    else {
      pcVar2 = (char *)bignum_to_string_part_0();
    }
    if (pcVar2 != (char *)0x0) goto LAB_00589473;
  }
  ERR_new();
  pcVar2 = (char *)0x0;
  ERR_set_debug("../crypto/x509/v3_utl.c",0xbd,"i2s_ASN1_INTEGER");
  ERR_set_error(0x22,0xc0100,0);
LAB_00589473:
  BN_free(a);
  return pcVar2;
}


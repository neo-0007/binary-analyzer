
ASN1_INTEGER * s2i_ASN1_INTEGER(X509V3_EXT_METHOD *meth,char *value)

{
  char cVar1;
  int iVar2;
  ASN1_INTEGER *pAVar3;
  long in_FS_OFFSET;
  bool bVar4;
  BIGNUM *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (BIGNUM *)0x0;
  if (value == (char *)0x0) {
    ERR_new();
    pAVar3 = (ASN1_INTEGER *)0x0;
    ERR_set_debug("../crypto/x509/v3_utl.c",0xca,"s2i_ASN1_INTEGER");
    ERR_set_error(0x22,0x6d,0);
    goto LAB_0058959f;
  }
  local_28 = BN_new();
  if (local_28 == (BIGNUM *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/x509/v3_utl.c",0xcf,"s2i_ASN1_INTEGER");
    ERR_set_error(0x22,0xc0100,0);
    pAVar3 = (ASN1_INTEGER *)0x0;
    goto LAB_0058959f;
  }
  cVar1 = *value;
  bVar4 = cVar1 == '-';
  if (bVar4) {
    cVar1 = value[1];
    value = value + 1;
  }
  if ((cVar1 == '0') && ((value[1] & 0xdfU) == 0x58)) {
    value = value + 2;
    iVar2 = BN_hex2bn(&local_28,value);
  }
  else {
    iVar2 = BN_dec2bn(&local_28,value);
  }
  if ((iVar2 == 0) || (value[iVar2] != '\0')) {
    BN_free(local_28);
    pAVar3 = (ASN1_INTEGER *)0x0;
    ERR_new();
    ERR_set_debug("../crypto/x509/v3_utl.c",0xe7,"s2i_ASN1_INTEGER");
    ERR_set_error(0x22,100,0);
    goto LAB_0058959f;
  }
  if (bVar4) {
    iVar2 = BN_is_zero();
    if (iVar2 != 0) goto LAB_00589587;
    pAVar3 = BN_to_ASN1_INTEGER(local_28,(ASN1_INTEGER *)0x0);
    BN_free(local_28);
    if (pAVar3 != (ASN1_INTEGER *)0x0) {
      pAVar3->type = pAVar3->type | 0x100;
      goto LAB_0058959f;
    }
  }
  else {
LAB_00589587:
    pAVar3 = BN_to_ASN1_INTEGER(local_28,(ASN1_INTEGER *)0x0);
    BN_free(local_28);
    if (pAVar3 != (ASN1_INTEGER *)0x0) goto LAB_0058959f;
  }
  ERR_new();
  pAVar3 = (ASN1_INTEGER *)0x0;
  ERR_set_debug("../crypto/x509/v3_utl.c",0xf1,"s2i_ASN1_INTEGER");
  ERR_set_error(0x22,0x65,0);
LAB_0058959f:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pAVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


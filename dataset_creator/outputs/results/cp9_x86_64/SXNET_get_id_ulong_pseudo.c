
ASN1_OCTET_STRING * SXNET_get_id_ulong(SXNET *sx,ulong lzone)

{
  int iVar1;
  ASN1_INTEGER *a;
  ASN1_OCTET_STRING *pAVar2;
  
  a = ASN1_INTEGER_new();
  if (a != (ASN1_INTEGER *)0x0) {
    iVar1 = ASN1_INTEGER_set(a,lzone);
    if (iVar1 != 0) {
      pAVar2 = SXNET_get_id_INTEGER(sx,a);
      ASN1_INTEGER_free(a);
      return pAVar2;
    }
  }
  ERR_new();
  ERR_set_debug("../crypto/x509/v3_sxnet.c",0xdd,"SXNET_get_id_ulong");
  ERR_set_error(0x22,0xc0100,0);
  ASN1_INTEGER_free(a);
  return (ASN1_OCTET_STRING *)0x0;
}


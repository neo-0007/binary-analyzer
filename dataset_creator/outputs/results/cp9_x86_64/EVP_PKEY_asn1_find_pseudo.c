
EVP_PKEY_ASN1_METHOD * EVP_PKEY_asn1_find(ENGINE **pe,int type)

{
  EVP_PKEY_ASN1_METHOD *pEVar1;
  ENGINE *e;
  
  while( true ) {
    pEVar1 = (EVP_PKEY_ASN1_METHOD *)pkey_asn1_find(type);
    if ((pEVar1 == (EVP_PKEY_ASN1_METHOD *)0x0) || (((byte)pEVar1[8] & 1) == 0)) break;
    type = *(int *)(pEVar1 + 4);
  }
  if (pe != (ENGINE **)0x0) {
    e = ENGINE_get_pkey_asn1_meth_engine(type);
    if (e != (ENGINE *)0x0) {
      *pe = e;
      pEVar1 = ENGINE_get_pkey_asn1_meth(e,type);
      return pEVar1;
    }
    *pe = (ENGINE *)0x0;
  }
  return pEVar1;
}


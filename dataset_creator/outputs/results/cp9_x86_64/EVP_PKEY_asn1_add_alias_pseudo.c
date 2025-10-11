
int EVP_PKEY_asn1_add_alias(int to,int from)

{
  int iVar1;
  EVP_PKEY_ASN1_METHOD *ameth;
  
  ameth = EVP_PKEY_asn1_new(from,1,(char *)0x0,(char *)0x0);
  iVar1 = 0;
  if (ameth != (EVP_PKEY_ASN1_METHOD *)0x0) {
    *(int *)(ameth + 4) = to;
    iVar1 = EVP_PKEY_asn1_add0(ameth);
    if (iVar1 == 0) {
      EVP_PKEY_asn1_free(ameth);
      return 0;
    }
    iVar1 = 1;
  }
  return iVar1;
}


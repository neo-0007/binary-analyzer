
int ASN1_item_digest(ASN1_ITEM *it,EVP_MD *type,void *data,uchar *md,uint *len)

{
  int iVar1;
  
  iVar1 = ossl_asn1_item_digest_ex();
  return iVar1;
}


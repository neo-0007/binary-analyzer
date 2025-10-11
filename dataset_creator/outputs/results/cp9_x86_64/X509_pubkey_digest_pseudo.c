
int X509_pubkey_digest(X509 *data,EVP_MD *type,uchar *md,uint *len)

{
  int iVar1;
  ASN1_BIT_STRING *pAVar2;
  
  pAVar2 = X509_get0_pubkey_bitstr(data);
  if (pAVar2 != (ASN1_BIT_STRING *)0x0) {
    iVar1 = EVP_Digest(pAVar2->data,(long)pAVar2->length,md,len,type,(ENGINE *)0x0);
    return iVar1;
  }
  return 0;
}


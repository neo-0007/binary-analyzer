
int X509_PUBKEY_set0_param
              (X509_PUBKEY *pub,ASN1_OBJECT *aobj,int ptype,void *pval,uchar *penc,int penclen)

{
  ASN1_BIT_STRING *pAVar1;
  int iVar2;
  
  iVar2 = X509_ALGOR_set0(pub->algor,aobj,ptype,pval);
  if ((iVar2 != 0) && (iVar2 = 1, penc != (uchar *)0x0)) {
    CRYPTO_free(pub->public_key->data);
    pAVar1 = pub->public_key;
    pAVar1->data = penc;
    pAVar1->length = penclen;
    pAVar1->flags = pAVar1->flags & 0xfffffffffffffff0U | 8;
  }
  return iVar2;
}


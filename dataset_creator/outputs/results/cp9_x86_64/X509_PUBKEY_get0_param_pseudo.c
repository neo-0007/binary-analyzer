
int X509_PUBKEY_get0_param
              (ASN1_OBJECT **ppkalg,uchar **pk,int *ppklen,X509_ALGOR **pa,X509_PUBKEY *pub)

{
  int iVar1;
  
  if (ppkalg != (ASN1_OBJECT **)0x0) {
    *ppkalg = pub->algor->algorithm;
  }
  if (pk != (uchar **)0x0) {
    iVar1 = pub->public_key->length;
    *pk = pub->public_key->data;
    *ppklen = iVar1;
  }
  if (pa != (X509_ALGOR **)0x0) {
    *pa = pub->algor;
  }
  return 1;
}


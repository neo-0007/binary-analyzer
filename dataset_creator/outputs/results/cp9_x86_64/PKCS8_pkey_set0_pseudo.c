
int PKCS8_pkey_set0(PKCS8_PRIV_KEY_INFO *priv,ASN1_OBJECT *aobj,int version,int ptype,void *pval,
                   uchar *penc,int penclen)

{
  int iVar1;
  
  if ((-1 < version) && (iVar1 = ASN1_INTEGER_set(*(undefined8 *)priv,(long)version), iVar1 == 0)) {
    return 0;
  }
  iVar1 = X509_ALGOR_set0((X509_ALGOR *)priv->version,aobj,ptype,pval);
  if (iVar1 == 0) {
    return 0;
  }
  if (penc != (uchar *)0x0) {
    ASN1_STRING_set0((ASN1_STRING *)priv->pkeyalg,penc,penclen);
  }
  return 1;
}


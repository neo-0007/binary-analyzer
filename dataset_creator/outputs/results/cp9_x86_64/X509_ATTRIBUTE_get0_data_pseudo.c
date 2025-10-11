
void * X509_ATTRIBUTE_get0_data(X509_ATTRIBUTE *attr,int idx,int atrtype,void *data)

{
  int iVar1;
  ASN1_TYPE *a;
  
  a = X509_ATTRIBUTE_get0_type(attr,idx);
  if (a == (ASN1_TYPE *)0x0) {
    return (void *)0x0;
  }
  if (((atrtype & 0xfffffffbU) != 1) && (iVar1 = ASN1_TYPE_get(a), iVar1 == atrtype)) {
    return (a->value).ptr;
  }
  ERR_new();
  ERR_set_debug("../crypto/x509/x509_att.c",0x152,"X509_ATTRIBUTE_get0_data");
  ERR_set_error(0xb,0x7a,0);
  return (void *)0x0;
}


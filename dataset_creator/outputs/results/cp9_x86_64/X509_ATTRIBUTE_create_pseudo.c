
X509_ATTRIBUTE * X509_ATTRIBUTE_create(int nid,int atrtype,void *value)

{
  int iVar1;
  ASN1_OBJECT *pAVar2;
  X509_ATTRIBUTE *a;
  ASN1_TYPE *a_00;
  
  pAVar2 = OBJ_nid2obj(nid);
  if (pAVar2 != (ASN1_OBJECT *)0x0) {
    a = X509_ATTRIBUTE_new();
    if (a != (X509_ATTRIBUTE *)0x0) {
      a->object = pAVar2;
      a_00 = ASN1_TYPE_new();
      if (a_00 != (ASN1_TYPE *)0x0) {
        iVar1 = OPENSSL_sk_push(*(undefined8 *)&a->single,a_00);
        if (iVar1 != 0) {
          ASN1_TYPE_set(a_00,atrtype,value);
          return a;
        }
      }
      X509_ATTRIBUTE_free(a);
      ASN1_TYPE_free(a_00);
    }
  }
  return (X509_ATTRIBUTE *)0x0;
}


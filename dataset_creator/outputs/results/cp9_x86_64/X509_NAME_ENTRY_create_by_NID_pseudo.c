
X509_NAME_ENTRY *
X509_NAME_ENTRY_create_by_NID(X509_NAME_ENTRY **ne,int nid,int type,uchar *bytes,int len)

{
  ASN1_OBJECT *obj;
  X509_NAME_ENTRY *pXVar1;
  
  obj = OBJ_nid2obj(nid);
  if (obj == (ASN1_OBJECT *)0x0) {
    ERR_new();
    pXVar1 = (X509_NAME_ENTRY *)0x0;
    ERR_set_debug("../crypto/x509/x509name.c",0x10c,"X509_NAME_ENTRY_create_by_NID");
    ERR_set_error(0xb,0x6d,0);
  }
  else {
    pXVar1 = X509_NAME_ENTRY_create_by_OBJ(ne,obj,type,bytes,len);
    ASN1_OBJECT_free(obj);
  }
  return pXVar1;
}


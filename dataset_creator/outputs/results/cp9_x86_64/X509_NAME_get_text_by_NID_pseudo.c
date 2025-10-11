
int X509_NAME_get_text_by_NID(X509_NAME *name,int nid,char *buf,int len)

{
  int iVar1;
  ASN1_OBJECT *obj;
  
  obj = OBJ_nid2obj(nid);
  if (obj != (ASN1_OBJECT *)0x0) {
    iVar1 = X509_NAME_get_text_by_OBJ(name,obj,buf,len);
    return iVar1;
  }
  return -1;
}


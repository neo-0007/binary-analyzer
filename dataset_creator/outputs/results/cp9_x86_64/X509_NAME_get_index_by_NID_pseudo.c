
int X509_NAME_get_index_by_NID(X509_NAME *name,int nid,int lastpos)

{
  int iVar1;
  ASN1_OBJECT *obj;
  
  obj = OBJ_nid2obj(nid);
  if (obj != (ASN1_OBJECT *)0x0) {
    iVar1 = X509_NAME_get_index_by_OBJ(name,obj,lastpos);
    return iVar1;
  }
  return -2;
}


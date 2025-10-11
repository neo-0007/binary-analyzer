
int X509v3_get_ext_by_NID(stack_st_X509_EXTENSION *x,int nid,int lastpos)

{
  int iVar1;
  ASN1_OBJECT *obj;
  
  obj = OBJ_nid2obj(nid);
  if (obj != (ASN1_OBJECT *)0x0) {
    iVar1 = X509v3_get_ext_by_OBJ(x,obj,lastpos);
    return iVar1;
  }
  return -2;
}


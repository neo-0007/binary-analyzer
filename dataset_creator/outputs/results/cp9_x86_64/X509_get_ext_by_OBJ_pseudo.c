
int X509_get_ext_by_OBJ(X509 *x,ASN1_OBJECT *obj,int lastpos)

{
  int iVar1;
  
  iVar1 = X509v3_get_ext_by_OBJ((stack_st_X509_EXTENSION *)x->skid,obj,lastpos);
  return iVar1;
}


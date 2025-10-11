
int X509v3_get_ext_by_OBJ(stack_st_X509_EXTENSION *x,ASN1_OBJECT *obj,int lastpos)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  
  if (x != (stack_st_X509_EXTENSION *)0x0) {
    iVar4 = lastpos + 1;
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    iVar1 = OPENSSL_sk_num();
    if (iVar4 < iVar1) {
      do {
        puVar3 = (undefined8 *)OPENSSL_sk_value(x,iVar4);
        iVar2 = OBJ_cmp((ASN1_OBJECT *)*puVar3,obj);
        if (iVar2 == 0) {
          return iVar4;
        }
        iVar4 = iVar4 + 1;
      } while (iVar1 != iVar4);
    }
  }
  return -1;
}


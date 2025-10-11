
void * X509V3_get_d2i(stack_st_X509_EXTENSION *x,int nid,int *crit,int *idx)

{
  int iVar1;
  X509_EXTENSION *ex;
  ASN1_OBJECT *o;
  void *pvVar2;
  X509_EXTENSION *ex_00;
  int iVar3;
  bool bVar4;
  
  if (x != (stack_st_X509_EXTENSION *)0x0) {
    iVar3 = 0;
    if ((idx != (int *)0x0) && (iVar3 = *idx + 1, iVar3 < 0)) {
      iVar3 = 0;
    }
    ex_00 = (X509_EXTENSION *)0x0;
    for (; iVar1 = OPENSSL_sk_num(x), iVar3 < iVar1; iVar3 = iVar3 + 1) {
      ex = (X509_EXTENSION *)OPENSSL_sk_value(x,iVar3);
      o = X509_EXTENSION_get_object(ex);
      iVar1 = OBJ_obj2nid(o);
      if (iVar1 == nid) {
        if (idx != (int *)0x0) {
          *idx = iVar3;
          ex_00 = ex;
          if (ex != (X509_EXTENSION *)0x0) goto LAB_0060c275;
          goto LAB_0060c2a5;
        }
        bVar4 = ex_00 != (X509_EXTENSION *)0x0;
        ex_00 = ex;
        if (bVar4) {
          if (crit == (int *)0x0) {
            return (void *)0x0;
          }
          *crit = -2;
          return (void *)0x0;
        }
      }
    }
    if (ex_00 != (X509_EXTENSION *)0x0) {
LAB_0060c275:
      if (crit != (int *)0x0) {
        iVar3 = X509_EXTENSION_get_critical(ex_00);
        *crit = iVar3;
      }
      pvVar2 = X509V3_EXT_d2i(ex_00);
      return pvVar2;
    }
  }
  if (idx != (int *)0x0) {
LAB_0060c2a5:
    *idx = -1;
  }
  if (crit != (int *)0x0) {
    *crit = -1;
  }
  return (void *)0x0;
}



int X509_NAME_get_index_by_OBJ(X509_NAME *name,ASN1_OBJECT *obj,int lastpos)

{
  stack_st_X509_NAME_ENTRY *psVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  
  if (name != (X509_NAME *)0x0) {
    psVar1 = name->entries;
    iVar5 = -1;
    if (-1 < lastpos) {
      iVar5 = lastpos;
    }
    iVar2 = OPENSSL_sk_num(psVar1);
    iVar5 = iVar5 + 1;
    if (iVar5 < iVar2) {
      do {
        puVar4 = (undefined8 *)OPENSSL_sk_value(psVar1,iVar5);
        iVar3 = OBJ_cmp((ASN1_OBJECT *)*puVar4,obj);
        if (iVar3 == 0) {
          return iVar5;
        }
        iVar5 = iVar5 + 1;
      } while (iVar2 != iVar5);
    }
  }
  return -1;
}


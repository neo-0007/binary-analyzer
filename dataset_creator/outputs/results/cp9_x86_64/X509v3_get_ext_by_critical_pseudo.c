
int X509v3_get_ext_by_critical(stack_st_X509_EXTENSION *x,int crit,int lastpos)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  if (x != (stack_st_X509_EXTENSION *)0x0) {
    iVar3 = lastpos + 1;
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    iVar1 = OPENSSL_sk_num();
    if (iVar3 < iVar1) {
      do {
        lVar2 = OPENSSL_sk_value(x,iVar3);
        if (*(int *)(lVar2 + 8) < 1) {
          if (crit == 0) {
            return iVar3;
          }
        }
        else if (crit != 0) {
          return iVar3;
        }
        iVar3 = iVar3 + 1;
      } while (iVar1 != iVar3);
    }
  }
  return -1;
}



int X509V3_add1_i2d(stack_st_X509_EXTENSION **x,int nid,void *value,int crit,ulong flags)

{
  int iVar1;
  X509_EXTENSION *pXVar2;
  X509_EXTENSION *a;
  long lVar3;
  stack_st_X509_EXTENSION *psVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  uVar6 = (ulong)((uint)flags & 0xf);
  if (uVar6 != 1) {
    iVar1 = X509v3_get_ext_by_NID(*x,nid,-1);
    if (-1 < iVar1) {
      if (uVar6 == 4) {
        return 1;
      }
      if (uVar6 == 0) {
        uVar5 = 0x91;
        goto LAB_0060c427;
      }
      if (uVar6 == 5) {
        lVar3 = OPENSSL_sk_delete(*x,iVar1);
joined_r0x0060c3fa:
        if (lVar3 == 0) {
          return -1;
        }
        return 1;
      }
      pXVar2 = X509V3_EXT_i2d(nid,crit,value);
      if (pXVar2 != (X509_EXTENSION *)0x0) {
        a = (X509_EXTENSION *)OPENSSL_sk_value(*x,iVar1);
        X509_EXTENSION_free(a);
        lVar3 = OPENSSL_sk_set(*x,iVar1,pXVar2);
        goto joined_r0x0060c3fa;
      }
      goto LAB_0060c470;
    }
    if ((uVar6 - 3 & 0xfffffffffffffffd) == 0) {
      uVar5 = 0x66;
LAB_0060c427:
      if ((flags & 0x10) == 0) {
        ERR_new();
        ERR_set_debug("../crypto/x509/v3_lib.c",300,__func___0);
        ERR_set_error(0x22,uVar5,0);
        return 0;
      }
      return 0;
    }
  }
  pXVar2 = X509V3_EXT_i2d(nid,crit,value);
  if (pXVar2 != (X509_EXTENSION *)0x0) {
    psVar4 = *x;
    if (((psVar4 != (stack_st_X509_EXTENSION *)0x0) ||
        (psVar4 = (stack_st_X509_EXTENSION *)OPENSSL_sk_new_null(),
        psVar4 != (stack_st_X509_EXTENSION *)0x0)) &&
       (iVar1 = OPENSSL_sk_push(psVar4,pXVar2), iVar1 != 0)) {
      *x = psVar4;
      return 1;
    }
    if (*x != psVar4) {
      OPENSSL_sk_free(psVar4);
    }
    X509_EXTENSION_free(pXVar2);
    return -1;
  }
LAB_0060c470:
  ERR_new();
  ERR_set_debug("../crypto/x509/v3_lib.c",0x10c,__func___0);
  ERR_set_error(0x22,0x90,0);
  return 0;
}


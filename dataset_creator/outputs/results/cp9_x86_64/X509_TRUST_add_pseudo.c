
int X509_TRUST_add(int id,int flags,ck *ck,char *name,int arg1,void *arg2)

{
  int iVar1;
  X509_TRUST *pXVar2;
  char *pcVar3;
  int *ptr;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar5 = flags & 0xfffffffeU | 2;
  iVar1 = X509_TRUST_get_by_id(id);
  if (iVar1 < 0) {
    ptr = (int *)CRYPTO_malloc(0x28,"../crypto/x509/x509_trust.c",0x8a);
    if (ptr == (int *)0x0) {
      ERR_new();
      uVar6 = 0x8b;
      goto LAB_006115d1;
    }
    ptr[1] = 1;
    pcVar3 = CRYPTO_strdup(name,"../crypto/x509/x509_trust.c",0x96);
    *(char **)(ptr + 4) = pcVar3;
    lVar4 = trtable;
    if (pcVar3 == (char *)0x0) {
      ERR_new();
      uVar6 = 0x97;
    }
    else {
      *ptr = id;
      *(ck **)(ptr + 2) = ck;
      ptr[6] = arg1;
      ptr[1] = ptr[1] & 1U | uVar5;
      *(void **)(ptr + 8) = arg2;
      if (lVar4 == 0) {
        lVar4 = OPENSSL_sk_new(tr_cmp);
        trtable = lVar4;
        if (lVar4 == 0) {
          ERR_new(0);
          uVar6 = 0xa8;
          goto LAB_00611574;
        }
      }
      iVar1 = OPENSSL_sk_push(lVar4,ptr);
      if (iVar1 != 0) goto LAB_006114b8;
      ERR_new();
      uVar6 = 0xac;
    }
LAB_00611574:
    ERR_set_debug("../crypto/x509/x509_trust.c",uVar6,"X509_TRUST_add");
    ERR_set_error(0xb,0xc0100,0);
    CRYPTO_free(*(void **)(ptr + 4));
    CRYPTO_free(ptr);
    iVar1 = 0;
  }
  else {
    pXVar2 = X509_TRUST_get0(iVar1);
    if ((pXVar2->flags & 2) != 0) {
      CRYPTO_free(pXVar2->name);
    }
    pcVar3 = CRYPTO_strdup(name,"../crypto/x509/x509_trust.c",0x96);
    pXVar2->name = pcVar3;
    if (pcVar3 == (char *)0x0) {
      ERR_new();
      uVar6 = 0x97;
LAB_006115d1:
      ERR_set_debug("../crypto/x509/x509_trust.c",uVar6,"X509_TRUST_add");
      ERR_set_error(0xb,0xc0100,0);
      return 0;
    }
    pXVar2->trust = id;
    pXVar2->check_trust = (_func_1814 *)ck;
    pXVar2->arg1 = arg1;
    pXVar2->flags = pXVar2->flags & 1U | uVar5;
    pXVar2->arg2 = arg2;
LAB_006114b8:
    iVar1 = 1;
  }
  return iVar1;
}


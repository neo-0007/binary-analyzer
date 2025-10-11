
int X509_PURPOSE_add(int id,int trust,int flags,ck *ck,char *name,char *sname,void *arg)

{
  int iVar1;
  X509_PURPOSE *pXVar2;
  char *pcVar3;
  int *ptr;
  long lVar4;
  undefined8 uVar5;
  
  iVar1 = X509_PURPOSE_get_by_id(id);
  if (iVar1 == -1) {
    ptr = (int *)CRYPTO_malloc(0x30,"../crypto/x509/v3_purp.c",0xa8);
    if (ptr == (int *)0x0) {
      ERR_new();
      uVar5 = 0xa9;
      goto LAB_00587021;
    }
    ptr[2] = 1;
    pcVar3 = CRYPTO_strdup(name,"../crypto/x509/v3_purp.c",0xb6);
    *(char **)(ptr + 6) = pcVar3;
    pcVar3 = CRYPTO_strdup(sname,"../crypto/x509/v3_purp.c",0xb7);
    *(char **)(ptr + 8) = pcVar3;
    if ((*(long *)(ptr + 6) == 0) || (pcVar3 == (char *)0x0)) {
      ERR_new();
      uVar5 = 0xb9;
    }
    else {
      *ptr = id;
      lVar4 = xptable;
      ptr[1] = trust;
      ptr[2] = flags & 0xfffffffeU | ptr[2] & 1U | 2;
      *(ck **)(ptr + 4) = ck;
      *(void **)(ptr + 10) = arg;
      if (lVar4 == 0) {
        lVar4 = OPENSSL_sk_new(xp_cmp);
        xptable = lVar4;
        if (lVar4 == 0) {
          ERR_new(0);
          uVar5 = 0xca;
          goto LAB_00587115;
        }
      }
      iVar1 = OPENSSL_sk_push(lVar4,ptr);
      if (iVar1 != 0) goto LAB_00586fcf;
      ERR_new();
      uVar5 = 0xce;
    }
LAB_00587115:
    ERR_set_debug("../crypto/x509/v3_purp.c",uVar5,"X509_PURPOSE_add");
    ERR_set_error(0x22,0xc0100,0);
    CRYPTO_free(*(void **)(ptr + 6));
    CRYPTO_free(*(void **)(ptr + 8));
    CRYPTO_free(ptr);
    iVar1 = 0;
  }
  else {
    pXVar2 = X509_PURPOSE_get0(iVar1);
    if ((pXVar2->flags & 2) != 0) {
      CRYPTO_free(pXVar2->name);
      CRYPTO_free(pXVar2->sname);
    }
    pcVar3 = CRYPTO_strdup(name,"../crypto/x509/v3_purp.c",0xb6);
    pXVar2->name = pcVar3;
    pcVar3 = CRYPTO_strdup(sname,"../crypto/x509/v3_purp.c",0xb7);
    pXVar2->sname = pcVar3;
    if ((pXVar2->name == (char *)0x0) || (pcVar3 == (char *)0x0)) {
      ERR_new();
      uVar5 = 0xb9;
LAB_00587021:
      ERR_set_debug("../crypto/x509/v3_purp.c",uVar5,"X509_PURPOSE_add");
      ERR_set_error(0x22,0xc0100,0);
      return 0;
    }
    pXVar2->purpose = id;
    pXVar2->trust = trust;
    pXVar2->flags = pXVar2->flags & 1U | flags & 0xfffffffeU | 2;
    pXVar2->check_purpose = (_func_4299 *)ck;
    pXVar2->usr_data = arg;
LAB_00586fcf:
    iVar1 = 1;
  }
  return iVar1;
}


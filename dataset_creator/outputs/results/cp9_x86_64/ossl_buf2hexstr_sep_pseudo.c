
void * ossl_buf2hexstr_sep(undefined8 param_1,long param_2,char param_3)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  
  if (param_2 != 0) {
    if (param_3 == '\0') {
      lVar3 = param_2 * 2 + 1;
    }
    else {
      lVar3 = param_2 * 3;
    }
    pvVar2 = CRYPTO_malloc((int)lVar3,"../crypto/o_str.c",0x113);
    if (pvVar2 == (void *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/o_str.c",0x114,"ossl_buf2hexstr_sep");
      ERR_set_error(0xf,0xc0100,0);
    }
    else {
      iVar1 = buf2hexstr_sep(pvVar2,lVar3,0,param_1,param_2,(int)param_3);
      if (iVar1 == 0) {
        CRYPTO_free(pvVar2);
        pvVar2 = (void *)0x0;
      }
    }
    return pvVar2;
  }
  pvVar2 = (void *)CRYPTO_zalloc(1,"../crypto/o_str.c",0x110);
  return pvVar2;
}


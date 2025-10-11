
int CRYPTO_set_ex_data(CRYPTO_EX_DATA *ad,int idx,void *val)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  long lVar4;
  
  if (*(long *)&ad->dummy == 0) {
    lVar4 = OPENSSL_sk_new_null();
    *(long *)&ad->dummy = lVar4;
    if (lVar4 == 0) {
      ERR_new(0);
      ERR_set_debug("../crypto/ex_data.c",0x1d7,"CRYPTO_set_ex_data");
      ERR_set_error(0xf,0xc0100,0);
      return 0;
    }
  }
  for (iVar1 = OPENSSL_sk_num(); iVar1 <= idx; iVar1 = iVar1 + 1) {
    iVar2 = OPENSSL_sk_push(*(undefined8 *)&ad->dummy,0);
    if (iVar2 == 0) {
      ERR_new();
      ERR_set_debug("../crypto/ex_data.c",0x1de,"CRYPTO_set_ex_data");
      ERR_set_error(0xf,0xc0100,0);
      return 0;
    }
  }
  pvVar3 = (void *)OPENSSL_sk_set(*(undefined8 *)&ad->dummy,idx,val);
  if (val == pvVar3) {
    return 1;
  }
  ERR_new();
  ERR_set_debug("../crypto/ex_data.c",0x1e4,"CRYPTO_set_ex_data");
  ERR_set_error(0xf,0x80106,0);
  return 0;
}


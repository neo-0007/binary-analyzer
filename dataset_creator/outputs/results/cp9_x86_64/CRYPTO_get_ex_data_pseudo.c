
void * CRYPTO_get_ex_data(CRYPTO_EX_DATA *ad,int idx)

{
  int iVar1;
  void *pvVar2;
  
  if (*(long *)&ad->dummy != 0) {
    iVar1 = OPENSSL_sk_num();
    if (idx < iVar1) {
      pvVar2 = (void *)OPENSSL_sk_value(*(undefined8 *)&ad->dummy,idx);
      return pvVar2;
    }
  }
  return (void *)0x0;
}


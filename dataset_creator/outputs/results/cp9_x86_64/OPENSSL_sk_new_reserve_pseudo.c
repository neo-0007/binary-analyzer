
long OPENSSL_sk_new_reserve(undefined8 param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = CRYPTO_zalloc(0x20,"../crypto/stack/stack.c",0xdd);
  lVar3 = lVar2;
  if ((lVar2 != 0) && (*(undefined8 *)(lVar2 + 0x18) = param_1, 0 < param_2)) {
    iVar1 = sk_reserve(lVar2,param_2,1);
    if (iVar1 == 0) {
      lVar3 = 0;
      OPENSSL_sk_free(lVar2);
    }
  }
  return lVar3;
}


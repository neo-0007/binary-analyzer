
long HMAC_CTX_new(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = CRYPTO_zalloc(0x20,"../crypto/hmac/hmac.c",0x93);
  lVar3 = lVar2;
  if (lVar2 != 0) {
    iVar1 = HMAC_CTX_reset(lVar2);
    if (iVar1 == 0) {
      lVar3 = 0;
      HMAC_CTX_free(lVar2);
    }
  }
  return lVar3;
}



void OSSL_PARAM_free(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  lVar1 = *param_1;
  plVar2 = param_1;
  while (lVar1 != 0) {
    plVar2 = plVar2 + 5;
    lVar1 = *plVar2;
  }
  if ((int)plVar2[1] == 0x7f) {
    CRYPTO_secure_clear_free(plVar2[2],plVar2[3],"../crypto/params_dup.c",0xe8);
  }
  CRYPTO_free(param_1);
  return;
}


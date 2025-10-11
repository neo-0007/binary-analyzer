
bool ossl_ccm_generic_setiv(long param_1)

{
  int iVar1;
  
  iVar1 = CRYPTO_ccm128_setiv(param_1 + 0x50);
  return iVar1 == 0;
}


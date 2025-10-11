
bool ossl_x25519(void *param_1)

{
  int iVar1;
  
  x25519_scalar_mult();
  iVar1 = CRYPTO_memcmp(kZeros_0,param_1,0x20);
  return iVar1 != 0;
}


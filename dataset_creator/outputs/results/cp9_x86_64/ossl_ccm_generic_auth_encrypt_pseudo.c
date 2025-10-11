
bool ossl_ccm_generic_auth_encrypt(long param_1)

{
  int iVar1;
  long lVar2;
  long in_R8;
  undefined8 in_R9;
  
  if (*(long *)(param_1 + 0x88) == 0) {
    iVar1 = CRYPTO_ccm128_encrypt(param_1 + 0x50);
  }
  else {
    iVar1 = CRYPTO_ccm128_encrypt_ccm64();
  }
  if ((in_R8 != 0) && (iVar1 == 0)) {
    lVar2 = CRYPTO_ccm128_tag(param_1 + 0x50,in_R8,in_R9);
    return lVar2 != 0;
  }
  return iVar1 == 0;
}


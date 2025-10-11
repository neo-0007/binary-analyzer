
bool evp_keymgmt_util_cache_keydata(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *ptr;
  long lVar2;
  
  if (param_3 == 0) {
    return true;
  }
  if (*(long *)(param_1 + 0x78) == 0) {
    lVar2 = OPENSSL_sk_new_null();
    *(long *)(param_1 + 0x78) = lVar2;
    if (lVar2 == 0) {
      return false;
    }
  }
  ptr = (undefined8 *)CRYPTO_malloc(0x10,"../crypto/evp/keymgmt_lib.c",0x108);
  if (ptr == (undefined8 *)0x0) {
    return false;
  }
  ptr[1] = param_3;
  *ptr = param_2;
  iVar1 = EVP_KEYMGMT_up_ref(param_2);
  if (iVar1 != 0) {
    iVar1 = OPENSSL_sk_push(*(undefined8 *)(param_1 + 0x78),ptr);
    if (iVar1 == 0) {
      EVP_KEYMGMT_free(param_2);
      CRYPTO_free(ptr);
    }
    return iVar1 != 0;
  }
  CRYPTO_free(ptr);
  return false;
}


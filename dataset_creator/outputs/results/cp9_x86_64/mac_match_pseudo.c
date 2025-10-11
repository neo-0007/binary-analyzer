
bool mac_match(long param_1,long param_2,ulong param_3)

{
  void *a;
  void *b;
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    if ((param_3 & 1) == 0) {
      return true;
    }
    a = *(void **)(param_1 + 0x18);
    b = *(void **)(param_2 + 0x18);
    if (a == (void *)0x0) {
      if (b != (void *)0x0) {
        return false;
      }
    }
    else if (b == (void *)0x0) {
      return false;
    }
    if (*(size_t *)(param_1 + 0x20) != *(size_t *)(param_2 + 0x20)) {
      return false;
    }
    lVar3 = *(long *)(param_2 + 0x28);
    if (*(long *)(param_1 + 0x28) == 0) {
      if (lVar3 != 0) {
        return false;
      }
      if (a == (void *)0x0) {
        return true;
      }
    }
    else {
      if (lVar3 == 0) {
        return false;
      }
      if (a == (void *)0x0) goto LAB_00471f8f;
    }
    iVar1 = CRYPTO_memcmp(a,b,*(size_t *)(param_1 + 0x20));
    if (iVar1 == 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        return true;
      }
      lVar3 = *(long *)(param_2 + 0x28);
LAB_00471f8f:
      uVar2 = EVP_CIPHER_get0_name(lVar3);
      iVar1 = EVP_CIPHER_is_a(*(undefined8 *)(param_1 + 0x28),uVar2);
      return iVar1 != 0;
    }
  }
  return false;
}


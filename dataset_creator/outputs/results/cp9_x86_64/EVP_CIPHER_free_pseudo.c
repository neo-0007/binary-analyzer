
void EVP_CIPHER_free(long param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x18) == 0)) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x80);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      evp_cipher_free_int();
      return;
    }
    if (iVar2 + -1 < 1) {
      evp_cipher_free_int();
      return;
    }
  }
  return;
}


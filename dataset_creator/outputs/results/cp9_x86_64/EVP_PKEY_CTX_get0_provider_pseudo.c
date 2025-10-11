
undefined8 EVP_PKEY_CTX_get0_provider(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *param_1;
  if (((iVar1 - 0x10U & 0xffffffef) == 0 || (iVar1 - 0x40U & 0xffffffbf) == 0) || (iVar1 == 0x100))
  {
    if (*(long *)(param_1 + 10) != 0) {
      uVar2 = EVP_SIGNATURE_get0_provider();
      return uVar2;
    }
  }
  else if (iVar1 == 0x800) {
    if (*(long *)(param_1 + 10) != 0) {
      uVar2 = EVP_KEYEXCH_get0_provider();
      return uVar2;
    }
  }
  else if ((iVar1 - 0x1000U & 0xffffefff) == 0) {
    if (*(long *)(param_1 + 10) != 0) {
      uVar2 = EVP_KEM_get0_provider();
      return uVar2;
    }
  }
  else if ((iVar1 - 0x200U & 0xfffffdff) == 0) {
    if (*(long *)(param_1 + 10) != 0) {
      uVar2 = EVP_ASYM_CIPHER_get0_provider();
      return uVar2;
    }
  }
  else if (((iVar1 - 2U & 0xfffffffd) == 0) && (*(long *)(param_1 + 8) != 0)) {
    uVar2 = EVP_KEYMGMT_get0_provider();
    return uVar2;
  }
  return 0;
}


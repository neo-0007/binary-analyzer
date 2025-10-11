
undefined8 EVP_PKEY_CTX_settable_params(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *param_1;
  if (iVar1 == 0x800) {
    if (*(long *)(param_1 + 10) == 0) {
      return 0;
    }
    if (*(long *)(*(long *)(param_1 + 10) + 0x68) == 0) {
      return 0;
    }
    uVar2 = EVP_KEYEXCH_get0_provider();
    uVar2 = ossl_provider_ctx(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00412c5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(long *)(param_1 + 10) + 0x68))(*(undefined8 *)(param_1 + 0xc),uVar2);
    return uVar2;
  }
  if (iVar1 < 0x41) {
    if (iVar1 < 0x10) {
LAB_00412b03:
      if ((((iVar1 - 0x200U & 0xfffffdff) == 0) && (*(long *)(param_1 + 10) != 0)) &&
         (*(long *)(*(long *)(param_1 + 10) + 0x80) != 0)) {
        uVar2 = EVP_ASYM_CIPHER_get0_provider();
        goto LAB_00412b8f;
      }
    }
    else if ((0x1000000010001U >> ((ulong)(iVar1 - 0x10) & 0x3f) & 1) != 0) goto LAB_00412bbf;
  }
  else {
    if ((iVar1 - 0x80U & 0xffffff7f) != 0) goto LAB_00412b03;
LAB_00412bbf:
    if ((*(long *)(param_1 + 10) != 0) && (*(long *)(*(long *)(param_1 + 10) + 0xd0) != 0)) {
      uVar2 = EVP_SIGNATURE_get0_provider();
      uVar2 = ossl_provider_ctx(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00412bfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*(long *)(param_1 + 10) + 0xd0))(*(undefined8 *)(param_1 + 0xc),uVar2);
      return uVar2;
    }
  }
  if ((((iVar1 - 2U & 0xfffffffd) == 0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(long *)(*(long *)(param_1 + 8) + 0x78) != 0)) {
    uVar2 = EVP_KEYMGMT_get0_provider();
    uVar2 = ossl_provider_ctx(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00412c35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(long *)(param_1 + 8) + 0x78))(*(undefined8 *)(param_1 + 10),uVar2);
    return uVar2;
  }
  if ((((iVar1 - 0x1000U & 0xffffefff) != 0) || (*(long *)(param_1 + 10) == 0)) ||
     (*(long *)(*(long *)(param_1 + 10) + 0x80) == 0)) {
    return 0;
  }
  uVar2 = EVP_KEM_get0_provider();
LAB_00412b8f:
  uVar2 = ossl_provider_ctx(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00412baa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(long *)(param_1 + 10) + 0x80))(*(undefined8 *)(param_1 + 0xc),uVar2);
  return uVar2;
}


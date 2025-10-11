
undefined8 EVP_PKEY_CTX_gettable_params(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = *param_1;
  if (iVar1 == 0x800) {
    if (*(long *)(param_1 + 10) == 0) {
      return 0;
    }
    if (*(long *)(*(long *)(param_1 + 10) + 0x78) == 0) {
      return 0;
    }
    uVar2 = EVP_KEYEXCH_get0_provider();
    uVar2 = ossl_provider_ctx(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00412aad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(long *)(param_1 + 10) + 0x78))(*(undefined8 *)(param_1 + 0xc),uVar2);
    return uVar2;
  }
  if (iVar1 < 0x41) {
    if (iVar1 < 0x10) {
LAB_004129cf:
      if ((iVar1 - 0x200U & 0xfffffdff) == 0) {
        if (*(long *)(param_1 + 10) == 0) {
          return 0;
        }
        if (*(long *)(*(long *)(param_1 + 10) + 0x70) != 0) {
          uVar2 = EVP_ASYM_CIPHER_get0_provider();
          goto LAB_00412a62;
        }
        goto LAB_00412a46;
      }
    }
    else if ((0x1000000010001U >> ((ulong)(iVar1 - 0x10) & 0x3f) & 1) != 0) goto LAB_00412a33;
    if ((iVar1 - 0x1000U & 0xffffefff) != 0) {
      return 0;
    }
    lVar3 = *(long *)(param_1 + 10);
    if (lVar3 == 0) {
      return 0;
    }
  }
  else {
    if ((iVar1 - 0x80U & 0xffffff7f) != 0) goto LAB_004129cf;
LAB_00412a33:
    if (*(long *)(param_1 + 10) == 0) {
      return 0;
    }
    if (*(long *)(*(long *)(param_1 + 10) + 0xc0) != 0) {
      uVar2 = EVP_SIGNATURE_get0_provider();
      uVar2 = ossl_provider_ctx(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00412ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*(long *)(param_1 + 10) + 0xc0))(*(undefined8 *)(param_1 + 0xc),uVar2);
      return uVar2;
    }
LAB_00412a46:
    if ((iVar1 - 0x1000U & 0xffffefff) != 0) {
      return 0;
    }
    lVar3 = *(long *)(param_1 + 10);
  }
  if (*(long *)(lVar3 + 0x70) == 0) {
    return 0;
  }
  uVar2 = EVP_KEM_get0_provider();
LAB_00412a62:
  uVar2 = ossl_provider_ctx(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00412a7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(long *)(param_1 + 10) + 0x70))(*(undefined8 *)(param_1 + 0xc),uVar2);
  return uVar2;
}


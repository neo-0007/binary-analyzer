
undefined8 EVP_MD_CTX_gettable_params(long param_1)

{
  int *piVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 != (int *)0x0) {
    if ((((*piVar1 - 0x80U & 0xffffff7f) == 0) && (*(long *)(piVar1 + 0xc) != 0)) &&
       (*(code **)(*(long *)(piVar1 + 10) + 0xe0) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00518aed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*(long *)(piVar1 + 10) + 0xe0))();
      return uVar2;
    }
  }
  if ((*(long *)(param_1 + 8) != 0) && (*(long *)(*(long *)(param_1 + 8) + 0xe8) != 0)) {
    uVar2 = EVP_MD_get0_provider();
    uVar2 = ossl_provider_ctx(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00518b23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(long *)(param_1 + 8) + 0xe8))(*(undefined8 *)(param_1 + 0x38),uVar2);
    return uVar2;
  }
  return 0;
}


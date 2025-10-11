
undefined8 EVP_MAC_CTX_settable_params(long *param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(*param_1 + 0x70) != 0) {
    uVar1 = EVP_MAC_get0_provider();
    uVar1 = ossl_provider_ctx(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0052e1be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x70))(param_1[1],uVar1);
    return uVar1;
  }
  return 0;
}


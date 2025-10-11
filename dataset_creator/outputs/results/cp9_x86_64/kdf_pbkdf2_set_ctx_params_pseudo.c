
undefined8 kdf_pbkdf2_set_ctx_params(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_ctx_get0_libctx(*param_1);
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = ossl_prov_digest_load_from_params(param_1 + 6,param_2,uVar1);
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  uVar1 = kdf_pbkdf2_set_ctx_params_part_0(param_1,param_2);
  return uVar1;
}


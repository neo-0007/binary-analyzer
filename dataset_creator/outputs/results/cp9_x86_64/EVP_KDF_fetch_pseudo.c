
void EVP_KDF_fetch(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  evp_generic_fetch(param_1,4,param_2,param_3,evp_kdf_from_algorithm,evp_kdf_up_ref,evp_kdf_free);
  return;
}


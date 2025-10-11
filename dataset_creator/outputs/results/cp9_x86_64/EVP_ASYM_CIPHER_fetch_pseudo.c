
void EVP_ASYM_CIPHER_fetch(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  evp_generic_fetch(param_1,0xd,param_2,param_3,evp_asym_cipher_from_algorithm,
                    EVP_ASYM_CIPHER_up_ref,PTR_EVP_ASYM_CIPHER_free_0092df50);
  return;
}


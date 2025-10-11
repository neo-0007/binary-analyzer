
void EVP_CIPHER_fetch(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  evp_generic_fetch(param_1,2,param_2,param_3,evp_cipher_from_algorithm,evp_cipher_up_ref,
                    evp_cipher_free);
  return;
}


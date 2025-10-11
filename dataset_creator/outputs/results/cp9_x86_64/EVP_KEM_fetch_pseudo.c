
void EVP_KEM_fetch(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  evp_generic_fetch(param_1,0xe,param_2,param_3,evp_kem_from_algorithm,EVP_KEM_up_ref,
                    PTR_EVP_KEM_free_0092dee0);
  return;
}


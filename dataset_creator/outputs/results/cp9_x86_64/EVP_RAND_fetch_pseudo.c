
void EVP_RAND_fetch(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  evp_generic_fetch(param_1,5,param_2,param_3,evp_rand_from_algorithm,evp_rand_up_ref,evp_rand_free)
  ;
  return;
}


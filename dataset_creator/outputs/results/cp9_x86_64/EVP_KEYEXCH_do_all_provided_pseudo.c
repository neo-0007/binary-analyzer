
void EVP_KEYEXCH_do_all_provided(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  evp_generic_do_all(param_1,0xb,param_2,param_3,evp_keyexch_from_algorithm,EVP_KEYEXCH_up_ref,
                     PTR_EVP_KEYEXCH_free_0092dfb8);
  return;
}


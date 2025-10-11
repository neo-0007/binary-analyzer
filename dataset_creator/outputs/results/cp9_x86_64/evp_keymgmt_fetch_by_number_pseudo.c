
void evp_keymgmt_fetch_by_number(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  evp_generic_fetch_by_number
            (param_1,10,param_2,param_3,keymgmt_from_algorithm,EVP_KEYMGMT_up_ref,
             PTR_EVP_KEYMGMT_free_0092def8);
  return;
}


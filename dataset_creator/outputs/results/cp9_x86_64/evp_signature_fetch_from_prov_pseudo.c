
void evp_signature_fetch_from_prov(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  evp_generic_fetch_from_prov
            (param_1,0xc,param_2,param_3,evp_signature_from_algorithm,EVP_SIGNATURE_up_ref,
             PTR_EVP_SIGNATURE_free_0092dfb0);
  return;
}


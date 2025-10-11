
void EVP_MAC_fetch(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  evp_generic_fetch(param_1,3,param_2,param_3,evp_mac_from_algorithm,evp_mac_up_ref,evp_mac_free);
  return;
}


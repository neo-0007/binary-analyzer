
void EVP_MD_fetch(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  evp_generic_fetch(param_1,1,param_2,param_3,evp_md_from_algorithm,evp_md_up_ref,evp_md_free);
  return;
}


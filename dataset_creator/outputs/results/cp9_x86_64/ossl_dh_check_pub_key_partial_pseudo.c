
void ossl_dh_check_pub_key_partial(long param_1)

{
  ossl_ffc_validate_public_key_partial(param_1 + 8);
  return;
}



void sha1_int_ctrl(long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  if (param_1 != 0) {
    param_1 = EVP_MD_CTX_get0_md_data();
  }
  ossl_sha1_ctrl(param_1,param_2,param_3,param_4);
  return;
}


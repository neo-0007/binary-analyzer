
void md5_sha1_int_ctrl(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_get0_md_data();
  ossl_md5_sha1_ctrl(uVar1,param_2,param_3,param_4);
  return;
}


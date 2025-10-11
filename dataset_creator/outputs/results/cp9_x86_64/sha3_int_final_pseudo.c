
void sha3_int_final(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_get0_md_data();
  ossl_sha3_final(param_2,uVar1);
  return;
}


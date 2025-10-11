
undefined8 sm4_init_key(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = EVP_CIPHER_CTX_get_cipher_data();
  ossl_sm4_set_key(param_2,uVar1);
  return 1;
}


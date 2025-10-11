
undefined8 ossl_sm2_plaintext_size(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  lVar1 = d2i_SM2_Ciphertext(0,&local_10,param_2);
  if (lVar1 != 0) {
    *param_3 = (long)**(int **)(lVar1 + 0x18);
    SM2_Ciphertext_free(lVar1);
    return 1;
  }
  ERR_new();
  ERR_set_debug("../crypto/sm2/sm2_crypt.c",0x4e,"ossl_sm2_plaintext_size");
  ERR_set_error(0x35,0x68,0);
  return 0;
}


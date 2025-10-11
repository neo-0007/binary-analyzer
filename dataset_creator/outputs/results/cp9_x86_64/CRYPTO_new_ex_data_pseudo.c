
int CRYPTO_new_ex_data(int class_index,void *obj,CRYPTO_EX_DATA *ad)

{
  int iVar1;
  
  iVar1 = ossl_crypto_new_ex_data_ex(0,class_index,obj,ad);
  return iVar1;
}


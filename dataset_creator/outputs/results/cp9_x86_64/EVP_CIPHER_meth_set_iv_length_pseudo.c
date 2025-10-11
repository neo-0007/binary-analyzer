
bool EVP_CIPHER_meth_set_iv_length(long param_1,undefined4 param_2)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0xc) == 0;
  if (bVar1) {
    *(undefined4 *)(param_1 + 0xc) = param_2;
  }
  return bVar1;
}


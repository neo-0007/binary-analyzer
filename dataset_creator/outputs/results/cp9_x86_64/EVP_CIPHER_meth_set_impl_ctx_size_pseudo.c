
bool EVP_CIPHER_meth_set_impl_ctx_size(long param_1,undefined4 param_2)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0x38) == 0;
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x38) = param_2;
  }
  return bVar1;
}



bool EVP_MD_meth_set_result_size(long param_1,undefined4 param_2)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 8) == 0;
  if (bVar1) {
    *(undefined4 *)(param_1 + 8) = param_2;
  }
  return bVar1;
}


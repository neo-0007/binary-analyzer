
bool EVP_MD_meth_set_input_blocksize(long param_1,undefined4 param_2)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0x48) == 0;
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x48) = param_2;
  }
  return bVar1;
}


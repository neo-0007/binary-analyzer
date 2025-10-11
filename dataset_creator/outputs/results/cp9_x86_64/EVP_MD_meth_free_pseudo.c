
void EVP_MD_meth_free(long param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 0x18) == 2)) {
    evp_md_free_int();
    return;
  }
  return;
}


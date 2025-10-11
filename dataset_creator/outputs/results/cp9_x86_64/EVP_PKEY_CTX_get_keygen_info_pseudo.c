
int EVP_PKEY_CTX_get_keygen_info(EVP_PKEY_CTX *ctx,int idx)

{
  int iVar1;
  
  if (idx != -1) {
    iVar1 = 0;
    if ((-1 < idx) && (iVar1 = 0, idx <= *(int *)(ctx + 0x70))) {
      iVar1 = *(int *)(*(long *)(ctx + 0x68) + (long)idx * 4);
    }
    return iVar1;
  }
  return *(int *)(ctx + 0x70);
}


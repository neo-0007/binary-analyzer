
void EVP_CIPHER_get0_name(long param_1)

{
  int n;
  
  if (*(long *)(param_1 + 0x68) != 0) {
    return;
  }
  n = EVP_CIPHER_get_nid();
  OBJ_nid2sn(n);
  return;
}


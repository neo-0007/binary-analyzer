
void EVP_CIPHER_get0_description(long param_1)

{
  int n;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    return;
  }
  n = EVP_CIPHER_get_nid();
  OBJ_nid2ln(n);
  return;
}


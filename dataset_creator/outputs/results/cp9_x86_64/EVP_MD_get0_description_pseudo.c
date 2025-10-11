
void EVP_MD_get0_description(long param_1)

{
  int n;
  
  if (*(long *)(param_1 + 0x68) != 0) {
    return;
  }
  n = EVP_MD_get_type();
  OBJ_nid2ln(n);
  return;
}


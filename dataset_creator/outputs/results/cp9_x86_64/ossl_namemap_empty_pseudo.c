
bool ossl_namemap_empty(long param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if (param_1 != 0) {
    bVar1 = *(int *)(param_1 + 0x18) == 0;
  }
  return bVar1;
}


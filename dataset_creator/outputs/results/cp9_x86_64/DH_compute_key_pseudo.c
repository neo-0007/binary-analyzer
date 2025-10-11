
int DH_compute_key(uchar *key,BIGNUM *pub_key,DH *dh)

{
  uchar uVar1;
  int iVar2;
  uchar *puVar3;
  size_t local_28;
  ulong local_20;
  
  local_28 = 0;
  local_20 = 1;
  iVar2 = (**(code **)&(dh[1].priv_key)->neg)();
  if (0 < iVar2) {
    puVar3 = key;
    do {
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
      local_20 = uVar1 == '\0' & local_20;
      local_28 = local_28 + local_20;
    } while (key + (ulong)(iVar2 - 1) + 1 != puVar3);
    iVar2 = iVar2 - (int)local_28;
    memmove(key,key + local_28,(long)iVar2);
    memset(key + iVar2,0,local_28);
  }
  return iVar2;
}


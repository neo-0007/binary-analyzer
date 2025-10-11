
void EC_KEY_clear_flags(EC_KEY *key,int flags)

{
  *(long *)(key + 0x68) = *(long *)(key + 0x68) + 1;
  *(uint *)(key + 0x3c) = *(uint *)(key + 0x3c) & ~flags;
  return;
}



long rsa_pkey_dirty_cnt(long param_1)

{
  return (long)*(int *)(*(long *)(param_1 + 0x20) + 0xd8);
}



long DH_get_length(long param_1)

{
  return (long)*(int *)(param_1 + 0x68);
}


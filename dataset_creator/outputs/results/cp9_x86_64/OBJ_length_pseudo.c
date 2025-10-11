
long OBJ_length(long param_1)

{
  if (param_1 != 0) {
    return (long)*(int *)(param_1 + 0x14);
  }
  return 0;
}


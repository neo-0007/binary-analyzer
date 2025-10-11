
int _IO_marker_difference(long param_1,long param_2)

{
  return *(int *)(param_1 + 0x10) - *(int *)(param_2 + 0x10);
}


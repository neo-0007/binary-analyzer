
void _IO_file_stat(long param_1,stat *param_2)

{
  fstat(*(int *)(param_1 + 0x70),param_2);
  return;
}


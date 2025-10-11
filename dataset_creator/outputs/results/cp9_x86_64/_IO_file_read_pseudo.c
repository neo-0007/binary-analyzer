
void _IO_file_read(long param_1,void *param_2,size_t param_3)

{
  if ((*(byte *)(param_1 + 0x74) & 2) == 0) {
    read(*(int *)(param_1 + 0x70),param_2,param_3);
    return;
  }
  __read_nocancel();
  return;
}


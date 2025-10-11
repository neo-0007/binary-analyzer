
void _IO_file_seek(long param_1,__off64_t param_2,int param_3)

{
  lseek64(*(int *)(param_1 + 0x70),param_2,param_3);
  return;
}


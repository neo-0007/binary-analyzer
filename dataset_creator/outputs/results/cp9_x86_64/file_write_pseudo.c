
int file_write(long param_1,void *param_2,int param_3)

{
  size_t sVar1;
  
  if ((*(int *)(param_1 + 0x28) != 0) && (param_2 != (void *)0x0)) {
    sVar1 = fwrite(param_2,(long)param_3,1,*(FILE **)(param_1 + 0x40));
    if ((int)sVar1 != 0) {
      return param_3;
    }
    return 0;
  }
  return 0;
}


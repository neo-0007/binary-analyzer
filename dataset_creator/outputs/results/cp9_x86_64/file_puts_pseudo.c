
ulong file_puts(long param_1,char *param_2)

{
  size_t sVar1;
  size_t sVar2;
  
  sVar1 = strlen(param_2);
  if (*(int *)(param_1 + 0x28) != 0) {
    sVar2 = fwrite(param_2,(long)(int)sVar1,1,*(FILE **)(param_1 + 0x40));
    if ((int)sVar2 != 0) {
      return sVar1 & 0xffffffff;
    }
  }
  return 0;
}


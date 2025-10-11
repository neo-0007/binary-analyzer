
size_t file_read(long param_1,void *param_2,int param_3)

{
  int iVar1;
  size_t sVar2;
  int *piVar3;
  
  if ((*(int *)(param_1 + 0x28) != 0) && (param_2 != (void *)0x0)) {
    sVar2 = fread(param_2,1,(long)param_3,*(FILE **)(param_1 + 0x40));
    if ((int)sVar2 != 0) {
      return sVar2;
    }
    iVar1 = ferror(*(_IO_FILE **)(param_1 + 0x40));
    if (iVar1 != 0) {
      ERR_new();
      ERR_set_debug("../crypto/bio/bss_file.c",0x94,"file_read");
      piVar3 = __errno_location();
      ERR_set_error(2,*piVar3,"calling fread()");
      ERR_new();
      ERR_set_debug("../crypto/bio/bss_file.c",0x96,"file_read");
      ERR_set_error(0x20,0x80002,0);
      return 0xffffffff;
    }
  }
  return 0;
}


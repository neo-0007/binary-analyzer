
int _nss_files_getaliasbyname_r
              (long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  FILE *__stream;
  long in_FS_OFFSET;
  
  if (param_1 == 0) {
    iVar1 = -1;
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
  }
  else {
    __stream = (FILE *)__nss_files_fopen("/etc/aliases");
    if (__stream == (FILE *)0x0) {
      iVar1 = (*(int *)(in_FS_OFFSET + -0x58) != 0xb) - 2;
    }
    else {
      *(undefined4 *)(param_2 + 0x18) = 1;
      do {
        iVar1 = get_next_alias(__stream,param_1,param_2,param_3,param_4,param_5);
      } while (iVar1 == 2);
      fclose(__stream);
    }
  }
  return iVar1;
}


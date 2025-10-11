
int _nss_files_gethostbyaddr_r
              (void *param_1,uint param_2,undefined4 param_3,long param_4,undefined8 param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  FILE *__stream;
  long in_FS_OFFSET;
  
  __stream = (FILE *)__nss_files_fopen("/etc/hosts");
  if (__stream == (FILE *)0x0) {
    iVar1 = (*(int *)(in_FS_OFFSET + -0x58) != 0xb) - 2;
  }
  else {
    do {
      iVar1 = internal_getent(__stream,param_4,param_5,param_6,param_7,param_8,param_3);
      if (iVar1 != 1) break;
    } while ((*(uint *)(param_4 + 0x14) != param_2) ||
            (iVar2 = bcmp(param_1,(void *)**(undefined8 **)(param_4 + 0x18),(ulong)param_2),
            iVar2 != 0));
    fclose(__stream);
  }
  return iVar1;
}


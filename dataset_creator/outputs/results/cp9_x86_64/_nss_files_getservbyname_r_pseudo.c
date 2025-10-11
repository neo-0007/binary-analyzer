
int _nss_files_getservbyname_r
              (char *param_1,char *param_2,undefined8 *param_3,undefined8 param_4,undefined8 param_5
              ,undefined8 param_6)

{
  undefined8 *puVar1;
  char *__s2;
  int iVar2;
  int iVar3;
  FILE *__stream;
  undefined8 *puVar4;
  long in_FS_OFFSET;
  
  __stream = (FILE *)__nss_files_fopen("/etc/services");
  if (__stream == (FILE *)0x0) {
    iVar2 = (*(int *)(in_FS_OFFSET + -0x58) != 0xb) - 2;
  }
  else {
    while (iVar2 = internal_getent(__stream,param_3,param_4,param_5,param_6), iVar2 == 1) {
      if ((param_2 == (char *)0x0) || (iVar3 = strcmp((char *)param_3[3],param_2), iVar3 == 0)) {
        iVar3 = strcmp(param_1,(char *)*param_3);
        if (iVar3 == 0) break;
        puVar4 = (undefined8 *)param_3[1];
        __s2 = (char *)*puVar4;
        while (__s2 != (char *)0x0) {
          iVar3 = strcmp(param_1,__s2);
          if (iVar3 == 0) goto LAB_007720e9;
          puVar1 = puVar4 + 1;
          puVar4 = puVar4 + 1;
          __s2 = (char *)*puVar1;
        }
      }
    }
LAB_007720e9:
    fclose(__stream);
  }
  return iVar2;
}


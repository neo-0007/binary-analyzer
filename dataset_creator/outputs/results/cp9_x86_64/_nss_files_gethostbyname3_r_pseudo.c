
int _nss_files_gethostbyname3_r
              (char *param_1,undefined4 param_2,undefined8 *param_3,long param_4,ulong param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 *param_9)

{
  undefined8 *puVar1;
  char *__s2;
  int iVar2;
  FILE *__stream;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long in_FS_OFFSET;
  bool bVar6;
  
  uVar3 = (ulong)(-(int)param_4 & 7);
  lVar5 = param_5 - uVar3;
  if (param_5 <= uVar3) {
    lVar5 = 0;
  }
  __stream = (FILE *)__nss_files_fopen("/etc/hosts");
  if (__stream == (FILE *)0x0) {
    iVar2 = (*(int *)(in_FS_OFFSET + -0x58) != 0xb) - 2;
  }
  else {
    while (iVar2 = internal_getent(__stream,param_3,param_4 + uVar3,lVar5,param_6,param_7,param_2),
          iVar2 == 1) {
      iVar2 = strcasecmp(param_1,(char *)*param_3);
      if (iVar2 == 0) {
LAB_007733e1:
        if ((_res_hconf[0x40] & 0x10) == 0) {
          bVar6 = true;
          iVar2 = 1;
        }
        else {
          iVar2 = gethostbyname3_multi
                            (__stream,param_1,param_2,param_3,param_4 + uVar3,lVar5,param_6,param_7)
          ;
          bVar6 = iVar2 == 1;
        }
        fclose(__stream);
        if (param_9 == (undefined8 *)0x0) {
          return iVar2;
        }
        if (!bVar6) {
          return iVar2;
        }
        *param_9 = *param_3;
        return iVar2;
      }
      puVar4 = (undefined8 *)param_3[1];
      __s2 = (char *)*puVar4;
      while (__s2 != (char *)0x0) {
        iVar2 = strcasecmp(param_1,__s2);
        if (iVar2 == 0) goto LAB_007733e1;
        puVar1 = puVar4 + 1;
        puVar4 = puVar4 + 1;
        __s2 = (char *)*puVar1;
      }
    }
    fclose(__stream);
  }
  return iVar2;
}


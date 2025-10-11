
undefined4 sgetsgent_r(char *param_1,long param_2,char *param_3,size_t param_4,long *param_5)

{
  int iVar1;
  char *pcVar2;
  long *in_FS_OFFSET;
  
  if ((param_1 < param_3) || (pcVar2 = param_3, param_3 + param_4 <= param_1)) {
    param_3[param_4 - 1] = '\0';
    param_1 = strncpy(param_3,param_1,param_4);
    pcVar2 = param_1;
    if (param_3[param_4 - 1] != '\0') {
      return 0x22;
    }
  }
  iVar1 = _nss_files_parse_sgent(param_1,param_2,pcVar2,param_4,*in_FS_OFFSET + -0x58);
  if (iVar1 < 1) {
    *param_5 = 0;
  }
  else {
    *param_5 = param_2;
    if (param_2 != 0) {
      return 0;
    }
  }
  return (int)in_FS_OFFSET[-0xb];
}


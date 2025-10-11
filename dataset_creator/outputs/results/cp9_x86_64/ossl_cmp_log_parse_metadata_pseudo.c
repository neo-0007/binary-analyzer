
char * ossl_cmp_log_parse_metadata
                 (char *param_1,int *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined4 *param_5)

{
  char *__s;
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  char *__s_00;
  long in_FS_OFFSET;
  char *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (char *)0x0) {
    *param_2 = -1;
    *param_3 = 0;
    *param_4 = 0;
    *param_5 = 0;
    param_1 = (char *)0x0;
  }
  else {
    pcVar2 = strchr(param_1,0x3a);
    *param_2 = -1;
    *param_3 = 0;
    *param_4 = 0;
    *param_5 = 0;
    if (pcVar2 != (char *)0x0) {
      __s = pcVar2 + 1;
      pcVar3 = strchr(__s,0x3a);
      iVar1 = parse_level(param_1);
      *param_2 = iVar1;
      if ((((pcVar3 != (char *)0x0) && (iVar1 < 0)) &&
          (local_48 = param_1, lVar4 = strtoll(pcVar3 + 1,&local_48,10), pcVar3 + 1 < local_48)) &&
         (*local_48 == ':')) {
        __s_00 = local_48 + 1;
        iVar1 = parse_level(__s_00);
        *param_2 = iVar1;
        if (-1 < iVar1) {
          uVar5 = CRYPTO_strndup(param_1,(long)pcVar2 - (long)param_1,"../crypto/cmp/cmp_util.c",100
                                );
          *param_3 = uVar5;
          uVar5 = CRYPTO_strndup(__s,(long)pcVar3 - (long)__s,"../crypto/cmp/cmp_util.c",0x65);
          *param_4 = uVar5;
          *param_5 = (int)lVar4;
          pcVar2 = strchr(__s_00,0x3a);
          param_1 = pcVar2 + 2;
          if (pcVar2[1] != ' ') {
            param_1 = pcVar2 + 1;
          }
        }
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return param_1;
}


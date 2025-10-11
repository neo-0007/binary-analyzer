
int parse_level(char *param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  int local_26;
  char local_22;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar3 = strchr(param_1,0x3a);
  if (pcVar3 != (char *)0x0) {
    iVar1 = strncmp(param_1,"CMP ",4);
    if (iVar1 == 0) {
      param_1 = param_1 + 4;
    }
    iVar1 = (int)pcVar3 - (int)param_1;
    if (iVar1 < 6) {
      OPENSSL_strlcpy(&local_26,param_1,(long)(iVar1 + 1));
      iVar1 = strcmp((char *)&local_26,"EMERG");
      if (iVar1 == 0) goto LAB_004bf4e0;
      iVar2 = strcmp((char *)&local_26,"ALERT");
      iVar1 = 1;
      if ((iVar2 == 0) || ((local_26 == 0x54495243 && (iVar1 = 2, local_22 == '\0'))))
      goto LAB_004bf4e0;
      iVar2 = strcmp((char *)&local_26,"ERROR");
      iVar1 = 3;
      if ((iVar2 == 0) ||
         ((((local_26 == 0x4e524157 && (iVar1 = 4, local_22 == '\0')) ||
           ((local_26 == 0x45544f4e && (iVar1 = 5, local_22 == '\0')))) ||
          ((local_26 == 0x4f464e49 && (iVar1 = 6, local_22 == '\0')))))) goto LAB_004bf4e0;
      iVar2 = strcmp((char *)&local_26,"DEBUG");
      iVar1 = 7;
      if (iVar2 == 0) goto LAB_004bf4e0;
    }
  }
  iVar1 = -1;
LAB_004bf4e0:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar1;
}


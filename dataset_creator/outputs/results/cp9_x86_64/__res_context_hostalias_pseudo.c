
char * __res_context_hostalias(long *param_1,undefined8 param_2,char *param_3,long param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  FILE *__stream;
  char *pcVar4;
  long in_FS_OFFSET;
  char local_2048 [8191];
  undefined1 local_49;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((*(byte *)(*param_1 + 9) & 0x10) == 0) &&
      (pcVar3 = getenv("HOSTALIASES"), pcVar3 != (char *)0x0)) &&
     (__stream = fopen(pcVar3,"rce"), __stream != (FILE *)0x0)) {
    local_49 = 0;
    do {
      pcVar3 = fgets_unlocked(local_2048,0x2000,__stream);
      if ((pcVar3 == (char *)0x0) || (local_2048[0] == '\0')) goto LAB_007bac00;
      pcVar3 = local_2048;
      cVar1 = local_2048[0];
      while ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)cVar1 * 2) & 0x20) == 0) {
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 1;
        if (cVar1 == '\0') goto LAB_007bac00;
      }
      *pcVar3 = '\0';
      iVar2 = __libc_ns_samename(local_2048,param_2);
    } while (iVar2 != 1);
    do {
      pcVar4 = pcVar3;
      pcVar3 = pcVar4 + 1;
    } while ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)pcVar4[1] * 2) & 0x20) != 0);
    if (pcVar4[1] != '\0') {
      cVar1 = pcVar4[2];
      pcVar3 = pcVar4 + 2;
      while ((cVar1 != '\0' &&
             ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)cVar1 * 2) & 0x20) == 0))) {
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 1;
      }
      *pcVar3 = '\0';
      strncpy(param_3,pcVar4 + 1,param_4 - 1);
      param_3[param_4 + -1] = '\0';
      fclose(__stream);
      goto LAB_007bac0a;
    }
LAB_007bac00:
    fclose(__stream);
  }
  param_3 = (char *)0x0;
LAB_007bac0a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


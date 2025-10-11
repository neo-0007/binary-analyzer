
long __malloc_default_thp_pagesize(void)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  long in_FS_OFFSET;
  char local_38 [24];
  long local_20;
  
  pcVar5 = local_38;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = __open64_nocancel("/sys/kernel/mm/transparent_hugepage/hpage_pmd_size",0);
  if (iVar2 != -1) {
    lVar3 = __read_nocancel(iVar2,local_38,0x15);
    __close_nocancel(iVar2);
    if (0 < lVar3) {
      lVar4 = 0;
      do {
        cVar1 = *pcVar5;
        if (cVar1 == '\n') break;
        pcVar5 = pcVar5 + 1;
        lVar4 = (long)(cVar1 + -0x30) + lVar4 * 10;
      } while (pcVar5 != local_38 + lVar3);
      goto LAB_007670bf;
    }
  }
  lVar4 = 0;
LAB_007670bf:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


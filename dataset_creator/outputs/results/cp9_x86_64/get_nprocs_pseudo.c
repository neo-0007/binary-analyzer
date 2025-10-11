
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int get_nprocs(void)

{
  int iVar1;
  
  iVar1 = get_nprocs_cpu_online();
  if (iVar1 == 0) {
    iVar1 = get_nproc_stat();
    if (iVar1 == 0) {
      iVar1 = __get_nprocs_sched();
      if (iVar1 == 0) {
        iVar1 = 2;
      }
      return iVar1;
    }
  }
  return iVar1;
}


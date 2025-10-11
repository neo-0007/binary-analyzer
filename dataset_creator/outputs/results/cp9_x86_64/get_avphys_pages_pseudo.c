
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long get_avphys_pages(void)

{
  int iVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  sysinfo sStack_98;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  sysinfo(&sStack_98);
  iVar1 = getpagesize();
  for (uVar2 = (ulong)iVar1; (1 < sStack_98.mem_unit && (1 < uVar2)); uVar2 = uVar2 >> 1) {
    sStack_98.mem_unit = sStack_98.mem_unit >> 1;
  }
  sStack_98.freeram = sStack_98.mem_unit * sStack_98.freeram;
  if (1 < uVar2) {
    do {
      uVar2 = uVar2 >> 1;
      sStack_98.freeram = sStack_98.freeram >> 1;
    } while (uVar2 != 1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return sStack_98.freeram;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



void _dl_protect_relro(long *param_1)

{
  int iVar1;
  void *pvVar2;
  void *__addr;
  long in_FS_OFFSET;
  
  __addr = (void *)(param_1[0x8e] + *param_1 & -_dl_pagesize);
  pvVar2 = (void *)(param_1[0x8e] + *param_1 + param_1[0x8f] & -_dl_pagesize);
  if (__addr != pvVar2) {
    iVar1 = mprotect(__addr,(long)pvVar2 - (long)__addr,1);
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      _dl_signal_error(*(undefined4 *)(in_FS_OFFSET + -0x58),param_1[1],0,
                       "cannot apply additional memory protection after relocation");
    }
  }
  return;
}


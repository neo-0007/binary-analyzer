
/* WARNING: Removing unreachable block (ram,0x006f9310) */
/* WARNING: Removing unreachable block (ram,0x006f934f) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __libc_message_constprop_0(undefined8 param_1,undefined8 param_2,char *param_3)

{
  uint uVar1;
  uint *__addr;
  uint *puVar2;
  size_t __n;
  uint *puVar3;
  undefined1 *puVar4;
  ulong __len;
  
  __n = strlen(param_3);
  syscall();
  __len = _dl_pagesize + 4 + __n & -_dl_pagesize;
  puVar3 = (uint *)mmap64((void *)0x0,__len,3,0x22,-1,0);
  puVar2 = __abort_msg;
  if (puVar3 != (uint *)0xffffffffffffffff) {
    *puVar3 = (uint)__len;
    puVar4 = (undefined1 *)mempcpy(puVar3 + 1,param_3,__n);
    *puVar4 = 0;
    __addr = __abort_msg;
    LOCK();
    UNLOCK();
    puVar2 = puVar3;
    if (__abort_msg != (uint *)0x0) {
      uVar1 = *__abort_msg;
      __abort_msg = puVar3;
      munmap(__addr,(ulong)uVar1);
      puVar2 = __abort_msg;
    }
  }
  __abort_msg = puVar2;
                    /* WARNING: Subroutine does not return */
  abort();
}


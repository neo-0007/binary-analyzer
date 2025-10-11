
/* WARNING: Removing unreachable block (ram,0x00766fe8) */

void * mremap(void *__addr,size_t __old_len,size_t __new_len,int __flags,...)

{
  long in_FS_OFFSET;
  
  syscall();
  if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return (void *)0x19;
}



/* WARNING: Removing unreachable block (ram,0x00765660) */

void * mmap64(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off64_t __offset)

{
  long in_FS_OFFSET;
  
  if ((__offset & 0xfffU) == 0) {
    syscall();
    return (void *)0x9;
  }
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
  return (void *)0xffffffffffffffff;
}


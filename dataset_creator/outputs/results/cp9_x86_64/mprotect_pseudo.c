
/* WARNING: Removing unreachable block (ram,0x007656c4) */

int mprotect(void *__addr,size_t __len,int __prot)

{
  syscall();
  return 10;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__gid_t getegid(void)

{
  syscall();
  return 0x6c;
}


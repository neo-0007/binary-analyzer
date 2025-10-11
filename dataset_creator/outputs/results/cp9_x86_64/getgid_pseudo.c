
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__gid_t getgid(void)

{
  syscall();
  return 0x68;
}


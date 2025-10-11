
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t geteuid(void)

{
  syscall();
  return 0x6b;
}


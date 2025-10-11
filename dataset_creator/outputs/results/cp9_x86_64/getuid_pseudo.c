
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__uid_t getuid(void)

{
  syscall();
  return 0x66;
}


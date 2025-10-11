
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
  syscall();
  return 0x27;
}


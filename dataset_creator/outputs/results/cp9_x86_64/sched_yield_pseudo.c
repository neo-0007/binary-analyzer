
/* WARNING: Removing unreachable block (ram,0x0075fa44) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sched_yield(void)

{
  syscall();
  return 0x18;
}


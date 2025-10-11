
/* WARNING: Removing unreachable block (ram,0x007be948) */

int setitimer(__itimer_which_t __which,itimerval *__new,itimerval *__old)

{
  syscall();
  return 0x26;
}


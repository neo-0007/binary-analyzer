
/* WARNING: Removing unreachable block (ram,0x006ffc18) */
/* WARNING: Removing unreachable block (ram,0x006ffc20) */
/* WARNING: Removing unreachable block (ram,0x006ffc2b) */

void __lll_lock_wait(int *param_1)

{
  int iVar1;
  
  if (*param_1 == 2) goto code_r0x006ffbfa;
  while( true ) {
    LOCK();
    iVar1 = *param_1;
    *param_1 = 2;
    UNLOCK();
    if (iVar1 == 0) break;
code_r0x006ffbfa:
    syscall();
  }
  return;
}


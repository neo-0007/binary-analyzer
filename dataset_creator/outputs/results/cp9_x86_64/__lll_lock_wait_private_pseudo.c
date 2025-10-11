
/* WARNING: Removing unreachable block (ram,0x006ffbb3) */
/* WARNING: Removing unreachable block (ram,0x006ffbbb) */
/* WARNING: Removing unreachable block (ram,0x006ffbc6) */

void __lll_lock_wait_private(int *param_1)

{
  int iVar1;
  
  if (*param_1 == 2) goto code_r0x006ffb97;
  while( true ) {
    LOCK();
    iVar1 = *param_1;
    *param_1 = 2;
    UNLOCK();
    if (iVar1 == 0) break;
code_r0x006ffb97:
    syscall();
  }
  return;
}


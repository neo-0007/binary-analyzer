
/* WARNING: Removing unreachable block (ram,0x00709628) */
/* WARNING: Removing unreachable block (ram,0x00709630) */
/* WARNING: Removing unreachable block (ram,0x0070963b) */

void FUN_007095f0(int *param_1)

{
  int iVar1;
  
  if (*param_1 == 2) goto code_r0x0070960a;
  while( true ) {
    LOCK();
    iVar1 = *param_1;
    *param_1 = 2;
    UNLOCK();
    if (iVar1 == 0) break;
code_r0x0070960a:
    syscall();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x007095c3) */
/* WARNING: Removing unreachable block (ram,0x007095cb) */
/* WARNING: Removing unreachable block (ram,0x007095d6) */

void FUN_00709590(int *param_1)

{
  int iVar1;
  
  if (*param_1 == 2) goto code_r0x007095a7;
  while( true ) {
    LOCK();
    iVar1 = *param_1;
    *param_1 = 2;
    UNLOCK();
    if (iVar1 == 0) break;
code_r0x007095a7:
    syscall();
  }
  return;
}


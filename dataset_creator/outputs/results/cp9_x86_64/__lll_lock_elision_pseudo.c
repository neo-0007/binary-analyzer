
/* WARNING: Removing unreachable block (ram,0x00799080) */
/* WARNING: Removing unreachable block (ram,0x00799084) */
/* WARNING: Removing unreachable block (ram,0x007990b3) */
/* WARNING: Removing unreachable block (ram,0x007990c0) */
/* WARNING: Removing unreachable block (ram,0x00799030) */
/* WARNING: Removing unreachable block (ram,0x00799034) */
/* WARNING: Removing unreachable block (ram,0x0079908e) */
/* WARNING: Removing unreachable block (ram,0x0079909b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 __lll_lock_elision(int *param_1,short *param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*param_2 < 1) {
    iVar1 = _DAT_009320d8;
    if (0 < _DAT_009320d8) {
      do {
        xbegin(0x799044);
        if (*param_1 == 0) {
          return 0;
        }
        xabort(0xff);
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  else {
    *param_2 = *param_2 + -1;
  }
  LOCK();
  iVar1 = *param_1;
  if (iVar1 == 0) {
    *param_1 = 1;
  }
  UNLOCK();
  if (iVar1 == 0) {
    return 0;
  }
  __lll_lock_wait(param_1,param_3);
  return 0;
}


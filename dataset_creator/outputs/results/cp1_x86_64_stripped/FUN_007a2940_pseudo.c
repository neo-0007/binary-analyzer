
/* WARNING: Removing unreachable block (ram,0x007a29b0) */
/* WARNING: Removing unreachable block (ram,0x007a29b4) */
/* WARNING: Removing unreachable block (ram,0x007a29e3) */
/* WARNING: Removing unreachable block (ram,0x007a29f0) */
/* WARNING: Removing unreachable block (ram,0x007a2960) */
/* WARNING: Removing unreachable block (ram,0x007a2964) */
/* WARNING: Removing unreachable block (ram,0x007a29be) */
/* WARNING: Removing unreachable block (ram,0x007a29cb) */

undefined8 FUN_007a2940(int *param_1,short *param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*param_2 < 1) {
    iVar1 = DAT_0093f0b8;
    if (0 < DAT_0093f0b8) {
      do {
        xbegin(0x7a2974);
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
  FUN_007095f0(param_1,param_3);
  return 0;
}


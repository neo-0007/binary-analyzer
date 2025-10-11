
void FUN_007cd7c0(void)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  
  pauVar3 = DAT_0094b400;
  if (DAT_0094b400 != (undefined1 (*) [16])0x0) {
    plVar1 = *(long **)DAT_0094b400[2];
    if (plVar1 != (long *)0x0) {
      if (*plVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_007af000();
      }
      lVar2 = *plVar1 + -1;
      if (lVar2 == 0) {
        FUN_007104f0();
        pauVar3 = DAT_0094b400;
      }
      else {
        *plVar1 = lVar2;
      }
      *(undefined8 *)pauVar3[2] = 0;
    }
    FUN_007104f0(*(undefined8 *)pauVar3[1]);
    *(undefined8 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
    FUN_007104f0(DAT_0094b400);
    DAT_0094b400 = (undefined1 (*) [16])0x0;
  }
  return;
}


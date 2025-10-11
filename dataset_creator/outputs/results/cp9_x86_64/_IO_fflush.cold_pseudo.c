
void _IO_fflush_cold(void)

{
  int iVar1;
  int *piVar2;
  uint *unaff_RBX;
  
  if ((*unaff_RBX & 0x8000) == 0) {
    piVar2 = *(int **)(unaff_RBX + 0x22);
    iVar1 = piVar2[1];
    piVar2[1] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      piVar2[2] = 0;
      piVar2[3] = 0;
      LOCK();
      iVar1 = *piVar2;
      *piVar2 = 0;
      UNLOCK();
      if (1 < iVar1) {
        __lll_lock_wake_private();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume();
}


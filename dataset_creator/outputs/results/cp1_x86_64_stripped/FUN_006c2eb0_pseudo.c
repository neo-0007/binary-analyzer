
void FUN_006c2eb0(void)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  
  plVar2 = (long *)FUN_006c2f90();
  lVar1 = *plVar2;
  if (lVar1 != 0) {
    if (1 < *(long *)(lVar1 + 0x50) + 0xb8b1aabcbcd4d500U) {
      *plVar2 = 0;
      FUN_006cd8c0(lVar1 + 0x50);
      return;
    }
    iVar3 = *(int *)(lVar1 + 0x28);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 1;
      if (iVar3 == 0) {
        *plVar2 = *(long *)(lVar1 + 0x20);
      }
    }
    else {
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) {
        *plVar2 = *(long *)(lVar1 + 0x20);
        FUN_006cd8c0(lVar1 + 0x50);
        return;
      }
      if (iVar3 == -1) {
                    /* WARNING: Subroutine does not return */
        FUN_00623f30();
      }
    }
    *(int *)(lVar1 + 0x28) = iVar3;
  }
  return;
}


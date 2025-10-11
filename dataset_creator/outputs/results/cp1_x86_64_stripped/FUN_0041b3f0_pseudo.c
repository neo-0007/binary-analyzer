
void FUN_0041b3f0(long *param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    *(long *)(lVar1 + 8) = param_1[1];
  }
  *(long *)param_1[1] = lVar1;
  if (*param_1 != 0) {
    uVar2 = *(ulong *)(*param_1 + 8);
    if ((DAT_0093fcc0 <= uVar2) && (uVar2 < DAT_0093fcc0 + DAT_0093fcc8 * 8)) {
      return;
    }
    if ((uVar2 < DAT_0093fcb0) || (DAT_0093fcb0 + DAT_0093fcb8 <= uVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_00418e30("assertion failed: WITHIN_FREELIST(temp2->p_next) || WITHIN_ARENA(temp2->p_next)"
                   ,"../crypto/mem_sec.c",0x181);
    }
  }
  return;
}


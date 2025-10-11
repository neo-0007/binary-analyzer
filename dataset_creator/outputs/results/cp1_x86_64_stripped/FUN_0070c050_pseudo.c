
void FUN_0070c050(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((param_1[1] & 2U) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0070bf60("chunk_is_mmapped (p)","malloc.c",0xbe8,"munmap_chunk");
  }
  uVar1 = *param_1 + (param_1[1] & 0xfffffffffffffff8U);
  uVar2 = (ulong)(param_1 + 2) & DAT_0093eb18 - 1U;
  if ((DAT_0093eb18 - 1U & ((long)param_1 - *param_1 | uVar1)) == 0 && (uVar2 - 1 & uVar2) == 0) {
    LOCK();
    DAT_0093e0fc = DAT_0093e0fc + -1;
    UNLOCK();
    LOCK();
    DAT_0093e110 = DAT_0093e110 - uVar1;
    UNLOCK();
    FUN_0076f080((long)param_1 - *param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0070bdd0("munmap_chunk(): invalid pointer");
}


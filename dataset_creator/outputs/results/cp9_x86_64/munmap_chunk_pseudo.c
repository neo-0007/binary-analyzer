
void munmap_chunk(long *param_1)

{
  ulong __len;
  ulong uVar1;
  
  if ((param_1[1] & 2U) == 0) {
                    /* WARNING: Subroutine does not return */
    __malloc_assert("chunk_is_mmapped (p)","malloc.c",0xbe8,"munmap_chunk");
  }
  __len = *param_1 + (param_1[1] & 0xfffffffffffffff8U);
  uVar1 = (ulong)(param_1 + 2) & _dl_pagesize - 1U;
  if ((_dl_pagesize - 1U & ((ulong)((long)param_1 - *param_1) | __len)) == 0 &&
      (uVar1 - 1 & uVar1) == 0) {
    LOCK();
    DAT_0093111c = DAT_0093111c + -1;
    UNLOCK();
    LOCK();
    DAT_00931130 = DAT_00931130 - __len;
    UNLOCK();
    munmap((void *)((long)param_1 - *param_1),__len);
    return;
  }
                    /* WARNING: Subroutine does not return */
  malloc_printerr("munmap_chunk(): invalid pointer");
}


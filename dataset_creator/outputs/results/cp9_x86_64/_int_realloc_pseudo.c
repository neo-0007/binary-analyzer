
void * _int_realloc(undefined4 *param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  void *__dest;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar2 = *(ulong *)(param_2 + 8);
  if ((uVar2 < 0x11) || (*(ulong *)(param_1 + 0x222) <= param_3)) {
                    /* WARNING: Subroutine does not return */
    malloc_printerr("realloc(): invalid old size");
  }
  if ((uVar2 & 2) != 0) {
                    /* WARNING: Subroutine does not return */
    __malloc_assert("!chunk_is_mmapped (oldp)","malloc.c",0x12e4,"_int_realloc");
  }
  lVar1 = param_2 + param_3;
  uVar3 = *(ulong *)(lVar1 + 8) & 0xfffffffffffffff8;
  if ((*(ulong *)(param_1 + 0x222) <= uVar3) || (*(ulong *)(lVar1 + 8) < 0x11)) {
                    /* WARNING: Subroutine does not return */
    malloc_printerr("realloc(): invalid next size");
  }
  uVar4 = param_3;
  lVar5 = lVar1;
  if (param_3 < param_4) {
    if (*(long *)(param_1 + 0x18) == lVar1) {
      if (param_4 + 0x20 <= uVar3 + param_3) {
        *(ulong *)(param_2 + 8) =
             (ulong)((uint)uVar2 & 7) | (ulong)(param_1 != &main_arena) << 2 | param_4;
        *(ulong *)(param_1 + 0x18) = param_2 + param_4;
        *(ulong *)(param_2 + param_4 + 8) = (uVar3 + param_3) - param_4 | 1;
        return (void *)(param_2 + 0x10);
      }
    }
    else if (((*(byte *)(lVar1 + 8 + uVar3) & 1) == 0) &&
            (uVar4 = param_3 + uVar3, param_4 <= uVar4)) {
      lVar5 = param_2 + uVar4;
      unlink_chunk_constprop_0(lVar1);
      uVar2 = *(ulong *)(param_2 + 8);
      goto LAB_007061d7;
    }
    __dest = (void *)_int_malloc(param_1,param_4 - 0xf);
    if (__dest == (void *)0x0) {
      return (void *)0x0;
    }
    if (lVar1 != (long)__dest + -0x10) {
      memcpy(__dest,(void *)(param_2 + 0x10),
             ((*(ulong *)(param_2 + 8) & 0xfffffffffffffff8) - 0x10) +
             (ulong)(((uint)(*(ulong *)(param_2 + 8) >> 1) ^ 1) & 1) * 8);
      _int_free(param_1,param_2,1);
      return __dest;
    }
    uVar4 = param_3 + (*(ulong *)((long)__dest + -8) & 0xfffffffffffffff8);
    if (uVar4 < param_4) {
                    /* WARNING: Subroutine does not return */
      __malloc_assert("(unsigned long) (newsize) >= (unsigned long) (nb)","malloc.c",0x132d,
                      "_int_realloc");
    }
    uVar2 = *(ulong *)(param_2 + 8);
    lVar5 = param_2 + uVar4;
  }
LAB_007061d7:
  uVar3 = (ulong)(param_1 != &main_arena) << 2;
  uVar2 = (uint)uVar2 & 7 | uVar3;
  if (uVar4 - param_4 < 0x20) {
    *(ulong *)(param_2 + 8) = uVar4 | uVar2;
    *(ulong *)(lVar5 + 8) = *(ulong *)(lVar5 + 8) | 1;
  }
  else {
    *(ulong *)(param_2 + 8) = param_4 | uVar2;
    *(ulong *)(param_2 + param_4 + 8) = uVar4 - param_4 | uVar3 | 1;
    *(ulong *)(lVar5 + 8) = *(ulong *)(lVar5 + 8) | 1;
    _int_free(param_1,param_2 + param_4,1);
  }
  return (void *)(param_2 + 0x10);
}


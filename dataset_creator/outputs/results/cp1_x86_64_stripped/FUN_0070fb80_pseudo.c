
long FUN_0070fb80(undefined4 *param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = *(ulong *)(param_2 + 8);
  if ((uVar2 < 0x11) || (*(ulong *)(param_1 + 0x222) <= param_3)) {
                    /* WARNING: Subroutine does not return */
    FUN_0070bdd0("realloc(): invalid old size");
  }
  if ((uVar2 & 2) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0070bf60("!chunk_is_mmapped (oldp)","malloc.c",0x12e4,"_int_realloc");
  }
  lVar1 = param_2 + param_3;
  uVar4 = *(ulong *)(lVar1 + 8) & 0xfffffffffffffff8;
  if ((*(ulong *)(param_1 + 0x222) <= uVar4) || (*(ulong *)(lVar1 + 8) < 0x11)) {
                    /* WARNING: Subroutine does not return */
    FUN_0070bdd0("realloc(): invalid next size");
  }
  uVar5 = param_3;
  lVar3 = lVar1;
  if (param_3 < param_4) {
    if (*(long *)(param_1 + 0x18) == lVar1) {
      if (param_4 + 0x20 <= uVar4 + param_3) {
        *(ulong *)(param_2 + 8) =
             (ulong)((uint)uVar2 & 7) | (ulong)(param_1 != &DAT_0093e160) << 2 | param_4;
        *(ulong *)(param_1 + 0x18) = param_2 + param_4;
        *(ulong *)(param_2 + param_4 + 8) = (uVar4 + param_3) - param_4 | 1;
        return param_2 + 0x10;
      }
    }
    else if (((*(byte *)(lVar1 + 8 + uVar4) & 1) == 0) &&
            (uVar5 = param_3 + uVar4, param_4 <= uVar5)) {
      lVar3 = param_2 + uVar5;
      FUN_0070c8e0(lVar1);
      uVar2 = *(ulong *)(param_2 + 8);
      goto LAB_0070fbe7;
    }
    lVar3 = FUN_0070eae0(param_1,param_4 - 0xf);
    if (lVar3 == 0) {
      return 0;
    }
    if (lVar1 != lVar3 + -0x10) {
      thunk_FUN_00713a50(lVar3,param_2 + 0x10,
                         ((*(ulong *)(param_2 + 8) & 0xfffffffffffffff8) - 0x10) +
                         (ulong)(((uint)(*(ulong *)(param_2 + 8) >> 1) ^ 1) & 1) * 8);
      FUN_0070cb80(param_1,param_2,1);
      return lVar3;
    }
    uVar5 = param_3 + (*(ulong *)(lVar3 + -8) & 0xfffffffffffffff8);
    if (uVar5 < param_4) {
                    /* WARNING: Subroutine does not return */
      FUN_0070bf60("(unsigned long) (newsize) >= (unsigned long) (nb)","malloc.c",0x132d,
                   "_int_realloc");
    }
    uVar2 = *(ulong *)(param_2 + 8);
    lVar3 = param_2 + uVar5;
  }
LAB_0070fbe7:
  uVar4 = (ulong)(param_1 != &DAT_0093e160) << 2;
  uVar2 = (uint)uVar2 & 7 | uVar4;
  if (uVar5 - param_4 < 0x20) {
    *(ulong *)(param_2 + 8) = uVar5 | uVar2;
    *(ulong *)(lVar3 + 8) = *(ulong *)(lVar3 + 8) | 1;
  }
  else {
    *(ulong *)(param_2 + 8) = param_4 | uVar2;
    *(ulong *)(param_2 + param_4 + 8) = uVar5 - param_4 | uVar4 | 1;
    *(ulong *)(lVar3 + 8) = *(ulong *)(lVar3 + 8) | 1;
    FUN_0070cb80(param_1,param_2 + param_4,1);
  }
  return param_2 + 0x10;
}


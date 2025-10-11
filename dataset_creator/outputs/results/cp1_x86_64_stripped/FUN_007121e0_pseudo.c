
undefined8 FUN_007121e0(long *param_1,ulong param_2,long param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  int *piVar5;
  long in_FS_OFFSET;
  
  if (DAT_0094a9a8 == '\0') {
    FUN_0070d5c0();
  }
  if ((((param_2 >> 3) - 1 & param_2 >> 3) != 0 || (param_2 & 7) != 0) || (param_2 == 0)) {
    return 0x16;
  }
  if (param_2 < 0x11) {
    lVar2 = FUN_007101b0(param_3);
    if (lVar2 == 0) {
      return 0xc;
    }
    goto LAB_00712390;
  }
  if (param_2 < 0x20) {
    uVar3 = 0x20;
  }
  else {
    if (0x8000000000000000 < param_2) {
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
      return 0xc;
    }
    uVar3 = param_2;
    if (((param_2 - 1 & param_2) != 0) && (uVar3 = 0x20, param_2 != 0x20)) {
      do {
        uVar3 = uVar3 * 2;
      } while (uVar3 < param_2);
    }
  }
  if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
    lVar2 = FUN_0070fde0(&DAT_0093e160,uVar3,param_3);
    if (lVar2 == 0) {
      return 0xc;
    }
    if (((*(ulong *)(lVar2 + -8) & 2) == 0) && ((*(ulong *)(lVar2 + -8) & 4) != 0)) {
      uVar3 = DAT_0093e0f0 * -4;
      if (DAT_0093e0f0 == 0) {
        uVar3 = 0xfffffffffc000000;
      }
      if (*(undefined4 **)(uVar3 & lVar2 - 0x10U) != &DAT_0093e160) {
                    /* WARNING: Subroutine does not return */
        FUN_0070bf60("!p || chunk_is_mmapped (mem2chunk (p)) || &main_arena == arena_for_chunk (mem2chunk (p))"
                     ,"malloc.c",0xdeb,"_mid_memalign");
      }
    }
    goto LAB_00712390;
  }
  piVar4 = *(int **)(in_FS_OFFSET + -0x20);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)FUN_0070c180();
    if (piVar4 != (int *)0x0) goto LAB_00712278;
    piVar4 = (int *)FUN_0070dad0(uVar3 + 0x20 + param_3,0);
    lVar2 = FUN_0070fde0(piVar4,uVar3,param_3);
    if (lVar2 != 0) goto LAB_007124a0;
    if (piVar4 != (int *)0x0) goto code_r0x00712481;
  }
  else {
    LOCK();
    iVar1 = *piVar4;
    if (iVar1 == 0) {
      *piVar4 = 1;
    }
    UNLOCK();
    if (iVar1 != 0) {
      FUN_00709590(piVar4);
    }
LAB_00712278:
    lVar2 = FUN_0070fde0(piVar4,uVar3,param_3);
    if (lVar2 == 0) {
code_r0x00712481:
      piVar4 = (int *)FUN_0070dfc0(piVar4,param_3);
      lVar2 = FUN_0070fde0(piVar4,uVar3,param_3);
LAB_007124a0:
      if (piVar4 == (int *)0x0) goto LAB_007122a0;
    }
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = 0;
    UNLOCK();
    if (1 < iVar1) {
      FUN_00709660(piVar4);
    }
  }
LAB_007122a0:
  if (lVar2 == 0) {
    return 0xc;
  }
  if ((*(ulong *)(lVar2 + -8) & 2) == 0) {
    piVar5 = &DAT_0093e160;
    if ((*(ulong *)(lVar2 + -8) & 4) != 0) {
      uVar3 = DAT_0093e0f0 * -4;
      if (DAT_0093e0f0 == 0) {
        uVar3 = 0xfffffffffc000000;
      }
      piVar5 = *(int **)(uVar3 & lVar2 - 0x10U);
    }
    if (piVar5 != piVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_0070bf60("!p || chunk_is_mmapped (mem2chunk (p)) || ar_ptr == arena_for_chunk (mem2chunk (p))"
                   ,"malloc.c",0xdfd,"_mid_memalign");
    }
  }
LAB_00712390:
  *param_1 = lVar2;
  return 0;
}


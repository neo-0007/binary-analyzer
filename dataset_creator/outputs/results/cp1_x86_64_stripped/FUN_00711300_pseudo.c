
long FUN_00711300(ulong param_1)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  
  if (DAT_0094a9a8 == '\0') {
    FUN_0070d5c0();
  }
  uVar5 = DAT_0093eb18 - 1;
  if (CARRY8(param_1,uVar5)) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
    return 0;
  }
  uVar7 = 1 - DAT_0093eb18 & param_1 + uVar5;
  if (DAT_0093eb18 < 0x11) {
    lVar2 = FUN_007101b0(uVar7);
    return lVar2;
  }
  if (DAT_0093eb18 < 0x20) {
    uVar6 = 0x20;
  }
  else {
    if (0x8000000000000000 < DAT_0093eb18) {
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
      return 0;
    }
    uVar6 = DAT_0093eb18;
    if (((uVar5 & DAT_0093eb18) != 0) && (uVar6 = 0x20, DAT_0093eb18 != 0x20)) {
      do {
        uVar6 = uVar6 * 2;
      } while (uVar6 < DAT_0093eb18);
    }
  }
  if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
    lVar2 = FUN_0070fde0(&DAT_0093e160,uVar6,uVar7);
    if (lVar2 == 0) {
      return 0;
    }
    if ((*(ulong *)(lVar2 + -8) & 2) != 0) {
      return lVar2;
    }
    if ((*(ulong *)(lVar2 + -8) & 4) == 0) {
      return lVar2;
    }
    uVar5 = DAT_0093e0f0 * -4;
    if (DAT_0093e0f0 == 0) {
      uVar5 = 0xfffffffffc000000;
    }
    if (*(undefined4 **)(uVar5 & lVar2 - 0x10U) == &DAT_0093e160) {
      return lVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0070bf60("!p || chunk_is_mmapped (mem2chunk (p)) || &main_arena == arena_for_chunk (mem2chunk (p))"
                 ,"malloc.c",0xdeb,"_mid_memalign");
  }
  piVar3 = *(int **)(in_FS_OFFSET + -0x20);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)FUN_0070c180();
    if (piVar3 != (int *)0x0) goto LAB_0071138d;
    piVar3 = (int *)FUN_0070dad0(uVar7 + 0x20 + uVar6,0);
    lVar2 = FUN_0070fde0(piVar3,uVar6,uVar7);
    if (lVar2 == 0) {
      if (piVar3 == (int *)0x0) goto LAB_007113b3;
      goto code_r0x00711549;
    }
LAB_00711565:
    if (piVar3 == (int *)0x0) goto LAB_007113b3;
  }
  else {
    LOCK();
    iVar1 = *piVar3;
    if (iVar1 == 0) {
      *piVar3 = 1;
    }
    UNLOCK();
    if (iVar1 != 0) {
      FUN_00709590(piVar3);
    }
LAB_0071138d:
    lVar2 = FUN_0070fde0(piVar3,uVar6,uVar7);
    if (lVar2 == 0) {
code_r0x00711549:
      piVar3 = (int *)FUN_0070dfc0(piVar3,uVar7);
      lVar2 = FUN_0070fde0(piVar3,uVar6,uVar7);
      goto LAB_00711565;
    }
  }
  LOCK();
  iVar1 = *piVar3;
  *piVar3 = 0;
  UNLOCK();
  if (1 < iVar1) {
    FUN_00709660(piVar3);
  }
LAB_007113b3:
  if (lVar2 == 0) {
    return 0;
  }
  if ((*(ulong *)(lVar2 + -8) & 2) == 0) {
    piVar4 = &DAT_0093e160;
    if ((*(ulong *)(lVar2 + -8) & 4) != 0) {
      uVar5 = DAT_0093e0f0 * -4;
      if (DAT_0093e0f0 == 0) {
        uVar5 = 0xfffffffffc000000;
      }
      piVar4 = *(int **)(uVar5 & lVar2 - 0x10U);
    }
    if (piVar4 != piVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_0070bf60("!p || chunk_is_mmapped (mem2chunk (p)) || ar_ptr == arena_for_chunk (mem2chunk (p))"
                   ,"malloc.c",0xdfd,"_mid_memalign");
    }
  }
  return lVar2;
}


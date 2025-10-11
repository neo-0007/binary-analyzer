
ulong * FUN_007101b0(long param_1)

{
  int iVar1;
  short sVar2;
  ulong *puVar3;
  int *piVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  long in_FS_OFFSET;
  
  if (DAT_0094a9a8 == '\0') {
    FUN_0070d5c0();
  }
  if (param_1 < 0) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
    return (ulong *)0x0;
  }
  uVar6 = 0;
  if (0x1f < param_1 + 0x17U) {
    uVar6 = (param_1 + 0x17U & 0xfffffffffffffff0) - 0x11 >> 4;
  }
  lVar7 = *(long *)(in_FS_OFFSET + -0x30);
  if (lVar7 == 0) {
    if (((*(char *)(in_FS_OFFSET + -0x28) == '\0') && (FUN_0070fa60(), uVar6 < DAT_0093e128)) &&
       (lVar7 = *(long *)(in_FS_OFFSET + -0x30), lVar7 != 0)) goto LAB_00710310;
  }
  else if (uVar6 < DAT_0093e128) {
LAB_00710310:
    sVar2 = *(short *)(lVar7 + uVar6 * 2);
    if (sVar2 != 0) {
      puVar3 = *(ulong **)(lVar7 + (uVar6 + 0x10) * 8);
      if (((ulong)puVar3 & 0xf) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0070bdd0("malloc(): unaligned tcache chunk detected");
      }
      *(ulong *)(lVar7 + (uVar6 + 0x10) * 8) = (ulong)puVar3 >> 0xc ^ *puVar3;
      *(short *)(lVar7 + uVar6 * 2) = sVar2 + -1;
      puVar3[1] = 0;
      return puVar3;
    }
  }
  if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
    puVar3 = (ulong *)FUN_0070eae0(&DAT_0093e160,param_1);
    if (puVar3 == (ulong *)0x0) {
      return (ulong *)0x0;
    }
    if ((puVar3[-1] & 2) != 0) {
      return puVar3;
    }
    if ((puVar3[-1] & 4) == 0) {
      return puVar3;
    }
    uVar6 = DAT_0093e0f0 * -4;
    if (DAT_0093e0f0 == 0) {
      uVar6 = 0xfffffffffc000000;
    }
    if (*(undefined4 **)(uVar6 & (ulong)(puVar3 + -2)) == &DAT_0093e160) {
      return puVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0070bf60("!victim || chunk_is_mmapped (mem2chunk (victim)) || &main_arena == arena_for_chunk (mem2chunk (victim))"
                 ,"malloc.c",0xcfa,"__libc_malloc");
  }
  piVar4 = *(int **)(in_FS_OFFSET + -0x20);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)FUN_0070c180();
    if (piVar4 != (int *)0x0) goto LAB_0071023b;
    piVar4 = (int *)FUN_0070dad0(param_1,0);
    puVar3 = (ulong *)FUN_0070eae0(piVar4,param_1);
    if (puVar3 == (ulong *)0x0) {
      if (piVar4 == (int *)0x0) goto LAB_0071025e;
      goto code_r0x00710461;
    }
LAB_0071047a:
    if (piVar4 == (int *)0x0) goto LAB_0071025e;
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
LAB_0071023b:
    puVar3 = (ulong *)FUN_0070eae0(piVar4,param_1);
    if (puVar3 == (ulong *)0x0) {
code_r0x00710461:
      piVar4 = (int *)FUN_0070dfc0(piVar4,param_1);
      puVar3 = (ulong *)FUN_0070eae0(piVar4,param_1);
      goto LAB_0071047a;
    }
  }
  LOCK();
  iVar1 = *piVar4;
  *piVar4 = 0;
  UNLOCK();
  if (1 < iVar1) {
    FUN_00709660(piVar4);
  }
LAB_0071025e:
  if (puVar3 == (ulong *)0x0) {
    return (ulong *)0x0;
  }
  if ((puVar3[-1] & 2) == 0) {
    piVar5 = &DAT_0093e160;
    if ((puVar3[-1] & 4) != 0) {
      uVar6 = DAT_0093e0f0 * -4;
      if (DAT_0093e0f0 == 0) {
        uVar6 = 0xfffffffffc000000;
      }
      piVar5 = *(int **)(uVar6 & (ulong)(puVar3 + -2));
    }
    if (piVar5 != piVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_0070bf60("!victim || chunk_is_mmapped (mem2chunk (victim)) || ar_ptr == arena_for_chunk (mem2chunk (victim))"
                   ,"malloc.c",0xd10,"__libc_malloc");
    }
  }
  return puVar3;
}


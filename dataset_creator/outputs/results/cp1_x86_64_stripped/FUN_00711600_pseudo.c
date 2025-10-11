
undefined1 (*) [16] FUN_00711600(ulong param_1,ulong param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong uVar4;
  undefined1 (*pauVar5) [16];
  int *piVar6;
  undefined1 (*pauVar7) [16];
  ulong uVar8;
  int *piVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2;
  uVar4 = SUB168(auVar2 * auVar3,0);
  if (((long)uVar4 < 0) || (SUB168(auVar2 * auVar3,8) != 0)) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
    return (undefined1 (*) [16])0x0;
  }
  if (DAT_0094a9a8 == '\0') {
    FUN_0070d5c0();
  }
  if ((*(long *)(in_FS_OFFSET + -0x30) == 0) && (*(char *)(in_FS_OFFSET + -0x28) == '\0')) {
    FUN_0070fa60();
  }
  if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
    piVar6 = &DAT_0093e160;
    uVar10 = *(ulong *)(*DAT_0093e1c0 + 8) & 0xfffffffffffffff8;
    pauVar7 = DAT_0093e1c0;
  }
  else {
    piVar6 = *(int **)(in_FS_OFFSET + -0x20);
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)FUN_0070c180();
      if ((piVar6 == (int *)0x0) && (piVar6 = (int *)FUN_0070dad0(uVar4,0), piVar6 == (int *)0x0)) {
        uVar10 = 0;
        pauVar7 = (undefined1 (*) [16])0x0;
        goto LAB_007116cc;
      }
    }
    else {
      LOCK();
      iVar1 = *piVar6;
      if (iVar1 == 0) {
        *piVar6 = 1;
      }
      UNLOCK();
      if (iVar1 != 0) {
        FUN_00709590(piVar6);
      }
    }
    pauVar7 = *(undefined1 (**) [16])(piVar6 + 0x18);
    uVar10 = *(ulong *)(*pauVar7 + 8) & 0xfffffffffffffff8;
    if (piVar6 != &DAT_0093e160) {
      uVar8 = DAT_0093e0f0 * -4;
      if (DAT_0093e0f0 == 0) {
        uVar8 = 0xfffffffffc000000;
      }
      uVar8 = ((uVar8 & (ulong)pauVar7) + *(long *)((uVar8 & (ulong)pauVar7) + 0x18)) -
              (long)pauVar7;
      if (uVar10 < uVar8) {
        uVar10 = uVar8;
      }
    }
  }
LAB_007116cc:
  pauVar5 = (undefined1 (*) [16])FUN_0070eae0(piVar6,uVar4);
  if ((pauVar5 != (undefined1 (*) [16])0x0) && ((*(ulong *)(pauVar5[-1] + 8) & 2) == 0)) {
    piVar9 = &DAT_0093e160;
    if ((*(ulong *)(pauVar5[-1] + 8) & 4) != 0) {
      uVar8 = DAT_0093e0f0 * -4;
      if (DAT_0093e0f0 == 0) {
        uVar8 = 0xfffffffffc000000;
      }
      piVar9 = *(int **)(uVar8 & (ulong)(pauVar5 + -1));
    }
    if (piVar9 != piVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_0070bf60("!mem || chunk_is_mmapped (mem2chunk (mem)) || av == arena_for_chunk (mem2chunk (mem))"
                   ,"malloc.c",0xe61,"__libc_calloc");
    }
  }
  if (*(int *)(in_FS_OFFSET + 0x18) != 0) {
    if (pauVar5 == (undefined1 (*) [16])0x0) {
      if (piVar6 == (int *)0x0) goto LAB_00711720;
      piVar6 = (int *)FUN_0070dfc0(piVar6,uVar4);
      pauVar5 = (undefined1 (*) [16])FUN_0070eae0(piVar6,uVar4);
    }
    if (piVar6 != (int *)0x0) {
      LOCK();
      iVar1 = *piVar6;
      *piVar6 = 0;
      UNLOCK();
      if (1 < iVar1) {
        FUN_00709660(piVar6);
      }
    }
  }
LAB_00711720:
  if (pauVar5 != (undefined1 (*) [16])0x0) {
    if ((*(ulong *)(pauVar5[-1] + 8) & 2) == 0) {
      uVar8 = *(ulong *)(pauVar5[-1] + 8) & 0xfffffffffffffff8;
      uVar4 = uVar8;
      if (DAT_0094a9bc == 0) {
        if (uVar10 <= uVar8) {
          uVar4 = uVar10;
        }
        if (pauVar7 != pauVar5 + -1) {
          uVar4 = uVar8;
        }
      }
      uVar4 = uVar4 - 8;
      if (uVar4 < 0x18) {
                    /* WARNING: Subroutine does not return */
        FUN_0070bf60("nclears >= 3","malloc.c",0xe96,"__libc_calloc");
      }
      if (0x4f < uVar4) goto LAB_007118a0;
      *(undefined8 *)pauVar5[1] = 0;
      *pauVar5 = (undefined1  [16])0x0;
      if (((0x27 < uVar4) &&
          (*(undefined1 (*) [16])(pauVar5[1] + 8) = (undefined1  [16])0x0, 0x37 < uVar4)) &&
         (*(undefined1 (*) [16])(pauVar5[2] + 8) = (undefined1  [16])0x0, 0x47 < uVar4)) {
        *(undefined1 (*) [16])(pauVar5[3] + 8) = (undefined1  [16])0x0;
      }
    }
    else if (DAT_0094a9bc != 0) {
LAB_007118a0:
      pauVar7 = (undefined1 (*) [16])thunk_FUN_00713720(pauVar5,0,uVar4);
      return pauVar7;
    }
  }
  return pauVar5;
}



undefined4 switchD_006ec484::caseD_25(void)

{
  int *piVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  long unaff_RBP;
  long in_R10;
  uint *unaff_R15;
  long in_FS_OFFSET;
  
  *(undefined4 *)(in_FS_OFFSET + in_R10) = *(undefined4 *)(unaff_RBP + -0x600);
  iVar6 = -1;
  if (*(int *)(unaff_RBP + -0x640) != 0) {
    iVar6 = *(int *)(unaff_RBP + -0x640);
  }
  *(int *)(unaff_RBP + -0x640) = iVar6;
  if ((*unaff_R15 & 0x8000) == 0) {
    piVar1 = *(int **)(unaff_R15 + 0x22);
    iVar6 = piVar1[1];
    piVar1[1] = iVar6 + -1;
    if (iVar6 + -1 == 0) {
      piVar1[2] = 0;
      piVar1[3] = 0;
      LOCK();
      iVar6 = *piVar1;
      *piVar1 = 0;
      UNLOCK();
      if (1 < iVar6) {
        __lll_lock_wake_private();
      }
    }
  }
  __libc_cleanup_pop_restore(*(undefined8 *)(unaff_RBP + -0x6b0));
  if (*(void **)(unaff_RBP + -0x460) != *(void **)(unaff_RBP + -0x6a8)) {
    free(*(void **)(unaff_RBP + -0x460));
  }
  if (*(int *)(unaff_RBP + -0x640) == -1) {
    puVar2 = *(ulong **)(unaff_RBP + -0x6d0);
    puVar3 = *(ulong **)(unaff_RBP + -0x6d0);
    while (puVar3 != (ulong *)0x0) {
      uVar7 = 0;
      if (*puVar2 != 0) {
        do {
          free(*(void **)puVar2[uVar7 + 2]);
          lVar5 = uVar7 + 2;
          uVar7 = uVar7 + 1;
          *(undefined8 *)puVar2[lVar5] = 0;
        } while (uVar7 < *puVar2);
      }
      puVar2 = (ulong *)puVar2[1];
      puVar3 = puVar2;
    }
    *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
  }
  else if (*(long *)(unaff_RBP + -0x670) != 0) {
    puVar4 = *(undefined8 **)(unaff_RBP + -0x670);
    free((void *)*puVar4);
    *puVar4 = 0;
  }
  if (*(long *)(unaff_RBP + -0x38) == *(long *)(in_FS_OFFSET + 0x28)) {
    return *(undefined4 *)(unaff_RBP + -0x640);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



undefined4 FUN_006f9df5(void)

{
  int iVar1;
  int *piVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long unaff_RBP;
  uint *unaff_R15;
  long in_FS_OFFSET;
  
  if ((*unaff_R15 & 0x8000) == 0) {
    piVar2 = *(int **)(unaff_R15 + 0x22);
    iVar1 = piVar2[1];
    piVar2[1] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      piVar2[2] = 0;
      piVar2[3] = 0;
      LOCK();
      iVar1 = *piVar2;
      *piVar2 = 0;
      UNLOCK();
      if (1 < iVar1) {
        FUN_00709660();
      }
    }
  }
  FUN_00709560(*(undefined8 *)(unaff_RBP + -0x6b0));
  if (*(long *)(unaff_RBP + -0x460) != *(long *)(unaff_RBP + -0x6a8)) {
    FUN_007104f0();
  }
  if (*(int *)(unaff_RBP + -0x640) == -1) {
    puVar3 = *(ulong **)(unaff_RBP + -0x6d0);
    puVar4 = *(ulong **)(unaff_RBP + -0x6d0);
    while (puVar4 != (ulong *)0x0) {
      uVar7 = 0;
      if (*puVar3 != 0) {
        do {
          FUN_007104f0(*(undefined8 *)puVar3[uVar7 + 2]);
          lVar6 = uVar7 + 2;
          uVar7 = uVar7 + 1;
          *(undefined8 *)puVar3[lVar6] = 0;
        } while (uVar7 < *puVar3);
      }
      puVar3 = (ulong *)puVar3[1];
      puVar4 = puVar3;
    }
    *(undefined4 *)(unaff_RBP + -0x640) = 0xffffffff;
  }
  else if (*(long *)(unaff_RBP + -0x670) != 0) {
    puVar5 = *(undefined8 **)(unaff_RBP + -0x670);
    FUN_007104f0(*puVar5);
    *puVar5 = 0;
  }
  if (*(long *)(unaff_RBP + -0x38) == *(long *)(in_FS_OFFSET + 0x28)) {
    return *(undefined4 *)(unaff_RBP + -0x640);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


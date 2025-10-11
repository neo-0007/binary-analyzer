
/* WARNING: Removing unreachable block (ram,0x0065efe0) */

long * FUN_0065eee0(void)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long *in_RCX;
  int in_R8D;
  long *plVar5;
  long in_FS_OFFSET;
  bool bVar6;
  undefined1 auVar7 [12];
  uint *in_stack_00000008;
  long in_stack_00000010;
  int local_48;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  auVar7 = FUN_0065ec00();
  plVar4 = auVar7._0_8_;
  iVar3 = local_48 + -0x76c;
  if (local_48 < 0) {
    iVar3 = local_48 + 100;
  }
  *(int *)(in_stack_00000010 + 0x14) = iVar3;
  bVar6 = auVar7._8_4_ == -1;
  bVar2 = plVar4 != (long *)0x0 && bVar6;
  plVar5 = plVar4;
  if (bVar2) {
    if ((int *)plVar4[2] < (int *)plVar4[3]) {
      iVar3 = *(int *)plVar4[2];
    }
    else {
      iVar3 = (**(code **)(*plVar4 + 0x48))(plVar4);
    }
    bVar6 = iVar3 == -1 && bVar2;
    plVar5 = (long *)0x0;
    if (iVar3 != -1) {
      plVar5 = plVar4;
    }
  }
  bVar2 = in_R8D == -1;
  if ((in_RCX != (long *)0x0) && (bVar2)) {
    if ((int *)in_RCX[2] < (int *)in_RCX[3]) {
      iVar3 = *(int *)in_RCX[2];
    }
    else {
      iVar3 = (**(code **)(*in_RCX + 0x48))(in_RCX);
    }
    bVar2 = iVar3 == -1;
  }
  if (bVar2 == bVar6) {
    *in_stack_00000008 = *in_stack_00000008 | 2;
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return plVar5;
}


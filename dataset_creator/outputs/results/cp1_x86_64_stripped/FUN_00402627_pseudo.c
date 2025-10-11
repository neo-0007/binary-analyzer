
void FUN_00402627(void)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long unaff_RBX;
  undefined8 *unaff_RBP;
  ulong uVar5;
  long unaff_R12;
  char *unaff_R13;
  long *unaff_R14;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  thunk_FUN_007104f0();
  FUN_006c2e40(in_stack_00000010);
                    /* try { // try from 00402639 to 0040263d has its CatchHandler @ 00402657 */
  FUN_006c2eb0();
  *unaff_RBP = in_stack_00000008;
  plVar2 = (long *)*unaff_R14;
  if (*unaff_R13 == '\0') {
    LOCK();
    plVar1 = plVar2 + 1;
    iVar3 = (int)*plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
  }
  else {
    iVar3 = (int)plVar2[1];
    *(int *)(plVar2 + 1) = iVar3 + -1;
  }
  if (iVar3 == 1) {
    if (*(code **)(*plVar2 + 8) == FUN_006250a0) {
                    /* try { // try from 00625f34 to 00625f38 has its CatchHandler @ 00626098 */
      FUN_00625090();
      thunk_FUN_007104f0(plVar2);
    }
    else {
      (**(code **)(*plVar2 + 8))(plVar2);
    }
  }
  lVar4 = *(long *)(unaff_RBX + 0x10);
  *unaff_R14 = unaff_R12;
  if (lVar4 != 0) {
    lVar4 = *(long *)(unaff_RBX + 0x18);
    uVar5 = 0;
    do {
      plVar2 = *(long **)(lVar4 + uVar5 * 8);
      if (plVar2 != (long *)0x0) {
        if (*unaff_R13 == '\0') {
          LOCK();
          plVar1 = plVar2 + 1;
          iVar3 = (int)*plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
        }
        else {
          iVar3 = (int)plVar2[1];
          *(int *)(plVar2 + 1) = iVar3 + -1;
        }
        if (iVar3 == 1) {
          if (*(code **)(*plVar2 + 8) == FUN_006250a0) {
            FUN_00625090();
            thunk_FUN_007104f0(plVar2);
          }
          else {
            (**(code **)(*plVar2 + 8))(plVar2);
          }
        }
        lVar4 = *(long *)(unaff_RBX + 0x18);
        *(undefined8 *)(lVar4 + uVar5 * 8) = 0;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(ulong *)(unaff_RBX + 0x10));
  }
  return;
}


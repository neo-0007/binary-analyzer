
void FUN_00402512(void)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  ulong unaff_RBX;
  long lVar4;
  long unaff_RBP;
  long lVar5;
  code *unaff_R13;
  
  thunk_FUN_007104f0();
  FUN_006c2e40();
                    /* try { // try from 00402522 to 00402526 has its CatchHandler @ 0040254e */
  FUN_006c2eb0();
  lVar5 = *(long *)(unaff_RBP + 0x18);
  while (unaff_RBX = unaff_RBX + 1, unaff_RBX < *(ulong *)(unaff_RBP + 0x10)) {
    plVar2 = *(long **)(lVar5 + unaff_RBX * 8);
    if (plVar2 != (long *)0x0) {
      if (DAT_0093ea10 == '\0') {
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
        if (*(code **)(*plVar2 + 8) == unaff_R13) {
          FUN_00625090();
          thunk_FUN_007104f0(plVar2);
        }
        else {
          (**(code **)(*plVar2 + 8))(plVar2);
        }
      }
      lVar5 = *(long *)(unaff_RBP + 0x18);
    }
  }
  if (lVar5 != 0) {
    thunk_FUN_007104f0();
  }
  lVar5 = *(long *)(unaff_RBP + 0x20);
  lVar4 = 0;
  if (lVar5 != 0) {
    do {
      if (*(long *)(lVar5 + lVar4) != 0) {
        thunk_FUN_007104f0();
        lVar5 = *(long *)(unaff_RBP + 0x20);
      }
      lVar4 = lVar4 + 8;
    } while (lVar4 != 0x60);
    if (lVar5 != 0) {
      thunk_FUN_007104f0(lVar5);
      return;
    }
  }
  return;
}


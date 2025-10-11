
void FUN_00402530(void)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  ulong unaff_RBX;
  ulong uVar4;
  long lVar5;
  long unaff_RBP;
  long lVar6;
  code *unaff_R13;
  
  thunk_FUN_007104f0();
  FUN_006c2e40();
                    /* try { // try from 00402540 to 00402544 has its CatchHandler @ 00402563 */
  FUN_006c2eb0();
  lVar6 = *(long *)(unaff_RBP + 8);
  while (unaff_RBX = unaff_RBX + 1, unaff_RBX < *(ulong *)(unaff_RBP + 0x10)) {
    plVar2 = *(long **)(lVar6 + unaff_RBX * 8);
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
      lVar6 = *(long *)(unaff_RBP + 8);
    }
  }
  if (lVar6 != 0) {
    thunk_FUN_007104f0();
  }
  lVar6 = *(long *)(unaff_RBP + 0x18);
  if (lVar6 != 0) {
    if (*(long *)(unaff_RBP + 0x10) != 0) {
      uVar4 = 0;
      do {
        plVar2 = *(long **)(lVar6 + uVar4 * 8);
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
            if (*(code **)(*plVar2 + 8) == FUN_006250a0) {
              FUN_00625090();
              thunk_FUN_007104f0(plVar2);
            }
            else {
              (**(code **)(*plVar2 + 8))(plVar2);
            }
          }
          lVar6 = *(long *)(unaff_RBP + 0x18);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(ulong *)(unaff_RBP + 0x10));
      if (lVar6 == 0) goto LAB_00625802;
    }
    thunk_FUN_007104f0();
  }
LAB_00625802:
  lVar6 = *(long *)(unaff_RBP + 0x20);
  lVar5 = 0;
  if (lVar6 != 0) {
    do {
      if (*(long *)(lVar6 + lVar5) != 0) {
        thunk_FUN_007104f0();
        lVar6 = *(long *)(unaff_RBP + 0x20);
      }
      lVar5 = lVar5 + 8;
    } while (lVar5 != 0x60);
    if (lVar6 != 0) {
      thunk_FUN_007104f0(lVar6);
      return;
    }
  }
  return;
}


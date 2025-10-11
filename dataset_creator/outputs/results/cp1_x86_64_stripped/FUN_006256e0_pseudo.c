
void FUN_006256e0(long param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 8);
  if (lVar6 != 0) {
    if (*(long *)(param_1 + 0x10) != 0) {
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
                    /* try { // try from 0062575d to 00625761 has its CatchHandler @ 006258bb */
              FUN_00625090();
              thunk_FUN_007104f0(plVar2);
            }
            else {
                    /* try { // try from 00625890 to 00625891 has its CatchHandler @ 006258a3 */
              (**(code **)(*plVar2 + 8))(plVar2);
            }
          }
          lVar6 = *(long *)(param_1 + 8);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(ulong *)(param_1 + 0x10));
      if (lVar6 == 0) goto LAB_0062577a;
    }
    thunk_FUN_007104f0();
  }
LAB_0062577a:
  lVar6 = *(long *)(param_1 + 0x18);
  if (lVar6 != 0) {
    if (*(long *)(param_1 + 0x10) != 0) {
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
                    /* try { // try from 006257e5 to 006257e9 has its CatchHandler @ 006258af */
              FUN_00625090();
              thunk_FUN_007104f0(plVar2);
            }
            else {
                    /* try { // try from 00625888 to 00625889 has its CatchHandler @ 00625897 */
              (**(code **)(*plVar2 + 8))(plVar2);
            }
          }
          lVar6 = *(long *)(param_1 + 0x18);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(ulong *)(param_1 + 0x10));
      if (lVar6 == 0) goto LAB_00625802;
    }
    thunk_FUN_007104f0();
  }
LAB_00625802:
  lVar6 = *(long *)(param_1 + 0x20);
  lVar5 = 0;
  if (lVar6 != 0) {
    do {
      if (*(long *)(lVar6 + lVar5) != 0) {
        thunk_FUN_007104f0();
        lVar6 = *(long *)(param_1 + 0x20);
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


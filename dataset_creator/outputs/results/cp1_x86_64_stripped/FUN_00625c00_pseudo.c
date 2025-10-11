
void FUN_00625c00(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  undefined **ppuVar15;
  long *plVar16;
  long local_50;
  
  if (param_3 == 0) {
    return;
  }
  uVar8 = FUN_00625ba0(param_2);
  if (*(long *)(param_1 + 0x10) - 1U < uVar8) {
    lVar13 = *(long *)(param_1 + 8);
    uVar12 = uVar8 + 4;
    lVar11 = -1;
    if (uVar12 < 0x1000000000000000) {
      lVar11 = uVar12 * 8;
    }
    lVar9 = thunk_FUN_006c31f0(lVar11);
    uVar4 = *(ulong *)(param_1 + 0x10);
    if (uVar4 != 0) {
      lVar5 = *(long *)(param_1 + 8);
      uVar10 = 0;
      do {
        *(undefined8 *)(lVar9 + uVar10 * 8) = *(undefined8 *)(lVar5 + uVar10 * 8);
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar4);
    }
    if (uVar4 < uVar12) {
      thunk_FUN_00713720(lVar9 + uVar4 * 8,0,(uVar12 - uVar4) * 8);
    }
    lVar5 = *(long *)(param_1 + 0x18);
                    /* try { // try from 00625cc9 to 00625ccd has its CatchHandler @ 006260b2 */
    lVar11 = thunk_FUN_006c31f0(lVar11);
    uVar4 = *(ulong *)(param_1 + 0x10);
    if (uVar4 != 0) {
      lVar6 = *(long *)(param_1 + 0x18);
      uVar10 = 0;
      do {
        *(undefined8 *)(lVar11 + uVar10 * 8) = *(undefined8 *)(lVar6 + uVar10 * 8);
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar4);
    }
    if (uVar4 < uVar12) {
      thunk_FUN_00713720(lVar11 + uVar4 * 8,0,(uVar12 - uVar4) * 8);
    }
    *(ulong *)(param_1 + 0x10) = uVar12;
    *(long *)(param_1 + 8) = lVar9;
    *(long *)(param_1 + 0x18) = lVar11;
    if (lVar13 != 0) {
      thunk_FUN_007104f0(lVar13);
    }
    if (lVar5 != 0) {
      thunk_FUN_007104f0(lVar5);
    }
  }
  if (DAT_0093ea10 == '\0') {
    LOCK();
    *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
    UNLOCK();
  }
  else {
    *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
  }
  plVar3 = (long *)(*(long *)(param_1 + 8) + uVar8 * 8);
  plVar14 = (long *)*plVar3;
  if (plVar14 == (long *)0x0) goto LAB_00625e3d;
  if (PTR_DAT_00933c00 == (undefined *)0x0) {
LAB_00625e1e:
    if (DAT_0093ea10 != '\0') goto LAB_00625e29;
LAB_00625f06:
    LOCK();
    plVar2 = plVar14 + 1;
    iVar7 = (int)*plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
  }
  else {
    ppuVar15 = &PTR_DAT_00933c00;
    do {
      uVar12 = FUN_00625ba0();
      if (uVar12 == uVar8) {
        lVar13 = *(long *)(param_1 + 8);
        lVar11 = FUN_00625ba0(ppuVar15[1]);
        plVar14 = (long *)(lVar13 + lVar11 * 8);
        if (*plVar14 != 0) {
          local_50 = FUN_00652a00(param_3,ppuVar15[1]);
          if (DAT_0093ea10 == '\0') {
            LOCK();
            *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
            UNLOCK();
            plVar16 = (long *)*plVar14;
            plVar2 = plVar16 + 1;
            if (DAT_0093ea10 != '\0') goto LAB_00625dfe;
            LOCK();
            iVar7 = (int)*plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
          }
          else {
            *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
            plVar16 = (long *)*plVar14;
LAB_00625dfe:
            iVar7 = (int)plVar16[1];
            *(int *)(plVar16 + 1) = iVar7 + -1;
          }
          if (iVar7 == 1) {
            if (*(code **)(*plVar16 + 8) == FUN_006250a0) {
                    /* try { // try from 0062605e to 00626062 has its CatchHandler @ 006260a4 */
              FUN_00625090();
              thunk_FUN_007104f0(plVar16);
            }
            else {
                    /* try { // try from 00626077 to 00626078 has its CatchHandler @ 006260e4 */
              (**(code **)(*plVar16 + 8))(plVar16);
            }
          }
LAB_00625e12:
          *plVar14 = local_50;
          plVar14 = (long *)*plVar3;
          goto LAB_00625e1e;
        }
        break;
      }
      uVar12 = FUN_00625ba0(ppuVar15[1]);
      if (uVar12 == uVar8) {
        lVar13 = *(long *)(param_1 + 8);
        lVar11 = FUN_00625ba0(*ppuVar15);
        plVar14 = (long *)(lVar13 + lVar11 * 8);
        if (*plVar14 != 0) {
          local_50 = FUN_00634a50(param_3,*ppuVar15);
          if (DAT_0093ea10 == '\0') {
            LOCK();
            *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
            UNLOCK();
            plVar16 = (long *)*plVar14;
            plVar2 = plVar16 + 1;
            if (DAT_0093ea10 != '\0') goto LAB_00625fab;
            LOCK();
            iVar7 = (int)*plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
          }
          else {
            *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
            plVar16 = (long *)*plVar14;
LAB_00625fab:
            iVar7 = (int)plVar16[1];
            *(int *)(plVar16 + 1) = iVar7 + -1;
          }
          if (iVar7 == 1) {
            if (*(code **)(*plVar16 + 8) == FUN_006250a0) {
                    /* try { // try from 00625fd9 to 00625fdd has its CatchHandler @ 006260ca */
              FUN_00625090();
              thunk_FUN_007104f0(plVar16);
            }
            else {
                    /* try { // try from 00626070 to 00626071 has its CatchHandler @ 006260d8 */
              (**(code **)(*plVar16 + 8))(plVar16);
            }
          }
          goto LAB_00625e12;
        }
        break;
      }
      ppuVar1 = ppuVar15 + 2;
      ppuVar15 = ppuVar15 + 2;
    } while (*ppuVar1 != (undefined *)0x0);
    plVar14 = (long *)*plVar3;
    if (DAT_0093ea10 == '\0') goto LAB_00625f06;
LAB_00625e29:
    iVar7 = (int)plVar14[1];
    *(int *)(plVar14 + 1) = iVar7 + -1;
  }
  if (iVar7 == 1) {
    if (*(code **)(*plVar14 + 8) == FUN_006250a0) {
      FUN_00625090();
      thunk_FUN_007104f0(plVar14);
    }
    else {
                    /* try { // try from 00626041 to 00626042 has its CatchHandler @ 006260be */
      (**(code **)(*plVar14 + 8))(plVar14);
    }
  }
LAB_00625e3d:
  lVar13 = *(long *)(param_1 + 0x10);
  *plVar3 = param_3;
  if (lVar13 != 0) {
    lVar13 = *(long *)(param_1 + 0x18);
    uVar8 = 0;
    do {
      plVar3 = *(long **)(lVar13 + uVar8 * 8);
      if (plVar3 != (long *)0x0) {
        if (DAT_0093ea10 == '\0') {
          LOCK();
          plVar14 = plVar3 + 1;
          iVar7 = (int)*plVar14;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
        }
        else {
          iVar7 = (int)plVar3[1];
          *(int *)(plVar3 + 1) = iVar7 + -1;
        }
        if (iVar7 == 1) {
          if (*(code **)(*plVar3 + 8) == FUN_006250a0) {
            FUN_00625090();
            thunk_FUN_007104f0(plVar3);
          }
          else {
            (**(code **)(*plVar3 + 8))(plVar3);
          }
        }
        lVar13 = *(long *)(param_1 + 0x18);
        *(undefined8 *)(lVar13 + uVar8 * 8) = 0;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(ulong *)(param_1 + 0x10));
  }
  return;
}



void FUN_0069e8f0(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  
  plVar1 = param_1 + 2;
  plVar9 = (long *)*param_1;
  if (plVar1 == plVar9) {
    return;
  }
  uVar8 = param_1[1];
  if (uVar8 < 0x10) {
    uVar2 = uVar8 + 1;
    uVar4 = (uint)uVar2;
    if (uVar8 == 0) {
      *(char *)(param_1 + 2) = (char)*plVar9;
      goto LAB_0069e950;
    }
    if (7 < uVar4) {
      param_1[2] = *plVar9;
      *(undefined8 *)((long)param_1 + (uVar2 & 0xffffffff) + 8) =
           *(undefined8 *)((long)plVar9 + ((uVar2 & 0xffffffff) - 8));
      lVar7 = (long)plVar1 - ((ulong)(param_1 + 3) & 0xfffffffffffffff8);
      uVar4 = uVar4 + (int)lVar7 & 0xfffffff8;
      if (7 < uVar4) {
        uVar8 = 0;
        do {
          uVar6 = (int)uVar8 + 8;
          *(undefined8 *)(((ulong)(param_1 + 3) & 0xfffffffffffffff8) + uVar8) =
               *(undefined8 *)((long)plVar9 + (uVar8 - lVar7));
          uVar8 = (ulong)uVar6;
        } while (uVar6 < uVar4);
      }
      goto LAB_0069e950;
    }
    if ((uVar2 & 4) == 0) {
      if ((uVar4 != 0) && (*(char *)(param_1 + 2) = (char)*plVar9, (uVar2 & 2) != 0)) {
        *(undefined2 *)((long)param_1 + (uVar2 & 0xffffffff) + 0xe) =
             *(undefined2 *)((long)plVar9 + ((uVar2 & 0xffffffff) - 2));
      }
      goto LAB_0069e950;
    }
  }
  else {
    if ((ulong)param_1[2] <= uVar8) {
      return;
    }
    lVar7 = uVar8 + 1;
    if (-1 < lVar7) {
                    /* try { // try from 0069e985 to 0069ea34 has its CatchHandler @ 0069ea5f */
      lVar5 = FUN_006c31f0(lVar7);
      lVar3 = *param_1;
      if (lVar7 != 0) {
        thunk_FUN_00713a50(lVar5,lVar3,lVar7);
      }
      if (plVar1 != (long *)lVar3) {
        thunk_FUN_007104f0(lVar3);
      }
      *param_1 = lVar5;
      param_1[2] = uVar8;
      return;
    }
    uVar4 = FUN_004037bc();
  }
  *(int *)(param_1 + 2) = (int)*plVar9;
  *(undefined4 *)((long)param_1 + (ulong)uVar4 + 0xc) =
       *(undefined4 *)((long)plVar9 + ((ulong)uVar4 - 4));
LAB_0069e950:
  thunk_FUN_007104f0();
  *param_1 = (long)plVar1;
  return;
}


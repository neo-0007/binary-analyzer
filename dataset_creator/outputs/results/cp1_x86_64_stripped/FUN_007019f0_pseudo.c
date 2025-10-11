
ulong FUN_007019f0(uint *param_1,int *param_2,ulong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  bool bVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  
  if (param_3 == 0) {
    return 0;
  }
  lVar5 = *(long *)(param_1 + 0x28);
  puVar1 = *(undefined8 **)(lVar5 + 0x20);
  if ((*param_1 & 0xa00) == 0xa00) {
    uVar13 = *(long *)(lVar5 + 0x38) - (long)puVar1 >> 2;
    if (uVar13 < param_3) {
      bVar4 = false;
    }
    else {
      piVar10 = param_2 + param_3;
      do {
        if (piVar10 <= param_2) {
          bVar4 = false;
          goto LAB_00701ad8;
        }
        piVar10 = piVar10 + -1;
      } while (*piVar10 != 10);
      bVar4 = true;
      uVar13 = ((long)piVar10 - (long)param_2 >> 2) + 1;
    }
  }
  else {
    bVar4 = false;
    uVar13 = *(long *)(lVar5 + 0x28) - (long)puVar1 >> 2;
  }
  uVar12 = param_3;
  if (uVar13 != 0) {
LAB_00701ad8:
    if (param_3 <= uVar13) {
      uVar13 = param_3;
    }
    if (uVar13 < 0x15) {
      uVar2 = (uint)uVar13;
      uVar8 = uVar2 - 1;
      if (((ulong)((long)puVar1 - (long)(param_2 + 1)) < 9) || (uVar8 < 3)) {
        uVar12 = 0;
        do {
          *(int *)((long)puVar1 + uVar12 * 4) = param_2[uVar12];
          uVar12 = uVar12 + 1;
        } while ((uVar13 & 0xffffffff) != uVar12);
      }
      else {
        uVar3 = *(undefined8 *)(param_2 + 2);
        uVar9 = (uint)(uVar13 >> 2) & 0x3fffffff;
        *puVar1 = *(undefined8 *)param_2;
        puVar1[1] = uVar3;
        if (uVar9 != 1) {
          uVar3 = *(undefined8 *)(param_2 + 6);
          puVar1[2] = *(undefined8 *)(param_2 + 4);
          puVar1[3] = uVar3;
          if (uVar9 != 2) {
            uVar3 = *(undefined8 *)(param_2 + 10);
            puVar1[4] = *(undefined8 *)(param_2 + 8);
            puVar1[5] = uVar3;
            if (uVar9 != 3) {
              uVar3 = *(undefined8 *)(param_2 + 0xe);
              puVar1[6] = *(undefined8 *)(param_2 + 0xc);
              puVar1[7] = uVar3;
              if (uVar9 == 5) {
                uVar3 = *(undefined8 *)(param_2 + 0x12);
                puVar1[8] = *(undefined8 *)(param_2 + 0x10);
                puVar1[9] = uVar3;
                goto LAB_00701b5a;
              }
            }
          }
        }
        uVar9 = uVar2 & 0xfffffffc;
        piVar10 = param_2 + uVar9;
        piVar6 = (int *)((ulong)uVar9 * 4 + (long)puVar1);
        if (((uVar2 != uVar9) && (*piVar6 = *piVar10, uVar8 != uVar9)) &&
           (piVar6[1] = piVar10[1], uVar8 - uVar9 != 1)) {
          piVar6[2] = piVar10[2];
        }
      }
LAB_00701b5a:
      lVar11 = (uVar13 & 0xffffffff) * 4;
      lVar7 = (long)puVar1 + lVar11;
    }
    else {
      lVar11 = uVar13 * 4;
      lVar7 = FUN_00756680(puVar1,param_2,uVar13);
    }
    param_2 = (int *)((long)param_2 + lVar11);
    *(long *)(lVar5 + 0x20) = lVar7;
    uVar12 = param_3 - uVar13;
    if (uVar12 == 0) goto LAB_00701a64;
  }
  lVar5 = FUN_006ff400(param_1,param_2);
  param_3 = param_3 + (lVar5 - uVar12);
LAB_00701a64:
  if (bVar4) {
    lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 0x20);
    lVar11 = *(long *)(*(long *)(param_1 + 0x28) + 0x18);
    if (lVar5 != lVar11) {
      FUN_00701350(param_1,lVar11,lVar5 - lVar11 >> 2);
    }
  }
  return param_3;
}


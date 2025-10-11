
ulong FUN_006ffb00(uint *param_1,undefined8 *param_2,ulong param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined8 uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  undefined4 *puVar11;
  ulong uVar12;
  int *piVar13;
  ulong uVar14;
  int *piVar15;
  uint uVar16;
  
  uVar14 = param_3;
  do {
    plVar3 = *(long **)(param_1 + 0x28);
    puVar4 = (undefined8 *)*plVar3;
    if (0 < plVar3[1] - (long)puVar4) {
      uVar8 = plVar3[1] - (long)puVar4 >> 2;
      if (uVar14 < uVar8) {
        uVar8 = uVar14;
      }
      if ((long)uVar8 < 0x15) {
        if (uVar8 != 0) {
          uVar2 = (uint)uVar8;
          uVar16 = uVar2 - 1;
          if (((ulong)((long)param_2 - ((long)puVar4 + 4)) < 9) || (uVar16 < 3)) {
            uVar12 = 0;
            do {
              *(undefined4 *)((long)param_2 + uVar12 * 4) =
                   *(undefined4 *)((long)puVar4 + uVar12 * 4);
              uVar12 = uVar12 + 1;
            } while ((uVar8 & 0xffffffff) != uVar12);
          }
          else {
            uVar6 = puVar4[1];
            uVar10 = uVar2 >> 2;
            *param_2 = *puVar4;
            param_2[1] = uVar6;
            if (uVar10 != 1) {
              uVar6 = puVar4[3];
              param_2[2] = puVar4[2];
              param_2[3] = uVar6;
              if (uVar10 != 2) {
                uVar6 = puVar4[5];
                param_2[4] = puVar4[4];
                param_2[5] = uVar6;
                if (uVar10 != 3) {
                  uVar6 = puVar4[7];
                  param_2[6] = puVar4[6];
                  param_2[7] = uVar6;
                  if (uVar10 == 5) {
                    uVar6 = puVar4[9];
                    param_2[8] = puVar4[8];
                    param_2[9] = uVar6;
                    goto LAB_006ffdae;
                  }
                }
              }
            }
            uVar10 = uVar2 & 0xfffffffc;
            puVar1 = (undefined4 *)((long)param_2 + (ulong)uVar10 * 4);
            puVar11 = (undefined4 *)((ulong)uVar10 * 4 + (long)puVar4);
            if (((uVar10 != uVar2) && (*puVar1 = *puVar11, uVar16 != uVar10)) &&
               (puVar1[1] = puVar11[1], uVar16 - uVar10 != 1)) {
              puVar1[2] = puVar11[2];
            }
          }
LAB_006ffdae:
          lVar9 = (uVar8 & 0xffffffff) * 4;
          uVar14 = uVar14 - uVar8;
          param_2 = (undefined8 *)((long)param_2 + lVar9);
          *plVar3 = (long)puVar4 + lVar9;
        }
      }
      else {
        uVar14 = uVar14 - uVar8;
        param_2 = (undefined8 *)FUN_00756680(param_2,puVar4,uVar8);
        **(long **)(param_1 + 0x28) = **(long **)(param_1 + 0x28) + uVar8 * 4;
      }
    }
    if (uVar14 == 0) {
      return param_3;
    }
    if ((int)param_1[0x30] < 0) break;
    if (param_1[0x30] == 0) {
      iVar7 = FUN_00701c30(param_1,1);
      if (iVar7 != 1) break;
      if (param_1[0x30] != 0) goto LAB_006ffb79;
      FUN_00701c30(param_1,1);
      uVar2 = *param_1;
    }
    else {
LAB_006ffb79:
      uVar2 = *param_1;
    }
    if (((uVar2 & 0x800) != 0) && (iVar7 = FUN_006ff780(param_1), iVar7 == -1)) break;
    puVar4 = *(undefined8 **)(param_1 + 0x28);
    piVar13 = (int *)*puVar4;
    piVar5 = (int *)puVar4[1];
    if (piVar13 < piVar5) {
LAB_006ffc40:
      iVar7 = *piVar13;
    }
    else {
      piVar15 = piVar5;
      if ((*param_1 & 0x100) != 0) {
        piVar15 = (int *)puVar4[10];
        *param_1 = *param_1 & 0xfffffeff;
        piVar13 = (int *)puVar4[8];
        puVar4[10] = piVar5;
        uVar6 = puVar4[2];
        puVar4[2] = piVar13;
        puVar4[8] = uVar6;
        *puVar4 = piVar13;
        puVar4[1] = piVar15;
        if (piVar13 < piVar15) goto LAB_006ffc40;
      }
      if (*(long *)(param_1 + 0x18) == 0) {
        if (*(long *)(param_1 + 0x12) != 0) {
          FUN_007104f0(puVar4[8],piVar15);
          lVar9 = *(long *)(param_1 + 0x28);
          *(undefined8 *)(lVar9 + 0x50) = 0;
          *(undefined1 (*) [16])(lVar9 + 0x40) = (undefined1  [16])0x0;
        }
      }
      else {
        iVar7 = FUN_006fed40(param_1);
        if (iVar7 != 0) break;
      }
      lVar9 = *(long *)(param_1 + 0x36);
      if (0x827 < lVar9 - 0x93f160U) {
        FUN_00703130();
      }
      iVar7 = (**(code **)(lVar9 + 0x20))(param_1);
    }
  } while (iVar7 != -1);
  return param_3 - uVar14;
}


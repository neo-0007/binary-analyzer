
void FUN_006e8620(long *param_1,undefined8 *param_2,ulong param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  code *local_78;
  long local_58;
  ulong local_50;
  
  local_50 = param_3 >> 1;
  uVar4 = param_3 - local_50;
  puVar10 = (undefined8 *)((long)param_2 + *param_1 * local_50);
  if (local_50 != 1) {
    FUN_006e8620(param_1,param_2,local_50);
  }
  puVar9 = param_2;
  puVar11 = param_2;
  if (uVar4 < 2) {
    local_58 = *param_1;
    puVar8 = (undefined8 *)param_1[4];
    lVar13 = param_1[3];
    local_78 = (code *)param_1[2];
    uVar7 = param_1[1];
    uVar14 = local_50;
    puVar15 = puVar8;
    if (uVar7 == 2) {
      puVar12 = puVar8;
      if (uVar4 != 0) goto LAB_006e88c0;
    }
    else if (uVar7 < 3) {
      if (uVar7 == 0) {
        if (uVar4 != 0) {
          uVar4 = 1;
          goto LAB_006e87f0;
        }
      }
      else if (uVar4 != 0) goto LAB_006e86c0;
    }
    else if (uVar7 == 3) {
      if (uVar4 != 0) {
        uVar4 = 1;
        goto LAB_006e8740;
      }
    }
    else if (uVar4 != 0) goto LAB_006e8867;
  }
  else {
    FUN_006e8620(param_1,puVar10,uVar4);
    local_58 = *param_1;
    puVar8 = (undefined8 *)param_1[4];
    uVar7 = param_1[1];
    local_78 = (code *)param_1[2];
    lVar13 = param_1[3];
    puVar12 = puVar8;
    if (uVar7 == 2) {
LAB_006e88c0:
      do {
        puVar15 = (undefined8 *)((long)puVar12 + local_58);
        iVar3 = (*local_78)(puVar11,puVar10,lVar13);
        if (iVar3 < 1) {
          local_50 = local_50 - 1;
          puVar9 = (undefined8 *)((long)puVar11 + local_58);
          puVar6 = puVar11;
        }
        else {
          uVar4 = uVar4 - 1;
          puVar6 = puVar10;
          puVar10 = (undefined8 *)((long)puVar10 + local_58);
          puVar9 = puVar11;
        }
        if (puVar8 < puVar15) {
          puVar11 = puVar6 + 1;
          uVar7 = (long)puVar15 + (-1 - (long)puVar8);
          if ((puVar11 == puVar8) || (uVar7 < 0x18)) {
            while( true ) {
              *puVar12 = puVar11[-1];
              if (puVar15 <= puVar12 + 1) break;
              puVar11 = puVar11 + 1;
              puVar12 = puVar12 + 1;
            }
          }
          else {
            lVar5 = 0;
            uVar7 = (uVar7 >> 3) + 1;
            do {
              uVar2 = ((undefined8 *)((long)puVar6 + lVar5))[1];
              *(undefined8 *)((long)puVar12 + lVar5) = *(undefined8 *)((long)puVar6 + lVar5);
              ((undefined8 *)((long)puVar12 + lVar5))[1] = uVar2;
              lVar5 = lVar5 + 0x10;
            } while ((uVar7 >> 1) * 0x10 != lVar5);
            uVar14 = uVar7 & 0xfffffffffffffffe;
            if (uVar14 != uVar7) {
              puVar12[uVar14] = puVar6[uVar14];
            }
          }
        }
        puVar8 = (undefined8 *)((long)puVar8 + local_58);
      } while ((local_50 != 0) && (puVar11 = puVar9, puVar12 = puVar15, uVar4 != 0));
    }
    else if (uVar7 < 3) {
      if (uVar7 == 0) {
LAB_006e87f0:
        do {
          while (iVar3 = (*local_78)(puVar9,puVar10,lVar13), 0 < iVar3) {
            uVar1 = *(undefined4 *)puVar10;
            puVar15 = (undefined8 *)((long)puVar8 + 4);
            puVar10 = (undefined8 *)((long)puVar10 + 4);
            *(undefined4 *)puVar8 = uVar1;
            uVar4 = uVar4 - 1;
            uVar14 = param_3;
            puVar8 = puVar15;
            if (uVar4 == 0) goto LAB_006e86f2;
          }
          uVar1 = *(undefined4 *)puVar9;
          puVar15 = (undefined8 *)((long)puVar8 + 4);
          puVar9 = (undefined8 *)((long)puVar9 + 4);
          *(undefined4 *)puVar8 = uVar1;
          local_50 = local_50 - 1;
          puVar8 = puVar15;
        } while (local_50 != 0);
      }
      else {
LAB_006e86c0:
        do {
          while (iVar3 = (*local_78)(puVar9,puVar10,lVar13), 0 < iVar3) {
            uVar2 = *puVar10;
            puVar15 = puVar8 + 1;
            puVar10 = puVar10 + 1;
            *puVar8 = uVar2;
            uVar4 = uVar4 - 1;
            uVar14 = param_3;
            puVar8 = puVar15;
            if (uVar4 == 0) goto LAB_006e86f2;
          }
          uVar2 = *puVar9;
          puVar15 = puVar8 + 1;
          puVar9 = puVar9 + 1;
          *puVar8 = uVar2;
          local_50 = local_50 - 1;
          puVar8 = puVar15;
        } while (local_50 != 0);
      }
    }
    else if (uVar7 == 3) {
LAB_006e8740:
      do {
        while (iVar3 = (*local_78)(*puVar9,*puVar10,lVar13), 0 < iVar3) {
          uVar2 = *puVar10;
          puVar15 = puVar8 + 1;
          puVar10 = puVar10 + 1;
          *puVar8 = uVar2;
          uVar4 = uVar4 - 1;
          uVar14 = param_3;
          puVar8 = puVar15;
          if (uVar4 == 0) goto LAB_006e86f2;
        }
        uVar2 = *puVar9;
        puVar15 = puVar8 + 1;
        puVar9 = puVar9 + 1;
        *puVar8 = uVar2;
        local_50 = local_50 - 1;
        puVar8 = puVar15;
      } while (local_50 != 0);
    }
    else {
LAB_006e8867:
      do {
        iVar3 = (*local_78)(puVar9,puVar10,lVar13);
        if (iVar3 < 1) {
          local_50 = local_50 - 1;
          puVar15 = (undefined8 *)thunk_FUN_00713820(puVar8,puVar9,local_58);
          puVar9 = (undefined8 *)((long)puVar9 + local_58);
          puVar11 = puVar10;
        }
        else {
          puVar11 = (undefined8 *)((long)puVar10 + local_58);
          uVar4 = uVar4 - 1;
          puVar15 = (undefined8 *)thunk_FUN_00713820(puVar8,puVar10,local_58);
        }
      } while ((local_50 != 0) && (puVar10 = puVar11, puVar8 = puVar15, uVar4 != 0));
    }
    uVar14 = param_3 - uVar4;
    if (local_50 == 0) goto LAB_006e8706;
  }
LAB_006e86f2:
  thunk_FUN_00713a50(puVar15,puVar9,local_58 * local_50);
LAB_006e8706:
  thunk_FUN_00713a50(param_2,param_1[4],local_58 * uVar14);
  return;
}


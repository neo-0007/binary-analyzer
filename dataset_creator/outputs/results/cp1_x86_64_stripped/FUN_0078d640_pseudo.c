
undefined8 FUN_0078d640(ulong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  byte bVar1;
  short sVar2;
  char *pcVar3;
  long *plVar4;
  uint *puVar5;
  byte *pbVar6;
  long lVar7;
  ulong uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  ulong uVar13;
  uint *puVar14;
  undefined8 uVar15;
  
  uVar15 = 0;
  FUN_0070a340(&DAT_0093eae0);
  plVar4 = (long *)FUN_00785b70(param_1);
  if (plVar4 != (long *)0x0) {
    pcVar3 = (char *)plVar4[1];
    lVar7 = plVar4[0x6b];
    *param_2 = pcVar3;
    param_2[1] = lVar7;
    if ((*pcVar3 == '\0') && ((*(byte *)((long)plVar4 + 0x31c) & 3) == 0)) {
      *param_2 = *(undefined8 *)PTR_PTR_0093adf8;
    }
    lVar7 = 0;
    puVar12 = *(uint **)(plVar4[0xe] + 8);
    if ((*(byte *)((long)plVar4 + 0x31e) & 0x20) != 0) {
      lVar7 = *plVar4;
      puVar12 = (uint *)((long)puVar12 + lVar7);
    }
    puVar9 = (uint *)(*(long *)(plVar4[0xd] + 8) + lVar7);
    if (plVar4[0x54] == 0) {
      puVar11 = puVar9;
      if (plVar4[0xc] != 0) {
        puVar11 = puVar12 + (ulong)*(uint *)(lVar7 + 4 + *(long *)(plVar4[0xc] + 8)) * 6;
      }
      puVar14 = (uint *)0x0;
      for (; puVar12 < puVar11; puVar12 = puVar12 + 6) {
        if ((((byte)(((byte)puVar12[1] >> 4) - 1) < 2) &&
            (1 < (*(byte *)((long)puVar12 + 5) & 3) - 1)) && (((byte)puVar12[1] & 0xf) != 6)) {
          if (*(short *)((long)puVar12 + 6) == 0) {
            uVar13 = *(ulong *)(puVar12 + 2);
            if (uVar13 != 0) {
              uVar8 = *plVar4 + uVar13;
              if (uVar8 <= param_1) {
                if (param_1 != uVar8) {
                  lVar7 = *(long *)(puVar12 + 4);
LAB_0078d8b8:
                  if (uVar8 + lVar7 <= param_1) goto LAB_0078d860;
                }
LAB_0078d8c0:
                if (((puVar14 == (uint *)0x0) || (*(ulong *)(puVar14 + 2) < uVar13)) &&
                   (*puVar12 < *(uint *)(plVar4[0x12] + 8))) {
                  puVar14 = puVar12;
                }
              }
            }
          }
          else if (*(short *)((long)puVar12 + 6) != -0xf) {
            uVar13 = *(ulong *)(puVar12 + 2);
            uVar8 = *plVar4 + uVar13;
            if (uVar8 <= param_1) {
              lVar7 = *(long *)(puVar12 + 4);
              if (lVar7 != 0) goto LAB_0078d8b8;
              if (param_1 == uVar8) goto LAB_0078d8c0;
            }
          }
        }
LAB_0078d860:
      }
    }
    else {
      if (*(int *)((long)plVar4 + 0x2f4) != 0) {
        puVar14 = (uint *)0x0;
        puVar11 = (uint *)plVar4[0x61] + 1;
        puVar5 = (uint *)plVar4[0x61];
        puVar10 = puVar11;
        do {
          if (*puVar5 != 0) {
            pbVar6 = (byte *)(plVar4[0x62] + (ulong)*puVar5 * 4);
            do {
              puVar5 = puVar12 + ((long)pbVar6 - plVar4[0x62] >> 2 & 0xffffffffU) * 6;
              sVar2 = *(short *)((long)puVar5 + 6);
              if (sVar2 == 0) {
                if (*(long *)(puVar5 + 2) != 0) goto LAB_0078d747;
              }
              else if (sVar2 != -0xf) {
LAB_0078d747:
                if ((puVar5[1] & 0xf) != 6) {
                  uVar13 = *plVar4 + *(ulong *)(puVar5 + 2);
                  if (uVar13 <= param_1) {
                    if (sVar2 == 0) {
                      if (param_1 != uVar13) {
                        lVar7 = *(long *)(puVar5 + 4);
                        goto LAB_0078d8e9;
                      }
LAB_0078d8f5:
                      if (((puVar14 == (uint *)0x0) ||
                          (*(ulong *)(puVar14 + 2) < *(ulong *)(puVar5 + 2))) &&
                         (*puVar5 < *(uint *)(plVar4[0x12] + 8))) {
                        puVar14 = puVar5;
                      }
                    }
                    else {
                      lVar7 = *(long *)(puVar5 + 4);
                      if (lVar7 == 0) {
                        if (param_1 == uVar13) goto LAB_0078d8f5;
                      }
                      else {
LAB_0078d8e9:
                        if (param_1 < lVar7 + uVar13) goto LAB_0078d8f5;
                      }
                    }
                  }
                }
              }
              bVar1 = *pbVar6;
              pbVar6 = pbVar6 + 4;
            } while ((bVar1 & 1) == 0);
          }
          if (puVar11 + (*(int *)((long)plVar4 + 0x2f4) - 1) == puVar10) goto LAB_0078d7c0;
          puVar5 = puVar10;
          puVar10 = puVar10 + 1;
        } while( true );
      }
      puVar14 = (uint *)0x0;
    }
LAB_0078d7c0:
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = plVar4;
    }
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = puVar14;
    }
    if (puVar14 == (uint *)0x0) {
      uVar15 = 1;
      *(undefined1 (*) [16])(param_2 + 2) = (undefined1  [16])0x0;
    }
    else {
      sVar2 = *(short *)((long)puVar14 + 6);
      param_2[2] = (ulong)*puVar14 + (long)puVar9;
      if (sVar2 == -0xf) {
        lVar7 = 0;
      }
      else {
        lVar7 = *plVar4;
      }
      uVar15 = 1;
      param_2[3] = lVar7 + *(long *)(puVar14 + 2);
    }
  }
  FUN_0070abb0(&DAT_0093eae0);
  return uVar15;
}


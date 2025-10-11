
void FUN_0078c8c0(char *param_1,long param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  char *pcVar5;
  long lVar6;
  char *pcVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  char *pcVar14;
  char *pcVar15;
  char cVar16;
  long lVar17;
  char cVar18;
  char *pcVar19;
  char *pcVar20;
  int local_5c;
  long local_50;
  char *local_40 [2];
  
  cVar18 = *param_1;
  if (cVar18 != '\0') {
    local_50 = 0;
    local_5c = DAT_0093ae30;
    pcVar7 = param_1;
    while( true ) {
      cVar3 = cVar18;
      if ((cVar18 == ':') || (lVar17 = 0, cVar18 == '=')) {
        lVar17 = 0;
      }
      else {
        do {
          if (cVar3 == '\0') goto LAB_0078c924;
          lVar17 = lVar17 + 1;
          cVar3 = pcVar7[lVar17];
        } while ((cVar3 != '=') && (cVar3 != ':'));
      }
      if (cVar3 == '\0') break;
      pcVar15 = pcVar7 + lVar17 + 1;
      if (cVar3 != ':') {
        pcVar10 = pcVar15 + (param_2 - (long)param_1);
        if ((*pcVar15 == '\0') || (*pcVar15 == ':')) {
          uVar13 = 0;
          pcVar20 = pcVar15;
        }
        else {
          uVar13 = 0;
          do {
            uVar13 = uVar13 + 1;
            pcVar20 = pcVar15 + uVar13;
            if (pcVar15[uVar13] == ':') break;
          } while (pcVar15[uVar13] != '\0');
        }
        pcVar19 = "glibc.rtld.nns";
        lVar17 = 0;
LAB_0078c9b0:
        cVar16 = *pcVar19;
        pcVar2 = pcVar7;
        pcVar14 = pcVar19;
        cVar4 = cVar18;
        cVar3 = cVar16;
        if (cVar16 != '\0') {
          do {
            pcVar5 = pcVar2;
            if ((*pcVar5 == '\0') || (*pcVar5 != cVar3)) goto LAB_0078c9ee;
            cVar3 = pcVar14[1];
            pcVar14 = pcVar14 + 1;
            pcVar2 = pcVar5 + 1;
          } while (cVar3 != '\0');
          cVar4 = pcVar5[1];
        }
        if (cVar4 != '=') goto LAB_0078c9ee;
        if (local_5c == 0) goto LAB_0078cbfd;
        if ((&DAT_00939ef4)[lVar17 * 0x1c] != 0) {
          if (local_50 == 0) {
            lVar11 = 1;
            pcVar7 = param_1;
          }
          else {
            param_1[local_50] = ':';
            lVar11 = local_50 + 2;
            cVar16 = *pcVar19;
            pcVar7 = param_1 + local_50 + 1;
            local_50 = local_50 + 1;
          }
          if (cVar16 != '\0') {
            lVar11 = local_50;
            do {
              lVar6 = lVar11;
              lVar11 = lVar6 + 1;
              param_1[lVar6] = cVar16;
              cVar16 = pcVar19[lVar11 - local_50];
            } while (cVar16 != '\0');
            pcVar7 = param_1 + lVar11;
            lVar11 = lVar6 + 2;
          }
          local_50 = lVar11;
          *pcVar7 = '=';
          if (uVar13 != 0) {
            if (((ulong)((((long)param_1 * 2 - (param_2 + 1)) - (long)pcVar15) + local_50) < 0xf) ||
               (uVar13 - 1 < 7)) {
              uVar8 = 0;
              do {
                param_1[uVar8 + local_50] = pcVar10[uVar8];
                uVar8 = uVar8 + 1;
              } while (uVar13 != uVar8);
            }
            else if (uVar13 - 1 < 0xf) {
              uVar9 = 0;
              lVar11 = local_50;
              uVar8 = uVar13;
LAB_0078cb34:
              *(undefined8 *)(param_1 + uVar9 + local_50) =
                   *(undefined8 *)(pcVar15 + ((param_2 + uVar9) - (long)param_1));
              uVar12 = uVar8 & 0xfffffffffffffff8;
              lVar11 = lVar11 + uVar12;
              uVar9 = uVar9 + uVar12;
              if (uVar12 != uVar8) {
LAB_0078cb5a:
                param_1[lVar11] = pcVar10[uVar9];
                if ((((uVar9 + 1 < uVar13) &&
                     (param_1[lVar11 + 1] = pcVar10[uVar9 + 1], uVar9 + 2 < uVar13)) &&
                    (param_1[lVar11 + 2] = pcVar10[uVar9 + 2], uVar9 + 3 < uVar13)) &&
                   (((param_1[lVar11 + 3] = pcVar10[uVar9 + 3], uVar9 + 4 < uVar13 &&
                     (param_1[lVar11 + 4] = pcVar10[uVar9 + 4], uVar9 + 5 < uVar13)) &&
                    (param_1[lVar11 + 5] = pcVar10[uVar9 + 5], uVar9 + 6 < uVar13)))) {
                  param_1[lVar11 + 6] = pcVar10[uVar9 + 6];
                }
              }
            }
            else {
              uVar8 = 0;
              do {
                uVar1 = *(undefined8 *)(pcVar10 + uVar8 + 8);
                *(undefined8 *)(param_1 + uVar8 + local_50) = *(undefined8 *)(pcVar10 + uVar8);
                *(undefined8 *)(param_1 + uVar8 + local_50 + 8) = uVar1;
                uVar8 = uVar8 + 0x10;
              } while ((uVar13 & 0xfffffffffffffff0) != uVar8);
              uVar9 = uVar13 & 0xfffffffffffffff0;
              lVar11 = uVar9 + local_50;
              if (uVar13 != uVar9) {
                uVar8 = uVar13 - uVar9;
                if (6 < (uVar13 - uVar9) - 1) goto LAB_0078cb34;
                goto LAB_0078cb5a;
              }
            }
            local_50 = local_50 + uVar13;
          }
          if ((&DAT_00939ef4)[lVar17 * 0x1c] == 2) {
LAB_0078cbfd:
            pcVar10[uVar13] = '\0';
            if ((&DAT_00939ed0)[lVar17 * 0x1c] != 3) {
              pcVar10 = (char *)FUN_007b94a0(pcVar10,0);
            }
            local_40[0] = pcVar10;
            FUN_0078c7d0(pcVar19,local_40,0,0);
          }
          local_5c = DAT_0093ae30;
        }
        goto LAB_0078ca00;
      }
LAB_0078ca10:
      cVar18 = *pcVar15;
      pcVar7 = pcVar15;
    }
LAB_0078c924:
    if (local_5c != 0) {
      param_1[local_50] = '\0';
    }
  }
  return;
LAB_0078c9ee:
  lVar17 = lVar17 + 1;
  pcVar19 = pcVar19 + 0x70;
  if (lVar17 == 0x23) {
LAB_0078ca00:
    if (*pcVar20 == '\0') goto LAB_0078c924;
    pcVar15 = pcVar15 + uVar13 + 1;
    goto LAB_0078ca10;
  }
  goto LAB_0078c9b0;
}



int ns_name_pack(u_char *param_1,u_char *param_2,int param_3,u_char **param_4,u_char **param_5)

{
  byte bVar1;
  byte bVar2;
  u_char *puVar3;
  bool bVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  u_char **ppuVar15;
  byte *pbVar16;
  long lVar17;
  u_char *puVar18;
  long in_FS_OFFSET;
  u_char **local_70;
  u_char **local_60;
  int local_50;
  u_char **local_48;
  
  if (param_4 == (u_char **)0x0) {
    local_60 = (u_char **)0x0;
    puVar18 = (u_char *)0x0;
    ppuVar15 = (u_char **)0x0;
  }
  else {
    puVar18 = *param_4;
    local_60 = param_4 + 1;
    if (puVar18 == (u_char *)0x0) {
      ppuVar15 = (u_char **)0x0;
    }
    else {
      puVar3 = param_4[1];
      ppuVar15 = local_60;
      while (puVar3 != (u_char *)0x0) {
        ppuVar15 = ppuVar15 + 1;
        puVar3 = *ppuVar15;
      }
    }
  }
  iVar6 = 0;
  pbVar5 = param_1;
  do {
    uVar9 = (uint)*pbVar5;
    if ((0x3f < uVar9) || (iVar6 = iVar6 + 1 + uVar9, 0xff < iVar6)) goto LAB_007bfbed;
    pbVar5 = pbVar5 + (ulong)uVar9 + 1;
  } while (uVar9 != 0);
  bVar4 = true;
  pbVar13 = param_2 + param_3;
  pbVar5 = param_2;
  local_48 = ppuVar15;
  do {
    bVar1 = *param_1;
    local_50 = (int)param_2;
    if ((bVar1 != 0) && (puVar18 != (u_char *)0x0)) {
      if (local_60 < ppuVar15) {
        local_70 = local_60;
        do {
          pbVar16 = *local_70;
          bVar2 = *pbVar16;
          while (((bVar2 != 0 && ((bVar2 & 0xc0) == 0)) &&
                 (lVar17 = (long)pbVar16 - (long)puVar18, lVar17 < 0x4000))) {
            uVar9 = (uint)bVar2;
            pbVar10 = param_1;
            pbVar14 = pbVar16;
            do {
              if ((bVar2 & 0xc0) == 0) {
                if (*pbVar10 != bVar2) break;
                pbVar8 = pbVar10 + (bVar2 + 1);
                pbVar10 = pbVar10 + 1;
                pbVar14 = pbVar14 + 1;
                do {
                  bVar2 = *pbVar10;
                  pbVar10 = pbVar10 + 1;
                  uVar7 = (uint)bVar2;
                  if (bVar2 - 0x41 < 0x1a) {
                    uVar7 = bVar2 + 0x20;
                  }
                  bVar2 = *pbVar14;
                  pbVar14 = pbVar14 + 1;
                  uVar11 = (uint)bVar2;
                  if (bVar2 - 0x41 < 0x1a) {
                    uVar11 = bVar2 + 0x20;
                  }
                  if (uVar11 != uVar7) goto LAB_007bfe10;
                } while (pbVar10 != pbVar8);
                if (*pbVar10 == 0) {
                  if (*pbVar14 == 0) {
                    if ((int)lVar17 < 0) goto LAB_007bfcee;
                    if (1 < (long)pbVar13 - (long)pbVar5) {
                      pbVar5[1] = (byte)lVar17;
                      *pbVar5 = (byte)((ulong)lVar17 >> 8) | 0xc0;
                      return ((int)pbVar5 + 2) - local_50;
                    }
                    goto LAB_007bff4e;
                  }
                  break;
                }
              }
              else {
                if ((bVar2 & 0xc0) != 0xc0) {
                  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x5a;
                  goto LAB_007bfcee;
                }
                pbVar14 = puVar18 + ((bVar2 & 0x3f) << 8 | (uint)pbVar14[1]);
              }
              bVar2 = *pbVar14;
            } while (bVar2 != 0);
LAB_007bfe10:
            pbVar16 = pbVar16 + (uVar9 + 1 & 0xff);
            bVar2 = *pbVar16;
          }
          local_70 = local_70 + 1;
        } while (local_70 < ppuVar15);
      }
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 2;
LAB_007bfcee:
      if (((param_5 != (u_char **)0x0) && (local_48 < param_5 + -1)) &&
         (((long)pbVar5 - (long)puVar18 < 0x4000 && (bVar4)))) {
        *local_48 = pbVar5;
        local_48 = local_48 + 1;
        *local_48 = (u_char *)0x0;
        bVar4 = false;
      }
    }
    if ((0x3f < bVar1) || (uVar9 = bVar1 + 1, (long)pbVar13 - (long)pbVar5 < (long)(int)uVar9))
    goto LAB_007bff45;
    if (uVar9 < 8) {
      if ((uVar9 & 4) == 0) {
        if ((uVar9 != 0) && (*pbVar5 = *param_1, (uVar9 & 2) != 0)) {
          *(undefined2 *)(pbVar5 + ((ulong)uVar9 - 2)) =
               *(undefined2 *)(param_1 + ((ulong)uVar9 - 2));
        }
      }
      else {
        *(undefined4 *)pbVar5 = *(undefined4 *)param_1;
        *(undefined4 *)(pbVar5 + ((ulong)uVar9 - 4)) = *(undefined4 *)(param_1 + ((ulong)uVar9 - 4))
        ;
      }
    }
    else {
      *(undefined8 *)pbVar5 = *(undefined8 *)param_1;
      *(undefined8 *)(pbVar5 + ((ulong)uVar9 - 8)) = *(undefined8 *)(param_1 + ((ulong)uVar9 - 8));
      lVar17 = (long)pbVar5 - ((ulong)(pbVar5 + 8) & 0xfffffffffffffff8);
      uVar9 = uVar9 + (int)lVar17 & 0xfffffff8;
      if (7 < uVar9) {
        uVar7 = 0;
        do {
          uVar12 = (ulong)uVar7;
          uVar7 = uVar7 + 8;
          *(undefined8 *)(((ulong)(pbVar5 + 8) & 0xfffffffffffffff8) + uVar12) =
               *(undefined8 *)(param_1 + (uVar12 - lVar17));
        } while (uVar7 < uVar9);
      }
    }
    lVar17 = (ulong)(uint)bVar1 + 1;
    param_1 = param_1 + lVar17;
    pbVar5 = pbVar5 + lVar17;
  } while (bVar1 != 0);
  if (pbVar13 < pbVar5) {
LAB_007bff45:
    if (puVar18 != (u_char *)0x0) {
LAB_007bff4e:
      *ppuVar15 = (u_char *)0x0;
    }
LAB_007bfbed:
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x5a;
    local_50 = -1;
  }
  else {
    local_50 = (int)pbVar5 - local_50;
  }
  return local_50;
}


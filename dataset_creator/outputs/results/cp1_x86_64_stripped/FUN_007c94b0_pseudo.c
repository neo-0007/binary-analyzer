
int FUN_007c94b0(byte *param_1,byte *param_2,int param_3,long *param_4,long param_5)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  ulong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  long *plVar14;
  byte *pbVar15;
  long lVar16;
  long lVar17;
  long in_FS_OFFSET;
  long *local_70;
  long *local_60;
  int local_50;
  long *local_48;
  
  if (param_4 == (long *)0x0) {
    local_60 = (long *)0x0;
    lVar17 = 0;
    plVar14 = (long *)0x0;
  }
  else {
    lVar17 = *param_4;
    local_60 = param_4 + 1;
    if (lVar17 == 0) {
      plVar14 = (long *)0x0;
    }
    else {
      lVar16 = param_4[1];
      plVar14 = local_60;
      while (lVar16 != 0) {
        plVar14 = plVar14 + 1;
        lVar16 = *plVar14;
      }
    }
  }
  iVar5 = 0;
  pbVar4 = param_1;
  do {
    uVar8 = (uint)*pbVar4;
    if ((0x3f < uVar8) || (iVar5 = iVar5 + 1 + uVar8, 0xff < iVar5)) goto LAB_007c952d;
    pbVar4 = pbVar4 + (ulong)uVar8 + 1;
  } while (uVar8 != 0);
  bVar3 = true;
  pbVar12 = param_2 + param_3;
  pbVar4 = param_2;
  local_48 = plVar14;
  do {
    bVar1 = *param_1;
    local_50 = (int)param_2;
    if ((bVar1 != 0) && (lVar17 != 0)) {
      if (local_60 < plVar14) {
        local_70 = local_60;
        do {
          pbVar15 = (byte *)*local_70;
          bVar2 = *pbVar15;
          while (((bVar2 != 0 && ((bVar2 & 0xc0) == 0)) &&
                 (lVar16 = (long)pbVar15 - lVar17, lVar16 < 0x4000))) {
            uVar8 = (uint)bVar2;
            pbVar9 = param_1;
            pbVar13 = pbVar15;
            do {
              if ((bVar2 & 0xc0) == 0) {
                if (*pbVar9 != bVar2) break;
                pbVar7 = pbVar9 + (bVar2 + 1);
                pbVar9 = pbVar9 + 1;
                pbVar13 = pbVar13 + 1;
                do {
                  bVar2 = *pbVar9;
                  pbVar9 = pbVar9 + 1;
                  uVar6 = (uint)bVar2;
                  if (bVar2 - 0x41 < 0x1a) {
                    uVar6 = bVar2 + 0x20;
                  }
                  bVar2 = *pbVar13;
                  pbVar13 = pbVar13 + 1;
                  uVar10 = (uint)bVar2;
                  if (bVar2 - 0x41 < 0x1a) {
                    uVar10 = bVar2 + 0x20;
                  }
                  if (uVar10 != uVar6) goto LAB_007c9750;
                } while (pbVar9 != pbVar7);
                if (*pbVar9 == 0) {
                  if (*pbVar13 == 0) {
                    if ((int)lVar16 < 0) goto LAB_007c962e;
                    if (1 < (long)pbVar12 - (long)pbVar4) {
                      pbVar4[1] = (byte)lVar16;
                      *pbVar4 = (byte)((ulong)lVar16 >> 8) | 0xc0;
                      return ((int)pbVar4 + 2) - local_50;
                    }
                    goto LAB_007c988e;
                  }
                  break;
                }
              }
              else {
                if ((bVar2 & 0xc0) != 0xc0) {
                  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x5a;
                  goto LAB_007c962e;
                }
                pbVar13 = (byte *)(lVar17 + (ulong)((bVar2 & 0x3f) << 8 | (uint)pbVar13[1]));
              }
              bVar2 = *pbVar13;
            } while (bVar2 != 0);
LAB_007c9750:
            pbVar15 = pbVar15 + (uVar8 + 1 & 0xff);
            bVar2 = *pbVar15;
          }
          local_70 = local_70 + 1;
        } while (local_70 < plVar14);
      }
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 2;
LAB_007c962e:
      if (((param_5 != 0) && (local_48 < (long *)(param_5 + -8))) &&
         (((long)pbVar4 - lVar17 < 0x4000 && (bVar3)))) {
        *local_48 = (long)pbVar4;
        local_48 = local_48 + 1;
        *local_48 = 0;
        bVar3 = false;
      }
    }
    if ((0x3f < bVar1) || (uVar8 = bVar1 + 1, (long)pbVar12 - (long)pbVar4 < (long)(int)uVar8))
    goto LAB_007c9885;
    if (uVar8 < 8) {
      if ((uVar8 & 4) == 0) {
        if ((uVar8 != 0) && (*pbVar4 = *param_1, (uVar8 & 2) != 0)) {
          *(undefined2 *)(pbVar4 + ((ulong)uVar8 - 2)) =
               *(undefined2 *)(param_1 + ((ulong)uVar8 - 2));
        }
      }
      else {
        *(undefined4 *)pbVar4 = *(undefined4 *)param_1;
        *(undefined4 *)(pbVar4 + ((ulong)uVar8 - 4)) = *(undefined4 *)(param_1 + ((ulong)uVar8 - 4))
        ;
      }
    }
    else {
      *(undefined8 *)pbVar4 = *(undefined8 *)param_1;
      *(undefined8 *)(pbVar4 + ((ulong)uVar8 - 8)) = *(undefined8 *)(param_1 + ((ulong)uVar8 - 8));
      lVar16 = (long)pbVar4 - ((ulong)(pbVar4 + 8) & 0xfffffffffffffff8);
      uVar8 = uVar8 + (int)lVar16 & 0xfffffff8;
      if (7 < uVar8) {
        uVar6 = 0;
        do {
          uVar11 = (ulong)uVar6;
          uVar6 = uVar6 + 8;
          *(undefined8 *)(((ulong)(pbVar4 + 8) & 0xfffffffffffffff8) + uVar11) =
               *(undefined8 *)(param_1 + (uVar11 - lVar16));
        } while (uVar6 < uVar8);
      }
    }
    lVar16 = (ulong)(uint)bVar1 + 1;
    param_1 = param_1 + lVar16;
    pbVar4 = pbVar4 + lVar16;
  } while (bVar1 != 0);
  if (pbVar12 < pbVar4) {
LAB_007c9885:
    if (lVar17 != 0) {
LAB_007c988e:
      *plVar14 = 0;
    }
LAB_007c952d:
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x5a;
    local_50 = -1;
  }
  else {
    local_50 = (int)pbVar4 - local_50;
  }
  return local_50;
}


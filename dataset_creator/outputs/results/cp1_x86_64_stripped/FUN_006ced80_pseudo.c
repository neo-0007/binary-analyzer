
long FUN_006ced80(ulong *param_1,ulong param_2)

{
  long *plVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  byte bVar12;
  long *plVar13;
  code *pcVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong *puVar18;
  long lVar19;
  ulong *puVar20;
  ulong local_78;
  ulong local_70;
  long local_68;
  ulong local_60;
  ulong local_50;
  ulong *local_48;
  long local_40;
  
  bVar2 = (byte)param_1[4];
  if ((bVar2 & 1) == 0) {
    uVar4 = (uint)param_1[4] >> 0xb;
    local_70 = (ulong)uVar4;
    if (uVar4 == 0) {
      plVar13 = (long *)param_1[3];
      if ((bVar2 & 2) == 0) {
        local_70 = FUN_006cde10();
        if (local_70 != 0xffffffffffffffff) goto LAB_006cf049;
LAB_006cee74:
        param_1[4] = 0x7f8;
        param_1[3] = (ulong)&DAT_008227b0;
      }
      else if (*plVar13 == 0) {
        *(uint *)(param_1 + 4) = (uint)param_1[4] & 0x7ff;
      }
      else {
        do {
          lVar11 = FUN_006cde10(param_1);
          if (lVar11 == -1) goto LAB_006cee74;
          plVar1 = plVar13 + 1;
          plVar13 = plVar13 + 1;
          local_70 = local_70 + lVar11;
        } while (*plVar1 != 0);
LAB_006cf049:
        uVar4 = (uint)local_70 & 0x1fffff;
        if (uVar4 != local_70) {
          uVar4 = 0;
        }
        *(uint *)(param_1 + 4) = (uint)param_1[4] & 0x7ff | uVar4 << 0xb;
        if (local_70 != 0) goto LAB_006cf148;
      }
    }
    else {
LAB_006cf148:
      lVar11 = local_70 * 8 + 0x10;
      puVar8 = (ulong *)FUN_007101b0(lVar11);
      local_48 = puVar8;
      if (puVar8 != (ulong *)0x0) {
        puVar8[1] = 0;
        lVar11 = FUN_007101b0(lVar11);
        if (lVar11 != 0) {
          *(undefined8 *)(lVar11 + 8) = 0;
        }
        uVar10 = param_1[4];
        plVar13 = (long *)param_1[3];
        local_40 = lVar11;
        if ((uVar10 & 2) == 0) {
          FUN_006ce1f0(param_1,&local_48,plVar13);
        }
        else {
          if (*plVar13 == 0) goto code_r0x004046ef;
          do {
            plVar13 = plVar13 + 1;
            FUN_006ce1f0(param_1);
          } while (*plVar13 != 0);
        }
        uVar15 = puVar8[1];
        if (uVar15 != local_70) goto code_r0x004046ef;
        pcVar14 = FUN_006ce0c0;
        if (((uVar10 & 4) == 0) && (pcVar14 = FUN_006cda00, (param_1[4] & 0x7f8) != 0)) {
          pcVar14 = FUN_006ce010;
        }
        if (lVar11 == 0) {
          FUN_006cdae0(param_1,pcVar14,puVar8);
        }
        else {
          puVar18 = (ulong *)&DAT_00945640;
          local_60 = 0;
          puVar20 = puVar8 + 2;
          while( true ) {
            *(ulong **)(lVar11 + 0x10 + local_60 * 8) = puVar18;
            local_60 = local_60 + 1;
            puVar18 = puVar20;
            if (local_60 == uVar15) break;
            do {
              iVar5 = (*pcVar14)(param_1,puVar20[1],*puVar18);
              if (-1 < iVar5) break;
              lVar9 = ((long)puVar18 - (long)(puVar8 + 2) >> 3) + 2;
              puVar18 = *(ulong **)(lVar11 + lVar9 * 8);
              *(undefined8 *)(lVar11 + lVar9 * 8) = 0;
            } while (puVar18 != (ulong *)&DAT_00945640);
            puVar20 = puVar20 + 1;
          }
          lVar9 = 0;
          uVar6 = 0;
          uVar10 = 0;
          do {
            if (*(long *)(lVar11 + 0x10 + uVar10 * 8) == 0) {
              *(ulong *)(lVar11 + 0x10 + lVar9 * 8) = puVar8[uVar10 + 2];
              lVar9 = lVar9 + 1;
            }
            else {
              puVar8[uVar6 + 2] = puVar8[uVar10 + 2];
              uVar6 = uVar6 + 1;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 != uVar15);
          puVar8[1] = uVar6;
          *(long *)(lVar11 + 8) = lVar9;
          if (uVar6 + lVar9 != local_70) goto code_r0x004046ef;
          FUN_006cdae0(param_1,pcVar14,lVar11);
          local_68 = *(long *)(lVar11 + 8);
          if (local_68 != 0) {
            uVar10 = puVar8[1];
            do {
              lVar9 = local_68 + -1;
              local_70 = *(ulong *)(lVar11 + (local_68 + 1) * 8);
              if (uVar10 == 0) {
                puVar8[local_68 + 1] = local_70;
                if (lVar9 == 0) break;
                lVar19 = local_68 + -2;
                local_70 = *(ulong *)(lVar11 + local_68 * 8);
                local_68 = lVar19;
              }
              else {
                lVar19 = local_68 + -1 + uVar10;
                do {
                  uVar15 = uVar10 - 1;
                  iVar5 = (*pcVar14)(param_1,puVar8[uVar10 + 1],local_70);
                  local_68 = lVar9;
                  if (iVar5 < 1) goto LAB_006cf37f;
                  puVar8[lVar19 + 2] = puVar8[uVar10 + 1];
                  lVar19 = lVar19 + -1;
                  uVar10 = uVar15;
                } while (uVar15 != 0);
                uVar10 = 0;
                lVar19 = lVar9;
              }
LAB_006cf37f:
              puVar8[lVar19 + 2] = local_70;
            } while (local_68 != 0);
            puVar8[1] = puVar8[1] + *(long *)(lVar11 + 8);
          }
          FUN_007104f0(lVar11);
        }
        uVar10 = param_1[3];
        *(byte *)(param_1 + 4) = (byte)param_1[4] | 1;
        param_1[3] = (ulong)puVar8;
        *puVar8 = uVar10;
      }
    }
    if (param_2 < *param_1) {
      return 0;
    }
    bVar2 = (byte)param_1[4];
    plVar13 = (long *)param_1[3];
    if ((bVar2 & 1) == 0) {
      if ((bVar2 & 2) == 0) {
        lVar11 = FUN_006ce4b0(param_1,plVar13,param_2);
        return lVar11;
      }
      lVar11 = *plVar13;
      while( true ) {
        if (lVar11 == 0) {
          return 0;
        }
        lVar11 = FUN_006ce4b0(param_1,lVar11,param_2);
        if (lVar11 != 0) break;
        lVar11 = plVar13[1];
        plVar13 = plVar13 + 1;
      }
      return lVar11;
    }
  }
  uVar10 = param_1[3];
  if ((bVar2 & 4) != 0) {
    if (*(ulong *)(uVar10 + 8) == 0) {
      return 0;
    }
    local_78 = 0;
    uVar15 = *(ulong *)(uVar10 + 8);
LAB_006cefa2:
    uVar6 = uVar15 + local_78 >> 1;
    lVar11 = *(long *)(uVar10 + 0x10 + uVar6 * 8);
    bVar2 = FUN_006cdce0((lVar11 + 4) - (long)*(int *)(lVar11 + 4));
    if (bVar2 != 0xff) {
      bVar12 = bVar2 & 0x70;
      if (bVar12 == 0x20) {
        uVar16 = param_1[1];
        goto LAB_006ceff8;
      }
      if (0x20 < bVar12) {
        if (bVar12 == 0x30) {
          uVar16 = param_1[2];
          goto LAB_006ceff8;
        }
        if (bVar12 != 0x50) {
          lVar11 = FUN_004046ef(bVar2);
          return lVar11;
        }
        goto LAB_006cf0f8;
      }
      if ((bVar2 & 0x60) != 0) goto code_r0x004046ef;
    }
LAB_006cf0f8:
    uVar16 = 0;
LAB_006ceff8:
    uVar7 = FUN_006cdb90(bVar2,uVar16,lVar11 + 8,&local_50);
    FUN_006cdb90(bVar2 & 0xf,0,uVar7,&local_48);
    if (local_50 <= param_2) {
      if (param_2 < local_50 + (long)local_48) {
        return lVar11;
      }
      local_78 = uVar6 + 1;
      uVar6 = uVar15;
    }
    uVar15 = uVar6;
    if (uVar6 <= local_78) {
      return 0;
    }
    goto LAB_006cefa2;
  }
  if (((ushort)param_1[4] & 0x7f8) == 0) {
    uVar15 = 0;
    uVar6 = *(ulong *)(uVar10 + 8);
    do {
      uVar16 = uVar6;
      if (uVar16 <= uVar15) {
        return 0;
      }
      while( true ) {
        uVar6 = uVar16 + uVar15 >> 1;
        lVar11 = *(long *)(uVar10 + 0x10 + uVar6 * 8);
        if (param_2 < *(ulong *)(lVar11 + 8)) break;
        if (param_2 < *(ulong *)(lVar11 + 8) + *(long *)(lVar11 + 0x10)) {
          return lVar11;
        }
        uVar15 = uVar6 + 1;
        if (uVar16 <= uVar15) {
          return 0;
        }
      }
    } while( true );
  }
  uVar3 = (ushort)param_1[4] >> 3;
  bVar2 = (byte)uVar3;
  if (bVar2 != 0xff) {
    bVar12 = bVar2 & 0x70;
    if (bVar12 == 0x20) {
      uVar15 = param_1[1];
      goto LAB_006ceec8;
    }
    if (bVar12 < 0x21) {
      if ((uVar3 & 0x60) != 0) {
code_r0x004046ef:
                    /* WARNING: Subroutine does not return */
        FUN_00404713();
      }
    }
    else {
      if (bVar12 == 0x30) {
        uVar15 = param_1[2];
        goto LAB_006ceec8;
      }
      if (bVar12 != 0x50) {
        lVar11 = FUN_004046ef();
        return lVar11;
      }
    }
  }
  uVar15 = 0;
LAB_006ceec8:
  if (*(ulong *)(uVar10 + 8) != 0) {
    uVar6 = 0;
    uVar16 = *(ulong *)(uVar10 + 8);
    do {
      uVar17 = uVar16 + uVar6 >> 1;
      lVar11 = *(long *)(uVar10 + 0x10 + uVar17 * 8);
      uVar7 = FUN_006cdb90(bVar2,uVar15,lVar11 + 8,&local_50);
      FUN_006cdb90(uVar3 & 0xf,0,uVar7,&local_48);
      if (local_50 <= param_2) {
        if (param_2 < local_50 + (long)local_48) {
          return lVar11;
        }
        uVar6 = uVar17 + 1;
        uVar17 = uVar16;
      }
      uVar16 = uVar17;
    } while (uVar6 < uVar17);
  }
  return 0;
}



long FUN_006e5480(undefined8 param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  ulong *puVar4;
  byte *pbVar5;
  byte bVar6;
  char *pcVar7;
  uint *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  byte *pbVar13;
  ulong *puVar14;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  byte *pbVar20;
  byte *pbVar21;
  ulong uVar22;
  long in_FS_OFFSET;
  ulong local_228;
  ulong local_220;
  long local_218;
  long local_210;
  ulong local_208;
  ulong local_200;
  ulong local_1f8;
  ulong local_1f0;
  ulong local_1e8;
  long local_1e0;
  byte local_1d8;
  byte local_1d7 [407];
  long local_40;
  ulong *puVar15;
  
  puVar14 = &local_228;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar15 = &local_228;
  puVar4 = &local_228;
  while (puVar15 != (ulong *)((long)&local_228 - ((long)param_2 + 0x25U & 0xfffffffffffff000))) {
    puVar14 = (ulong *)((long)puVar4 + -0x1000);
    *(undefined8 *)((long)puVar4 + -8) = *(undefined8 *)((long)puVar4 + -8);
    puVar15 = (ulong *)((long)puVar4 + -0x1000);
    puVar4 = (ulong *)((long)puVar4 + -0x1000);
  }
  uVar10 = (ulong)((uint)((long)param_2 + 0x25U) & 0xff0);
  lVar3 = -uVar10;
  if (uVar10 != 0) {
    *(undefined8 *)((long)puVar14 + -8) = *(undefined8 *)((long)puVar14 + -8);
  }
  *(undefined8 *)((long)puVar14 + lVar3 + -8) = 0x6e54fd;
  pcVar7 = (char *)thunk_FUN_00713820((ulong)((long)puVar14 + lVar3 + 0xf) & 0xfffffffffffffff0,
                                      param_1);
  *(undefined8 *)pcVar7 = s__locale_alias_008248d0._0_8_;
  *(undefined4 *)(pcVar7 + 8) = s__locale_alias_008248d0._8_4_;
  *(undefined2 *)(pcVar7 + 0xc) = s__locale_alias_008248d0._12_2_;
  *(undefined8 *)((long)puVar14 + lVar3 + -8) = 0x6e552a;
  puVar8 = (uint *)FUN_006fda20((ulong)((long)puVar14 + lVar3 + 0xf) & 0xfffffffffffffff0,"rce");
  if (puVar8 == (uint *)0x0) {
    local_1e0 = 0;
  }
  else {
    uVar2 = *puVar8;
    local_1e0 = 0;
    *puVar8 = uVar2 | 0x8000;
    if ((uVar2 & 0x10) == 0) {
      do {
        *(undefined8 *)((long)puVar14 + lVar3 + -8) = 0x6e5570;
        lVar9 = FUN_00703150(&local_1d8,400,puVar8);
        if (lVar9 == 0) break;
        *(undefined8 *)((long)puVar14 + lVar3 + -8) = 0x6e5585;
        uVar10 = thunk_FUN_00712710(&local_1d8,10);
        lVar9 = *(long *)(in_FS_OFFSET + -0x40);
        bVar1 = *(byte *)(lVar9 + 1 + (ulong)local_1d8 * 2);
        pbVar20 = &local_1d8;
        bVar6 = local_1d8;
        while ((bVar1 & 0x20) != 0) {
          bVar6 = pbVar20[1];
          pbVar20 = pbVar20 + 1;
          bVar1 = *(byte *)(lVar9 + 1 + (ulong)bVar6 * 2);
        }
        if ((bVar6 != 0) && (bVar6 != 0x23)) {
          bVar1 = pbVar20[1];
          pbVar5 = pbVar20 + 1;
          uVar22 = (ulong)bVar1;
          do {
            pbVar21 = pbVar5;
            if (bVar1 == 0) goto LAB_006e5695;
            bVar1 = pbVar21[1];
            lVar11 = uVar22 * 2;
            pbVar5 = pbVar21 + 1;
            uVar22 = (ulong)bVar1;
          } while ((*(byte *)(lVar9 + 1 + lVar11) & 0x20) == 0);
          *pbVar21 = 0;
          pbVar21 = pbVar21 + 1;
LAB_006e5695:
          bVar6 = (byte)uVar22;
          bVar1 = *(byte *)(lVar9 + 1 + uVar22 * 2);
          while ((bVar1 & 0x20) != 0) {
            bVar6 = pbVar21[1];
            pbVar21 = pbVar21 + 1;
            bVar1 = *(byte *)(lVar9 + 1 + (ulong)bVar6 * 2);
          }
          if (bVar6 != 0) {
            bVar1 = pbVar21[1];
            pbVar5 = pbVar21;
            while (bVar1 != 0) {
              pbVar13 = pbVar5 + 1;
              if ((*(byte *)(lVar9 + 1 + (ulong)bVar1 * 2) & 0x20) != 0) {
                if (bVar1 == 10) {
                  pbVar13[0] = 0;
                  pbVar13[1] = 10;
                }
                else {
                  *pbVar13 = 0;
                }
                break;
              }
              bVar1 = pbVar5[2];
              pbVar5 = pbVar13;
            }
            local_1e8 = DAT_009463f0;
            uVar22 = DAT_009463e8;
            plVar12 = DAT_0094b5a8;
            if (DAT_009463e8 <= DAT_009463f0) {
              if (DAT_009463e8 == 0) {
                lVar9 = 0x640;
                uVar22 = 100;
              }
              else {
                uVar22 = DAT_009463e8 * 2;
                lVar9 = DAT_009463e8 << 5;
              }
              *(undefined8 *)((long)puVar14 + lVar3 + -8) = 0x6e58cf;
              local_1f0 = uVar10;
              plVar12 = (long *)FUN_00710840(DAT_0094b5a8,lVar9);
              uVar10 = local_1f0;
              if (plVar12 == (long *)0x0) break;
            }
            DAT_0094b5a8 = plVar12;
            DAT_009463e8 = uVar22;
            *(undefined8 *)((long)puVar14 + lVar3 + -8) = 0x6e5723;
            local_200 = uVar10;
            lVar9 = thunk_FUN_007129d0(pbVar20);
            local_1f0 = lVar9 + 1;
            *(undefined8 *)((long)puVar14 + lVar3 + -8) = 0x6e5736;
            lVar9 = thunk_FUN_007129d0(pbVar21);
            lVar9 = lVar9 + 1;
            uVar10 = DAT_00946400 + local_1f0;
            local_1f8 = uVar10 + lVar9;
            uVar22 = local_1f0;
            local_210 = lVar9;
            uVar19 = DAT_00946400;
            plVar12 = DAT_0094b5a8;
            if (DAT_009463f8 < local_1f8) {
              local_208 = local_1f0 + lVar9;
              local_228 = DAT_00946400;
              local_220 = local_200;
              if (local_208 < 0x400) {
                local_208 = 0x400;
              }
              local_210 = local_1f0;
              local_208 = local_208 + DAT_009463f8;
              local_200 = DAT_0094b5b0;
              *(undefined8 *)((long)puVar14 + lVar3 + -8) = 0x6e57ce;
              local_218 = lVar9;
              local_1f0 = uVar10;
              lVar9 = FUN_00710840(DAT_0094b5b0,local_208);
              plVar12 = DAT_0094b5a8;
              if (lVar9 == 0) break;
              if ((lVar9 != local_200) && (local_1e8 != 0)) {
                plVar18 = DAT_0094b5a8 + local_1e8 * 2;
                plVar16 = DAT_0094b5a8;
                do {
                  plVar17 = plVar16 + 2;
                  *plVar16 = *plVar16 + (lVar9 - local_200);
                  plVar16[1] = plVar16[1] + (lVar9 - local_200);
                  plVar16 = plVar17;
                } while (plVar17 != plVar18);
              }
              DAT_009463f8 = local_208;
              local_200 = local_220;
              uVar22 = local_210;
              local_210 = local_218;
              uVar19 = local_228;
              DAT_0094b5b0 = lVar9;
              uVar10 = local_1f0;
            }
            local_1f0 = uVar10;
            lVar9 = local_1e8 * 2;
            *(undefined8 *)((long)puVar14 + lVar3 + -8) = 0x6e5851;
            local_208 = local_200;
            local_200 = DAT_0094b5b0;
            lVar11 = thunk_FUN_00713a50(DAT_0094b5b0 + uVar19,pbVar20,uVar22);
            plVar12[lVar9] = lVar11;
            *(undefined8 *)((long)puVar14 + lVar3 + -8) = 0x6e5874;
            lVar11 = thunk_FUN_00713a50(local_1f0 + local_200,pbVar21,local_210);
            local_1e0 = local_1e0 + 1;
            DAT_009463f0 = local_1e8 + 1;
            DAT_00946400 = local_1f8;
            (plVar12 + lVar9)[1] = lVar11;
            uVar10 = local_208;
          }
        }
        while (uVar10 == 0) {
          *(undefined8 *)((long)puVar14 + lVar3 + -8) = 0x6e5652;
          lVar9 = FUN_00703150(&local_1d8,400,puVar8);
          if (lVar9 == 0) break;
          *(undefined8 *)((long)puVar14 + lVar3 + -8) = 0x6e563d;
          uVar10 = thunk_FUN_00712710(&local_1d8,10);
        }
      } while ((*puVar8 & 0x10) == 0);
      *(undefined8 *)((long)puVar14 + lVar3 + -8) = 0x6e55db;
      FUN_006fd190(puVar8);
      if (local_1e0 != 0) {
        *(undefined8 *)((long)puVar14 + lVar3 + -8) = 0x6e5604;
        FUN_006e8e20(DAT_0094b5a8,DAT_009463f0,0x10,FUN_006e5460);
      }
    }
    else {
      *(undefined8 *)((long)puVar14 + lVar3 + -8) = 0x6e596d;
      FUN_006fd190(puVar8);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_1e0;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)puVar14 + lVar3 + -8) = &UNK_006e5977;
  FUN_00771f60();
}


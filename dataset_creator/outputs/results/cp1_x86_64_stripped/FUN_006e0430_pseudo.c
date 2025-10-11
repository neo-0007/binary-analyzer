
undefined8 * FUN_006e0430(int param_1,undefined8 *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  byte *pbVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong *puVar19;
  uint uVar20;
  ulong uVar21;
  byte *pbVar22;
  long in_FS_OFFSET;
  ulong local_148;
  int local_13c;
  undefined8 *local_138;
  ulong local_130;
  ulong local_128;
  undefined8 *local_120;
  long local_118 [5];
  ulong local_f0;
  long local_e8;
  ulong local_e0;
  long local_d8;
  ulong local_d0;
  long local_c8;
  ulong local_c0;
  long local_a8;
  ulong local_a0;
  long local_98;
  ulong local_90;
  long local_88;
  ulong local_80;
  long local_78;
  ulong local_70;
  long local_68;
  ulong local_60;
  long local_58;
  ulong local_50;
  long local_40;
  ulong *puVar18;
  
  puVar16 = &local_148;
  puVar18 = &local_148;
  puVar17 = &local_148;
  puVar19 = &local_148;
  pbVar12 = (byte *)*param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_13c = param_1;
  local_138 = param_2;
  FUN_00768db0(0x1e);
  for (puVar7 = DAT_009461e0; puVar7 != (undefined8 *)0x0; puVar7 = (undefined8 *)*puVar7) {
    pbVar22 = (byte *)puVar7[1];
    if ((pbVar22 == pbVar12) || (iVar2 = thunk_FUN_00712780(pbVar12,pbVar22), iVar2 == 0)) {
      *local_138 = pbVar22;
      puVar7 = (undefined8 *)puVar7[(long)local_13c + 2];
      goto LAB_006e04b6;
    }
  }
  lVar4 = thunk_FUN_00712710(pbVar12,0x2e);
  puVar16 = &local_148;
  pbVar22 = pbVar12;
  if ((lVar4 == 0) || (puVar16 = &local_148, (*(byte *)(lVar4 + 1) & 0xbf) == 0)) {
LAB_006e04fc:
    if (DAT_009462a8 == (undefined8 *)0x0) {
      local_120 = DAT_009462a8;
      DAT_009462a8 = &DAT_00946290;
      *(undefined8 *)((long)puVar16 + -8) = 0x6e08bf;
      iVar2 = FUN_0076e620("/usr/lib/locale/locale-archive",0x80000);
      if (-1 < iVar2) {
        *(undefined8 *)((long)puVar16 + -8) = 0x6e0a16;
        iVar3 = FUN_0076d7f0(iVar2,&DAT_00946200);
        uVar5 = DAT_00946230;
        if (iVar3 != -1) {
          *(undefined8 *)((long)puVar16 + -8) = 0x6e0a4e;
          lVar4 = FUN_0076f020(0,DAT_00946230,1,2,iVar2,0);
          if (lVar4 != -1) {
            uVar21 = (ulong)*(uint *)(lVar4 + 8) + (ulong)*(uint *)(lVar4 + 0x10) * 0xc;
            uVar13 = (ulong)*(uint *)(lVar4 + 0x20) + (ulong)*(uint *)(lVar4 + 0x24) * 0x6c;
            if (uVar21 < uVar13) {
              uVar21 = uVar13;
            }
            uVar13 = (ulong)(uint)(*(int *)(lVar4 + 0x18) + *(int *)(lVar4 + 0x14));
            if (uVar21 < uVar13) {
              uVar21 = uVar13;
            }
            if (uVar21 <= uVar5) {
              *(undefined8 *)((long)puVar16 + -8) = 0x6e0aa9;
              FUN_0076e4b0(iVar2);
              DAT_0094629c = (uint)uVar5;
              DAT_00946290 = lVar4;
              goto LAB_006e051c;
            }
            *(undefined8 *)((long)puVar16 + -8) = 0x6e0ac7;
            FUN_0076f080(lVar4,uVar5);
          }
        }
        *(undefined8 *)((long)puVar16 + -8) = 0x6e0add;
        FUN_0076e4b0(iVar2);
        puVar7 = local_120;
        goto LAB_006e04b6;
      }
    }
    else if (DAT_00946290 != 0) {
LAB_006e051c:
      lVar4 = DAT_00946290;
      *(undefined8 *)((long)puVar16 + -8) = 0x6e0524;
      uVar5 = thunk_FUN_007129d0(pbVar22);
      uVar21 = uVar5 & 0xffffffff;
      if (uVar5 == 0) {
LAB_006e08e0:
        uVar21 = 0xffffffff;
      }
      else {
        pbVar12 = pbVar22;
        do {
          bVar1 = *pbVar12;
          pbVar12 = pbVar12 + 1;
          uVar20 = ((uint)uVar21 << 9 | (uint)uVar21 >> 0x17) + (uint)bVar1;
          uVar21 = (ulong)uVar20;
        } while (pbVar22 + uVar5 != pbVar12);
        if (uVar20 == 0) goto LAB_006e08e0;
      }
      local_148 = (ulong)*(uint *)(lVar4 + 8);
      uVar20 = *(uint *)(lVar4 + 0x10);
      if (2 < uVar20) {
        uVar13 = (ulong)uVar20;
        uVar5 = uVar21 % uVar13;
        lVar6 = uVar21 % (ulong)(uVar20 - 2) + 1;
        do {
          piVar14 = (int *)(lVar4 + local_148 + uVar5 * 0xc);
          do {
            uVar20 = piVar14[1];
            if (uVar20 == 0) goto LAB_006e08d0;
            if (*piVar14 == (int)uVar21) {
              local_120 = (undefined8 *)CONCAT44(local_120._4_4_,(int)uVar21);
              local_130 = uVar5;
              local_128 = uVar13;
              *(undefined8 *)((long)puVar16 + -8) = 0x6e05ff;
              iVar2 = thunk_FUN_00712780(pbVar22,(ulong)uVar20 + lVar4);
              uVar21 = (ulong)local_120 & 0xffffffff;
              uVar5 = local_130;
              uVar13 = local_128;
              if (iVar2 == 0) {
                if (piVar14[2] == 0) goto LAB_006e08d0;
                lVar6 = (ulong)(uint)piVar14[2] + lVar4;
                if (DAT_0094629c != DAT_00946230) {
                    /* WARNING: Subroutine does not return */
                  *(undefined **)((long)puVar16 + -8) = &UNK_006e0b28;
                  FUN_006e2220("headmap.len == archive_stat.st_size","loadarchive.c",0x136,
                               "_nl_load_locale_from_archive");
                }
                uVar5 = (ulong)*(uint *)(lVar6 + 8);
                if (DAT_0094629c < *(uint *)(lVar6 + 8) + *(uint *)(lVar6 + 4)) goto LAB_006e08d0;
                local_118[0] = (ulong)*(uint *)(lVar6 + 4) + lVar4;
                uVar21 = (ulong)*(uint *)(lVar6 + 0x10);
                local_118[1] = uVar5;
                if (DAT_0094629c < *(uint *)(lVar6 + 0x10) + *(uint *)(lVar6 + 0xc))
                goto LAB_006e08d0;
                local_118[2] = (ulong)*(uint *)(lVar6 + 0xc) + lVar4;
                uVar5 = (ulong)*(uint *)(lVar6 + 0x18);
                local_118[3] = uVar21;
                if (DAT_0094629c < *(uint *)(lVar6 + 0x18) + *(uint *)(lVar6 + 0x14))
                goto LAB_006e08d0;
                local_118[4] = (ulong)*(uint *)(lVar6 + 0x14) + lVar4;
                uVar21 = (ulong)*(uint *)(lVar6 + 0x20);
                local_f0 = uVar5;
                if (DAT_0094629c < *(uint *)(lVar6 + 0x20) + *(uint *)(lVar6 + 0x1c))
                goto LAB_006e08d0;
                local_e8 = (ulong)*(uint *)(lVar6 + 0x1c) + lVar4;
                uVar5 = (ulong)*(uint *)(lVar6 + 0x28);
                local_e0 = uVar21;
                if (DAT_0094629c < *(uint *)(lVar6 + 0x24) + *(uint *)(lVar6 + 0x28))
                goto LAB_006e08d0;
                local_d8 = (ulong)*(uint *)(lVar6 + 0x24) + lVar4;
                uVar21 = (ulong)*(uint *)(lVar6 + 0x30);
                local_d0 = uVar5;
                if (DAT_0094629c < *(uint *)(lVar6 + 0x2c) + *(uint *)(lVar6 + 0x30))
                goto LAB_006e08d0;
                local_c8 = (ulong)*(uint *)(lVar6 + 0x2c) + lVar4;
                uVar5 = (ulong)*(uint *)(lVar6 + 0x40);
                local_c0 = uVar21;
                if (DAT_0094629c < *(uint *)(lVar6 + 0x3c) + *(uint *)(lVar6 + 0x40))
                goto LAB_006e08d0;
                local_a8 = (ulong)*(uint *)(lVar6 + 0x3c) + lVar4;
                uVar21 = (ulong)*(uint *)(lVar6 + 0x48);
                local_a0 = uVar5;
                if (DAT_0094629c < *(uint *)(lVar6 + 0x44) + *(uint *)(lVar6 + 0x48))
                goto LAB_006e08d0;
                local_98 = (ulong)*(uint *)(lVar6 + 0x44) + lVar4;
                uVar5 = (ulong)*(uint *)(lVar6 + 0x50);
                local_90 = uVar21;
                if (DAT_0094629c < *(uint *)(lVar6 + 0x4c) + *(uint *)(lVar6 + 0x50))
                goto LAB_006e08d0;
                local_88 = (ulong)*(uint *)(lVar6 + 0x4c) + lVar4;
                uVar21 = (ulong)*(uint *)(lVar6 + 0x58);
                local_80 = uVar5;
                if (DAT_0094629c < *(uint *)(lVar6 + 0x54) + *(uint *)(lVar6 + 0x58))
                goto LAB_006e08d0;
                local_78 = (ulong)*(uint *)(lVar6 + 0x54) + lVar4;
                uVar20 = *(uint *)(lVar6 + 0x60);
                local_70 = uVar21;
                if (DAT_0094629c < *(uint *)(lVar6 + 0x5c) + uVar20) goto LAB_006e08d0;
                local_68 = (ulong)*(uint *)(lVar6 + 0x5c) + lVar4;
                local_60 = (ulong)uVar20;
                if (DAT_0094629c < *(uint *)(lVar6 + 100) + *(uint *)(lVar6 + 0x68))
                goto LAB_006e08d0;
                local_58 = lVar4 + (ulong)*(uint *)(lVar6 + 100);
                local_50 = (ulong)*(uint *)(lVar6 + 0x68);
                *(undefined8 *)((long)puVar16 + -8) = 0x6e07e0;
                puVar7 = (undefined8 *)FUN_007101b0(0x78);
                if (puVar7 == (undefined8 *)0x0) goto LAB_006e08d0;
                uVar11 = *local_138;
                *(undefined8 *)((long)puVar16 + -8) = 0x6e07fb;
                puVar8 = (undefined8 *)FUN_007128a0(uVar11);
                puVar7[1] = puVar8;
                if (puVar8 == (undefined8 *)0x0) {
                  local_120 = puVar8;
                  *(undefined8 *)((long)puVar16 + -8) = 0x6e0af8;
                  FUN_007104f0(puVar7);
                  puVar7 = local_120;
                  goto LAB_006e04b6;
                }
                uVar5 = 0;
                puVar8 = puVar7;
                *puVar7 = DAT_009461e0;
                DAT_009461e0 = puVar8;
                goto LAB_006e0834;
              }
            }
            uVar5 = uVar5 + lVar6;
            piVar14 = piVar14 + lVar6 * 3;
          } while (uVar5 < uVar13);
          uVar5 = uVar5 - uVar13;
        } while( true );
      }
    }
  }
  else {
    lVar4 = lVar4 + 1;
    lVar6 = thunk_FUN_00714230(lVar4,0x40);
    lVar15 = lVar6 - lVar4;
    lVar9 = FUN_006e6110(lVar4,lVar15);
    puVar16 = &local_148;
    if (lVar9 != 0) {
      iVar2 = thunk_FUN_00712ab0(lVar9,lVar4,lVar15);
      if ((iVar2 != 0) || (*(char *)(lVar9 + lVar15) != '\0')) {
        lVar15 = thunk_FUN_007129d0(lVar9);
        lVar10 = thunk_FUN_007129d0(lVar6);
        local_120 = (undefined8 *)(lVar10 + 1);
        uVar5 = (lVar4 - (long)pbVar12) + lVar15 + 0x18 + lVar10;
        puVar16 = &local_148;
        while (puVar18 != (ulong *)((long)&local_148 - (uVar5 & 0xfffffffffffff000))) {
          puVar17 = (ulong *)((long)puVar16 + -0x1000);
          *(undefined8 *)((long)puVar16 + -8) = *(undefined8 *)((long)puVar16 + -8);
          puVar18 = (ulong *)((long)puVar16 + -0x1000);
          puVar16 = (ulong *)((long)puVar16 + -0x1000);
        }
        uVar5 = (ulong)((uint)uVar5 & 0xff0);
        lVar10 = -uVar5;
        puVar19 = (ulong *)((long)puVar17 + lVar10);
        if (uVar5 != 0) {
          *(undefined8 *)((long)puVar17 + -8) = *(undefined8 *)((long)puVar17 + -8);
        }
        pbVar22 = (byte *)((ulong)((long)puVar17 + lVar10 + 0xf) & 0xfffffffffffffff0);
        *(undefined8 *)((long)puVar17 + lVar10 + -8) = 0x6e09c9;
        uVar11 = thunk_FUN_00713820(pbVar22,pbVar12,lVar4 - (long)pbVar12);
        *(undefined8 *)((long)puVar17 + lVar10 + -8) = 0x6e09d7;
        uVar11 = thunk_FUN_00713820(uVar11,lVar9,lVar15);
        *(undefined8 *)((long)puVar17 + lVar10 + -8) = 0x6e09e9;
        thunk_FUN_00713a50(uVar11,lVar6,local_120);
      }
      *(undefined8 *)((long)puVar19 + -8) = 0x6e09f1;
      FUN_007104f0(lVar9);
      puVar16 = puVar19;
      goto LAB_006e04fc;
    }
  }
LAB_006e08d0:
  puVar7 = (undefined8 *)0x0;
LAB_006e04b6:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((long)puVar16 + -8) = 0x6e0b09;
    FUN_00771f60();
  }
  return puVar7;
LAB_006e0834:
  if (uVar5 != 6) {
    lVar4 = local_118[uVar5 * 2];
    lVar6 = local_118[uVar5 * 2 + 1];
    *(undefined8 *)((long)puVar16 + -8) = 0x6e0851;
    puVar8 = (undefined8 *)FUN_006dfdd0(uVar5 & 0xffffffff,lVar4,lVar6);
    puVar7[uVar5 + 2] = puVar8;
    if (puVar8 != (undefined8 *)0x0) {
      uVar11 = puVar7[1];
      *(undefined4 *)(puVar8 + 3) = 2;
      *(undefined4 *)(puVar8 + 6) = 0xffffffff;
      *puVar8 = uVar11;
    }
    if (uVar5 == 0xc) goto code_r0x006e0877;
  }
  uVar5 = uVar5 + 1;
  goto LAB_006e0834;
code_r0x006e0877:
  *local_138 = puVar7[1];
  puVar7 = (undefined8 *)puVar7[(long)local_13c + 2];
  goto LAB_006e04b6;
}


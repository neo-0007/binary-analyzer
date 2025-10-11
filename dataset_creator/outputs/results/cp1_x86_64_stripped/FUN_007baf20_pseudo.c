
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_007baf20(long param_1,long *param_2,uint *param_3,undefined8 *param_4,ulong param_5,
                  undefined8 param_6)

{
  double dVar1;
  longdouble lVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  byte bVar14;
  long lVar15;
  uint *puVar16;
  uint *puVar17;
  byte *pbVar18;
  code *pcVar19;
  ulong *puVar20;
  uint *puVar21;
  int *piVar22;
  undefined1 (*pauVar23) [16];
  byte *pbVar24;
  long lVar25;
  ulong uVar26;
  int iVar27;
  long *plVar28;
  long lVar29;
  undefined1 *puVar30;
  undefined1 *puVar31;
  undefined1 *puVar32;
  undefined1 *puVar33;
  undefined1 *puVar35;
  undefined1 *puVar36;
  uint uVar37;
  undefined8 uVar38;
  uint uVar39;
  undefined4 uVar40;
  undefined4 unaff_R13D;
  int iVar41;
  int iVar42;
  uint uVar43;
  long lVar44;
  undefined *puVar45;
  long lVar46;
  long lVar47;
  long *plVar48;
  ulong uVar49;
  uint *puVar50;
  long in_FS_OFFSET;
  bool bVar51;
  ushort in_FPUControlWord;
  undefined1 auVar52 [16];
  undefined1 auStack_158 [4];
  int local_154;
  long local_150;
  int local_148;
  undefined4 local_144;
  uint local_140;
  uint local_13c;
  uint *local_138;
  uint local_130;
  int local_12c;
  ulong local_128;
  uint local_120;
  uint local_11c;
  char *local_118;
  char *local_110;
  undefined8 local_108;
  long *local_100;
  byte *local_f8;
  byte *local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  uint local_c8;
  uint local_c4;
  uint *local_c0;
  uint local_ac;
  int local_a8;
  uint local_a4;
  uint local_a0 [2];
  ulong *local_98;
  long local_90;
  ulong *local_88;
  long local_80;
  ulong *local_78;
  long local_70;
  undefined1 local_68 [16];
  ulong local_58;
  ulong uStack_50;
  long local_40;
  undefined1 *puVar34;
  
  puVar30 = auStack_158;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar14 = *(byte *)((long)param_3 + 0xd);
  local_ac = 0;
  local_a8 = 0;
  bVar3 = (byte)param_3[3];
  uVar49 = (ulong)bVar3;
  local_c4 = bVar14 >> 2 & 1;
  local_100 = param_2;
  local_c0 = param_3;
  if ((bVar14 & 1) != 0) {
    lVar15 = param_2[4];
    local_110 = *(char **)(lVar15 + 0x50);
    if (*local_110 == '\0') {
      param_5 = param_2[1];
      local_110 = *(char **)(param_5 + 0x40);
    }
    local_c8 = *(uint *)(lVar15 + 0x198);
    if (local_c8 == 0) {
      param_5 = param_2[1];
      local_c8 = *(uint *)(param_5 + 0x58);
    }
    if ((char)bVar3 < '\0') {
      pbVar24 = *(byte **)(lVar15 + 0x60);
      goto LAB_007bb19e;
    }
LAB_007bafb2:
    local_f0 = (byte *)0x0;
    local_11c = 0;
    local_118 = (char *)0x0;
LAB_007bafd2:
    pauVar23 = (undefined1 (*) [16])*param_4;
    if ((bVar14 & 0x10) != 0) goto LAB_007bafdd;
LAB_007bb218:
    if ((bVar3 & 1) != 0) {
      lVar2 = *(longdouble *)*pauVar23;
      if (!NAN(lVar2)) {
        if (ABS(lVar2) <= _DAT_00821c80) {
          lVar15 = FUN_007c8060(local_68,2,local_a0,&local_ac,param_5,param_6,SUB108(lVar2,0),
                                (short)((unkuint10)lVar2 >> 0x40));
          iVar27 = (int)lVar15 * 0x40 + -0x3f;
          goto LAB_007bb5bd;
        }
        local_ac = (uint)(ushort)((ushort)(lVar2 < (longdouble)0) << 9);
LAB_007bb251:
        puVar45 = &DAT_0080d86d;
        piVar22 = (int *)&DAT_008421c4;
        if ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)(int)param_3[2] * 2) & 1) == 0) {
          piVar22 = &DAT_008421e4;
          puVar45 = &DAT_00824f44;
        }
        goto LAB_007bb0cc;
      }
      local_ac = (uint)(ushort)((ushort)(lVar2 < (longdouble)0) << 9);
      goto LAB_007bbe93;
    }
    dVar1 = *(double *)*pauVar23;
    auVar52._8_8_ = 0;
    auVar52._0_8_ = dVar1;
    if (NAN(dVar1)) {
      local_ac = movmskpd(unaff_R13D,auVar52);
      local_ac = local_ac & 1;
      goto LAB_007bbe93;
    }
    if (DAT_00821c60 < (double)((ulong)dVar1 & _DAT_00842220)) {
      local_ac = movmskpd(unaff_R13D,auVar52);
      local_ac = local_ac & 1;
      goto LAB_007bb251;
    }
    lVar15 = FUN_007c7fd0(local_68,2,local_a0,&local_ac);
    iVar27 = (int)lVar15 * 0x40 + -0x34;
LAB_007bb5bd:
    puVar30 = auStack_158;
    puVar31 = auStack_158;
    uVar43 = -local_a0[0];
    if (0 < (int)local_a0[0]) {
      uVar43 = local_a0[0];
    }
    uVar49 = (long)(((int)(uVar43 + 0x3f) >> 6) + 4) * 8 + 0x17;
    uVar43 = (uint)uVar49;
    puVar36 = auStack_158;
    while (puVar31 != auStack_158 + -(uVar49 & 0xfffffffffffff000)) {
      puVar30 = puVar36 + -0x1000;
      *(undefined8 *)(puVar36 + -8) = *(undefined8 *)(puVar36 + -8);
      puVar31 = puVar36 + -0x1000;
      puVar36 = puVar36 + -0x1000;
    }
    lVar44 = -(ulong)(uVar43 & 0xff0);
    puVar36 = puVar30 + lVar44;
    puVar32 = puVar30 + lVar44;
    if ((ulong)(uVar43 & 0xff0) != 0) {
      *(undefined8 *)(puVar30 + -8) = *(undefined8 *)(puVar30 + -8);
    }
    local_98 = (ulong *)((ulong)(puVar30 + lVar44 + 0xf) & 0xfffffffffffffff0);
    puVar33 = puVar30 + lVar44;
    while (puVar32 != puVar30 + (lVar44 - (uVar49 & 0xfffffffffffff000))) {
      puVar36 = puVar33 + -0x1000;
      *(undefined8 *)(puVar33 + -8) = *(undefined8 *)(puVar33 + -8);
      puVar32 = puVar33 + -0x1000;
      puVar33 = puVar33 + -0x1000;
    }
    lVar44 = -(ulong)(uVar43 & 0xff0);
    puVar33 = puVar36 + lVar44;
    puVar34 = puVar36 + lVar44;
    if ((ulong)(uVar43 & 0xff0) != 0) {
      *(undefined8 *)(puVar36 + -8) = *(undefined8 *)(puVar36 + -8);
    }
    local_78 = (ulong *)((ulong)(puVar36 + lVar44 + 0xf) & 0xfffffffffffffff0);
    puVar30 = puVar36 + lVar44;
    while (puVar34 != puVar36 + (lVar44 - (uVar49 & 0xfffffffffffff000))) {
      puVar33 = puVar30 + -0x1000;
      *(undefined8 *)(puVar30 + -8) = *(undefined8 *)(puVar30 + -8);
      puVar34 = puVar30 + -0x1000;
      puVar30 = puVar30 + -0x1000;
    }
    lVar44 = -(ulong)(uVar43 & 0xff0);
    puVar30 = puVar33 + lVar44;
    puVar35 = puVar33 + lVar44;
    puVar36 = puVar33 + lVar44;
    if ((ulong)(uVar43 & 0xff0) != 0) {
      *(undefined8 *)(puVar33 + -8) = *(undefined8 *)(puVar33 + -8);
    }
    local_80 = 0;
    local_88 = (ulong *)((ulong)(puVar33 + lVar44 + 0xf) & 0xfffffffffffffff0);
    local_90 = lVar15;
    if (2 < (int)local_a0[0]) {
      uVar37 = local_a0[0] + iVar27;
      uVar43 = uVar37 + 0x3f;
      if (-1 < (int)uVar37) {
        uVar43 = uVar37;
      }
      iVar41 = (int)uVar43 >> 6;
      if ((uVar37 & 0x3f) == 0) {
        uVar43 = local_a0[0];
        if (0 < lVar15) {
          local_d8._0_4_ = local_a0[0];
          *(undefined8 *)(puVar33 + lVar44 + -8) = 0x7bb729;
          thunk_FUN_00713a50(local_98 + iVar41,local_68,lVar15 * 8);
          uVar43 = local_d8._0_4_;
        }
        lVar25 = (long)iVar41;
        local_90 = lVar15 + lVar25;
      }
      else {
        *(undefined8 *)(puVar33 + lVar44 + -8) = 0x7bcea7;
        uVar49 = FUN_006f2f20(local_98 + iVar41,local_68,lVar15,(int)uVar37 % 0x40);
        iVar27 = iVar27 + local_a0[0];
        iVar41 = iVar27 + 0x3f;
        if (-1 < iVar27) {
          iVar41 = iVar27;
        }
        lVar25 = (long)(iVar41 >> 6);
        lVar15 = local_90 + lVar25;
        local_90 = lVar15;
        uVar43 = local_a0[0];
        if (uVar49 != 0) {
          local_90 = lVar15 + 1;
          local_98[lVar15] = uVar49;
        }
      }
      if (0 < lVar25) {
        local_d8._0_4_ = uVar43;
        *(undefined8 *)(puVar33 + lVar44 + -8) = 0x7bb759;
        thunk_FUN_00713720(local_98,0,lVar25 << 3);
        uVar43 = local_d8._0_4_;
      }
      iVar27 = 0;
      local_d8._0_8_ = param_1;
      bVar14 = 0xc;
      uVar37 = 0;
      lVar15 = local_80;
      plVar28 = (long *)&DAT_008256f8;
      do {
        plVar48 = plVar28 + -3;
        if ((int)uVar43 < (int)plVar28[-1] + iVar27 + -1) goto joined_r0x007bb7e2;
        if (lVar15 == 0) {
          if ((*(byte *)((long)local_c0 + 0xd) & 0x10) == 0) {
            local_70 = plVar28[-2];
            lVar15 = *plVar48;
            *(undefined8 *)(puVar33 + lVar44 + -8) = 0x7bb7c0;
            thunk_FUN_00713a50(local_78,&DAT_00825740 + lVar15 * 8,local_70 << 3);
          }
          else {
            local_70 = plVar28[-2] + 1;
            lVar15 = *plVar48;
            *(undefined8 *)(puVar33 + lVar44 + -8) = 0x7bbf37;
            thunk_FUN_00713a50(local_78 + 1,&DAT_00825740 + lVar15 * 8,local_70 * 8);
            *local_78 = 0;
            local_a0[0] = local_a0[0] + 0x40;
          }
LAB_007bb7c4:
          bVar51 = local_90 == local_70;
          if (local_70 < local_90) goto LAB_007bb850;
LAB_007bb7d1:
          lVar15 = local_80;
          if (bVar51) {
            *(undefined8 *)(puVar33 + lVar44 + -8) = 0x7bc7e0;
            iVar41 = FUN_006f2ee0(local_98,local_78);
            lVar15 = local_80;
            if (-1 < iVar41) goto LAB_007bb850;
          }
        }
        else {
          lVar25 = *plVar48;
          lVar29 = plVar28[-2];
          *(undefined8 *)(puVar33 + lVar44 + -8) = 0x7bb829;
          lVar15 = FUN_006f3150(local_78,local_88,lVar15,&UNK_00825748 + lVar25 * 8,lVar29 + -1);
          if (lVar15 == 0) {
            local_70 = plVar28[-2] + local_80 + -2;
            goto LAB_007bb7c4;
          }
          local_70 = plVar28[-2] + local_80 + -1;
          bVar51 = local_90 == local_70;
          if (local_90 <= local_70) goto LAB_007bb7d1;
LAB_007bb850:
          *(undefined8 *)(puVar33 + lVar44 + -8) = 0x7bb865;
          local_80 = local_70;
          thunk_FUN_00713a50(local_88,local_78,local_70 << 3);
          lVar15 = 0x3f;
          if (local_88[local_80 + -1] != 0) {
            for (; local_88[local_80 + -1] >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          iVar27 = ((int)local_80 * 0x40 + -0x81) - ((uint)lVar15 ^ 0x3f);
          uVar37 = uVar37 | 1 << (bVar14 & 0x1f);
          lVar15 = local_80;
        }
joined_r0x007bb7e2:
        if (plVar48 == &DAT_008255c0) goto LAB_007bb8a3;
        bVar14 = bVar14 - 1;
        plVar28 = plVar48;
        uVar43 = local_a0[0];
      } while( true );
    }
    if ((int)local_a0[0] < 0) {
      bVar14 = 0xc;
      *(undefined8 *)(puVar33 + lVar44 + -8) = 0x7bca7e;
      uVar49 = FUN_006f2f20(local_98,local_68,lVar15,iVar27);
      auVar8._12_4_ = 0;
      auVar8._0_12_ = local_d8._4_12_;
      local_d8 = auVar8 << 0x20;
      local_e8._0_8_ = param_1;
      uVar43 = -local_a0[0];
      local_98[local_90] = uVar49;
      local_a8 = 1;
      plVar28 = (long *)&DAT_008256f8;
      local_a0[0] = uVar43;
      local_90 = local_90 + 1;
      do {
        plVar48 = plVar28 + -3;
        if (*(int *)((long)plVar28 + -4) <= (int)uVar43) {
          lVar15 = plVar28[-2] + -1;
          lVar25 = *plVar48;
          if (local_90 < lVar15) {
            *(undefined8 *)(puVar33 + lVar44 + -8) = 0x7bcaeb;
            lVar15 = FUN_006f3150(local_78,&UNK_00825748 + lVar25 * 8,lVar15,local_98,local_90);
          }
          else {
            *(undefined8 *)(puVar33 + lVar44 + -8) = 0x7bcbbb;
            lVar15 = FUN_006f3150(local_78,local_98,local_90,&UNK_00825748 + lVar25 * 8,lVar15);
          }
          if (lVar15 == 0) {
            local_70 = plVar28[-2] + local_90 + -2;
          }
          else {
            local_70 = plVar28[-2] + local_90 + -1;
          }
          puVar20 = local_78 + local_70 + -1;
          uVar49 = 0x3f;
          if (*puVar20 != 0) {
            for (; *puVar20 >> uVar49 == 0; uVar49 = uVar49 - 1) {
            }
          }
          iVar27 = (int)(uVar49 ^ 0x3f);
          iVar41 = ((((int)local_70 - (int)local_90) + 1) * 0x40 - iVar27) + -1;
          if (local_a0[0] + 3 == iVar41) {
            if (iVar27 < 0x3d) {
              local_58 = 0;
              uStack_50 = 10L << (0x3cU - (char)(uVar49 ^ 0x3f) & 0x3f);
              if ((int)(local_a0[0] + 2) < iVar41) {
LAB_007bccbc:
                if ((uStack_50 <= *puVar20) &&
                   ((uVar43 = local_a0[0], *puVar20 != uStack_50 ||
                    (local_58 <= local_78[local_70 + -2])))) goto LAB_007bcb59;
              }
            }
            else {
              local_58 = _DAT_00842230;
              uStack_50 = _UNK_00842238;
              *(undefined8 *)(puVar33 + lVar44 + -8) = 0x7bd393;
              FUN_006f2f20(&local_58,&local_58,2,0x40 - iVar27);
              if ((int)(local_a0[0] + 2) < iVar41) {
                uVar43 = local_a0[0];
                if (local_a0[0] + 3 != iVar41) goto LAB_007bcb59;
                puVar20 = local_78 + local_70 + -1;
                goto LAB_007bccbc;
              }
            }
LAB_007bcbd8:
            uVar43 = local_a0[0] - iVar41;
            local_d8._0_4_ = local_d8._0_4_ | 1 << (bVar14 & 0x1f);
            if ((int)uVar43 < 0) {
              iVar27 = iVar27 - uVar43;
            }
            uVar49 = *local_78;
            puVar20 = local_78;
            local_a0[0] = uVar43;
            if (uVar49 == 0) {
              lVar29 = 1;
              do {
                lVar15 = lVar29;
                puVar20 = puVar20 + 1;
                uVar49 = *puVar20;
                iVar41 = (int)lVar15;
                lVar25 = (long)iVar41;
                lVar29 = lVar15 + 1;
              } while (uVar49 == 0);
              if (iVar27 == 0x3f) {
LAB_007bcc47:
                local_90 = local_70 - lVar25;
                if (0 < local_90) {
                  lVar29 = 0;
                  do {
                    local_98[lVar29] = local_78[lVar15 + lVar29];
                    lVar29 = lVar29 + 1;
                    local_90 = local_70 - lVar25;
                  } while (lVar29 < local_90);
                }
              }
              else {
                iVar42 = 0;
                for (; (uVar49 & 1) == 0; uVar49 = uVar49 >> 1 | 0x8000000000000000) {
                  iVar42 = iVar42 + 1;
                }
                if (iVar42 < 0x3f - iVar27) {
                  lVar29 = (long)(iVar41 + -1);
                  lVar25 = local_70 - lVar29;
                  puVar20 = local_78 + lVar15 + -1;
                }
                else {
                  lVar29 = (long)iVar41;
                  lVar25 = local_70 - lVar29;
                }
LAB_007bd23c:
                *(undefined8 *)(puVar33 + lVar44 + -8) = 0x7bd244;
                FUN_006f3040(local_98,puVar20,lVar25);
                local_90 = local_70 - lVar29;
                uVar43 = local_a0[0];
              }
            }
            else {
              if (iVar27 == 0x3f) {
                lVar15 = 0;
                lVar25 = 0;
                goto LAB_007bcc47;
              }
              iVar41 = 0;
              for (; (uVar49 & 1) == 0; uVar49 = uVar49 >> 1 | 0x8000000000000000) {
                iVar41 = iVar41 + 1;
              }
              if (0x3f - iVar27 <= iVar41) {
                lVar29 = 0;
                lVar25 = local_70;
                goto LAB_007bd23c;
              }
              *(undefined8 *)(puVar33 + lVar44 + -8) = 0x7bd7c5;
              uVar49 = FUN_006f2f20(local_98,local_78,local_70,iVar27 + 1);
              local_90 = local_70 + 1;
              local_98[local_70] = uVar49;
              uVar43 = local_a0[0];
            }
          }
          else {
            uVar43 = local_a0[0];
            if (iVar41 <= (int)(local_a0[0] + 2)) goto LAB_007bcbd8;
          }
        }
LAB_007bcb59:
        bVar14 = bVar14 - 1;
        param_1 = local_e8._0_8_;
        if (plVar48 == &DAT_008255d8) {
          if (0 < (int)uVar43) {
            *(undefined8 *)(puVar33 + lVar44 + -8) = 0x7bd10e;
            FUN_006f35e0(local_78,local_98,local_90,10);
            local_70 = local_90;
            iVar27 = 0;
            for (uVar49 = *local_78; (uVar49 & 1) == 0; uVar49 = uVar49 >> 1 | 0x8000000000000000) {
              iVar27 = iVar27 + 1;
            }
            uVar43 = 4;
            if ((int)local_a0[0] < 5) {
              uVar43 = local_a0[0];
            }
            if (iVar27 < (int)uVar43) {
              *(undefined8 *)(puVar33 + lVar44 + -8) = 0x7bd159;
              uVar49 = FUN_006f2f20(local_98,local_78,local_90,0x40 - uVar43);
              if (uVar49 != 0) {
                local_98[local_70] = uVar49;
                local_70 = local_70 + 1;
              }
            }
            else {
              *(undefined8 *)(puVar33 + lVar44 + -8) = 0x7bd6c9;
              FUN_006f3040(local_98,local_78,local_90);
            }
            local_d8._0_4_ = local_d8._0_4_ | 1;
            local_90 = local_70;
          }
          break;
        }
        plVar28 = plVar48;
      } while (0 < (int)uVar43);
      local_a0[0] = local_d8._0_4_;
      lVar25 = local_90;
    }
    else {
      *(undefined8 *)(puVar33 + lVar44 + -8) = 0x7bc7a1;
      uVar49 = FUN_006f2f20(local_98,local_68,lVar15,local_a0[0] + iVar27);
      local_98[local_90] = uVar49;
      local_a0[0] = 0;
      lVar25 = local_90 + 1;
    }
    goto LAB_007bb928;
  }
  lVar15 = param_2[1];
  local_110 = *(char **)(lVar15 + 0x40);
  local_c8 = *(uint *)(lVar15 + 0x58);
  if (-1 < (char)bVar3) goto LAB_007bafb2;
  pbVar24 = *(byte **)(lVar15 + 0x50);
LAB_007bb19e:
  local_d8[0] = *pbVar24;
  if (0x7d < (byte)(*pbVar24 - 1)) goto LAB_007bafb2;
  param_5 = (ulong)local_c4;
  if ((bVar14 >> 2 & 1) == 0) {
    if ((bVar14 & 1) == 0) {
      local_118 = *(char **)(param_2[1] + 0x48);
    }
    else {
      local_118 = *(char **)(param_2[4] + 0x58);
    }
    local_11c = -(uint)(*local_118 != '\0') & 0xfffffffe;
    local_f0 = (byte *)0x0;
    if (*local_118 != '\0') {
      local_f0 = pbVar24;
    }
    goto LAB_007bafd2;
  }
  if ((bVar14 & 1) == 0) {
    local_11c = *(uint *)(param_2[1] + 0x60);
  }
  else {
    local_11c = *(uint *)(param_2[4] + 0x1a0);
  }
  pauVar23 = (undefined1 (*) [16])*param_4;
  local_118 = (char *)0x0;
  local_f0 = (byte *)0x0;
  if (local_11c != 0) {
    local_f0 = pbVar24;
  }
  if ((bVar14 & 0x10) == 0) goto LAB_007bb218;
LAB_007bafdd:
  local_d8 = *pauVar23;
  local_e8[0] = bVar3;
  lVar15 = FUN_007cb7e0(*(undefined8 *)*pauVar23,*(undefined8 *)*pauVar23);
  uVar49 = (ulong)local_e8[0];
  if (lVar15 == 0) {
    local_f8 = (byte *)CONCAT71(local_f8._1_7_,local_e8[0]);
    local_e8 = local_d8 & _DAT_00842210;
    lVar15 = FUN_007cb7e0(SUB168(local_d8 & _DAT_00842210,0),_DAT_0083ee30);
    if (lVar15 == 0) {
      lVar15 = FUN_007cb9a0(local_e8._0_8_,_DAT_0083ee30);
      if (0 < lVar15) {
        local_ac = movmskps(unaff_R13D,local_d8);
        puVar45 = &DAT_0080d86d;
        uVar49 = (ulong)local_f8 & 0xff;
        local_ac = local_ac & 8;
        piVar22 = (int *)&DAT_008421c4;
        if ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)(int)local_c0[2] * 2) & 1) == 0)
        {
          piVar22 = &DAT_008421e4;
          puVar45 = &DAT_00824f44;
        }
        goto LAB_007bb0cc;
      }
    }
    lVar15 = FUN_007c8120(local_d8._0_8_,local_68,2,local_a0,&local_ac);
    iVar27 = (int)lVar15 * 0x40 + -0x70;
    goto LAB_007bb5bd;
  }
  local_ac = movmskps(unaff_R13D,local_d8);
  local_ac = local_ac & 8;
LAB_007bbe93:
  puVar45 = &DAT_008421b0;
  piVar22 = (int *)&DAT_008421b4;
  if ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)(int)local_c0[2] * 2) & 1) == 0) {
    piVar22 = (int *)&DAT_008421d4;
    puVar45 = &DAT_00824f48;
  }
LAB_007bb0cc:
  uVar43 = local_c0[1];
  bVar14 = ((byte)(uVar49 >> 5) ^ 1) & 1;
  if (local_ac != 0) {
    iVar27 = uVar43 - 4;
    bVar51 = 0 < iVar27;
    if ((0 < iVar27) && (iVar41 = iVar27, bVar14 != 0)) goto LAB_007bb2f0;
    iVar41 = 0;
LAB_007bb100:
    if (local_c4 == 0) {
      puVar36 = *(undefined1 **)(param_1 + 0x28);
      if (*(undefined1 **)(param_1 + 0x30) <= puVar36) {
        local_d8._0_8_ = piVar22;
        uVar38 = 0x2d;
LAB_007bd5f2:
        iVar42 = FUN_00706570(param_1,uVar38);
        piVar22 = (int *)local_d8._0_8_;
        goto LAB_007bd27e;
      }
      *(undefined1 **)(param_1 + 0x28) = puVar36 + 1;
      *puVar36 = 0x2d;
    }
    else {
      lVar15 = *(long *)(param_1 + 0xa0);
      if ((lVar15 == 0) ||
         (puVar5 = *(undefined4 **)(lVar15 + 0x20), *(undefined4 **)(lVar15 + 0x28) <= puVar5)) {
        local_d8._0_8_ = piVar22;
        uVar38 = 0x2d;
LAB_007bd269:
        iVar42 = FUN_006ff380(param_1,uVar38);
        piVar22 = (int *)local_d8._0_8_;
LAB_007bd27e:
        if (iVar42 == -1) {
          uVar43 = 0xffffffff;
          goto LAB_007bb4c8;
        }
      }
      else {
        *(undefined4 **)(lVar15 + 0x20) = puVar5 + 1;
        *puVar5 = 0x2d;
      }
    }
    goto LAB_007bb3f4;
  }
  if ((uVar49 & 0x50) == 0) {
    iVar27 = uVar43 - 3;
  }
  else {
    iVar27 = uVar43 - 4;
  }
  bVar51 = 0 < iVar27;
  if ((iVar27 < 1) || (iVar41 = iVar27, bVar14 == 0)) {
    iVar41 = 0;
    iVar42 = 0;
    if ((uVar49 & 0x40) != 0) {
LAB_007bb3b9:
      if (local_c4 == 0) {
        puVar36 = *(undefined1 **)(param_1 + 0x28);
        if (*(undefined1 **)(param_1 + 0x30) <= puVar36) {
          local_d8._0_8_ = piVar22;
          uVar38 = 0x2b;
          goto LAB_007bd5f2;
        }
        *(undefined1 **)(param_1 + 0x28) = puVar36 + 1;
        *puVar36 = 0x2b;
      }
      else {
        lVar15 = *(long *)(param_1 + 0xa0);
        if ((lVar15 == 0) ||
           (puVar5 = *(undefined4 **)(lVar15 + 0x20), *(undefined4 **)(lVar15 + 0x28) <= puVar5)) {
          local_d8._0_8_ = piVar22;
          uVar38 = 0x2b;
          goto LAB_007bd269;
        }
        *(undefined4 **)(lVar15 + 0x20) = puVar5 + 1;
        *puVar5 = 0x2b;
      }
      goto LAB_007bb3f4;
    }
LAB_007bb34f:
    if ((uVar49 & 0x10) != 0) {
      iVar41 = iVar42;
      if (local_c4 == 0) {
        puVar30 = *(undefined1 **)(param_1 + 0x28);
        if (*(undefined1 **)(param_1 + 0x30) <= puVar30) {
          local_d8._0_8_ = piVar22;
          iVar42 = FUN_00706570(param_1,0x20);
          piVar22 = (int *)local_d8._0_8_;
          goto joined_r0x007bda14;
        }
        *(undefined1 **)(param_1 + 0x28) = puVar30 + 1;
        *puVar30 = 0x20;
      }
      else {
        lVar15 = *(long *)(param_1 + 0xa0);
        if ((lVar15 == 0) ||
           (puVar5 = *(undefined4 **)(lVar15 + 0x20), *(undefined4 **)(lVar15 + 0x28) <= puVar5)) {
          local_d8._0_8_ = piVar22;
          iVar42 = FUN_006ff380(param_1,0x20);
          piVar22 = (int *)local_d8._0_8_;
joined_r0x007bda14:
          puVar36 = auStack_158;
          if (iVar42 == -1) goto LAB_007bbce2;
        }
        else {
          *(undefined4 **)(lVar15 + 0x20) = puVar5 + 1;
          *puVar5 = 0x20;
        }
      }
LAB_007bb3f4:
      iVar42 = iVar41 + 1;
    }
    if (local_c4 == 0) {
      uVar4 = *puVar45;
      puVar30 = *(undefined1 **)(param_1 + 0x28);
      if (puVar30 < *(undefined1 **)(param_1 + 0x30)) {
        *(undefined1 **)(param_1 + 0x28) = puVar30 + 1;
        *puVar30 = uVar4;
      }
      else {
        iVar41 = FUN_00706570(param_1,uVar4);
        puVar36 = auStack_158;
        if (iVar41 == -1) goto LAB_007bbce2;
      }
      uVar4 = puVar45[1];
      puVar30 = *(undefined1 **)(param_1 + 0x28);
      if (puVar30 < *(undefined1 **)(param_1 + 0x30)) {
        *(undefined1 **)(param_1 + 0x28) = puVar30 + 1;
        *puVar30 = uVar4;
      }
      else {
        iVar41 = FUN_00706570(param_1,uVar4);
        puVar36 = auStack_158;
        if (iVar41 == -1) goto LAB_007bbce2;
      }
      uVar4 = puVar45[2];
      puVar30 = *(undefined1 **)(param_1 + 0x28);
      if (puVar30 < *(undefined1 **)(param_1 + 0x30)) {
        *(undefined1 **)(param_1 + 0x28) = puVar30 + 1;
        *puVar30 = uVar4;
      }
      else {
        iVar41 = FUN_00706570(param_1,uVar4);
        puVar36 = auStack_158;
        if (iVar41 == -1) goto LAB_007bbce2;
      }
      uVar43 = iVar42 + 3;
      puVar30 = auStack_158;
      if (((local_c0[3] & 0x20) == 0) || (puVar30 = auStack_158, !bVar51)) goto LAB_007bb4c8;
      lVar15 = FUN_007a1c80(param_1,0x20,(long)iVar27);
LAB_007bb4bc:
      puVar36 = auStack_158;
      if (lVar15 == iVar27) {
        uVar43 = iVar42 + 3 + iVar27;
        puVar30 = auStack_158;
        goto LAB_007bb4c8;
      }
    }
    else {
      lVar15 = *(long *)(param_1 + 0xa0);
      iVar41 = *piVar22;
      if ((lVar15 == 0) || (piVar6 = *(int **)(lVar15 + 0x20), *(int **)(lVar15 + 0x28) <= piVar6))
      {
        local_d8._0_8_ = piVar22;
        iVar41 = FUN_006ff380(param_1);
        puVar36 = auStack_158;
        if (iVar41 != -1) {
          lVar15 = *(long *)(param_1 + 0xa0);
          iVar41 = *(int *)(local_d8._0_8_ + 4);
          piVar22 = (int *)(local_d8._0_8_ + 8);
          if (lVar15 != 0) goto LAB_007bb445;
LAB_007bbe1c:
          iVar41 = FUN_006ff380(param_1);
          puVar36 = auStack_158;
          if (iVar41 != -1) {
            lVar15 = *(long *)(param_1 + 0xa0);
            iVar41 = *piVar22;
            if (lVar15 != 0) goto LAB_007bb46d;
LAB_007bbe45:
            iVar41 = FUN_006ff380(param_1);
LAB_007bb48b:
            puVar36 = auStack_158;
            if (iVar41 != -1) {
              uVar43 = iVar42 + 3;
              puVar30 = auStack_158;
              if (((local_c0[3] & 0x20) == 0) || (puVar30 = auStack_158, !bVar51))
              goto LAB_007bb4c8;
              lVar15 = FUN_007a2150(param_1,0x20,(long)iVar27);
              goto LAB_007bb4bc;
            }
          }
        }
      }
      else {
        *(int **)(lVar15 + 0x20) = piVar6 + 1;
        *piVar6 = iVar41;
        puVar36 = auStack_158;
        if (iVar41 != -1) {
          iVar41 = piVar22[1];
          piVar22 = piVar22 + 2;
LAB_007bb445:
          piVar6 = *(int **)(lVar15 + 0x20);
          if (*(int **)(lVar15 + 0x28) <= piVar6) goto LAB_007bbe1c;
          *(int **)(lVar15 + 0x20) = piVar6 + 1;
          *piVar6 = iVar41;
          puVar36 = auStack_158;
          if (iVar41 != -1) {
            iVar41 = *piVar22;
LAB_007bb46d:
            piVar22 = *(int **)(lVar15 + 0x20);
            if (*(int **)(lVar15 + 0x28) <= piVar22) goto LAB_007bbe45;
            *(int **)(lVar15 + 0x20) = piVar22 + 1;
            *piVar22 = iVar41;
            goto LAB_007bb48b;
          }
        }
      }
    }
  }
  else {
LAB_007bb2f0:
    local_d8._0_8_ = piVar22;
    if (local_c4 == 0) {
      lVar15 = FUN_007a1c80(param_1,0x20,(long)iVar41);
    }
    else {
      lVar15 = FUN_007a2150();
    }
    puVar36 = auStack_158;
    if (lVar15 == iVar41) {
      bVar51 = true;
      piVar22 = (int *)local_d8._0_8_;
      iVar27 = iVar41;
      if (local_ac != 0) goto LAB_007bb100;
      uVar49 = (ulong)(byte)local_c0[3];
      iVar42 = iVar41;
      if (((byte)local_c0[3] & 0x40) != 0) goto LAB_007bb3b9;
      goto LAB_007bb34f;
    }
  }
  goto LAB_007bbce2;
LAB_007bb8a3:
  param_1 = local_d8._0_8_;
  local_a0[0] = uVar37;
  lVar25 = local_90;
  if (0 < lVar15) {
    lVar29 = 0x3f;
    if (local_88[lVar15 + -1] != 0) {
      for (; local_88[lVar15 + -1] >> lVar29 == 0; lVar29 = lVar29 + -1) {
      }
    }
    uVar49 = *local_88;
    uVar43 = (uint)lVar29 ^ 0x3f;
    puVar20 = local_88;
    if (uVar49 == 0) {
      lVar47 = 0;
      lVar29 = 0;
LAB_007bb905:
      uVar49 = *(ulong *)((long)local_98 + lVar47);
      iVar27 = (int)lVar29;
      if (uVar49 == 0) goto LAB_007bb8e8;
      if (uVar43 != 0) {
        iVar41 = 0;
        for (; (uVar49 & 1) == 0; uVar49 = uVar49 >> 1 | 0x8000000000000000) {
          iVar41 = iVar41 + 1;
        }
        iVar42 = 0x40 - uVar43;
        if (iVar27 != 0) goto LAB_007bd06e;
        goto LAB_007bd52e;
      }
      if (iVar27 != 0) goto LAB_007bd4a1;
      goto LAB_007bb928;
    }
    if (uVar43 != 0) {
      iVar41 = 0;
      for (; (uVar49 & 1) == 0; uVar49 = uVar49 >> 1 | 0x8000000000000000) {
        iVar41 = iVar41 + 1;
      }
      uVar49 = *local_98;
      if (uVar49 == 0) {
        iVar42 = 0x40 - uVar43;
        lVar47 = 0;
      }
      else {
        iVar27 = 0;
        for (; (uVar49 & 1) == 0; uVar49 = uVar49 >> 1 | 0x8000000000000000) {
          iVar27 = iVar27 + 1;
        }
        if (iVar41 <= iVar27) {
          iVar27 = iVar41;
        }
        iVar42 = 0x40 - uVar43;
        lVar47 = 0;
        iVar41 = iVar27;
      }
LAB_007bd52e:
      iVar27 = 0;
      lVar29 = 0;
      if (iVar42 <= iVar41) goto LAB_007bd53c;
      local_d8._0_4_ = uVar43;
      *(undefined8 *)(puVar33 + lVar44 + -8) = 0x7bd83e;
      FUN_006f2f20(local_88,local_88);
      *(undefined8 *)(puVar33 + lVar44 + -8) = 0x7bd85a;
      uVar49 = FUN_006f2f20(local_98,local_98,local_90,local_d8._0_4_);
      lVar25 = local_90;
      if (uVar49 != 0) {
        local_98[local_90] = uVar49;
        lVar25 = local_90 + 1;
      }
    }
  }
  goto LAB_007bb928;
LAB_007bb8e8:
  uVar49 = puVar20[1];
  iVar27 = iVar27 + 1;
  puVar20 = puVar20 + 1;
  lVar29 = lVar29 + 1;
  lVar47 = lVar47 + 8;
  if (uVar49 != 0) goto LAB_007bd037;
  goto LAB_007bb905;
LAB_007bd037:
  if (uVar43 == 0) {
LAB_007bd4a1:
    lVar47 = (long)iVar27;
    lVar15 = lVar15 - lVar47;
    if (0 < lVar15) {
      lVar25 = 0;
      do {
        local_88[lVar25] = local_88[lVar29 + lVar25];
        lVar25 = lVar25 + 1;
        lVar15 = local_80 - lVar47;
      } while (lVar25 < lVar15);
    }
    lVar25 = local_90 - lVar47;
    local_80 = lVar15;
    if (0 < local_90 - lVar47) {
      lVar15 = 0;
      do {
        local_98[lVar15] = local_98[lVar29 + lVar15];
        lVar15 = lVar15 + 1;
        lVar25 = local_90 - lVar47;
      } while (lVar15 < local_90 - lVar47);
    }
  }
  else {
    uVar26 = *(ulong *)((long)local_98 + lVar47);
    iVar41 = 0;
    for (; (uVar49 & 1) == 0; uVar49 = uVar49 >> 1 | 0x8000000000000000) {
      iVar41 = iVar41 + 1;
    }
    if (uVar26 == 0) {
      iVar42 = 0x40 - uVar43;
    }
    else {
      iVar7 = 0;
      for (; (uVar26 & 1) == 0; uVar26 = uVar26 >> 1 | 0x8000000000000000) {
        iVar7 = iVar7 + 1;
      }
      if (iVar41 <= iVar7) {
        iVar7 = iVar41;
      }
      iVar42 = 0x40 - uVar43;
      iVar41 = iVar7;
    }
LAB_007bd06e:
    lVar29 = (long)iVar27;
    if (iVar41 < iVar42) {
      lVar46 = (long)(iVar27 + -1);
      *(undefined8 *)(puVar33 + lVar44 + -8) = 0x7bd094;
      FUN_006f3040(local_88,(long)local_88 + lVar47 + -8,lVar15 - lVar46,iVar42);
      local_80 = local_80 - lVar29;
      *(undefined8 *)(puVar33 + lVar44 + -8) = 0x7bd0b5;
      FUN_006f3040(local_98,(long)local_98 + lVar47 + -8,local_90 - lVar46,iVar42);
      lVar25 = local_90 - lVar46;
      if (local_98[(local_90 - lVar46) + -1] == 0) {
        lVar25 = local_90 - lVar29;
      }
    }
    else {
LAB_007bd53c:
      *(undefined8 *)(puVar33 + lVar44 + -8) = 0x7bd54b;
      FUN_006f3040(local_88,puVar20,lVar15 - lVar29,iVar42);
      local_80 = local_80 - (iVar27 + 1);
      *(undefined8 *)(puVar33 + lVar44 + -8) = 0x7bd56f;
      FUN_006f3040(local_98,(long)local_98 + lVar47,local_90 - lVar29,iVar42);
      lVar25 = local_90 - lVar29;
      if (local_98[(local_90 - lVar29) + -1] == 0) {
        lVar25 = local_90 - (iVar27 + 1);
      }
    }
  }
LAB_007bb928:
  local_90 = lVar25;
  local_140 = local_c0[1];
  local_a4 = local_c0[2];
  uVar43 = *local_c0;
  uVar49 = *(ulong *)(in_FS_OFFSET + -0x50);
  local_f8 = (byte *)CONCAT44(local_f8._4_4_,uVar43);
  local_144 = *(undefined4 *)(uVar49 + (long)(int)local_a4 * 4);
  if ((char)local_144 == 'e') {
    if ((int)uVar43 < 0) {
      local_128 = 0xe;
      local_f8 = (byte *)CONCAT44(local_f8._4_4_,6);
    }
    else {
      local_128 = (long)(int)uVar43 + 8;
    }
LAB_007bc8b4:
    uVar40 = 1;
    local_130 = 0x7fffffff;
    local_120 = 1;
    local_e8._0_4_ = (uint)local_f8;
LAB_007bb9fa:
    if (local_f0 != (byte *)0x0) {
LAB_007bba08:
      local_d8[0] = *local_f0;
      if ((byte)(*local_f0 - 1) < 0x7e) {
        uVar49 = (ulong)local_120;
        pbVar24 = local_f0;
        iVar27 = 0;
        do {
          uVar43 = (uint)(char)*pbVar24;
          if ((uint)uVar49 <= uVar43) {
            lVar15 = (long)(iVar27 + 1);
            local_12c = iVar27;
            goto LAB_007bba73;
          }
          pbVar18 = pbVar24 + 1;
          pbVar24 = pbVar24 + 1;
          local_12c = iVar27 + 1;
          uVar37 = (uint)uVar49 - uVar43;
          uVar49 = (ulong)uVar37;
          if (0x7e < *pbVar18) {
            lVar15 = (long)(iVar27 + 2);
            goto LAB_007bba73;
          }
          iVar27 = local_12c;
        } while (*pbVar18 != 0);
        uVar37 = uVar37 - 1;
        uVar49 = (ulong)uVar37 % (ulong)uVar43;
        local_12c = uVar37 / uVar43 + local_12c;
        lVar15 = (long)(local_12c + 1);
      }
      else {
        local_12c = 0;
        lVar15 = 1;
      }
LAB_007bba73:
      local_128 = local_128 + lVar15;
      goto LAB_007bba7a;
    }
    local_12c = 0;
LAB_007bba91:
    local_d8._0_4_ = uVar40;
    if ((ulong)(long)(int)local_e8._0_4_ <= local_128) {
      lVar15 = local_128 * 4;
      uVar26 = lVar15 + 8;
      *(undefined8 *)(puVar33 + lVar44 + -8) = 0x7bbabe;
      iVar27 = FUN_007094d0(uVar26,uVar40,uVar49);
      if ((iVar27 == 0) && (0x1000 < uVar26)) {
        *(undefined8 *)(puVar33 + lVar44 + -8) = 0x7bd45c;
        local_138 = (uint *)FUN_007101b0(uVar26);
        puVar36 = puVar33 + lVar44;
        if (local_138 != (uint *)0x0) {
          local_154 = 0;
          local_148 = 1;
          puVar30 = puVar33 + lVar44;
          iVar27 = local_d8._0_4_;
          goto LAB_007bbb3e;
        }
      }
      else {
        uVar49 = lVar15 + 0x1f;
        puVar30 = puVar33 + lVar44;
        while (puVar35 != puVar33 + (lVar44 - (uVar49 & 0xfffffffffffff000))) {
          puVar36 = puVar30 + -0x1000;
          *(undefined8 *)(puVar30 + -8) = *(undefined8 *)(puVar30 + -8);
          puVar35 = puVar30 + -0x1000;
          puVar30 = puVar30 + -0x1000;
        }
        uVar49 = (ulong)((uint)uVar49 & 0xff0);
        lVar15 = -uVar49;
        if (uVar49 != 0) {
          *(undefined8 *)(puVar36 + -8) = *(undefined8 *)(puVar36 + -8);
        }
        local_154 = 1;
        local_148 = 0;
        local_138 = (uint *)((ulong)(puVar36 + lVar15 + 0xf) & 0xfffffffffffffff0);
        puVar30 = puVar36 + lVar15;
        iVar27 = local_d8._0_4_;
LAB_007bbb3e:
        puVar21 = local_138 + 2;
        if ((local_a8 == 0) || (local_a4 != 0x66)) {
          if ((int)local_120 < 1) {
            local_13c = 0;
            puVar16 = puVar21;
          }
          else {
            puVar16 = local_138 + (ulong)(local_120 - 1) + 3;
            puVar50 = puVar21;
            do {
              puVar17 = puVar50 + 1;
              *(undefined8 *)(puVar30 + -8) = 0x7bbb94;
              uVar43 = FUN_007baac0(&local_a8);
              *puVar50 = uVar43;
              puVar50 = puVar17;
            } while (puVar17 != puVar16);
            local_13c = local_120;
            puVar16 = puVar21 + local_120;
          }
          if (((local_c0[3] & 8) != 0) || (0 < (int)(uint)local_f8)) {
LAB_007bbbcb:
            iVar27 = 1;
            *puVar16 = local_c8;
            puVar16 = puVar16 + 1;
            goto LAB_007bbbdc;
          }
          if (0 < (int)local_e8._0_4_) {
            if ((local_90 < 2) && (*local_98 == 0)) {
              iVar27 = 1;
              goto LAB_007bbbdc;
            }
            goto LAB_007bbbcb;
          }
          local_108 = (ulong)local_108._4_4_ << 0x20;
          uVar43 = 0;
          iVar41 = (uint)local_f8;
        }
        else {
          puVar16 = local_138 + 4;
          local_a0[0] = local_a0[0] - 1;
          local_138[2] = 0x30;
          local_138[3] = local_c8;
          local_13c = 0;
LAB_007bbbdc:
          local_108 = (ulong)local_108._4_4_ << 0x20;
          uVar43 = 0;
          local_d8._0_4_ = (uint)local_f8;
          local_150 = param_1;
LAB_007bbc03:
          puVar50 = puVar16;
          iVar41 = local_d8._0_4_;
          if ((int)uVar43 < (int)local_d8._0_4_) goto LAB_007bbc2c;
          while ((param_1 = local_150, (int)uVar43 < (int)local_e8._0_4_ &&
                 ((puVar50 = puVar16, 1 < local_90 || (*local_98 != 0))))) {
LAB_007bbc2c:
            do {
              uVar43 = uVar43 + 1;
              puVar16 = puVar50 + 1;
              *(undefined8 *)(puVar30 + -8) = 0x7bbc3c;
              uVar37 = FUN_007baac0(&local_a8);
              *puVar50 = uVar37;
              if ((iVar27 == 0) && (uVar37 == 0x30)) {
                local_e8._0_4_ = local_e8._0_4_ + 1;
                if (0 < (int)(uint)local_f8) {
                  iVar41 = (int)local_108 + 1;
                  local_108 = CONCAT44(local_108._4_4_,iVar41);
                  local_d8._0_4_ = (uint)local_f8 + iVar41;
                }
                goto LAB_007bbc03;
              }
              iVar27 = 1;
              puVar50 = puVar16;
              iVar41 = local_d8._0_4_;
            } while ((int)uVar43 < (int)local_d8._0_4_);
          }
        }
        uVar37 = puVar16[-1];
        if (uVar37 == local_c8) {
          uVar37 = puVar16[-2];
        }
        local_e8._0_4_ = uVar37;
        local_d8._0_4_ = iVar41;
        *(undefined8 *)(puVar30 + -8) = 0x7bbfab;
        iVar27 = FUN_007baac0(&local_a8);
        bVar51 = iVar27 != 0x30 && iVar27 != 0x35;
        if (iVar27 == 0x30 || iVar27 == 0x35) {
          if (local_90 == 1) {
            if (*local_98 != 0) {
              lVar15 = 1;
              if (local_80 == 0) goto LAB_007bbffe;
              goto LAB_007bc006;
            }
          }
          else {
            lVar15 = local_90;
            if (local_80 == 0) {
              for (; lVar15 != 0; lVar15 = lVar15 + -1) {
LAB_007bbffe:
                if (local_98[lVar15 + -1] != 0) goto LAB_007bc006;
              }
            }
            else {
LAB_007bc006:
              bVar51 = true;
            }
          }
        }
        in_FPUControlWord = in_FPUControlWord & 0xc00;
        iVar41 = local_d8._0_4_;
        if (in_FPUControlWord == 0x800) {
          if (local_ac != 0) goto LAB_007bc050;
LAB_007bc67a:
          if (iVar27 < 0x35) {
LAB_007bc043:
            if (!bVar51) goto LAB_007bc050;
          }
LAB_007bc683:
          uVar37 = puVar16[-1];
          puVar50 = puVar16;
          if (uVar43 == 0) {
LAB_007bc8e1:
            if (puVar50[-1] == local_c8) {
              puVar50 = puVar50 + -1;
            }
            while (puVar50 = puVar50 + -1, puVar21 <= puVar50) {
              if (*puVar50 != 0x39) {
                if (puVar21 <= puVar50) {
                  *puVar50 = *puVar50 + 1;
                  goto LAB_007bc050;
                }
                break;
              }
              *puVar50 = 0x30;
            }
            if (local_a4 == 0x66) {
              if (local_13c == local_130) {
                *local_138 = 0x31;
                local_138[1] = local_c8;
                if (((local_c0[3] & 8) != 0) || (uVar37 = local_130, uVar43 != 0)) {
                  local_138[(long)(int)local_13c + 2] = 0x30;
                  uVar37 = uVar43 + 1 + local_13c;
                }
                local_a0[0] = local_a0[0] + 1;
                local_13c = 1;
                local_a4 = (-(uint)((*(ushort *)
                                      (*(long *)(in_FS_OFFSET + -0x40) + (long)(int)local_c0[2] * 2)
                                    & 0x100) == 0) & 0x20) + 0x45;
                puVar21 = local_138;
                uVar43 = uVar37;
              }
              else {
                local_13c = local_13c + 1;
                local_138[1] = 0x31;
                puVar21 = local_138 + 1;
              }
            }
            else {
              local_138[2] = 0x31;
              local_a0[0] = local_a0[0] + ((-(uint)(local_a8 == 0) & 2) - 1);
              if (local_a0[0] == 0) {
                local_a8 = 0;
              }
            }
            if ((int)local_130 < (int)(local_13c + uVar43)) {
              iVar27 = (local_13c + uVar43) - local_130;
              uVar43 = uVar43 - iVar27;
              puVar16 = puVar16 + -(long)iVar27;
            }
            goto LAB_007bc050;
          }
          iVar27 = 0;
          while (puVar50 = puVar50 + -1, local_c8 != uVar37) {
            if (uVar37 != 0x39) {
              if ((iVar27 != (uint)local_f8) || ((int)local_108 < 1)) goto LAB_007bc703;
              goto LAB_007bc6e1;
            }
            *puVar50 = 0x30;
            iVar27 = iVar27 + 1;
            uVar37 = puVar50[-1];
          }
          if ((iVar27 == (uint)local_f8) && (0 < (int)local_108)) {
LAB_007bc6e1:
            iVar27 = (int)local_108 + -1;
            local_108 = CONCAT44(local_108._4_4_,iVar27);
            if (uVar37 == local_c8) goto LAB_007bd2b1;
            iVar41 = iVar27 + (uint)local_f8;
LAB_007bc703:
            uVar37 = uVar37 + 1;
            *puVar50 = uVar37;
          }
          else {
LAB_007bd2b1:
            iVar41 = (uint)local_f8 + (int)local_108;
            uVar37 = *puVar50;
            if (((((char)local_144 == 'g') && (local_a4 == 0x66)) && ((local_c0[3] & 8) != 0)) &&
               ((puVar50 == local_138 + 3 && (local_138[2] == 0x30)))) {
              iVar41 = (int)local_108 + -1 + (uint)local_f8;
            }
          }
          if (local_c8 == uVar37) goto LAB_007bc8e1;
          if (iVar41 < (int)uVar43) goto LAB_007bc06c;
        }
        else {
          if (in_FPUControlWord < 0x801) {
            if (in_FPUControlWord == 0) {
              if (0x34 < iVar27) {
                if ((local_e8 & (undefined1  [16])0x1) == (undefined1  [16])0x0) goto LAB_007bc043;
                goto LAB_007bc683;
              }
            }
            else {
              if (in_FPUControlWord != 0x400) {
                uVar49 = FUN_00405252();
                return uVar49;
              }
              if (local_ac != 0) goto LAB_007bc67a;
            }
          }
          else if (in_FPUControlWord != 0xc00) {
            uVar49 = FUN_00405252();
            return uVar49;
          }
LAB_007bc050:
          if (iVar41 < (int)uVar43) {
LAB_007bc06c:
            do {
              if (puVar16[-1] != 0x30) break;
              uVar43 = uVar43 - 1;
              puVar16 = puVar16 + -1;
            } while (iVar41 < (int)uVar43);
          }
          if (((uVar43 == 0) && ((local_c0[3] & 8) == 0)) && (puVar16[-1] == local_c8)) {
            puVar16 = puVar16 + -1;
          }
        }
        uVar43 = local_13c;
        if (local_f0 != (byte *)0x0) {
          if (local_13c != local_120) {
            local_12c = 0;
            local_d8[0] = *local_f0;
            if (0x7d < (byte)(*local_f0 - 1)) goto LAB_007bc1fa;
            local_12c = 0;
            pbVar24 = local_f0;
            uVar37 = local_13c;
            do {
              uVar39 = (uint)(char)*pbVar24;
              if (uVar37 <= uVar39) goto LAB_007bc107;
              pbVar18 = pbVar24 + 1;
              pbVar24 = pbVar24 + 1;
              local_12c = local_12c + 1;
              uVar37 = uVar37 - uVar39;
              if (0x7e < *pbVar18) goto LAB_007bc107;
            } while (*pbVar18 != 0);
            local_12c = (uVar37 - 1) / uVar39 + local_12c;
          }
LAB_007bc107:
          if (local_12c != 0) {
            lVar44 = (long)local_12c;
            lVar15 = (int)local_13c + lVar44;
            local_d8._0_8_ = lVar15 * 4;
            *(undefined8 *)(puVar30 + -8) = 0x7bc148;
            FUN_00756670(puVar21 + lVar15,puVar21 + (int)local_13c,
                         (long)puVar16 - (long)(puVar21 + (int)local_13c) >> 2);
            puVar50 = (uint *)((long)puVar21 + local_d8._0_8_ + -4);
            uVar37 = (uint)(char)*local_f0;
            pbVar24 = local_f0;
            do {
              uVar26 = (ulong)uVar43;
              uVar43 = uVar43 - uVar37;
              uVar49 = (ulong)uVar43;
              puVar17 = puVar50;
              do {
                uVar39 = (int)uVar26 - 1;
                uVar26 = (ulong)uVar39;
                *puVar17 = puVar21[uVar26];
                puVar17 = puVar17 + -1;
              } while (uVar39 != uVar43);
              puVar17 = puVar50 + (-1 - (ulong)(uVar37 - 1));
              puVar50 = puVar50 + (-2 - (ulong)(uVar37 - 1));
              *puVar17 = local_11c;
              bVar14 = pbVar24[1];
              if (0x7e < bVar14) break;
              if (bVar14 == 0) {
                bVar14 = *pbVar24;
              }
              else {
                pbVar24 = pbVar24 + 1;
              }
              uVar37 = (uint)(char)bVar14;
            } while (uVar37 < uVar43);
            do {
              uVar49 = (ulong)((int)uVar49 - 1);
              puVar17 = puVar50 + -1;
              *puVar50 = puVar21[uVar49];
              puVar50 = puVar17;
            } while (puVar21 < puVar17);
            puVar16 = puVar16 + lVar44;
          }
        }
LAB_007bc1fa:
        puVar50 = puVar16;
        if (local_a4 != 0x66) {
          uVar40 = 0x2b;
          if (local_a8 != 0) {
            if (((char)local_144 == 'g') && (local_a0[0] == 4)) {
              *(undefined8 *)(puVar30 + -8) = 0x7bdac3;
              FUN_00756660(puVar21,&DAT_008421f4,6);
              puVar21[1] = local_c8;
              if (puVar16 < puVar21 + 2) {
                puVar50 = puVar16 + 5;
              }
              else {
                puVar50 = puVar16 + 4;
                *(undefined8 *)(puVar30 + -8) = 0x7bdb05;
                FUN_00401270(puVar21 + 6,0x30,(long)puVar16 - (long)(puVar21 + 2) >> 2);
              }
              goto LAB_007bc293;
            }
            uVar40 = 0x2d;
          }
          *(ulong *)puVar16 = CONCAT44(uVar40,local_a4);
          if ((int)local_a0[0] < 10) {
            puVar16[2] = 0x30;
            puVar16 = puVar16 + 3;
          }
          else {
            iVar27 = 10;
            do {
              iVar27 = iVar27 * 10;
              puVar50 = puVar16 + 2;
            } while (iVar27 <= (int)local_a0[0]);
            do {
              puVar16 = puVar50 + 1;
              iVar41 = iVar27 / 10;
              iVar42 = (int)local_a0[0] / iVar41;
              local_a0[0] = (int)local_a0[0] % iVar41;
              *puVar50 = iVar42 + 0x30;
              bVar51 = 0x6d < iVar27;
              puVar50 = puVar16;
              iVar27 = iVar41;
            } while (bVar51);
          }
          puVar50 = puVar16 + 1;
          *puVar16 = local_a0[0] + 0x30;
        }
LAB_007bc293:
        bVar14 = (byte)local_c0[3];
        pbVar24 = (byte *)((long)puVar50 - (long)puVar21 >> 2);
        iVar27 = (int)pbVar24;
        if ((local_ac == 0) && ((bVar14 & 0x50) == 0)) {
          local_d8._0_4_ = local_140 - iVar27;
          if ((((bVar14 & 0x20) != 0) || (uVar43 = local_c0[4], uVar43 == 0x30)) ||
             ((int)(local_140 - iVar27) < 1)) {
            uVar43 = 0;
            goto LAB_007bc95b;
          }
LAB_007bc2fa:
          lVar15 = (long)(int)local_d8._0_4_;
          if (local_c4 == 0) {
            *(undefined8 *)(puVar30 + -8) = 0x7bd490;
            lVar44 = FUN_007a1c80(param_1,uVar43,lVar15);
          }
          else {
            *(undefined8 *)(puVar30 + -8) = 0x7bc31a;
            lVar44 = FUN_007a2150();
          }
          if (lVar44 == lVar15) {
            uVar43 = local_d8._0_4_;
            goto LAB_007bc330;
          }
LAB_007bbccc:
          puVar36 = puVar30;
          if (local_154 != 0) goto LAB_007bbce2;
        }
        else {
          local_d8._0_4_ = (local_140 - 1) - iVar27;
          if (((bVar14 & 0x20) == 0) &&
             ((uVar43 = local_c0[4], 0 < (int)local_d8._0_4_ && (uVar43 != 0x30))))
          goto LAB_007bc2fa;
          uVar43 = 0;
LAB_007bc330:
          if (local_ac != 0) {
            if (local_c4 == 0) {
              puVar36 = *(undefined1 **)(param_1 + 0x28);
              if (puVar36 < *(undefined1 **)(param_1 + 0x30)) {
                *(undefined1 **)(param_1 + 0x28) = puVar36 + 1;
                *puVar36 = 0x2d;
                goto LAB_007bc375;
              }
              local_e8._0_4_ = uVar43;
              uVar38 = 0x2d;
LAB_007bd8c6:
              *(undefined8 *)(puVar30 + -8) = 0x7bd8ce;
              iVar41 = FUN_00706570(param_1,uVar38);
            }
            else {
              lVar15 = *(long *)(param_1 + 0xa0);
              if ((lVar15 != 0) &&
                 (puVar5 = *(undefined4 **)(lVar15 + 0x20), puVar5 < *(undefined4 **)(lVar15 + 0x28)
                 )) {
                *(undefined4 **)(lVar15 + 0x20) = puVar5 + 1;
                *puVar5 = 0x2d;
                goto LAB_007bc375;
              }
              local_e8._0_4_ = uVar43;
              uVar38 = 0x2d;
LAB_007bbcaf:
              *(undefined8 *)(puVar30 + -8) = 0x7bbcb7;
              iVar41 = FUN_006ff380(param_1,uVar38);
            }
            uVar43 = local_e8._0_4_;
            if (iVar41 != -1) goto LAB_007bc375;
            goto LAB_007bbccc;
          }
          bVar14 = (byte)local_c0[3];
LAB_007bc95b:
          if ((bVar14 & 0x40) == 0) {
            if ((bVar14 & 0x10) != 0) {
              if (local_c4 == 0) {
                puVar36 = *(undefined1 **)(param_1 + 0x28);
                if (*(undefined1 **)(param_1 + 0x30) <= puVar36) {
                  local_e8._0_4_ = uVar43;
                  uVar38 = 0x20;
                  goto LAB_007bd8c6;
                }
                *(undefined1 **)(param_1 + 0x28) = puVar36 + 1;
                *puVar36 = 0x20;
              }
              else {
                lVar15 = *(long *)(param_1 + 0xa0);
                if ((lVar15 == 0) ||
                   (puVar5 = *(undefined4 **)(lVar15 + 0x20),
                   *(undefined4 **)(lVar15 + 0x28) <= puVar5)) {
                  local_e8._0_4_ = uVar43;
                  uVar38 = 0x20;
                  goto LAB_007bbcaf;
                }
                *(undefined4 **)(lVar15 + 0x20) = puVar5 + 1;
                *puVar5 = 0x20;
              }
              goto LAB_007bc375;
            }
          }
          else {
            if (local_c4 == 0) {
              puVar36 = *(undefined1 **)(param_1 + 0x28);
              if (*(undefined1 **)(param_1 + 0x30) <= puVar36) {
                local_e8._0_4_ = uVar43;
                uVar38 = 0x2b;
                goto LAB_007bd8c6;
              }
              *(undefined1 **)(param_1 + 0x28) = puVar36 + 1;
              *puVar36 = 0x2b;
            }
            else {
              lVar15 = *(long *)(param_1 + 0xa0);
              if ((lVar15 == 0) ||
                 (puVar5 = *(undefined4 **)(lVar15 + 0x20),
                 *(undefined4 **)(lVar15 + 0x28) <= puVar5)) {
                local_e8._0_4_ = uVar43;
                uVar38 = 0x2b;
                goto LAB_007bbcaf;
              }
              *(undefined4 **)(lVar15 + 0x20) = puVar5 + 1;
              *puVar5 = 0x2b;
            }
LAB_007bc375:
            uVar43 = uVar43 + 1;
            bVar14 = (byte)local_c0[3];
          }
          if ((((bVar14 & 0x20) == 0) && (local_c0[4] == 0x30)) && (0 < (int)local_d8._0_4_)) {
            lVar15 = (long)(int)local_d8._0_4_;
            local_e8._0_4_ = uVar43;
            if (local_c4 == 0) {
              *(undefined8 *)(puVar30 + -8) = 0x7bd712;
              lVar44 = FUN_007a1c80(param_1,0x30,lVar15);
            }
            else {
              *(undefined8 *)(puVar30 + -8) = 0x7bd432;
              lVar44 = FUN_007a2150();
            }
            if (lVar44 != lVar15) goto LAB_007bbccc;
            uVar43 = local_e8._0_4_ + local_d8._0_4_;
          }
          if (local_c4 == 0) {
            if ((*(byte *)((long)local_c0 + 0xd) & 8) != 0) {
              local_128 = *(uint *)(*local_100 + 0xa8) * local_128;
            }
            local_e8._0_4_ = uVar43;
            *(undefined8 *)(puVar30 + -8) = 0x7bc3f0;
            lVar15 = thunk_FUN_007129d0(local_110);
            if (local_118 == (char *)0x0) {
              lVar44 = 0;
              pbVar18 = (byte *)0x0;
              uVar43 = local_e8._0_4_;
            }
            else {
              *(undefined8 *)(puVar30 + -8) = 0x7bc40f;
              pbVar18 = (byte *)thunk_FUN_007129d0();
              lVar44 = (long)local_12c * (long)pbVar18;
              uVar43 = local_e8._0_4_;
            }
            local_f8 = (byte *)(lVar44 + local_128 + 2 + lVar15);
            if (local_148 == 0) {
              for (puVar36 = puVar30;
                  puVar36 != puVar30 + -((ulong)(local_f8 + 0x17) & 0xfffffffffffff000);
                  puVar36 = puVar36 + -0x1000) {
                *(undefined8 *)(puVar36 + -8) = *(undefined8 *)(puVar36 + -8);
              }
              uVar49 = (ulong)((uint)(local_f8 + 0x17) & 0xff0);
              lVar44 = -uVar49;
              puVar30 = puVar36 + lVar44;
              if (uVar49 != 0) {
                *(undefined8 *)(puVar36 + -8) = *(undefined8 *)(puVar36 + -8);
              }
              local_e8._0_8_ = (ulong)(puVar36 + lVar44 + 0xf) & 0xfffffffffffffff0;
LAB_007bc49d:
              uVar39 = local_c8;
              uVar37 = local_11c;
              if (puVar21 < puVar50) {
                local_100 = (long *)CONCAT44(local_100._4_4_,uVar43);
                pbVar24 = (byte *)local_e8._0_8_;
                local_108 = param_1;
                local_f0 = pbVar18;
                do {
                  while (uVar43 = *puVar21, uVar43 != uVar39) {
                    if (uVar37 == uVar43) {
                      *(undefined8 *)(puVar30 + -8) = 0x7bc783;
                      pbVar24 = (byte *)thunk_FUN_00713820(pbVar24,local_118,local_f0);
                    }
                    else {
                      *pbVar24 = (byte)uVar43;
                      pbVar24 = pbVar24 + 1;
                    }
                    puVar21 = puVar21 + 1;
                    if (puVar50 <= puVar21) goto LAB_007bc51a;
                  }
                  puVar21 = puVar21 + 1;
                  *(undefined8 *)(puVar30 + -8) = 0x7bc512;
                  pbVar24 = (byte *)thunk_FUN_00713820(pbVar24,local_110,lVar15);
                } while (puVar21 < puVar50);
LAB_007bc51a:
                pbVar18 = pbVar24;
                param_1 = local_108;
                uVar43 = (uint)local_100;
                if ((*(byte *)((long)local_c0 + 0xd) & 8) != 0) goto LAB_007bd6d5;
                puVar21 = (uint *)local_e8._0_8_;
                uVar37 = (uint)local_100;
              }
              else {
                pbVar18 = (byte *)local_e8._0_8_;
                if ((*(byte *)((long)local_c0 + 0xd) & 8) == 0) goto LAB_007bc5b4;
LAB_007bd6d5:
                local_f0 = (byte *)CONCAT44(local_f0._4_4_,uVar43);
                pbVar24 = local_f8 + local_e8._0_8_;
                *(undefined8 *)(puVar30 + -8) = 0x7bd6fb;
                puVar21 = (uint *)FUN_007bac10(local_e8._0_8_,pbVar18,pbVar24);
                uVar37 = (uint)local_f0;
              }
              pbVar24 = pbVar24 + -(long)puVar21;
              puVar16 = puVar21;
              uVar43 = uVar37;
              pbVar18 = pbVar24;
              if (0x14 < (long)pbVar24) {
                lVar15 = *(long *)(param_1 + 0xd8);
                if (lVar15 - 0x93f160U < 0x828) {
                  pcVar19 = *(code **)(lVar15 + 0x38);
                  local_f0._0_4_ = uVar37;
                }
                else {
                  local_f0 = (byte *)CONCAT44(local_f0._4_4_,uVar37);
                  *(undefined8 *)(puVar30 + -8) = 0x7bd8f3;
                  local_f8 = pbVar24;
                  FUN_00703130();
                  pcVar19 = *(code **)(lVar15 + 0x38);
                  pbVar24 = local_f8;
                }
                goto LAB_007bc580;
              }
              while (pbVar18 != (byte *)0x0) {
                puVar50 = (uint *)((long)puVar16 + 1);
                puVar36 = *(undefined1 **)(param_1 + 0x28);
                uVar43 = *puVar16;
                if (puVar36 < *(undefined1 **)(param_1 + 0x30)) {
                  *(undefined1 **)(param_1 + 0x28) = puVar36 + 1;
                  *puVar36 = (char)uVar43;
                }
                else {
                  *(undefined8 *)(puVar30 + -8) = 0x7bcdf2;
                  iVar27 = FUN_00706570(param_1,(char)uVar43);
                  if (iVar27 == -1) {
                    puVar36 = puVar30;
                    if (local_154 != 0) goto LAB_007bbce2;
                    *(undefined8 *)(puVar30 + -8) = 0x7bce16;
                    FUN_007104f0(local_e8._0_8_);
                    *(undefined8 *)(puVar30 + -8) = 0x7bce22;
                    FUN_007104f0(local_138);
                    uVar43 = 0xffffffff;
                    goto LAB_007bb4c8;
                  }
                }
                puVar16 = puVar50;
                uVar43 = (uVar37 + (int)puVar50) - (int)puVar21;
                pbVar18 = pbVar24 + ((long)puVar21 - (long)puVar50);
              }
              goto LAB_007bc5b4;
            }
            local_f0 = (byte *)CONCAT44(local_f0._4_4_,uVar43);
            *(undefined8 *)(puVar30 + -8) = 0x7bd74b;
            lVar44 = FUN_007101b0(local_f8);
            local_e8._0_8_ = lVar44;
            uVar43 = (uint)local_f0;
            if (lVar44 != 0) goto LAB_007bc49d;
          }
          else {
            if ((*(byte *)((long)local_c0 + 0xd) & 8) != 0) {
              local_e8._0_4_ = uVar43;
              *(undefined8 *)(puVar30 + -8) = 0x7bd730;
              FUN_007bac10(0,0,0);
              uVar43 = local_e8._0_4_;
            }
            if (puVar50 == puVar21) {
              if (pbVar24 == (byte *)0x0) {
                auVar13._8_8_ = 0;
                auVar13._0_8_ = local_e8._8_8_;
                local_e8 = auVar13 << 0x40;
              }
              else {
                do {
                  lVar15 = *(long *)(param_1 + 0xa0);
                  uVar37 = *puVar21;
                  if ((lVar15 == 0) ||
                     (puVar16 = *(uint **)(lVar15 + 0x20), *(uint **)(lVar15 + 0x28) <= puVar16)) {
                    local_e8._0_8_ = param_1;
                    *(undefined8 *)(puVar30 + -8) = 0x7bc883;
                    uVar37 = FUN_006ff380();
                    param_1 = local_e8._0_8_;
                  }
                  else {
                    *(uint **)(lVar15 + 0x20) = puVar16 + 1;
                    *puVar16 = uVar37;
                  }
                  if (uVar37 == 0xffffffff) goto LAB_007bbccc;
                  iVar41 = (int)pbVar24;
                  pbVar24 = pbVar24 + -1;
                  puVar21 = puVar21 + 1;
                } while (pbVar24 != (byte *)0x0);
                auVar10._8_8_ = 0;
                auVar10._0_8_ = local_e8._8_8_;
                local_e8 = auVar10 << 0x40;
                uVar43 = (iVar27 + 1 + uVar43) - iVar41;
              }
LAB_007bc5b4:
              if (local_148 != 0) {
                *(undefined8 *)(puVar30 + -8) = 0x7bd5bf;
                FUN_007104f0(local_e8._0_8_);
                *(undefined8 *)(puVar30 + -8) = 0x7bd5cb;
                FUN_007104f0(local_138);
                auVar11._8_8_ = 0;
                auVar11._0_8_ = local_e8._8_8_;
                local_e8 = auVar11 << 0x40;
                local_138 = (uint *)0x0;
              }
              if (((local_c0[3] & 0x20) == 0) || ((int)local_d8._0_4_ < 1)) goto LAB_007bb4c8;
              lVar15 = (long)(int)local_d8._0_4_;
              uVar37 = local_c0[4];
              if (local_c4 == 0) {
                *(undefined8 *)(puVar30 + -8) = 0x7bd356;
                lVar44 = FUN_007a1c80(param_1,uVar37,lVar15);
              }
              else {
                *(undefined8 *)(puVar30 + -8) = 0x7bc604;
                lVar44 = FUN_007a2150();
              }
              if (lVar44 == lVar15) {
                uVar43 = uVar43 + local_d8._0_4_;
                goto LAB_007bb4c8;
              }
            }
            else {
              lVar15 = *(long *)(param_1 + 0xd8);
              if (lVar15 - 0x93f160U < 0x828) {
                auVar9._8_8_ = 0;
                auVar9._0_8_ = local_e8._8_8_;
                local_e8 = auVar9 << 0x40;
                pcVar19 = *(code **)(lVar15 + 0x38);
                local_f0._0_4_ = uVar43;
              }
              else {
                local_f0 = (byte *)CONCAT44(local_f0._4_4_,uVar43);
                *(undefined8 *)(puVar30 + -8) = 0x7bd898;
                local_f8 = pbVar24;
                FUN_00703130();
                pcVar19 = *(code **)(lVar15 + 0x38);
                auVar12._8_8_ = 0;
                auVar12._0_8_ = local_e8._8_8_;
                local_e8 = auVar12 << 0x40;
                pbVar24 = local_f8;
              }
LAB_007bc580:
              local_f8 = (byte *)CONCAT44(local_f8._4_4_,(uint)local_f0);
              *(undefined8 *)(puVar30 + -8) = 0x7bc599;
              local_f0 = pbVar24;
              pbVar24 = (byte *)(*pcVar19)(param_1,puVar21,pbVar24);
              if (pbVar24 == local_f0) {
                uVar43 = (uint)local_f8 + (int)local_f0;
                goto LAB_007bc5b4;
              }
            }
            puVar36 = puVar30;
            if (local_154 != 0) goto LAB_007bbce2;
            *(undefined8 *)(puVar30 + -8) = 0x7bda4f;
            FUN_007104f0(local_e8._0_8_);
          }
        }
        *(undefined8 *)(puVar30 + -8) = 0x7bbce2;
        FUN_007104f0(local_138);
        puVar36 = puVar30;
      }
LAB_007bbce2:
      uVar43 = 0xffffffff;
      puVar30 = puVar36;
      goto LAB_007bb4c8;
    }
  }
  else {
    if ((char)local_144 != 'f') {
      local_130 = 6;
      if ((-1 < (int)uVar43) && (local_130 = 1, uVar43 != 0)) {
        local_130 = uVar43;
      }
      uVar49 = (ulong)local_a0[0];
      if (local_a8 == 0) {
        if ((int)local_130 <= (int)local_a0[0]) goto LAB_007bce49;
        local_120 = local_a0[0] + 1;
        local_e8._0_4_ = local_130 - local_120;
LAB_007bb9c2:
        local_a4 = 0x66;
        local_128 = (long)(int)local_130 + 5;
      }
      else {
        if ((int)local_a0[0] < 5) {
          local_120 = 0;
          local_e8._0_4_ = local_130;
          goto LAB_007bb9c2;
        }
LAB_007bce49:
        local_120 = 1;
        local_a4 = local_a4 - 2;
        local_e8._0_4_ = local_130 - 1;
        local_128 = (long)(int)local_e8._0_4_ + 8;
      }
      uVar40 = 0;
      uVar43 = local_e8._0_4_;
      if ((local_c0[3] & 8) == 0) {
        uVar43 = 0;
      }
      local_f8 = (byte *)CONCAT44(local_f8._4_4_,uVar43);
      goto LAB_007bb9fa;
    }
    local_a4 = 0x66;
    uVar49 = (ulong)(int)uVar43;
    if ((int)uVar43 < 0) {
      local_f8 = (byte *)CONCAT44(local_f8._4_4_,6);
      uVar49 = 6;
    }
    local_12c = local_a8;
    if (local_a8 != 0) {
      local_128 = uVar49 + 2;
      goto LAB_007bc8b4;
    }
    uVar40 = 1;
    local_130 = 0x7fffffff;
    local_120 = local_a0[0] + 1;
    local_128 = uVar49 + 2 + (long)(int)local_a0[0];
    local_e8._0_4_ = (uint)local_f8;
    if (local_f0 != (byte *)0x0) goto LAB_007bba08;
LAB_007bba7a:
    if (local_128 < 0x3ffffffffffffffd) goto LAB_007bba91;
  }
  uVar43 = 0xffffffff;
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
LAB_007bb4c8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)uVar43;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar30 + -8) = 0x7bdaaf;
  FUN_00771f60();
}


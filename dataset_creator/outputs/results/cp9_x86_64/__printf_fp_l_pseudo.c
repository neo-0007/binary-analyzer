
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __printf_fp_l(_IO_FILE *param_1,long *param_2,uint *param_3,undefined8 *param_4,ulong param_5,
                 undefined8 param_6)

{
  double dVar1;
  longdouble lVar2;
  byte bVar3;
  wchar_t wVar4;
  undefined4 *puVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  wchar_t wVar15;
  byte bVar16;
  wchar_t wVar17;
  long lVar18;
  wchar_t *pwVar19;
  wchar_t *pwVar20;
  size_t __n;
  byte *pbVar21;
  code *pcVar22;
  ulong *puVar23;
  wchar_t *__s1;
  void *pvVar24;
  int *piVar25;
  undefined1 (*pauVar26) [16];
  long lVar27;
  ulong uVar28;
  int iVar29;
  long *plVar30;
  long lVar31;
  undefined1 *puVar32;
  undefined1 *puVar33;
  undefined1 *puVar34;
  undefined1 *puVar35;
  undefined1 *puVar37;
  undefined1 *puVar38;
  uint uVar39;
  undefined8 uVar40;
  uint uVar41;
  undefined4 uVar42;
  undefined4 unaff_R13D;
  int iVar43;
  int iVar44;
  uint uVar45;
  long lVar46;
  byte *pbVar47;
  long lVar48;
  long lVar49;
  long *plVar50;
  ulong uVar51;
  wchar_t *pwVar52;
  long in_FS_OFFSET;
  bool bVar53;
  ushort in_FPUControlWord;
  undefined1 auVar54 [16];
  undefined1 auStack_158 [4];
  int local_154;
  _IO_FILE *local_150;
  int local_148;
  undefined4 local_144;
  uint local_140;
  uint local_13c;
  wchar_t *local_138;
  uint local_130;
  int local_12c;
  ulong local_128;
  uint local_120;
  wchar_t local_11c;
  char *local_118;
  char *local_110;
  undefined8 local_108;
  long *local_100;
  byte *local_f8;
  byte *local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  wchar_t local_c8;
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
  undefined1 *puVar36;
  
  puVar32 = auStack_158;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar16 = *(byte *)((long)param_3 + 0xd);
  local_ac = 0;
  local_a8 = 0;
  bVar3 = (byte)param_3[3];
  uVar51 = (ulong)bVar3;
  local_c4 = bVar16 >> 2 & 1;
  local_100 = param_2;
  local_c0 = param_3;
  if ((bVar16 & 1) != 0) {
    lVar18 = param_2[4];
    local_110 = *(char **)(lVar18 + 0x50);
    if (*local_110 == '\0') {
      param_5 = param_2[1];
      local_110 = *(char **)(param_5 + 0x40);
    }
    local_c8 = *(wchar_t *)(lVar18 + 0x198);
    if (local_c8 == L'\0') {
      param_5 = param_2[1];
      local_c8 = *(wchar_t *)(param_5 + 0x58);
    }
    if ((char)bVar3 < '\0') {
      pbVar47 = *(byte **)(lVar18 + 0x60);
      goto LAB_007b185e;
    }
LAB_007b1672:
    local_f0 = (byte *)0x0;
    local_11c = L'\0';
    local_118 = (char *)0x0;
LAB_007b1692:
    pauVar26 = (undefined1 (*) [16])*param_4;
    if ((bVar16 & 0x10) != 0) goto LAB_007b169d;
LAB_007b18d8:
    if ((bVar3 & 1) != 0) {
      lVar2 = *(longdouble *)*pauVar26;
      if (!NAN(lVar2)) {
        if (ABS(lVar2) <= _DAT_00816b30) {
          lVar18 = __mpn_extract_long_double
                             (local_68,2,local_a0,&local_ac,param_5,param_6,SUB108(lVar2,0),
                              (short)((unkuint10)lVar2 >> 0x40));
          iVar29 = (int)lVar18 * 0x40 + -0x3f;
          goto LAB_007b1c7d;
        }
        local_ac = (uint)(ushort)((ushort)(lVar2 < (longdouble)0) << 9);
LAB_007b1911:
        pbVar47 = &DAT_0080280d;
        piVar25 = (int *)&DAT_00837fa4;
        if ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)(int)param_3[2] * 2) & 1) == 0) {
          piVar25 = &DAT_00837fc4;
          pbVar47 = &DAT_0081ad24;
        }
        goto LAB_007b178c;
      }
      local_ac = (uint)(ushort)((ushort)(lVar2 < (longdouble)0) << 9);
      goto LAB_007b2553;
    }
    dVar1 = *(double *)*pauVar26;
    auVar54._8_8_ = 0;
    auVar54._0_8_ = dVar1;
    if (NAN(dVar1)) {
      local_ac = movmskpd(unaff_R13D,auVar54);
      local_ac = local_ac & 1;
      goto LAB_007b2553;
    }
    if (DAT_00816b18 < (double)((ulong)dVar1 & _DAT_00838000)) {
      local_ac = movmskpd(unaff_R13D,auVar54);
      local_ac = local_ac & 1;
      goto LAB_007b1911;
    }
    lVar18 = __mpn_extract_double(local_68,2,local_a0,&local_ac);
    iVar29 = (int)lVar18 * 0x40 + -0x34;
LAB_007b1c7d:
    puVar32 = auStack_158;
    puVar33 = auStack_158;
    uVar39 = -local_a0[0];
    if (0 < (int)local_a0[0]) {
      uVar39 = local_a0[0];
    }
    uVar51 = (long)(((int)(uVar39 + 0x3f) >> 6) + 4) * 8 + 0x17;
    uVar39 = (uint)uVar51;
    puVar38 = auStack_158;
    while (puVar33 != auStack_158 + -(uVar51 & 0xfffffffffffff000)) {
      puVar32 = puVar38 + -0x1000;
      *(undefined8 *)(puVar38 + -8) = *(undefined8 *)(puVar38 + -8);
      puVar33 = puVar38 + -0x1000;
      puVar38 = puVar38 + -0x1000;
    }
    lVar46 = -(ulong)(uVar39 & 0xff0);
    puVar38 = puVar32 + lVar46;
    puVar34 = puVar32 + lVar46;
    if ((ulong)(uVar39 & 0xff0) != 0) {
      *(undefined8 *)(puVar32 + -8) = *(undefined8 *)(puVar32 + -8);
    }
    local_98 = (ulong *)((ulong)(puVar32 + lVar46 + 0xf) & 0xfffffffffffffff0);
    puVar35 = puVar32 + lVar46;
    while (puVar34 != puVar32 + (lVar46 - (uVar51 & 0xfffffffffffff000))) {
      puVar38 = puVar35 + -0x1000;
      *(undefined8 *)(puVar35 + -8) = *(undefined8 *)(puVar35 + -8);
      puVar34 = puVar35 + -0x1000;
      puVar35 = puVar35 + -0x1000;
    }
    lVar46 = -(ulong)(uVar39 & 0xff0);
    puVar35 = puVar38 + lVar46;
    puVar36 = puVar38 + lVar46;
    if ((ulong)(uVar39 & 0xff0) != 0) {
      *(undefined8 *)(puVar38 + -8) = *(undefined8 *)(puVar38 + -8);
    }
    local_78 = (ulong *)((ulong)(puVar38 + lVar46 + 0xf) & 0xfffffffffffffff0);
    puVar32 = puVar38 + lVar46;
    while (puVar36 != puVar38 + (lVar46 - (uVar51 & 0xfffffffffffff000))) {
      puVar35 = puVar32 + -0x1000;
      *(undefined8 *)(puVar32 + -8) = *(undefined8 *)(puVar32 + -8);
      puVar36 = puVar32 + -0x1000;
      puVar32 = puVar32 + -0x1000;
    }
    lVar46 = -(ulong)(uVar39 & 0xff0);
    puVar32 = puVar35 + lVar46;
    puVar37 = puVar35 + lVar46;
    puVar38 = puVar35 + lVar46;
    if ((ulong)(uVar39 & 0xff0) != 0) {
      *(undefined8 *)(puVar35 + -8) = *(undefined8 *)(puVar35 + -8);
    }
    local_80 = 0;
    local_88 = (ulong *)((ulong)(puVar35 + lVar46 + 0xf) & 0xfffffffffffffff0);
    local_90 = lVar18;
    if (2 < (int)local_a0[0]) {
      uVar39 = local_a0[0] + iVar29;
      uVar45 = uVar39 + 0x3f;
      if (-1 < (int)uVar39) {
        uVar45 = uVar39;
      }
      iVar43 = (int)uVar45 >> 6;
      if ((uVar39 & 0x3f) == 0) {
        uVar39 = local_a0[0];
        if (0 < lVar18) {
          local_d8._0_4_ = local_a0[0];
          *(undefined8 *)(puVar35 + lVar46 + -8) = 0x7b1de9;
          memcpy(local_98 + iVar43,local_68,lVar18 * 8);
          uVar39 = local_d8._0_4_;
        }
        lVar27 = (long)iVar43;
        local_90 = lVar18 + lVar27;
      }
      else {
        *(undefined8 *)(puVar35 + lVar46 + -8) = 0x7b3567;
        uVar51 = __mpn_lshift(local_98 + iVar43,local_68,lVar18,(int)uVar39 % 0x40);
        iVar29 = iVar29 + local_a0[0];
        iVar43 = iVar29 + 0x3f;
        if (-1 < iVar29) {
          iVar43 = iVar29;
        }
        lVar27 = (long)(iVar43 >> 6);
        lVar18 = local_90 + lVar27;
        uVar39 = local_a0[0];
        local_90 = lVar18;
        if (uVar51 != 0) {
          local_90 = lVar18 + 1;
          local_98[lVar18] = uVar51;
        }
      }
      if (0 < lVar27) {
        local_d8._0_4_ = uVar39;
        *(undefined8 *)(puVar35 + lVar46 + -8) = 0x7b1e19;
        memset(local_98,0,lVar27 << 3);
        uVar39 = local_d8._0_4_;
      }
      iVar29 = 0;
      local_d8._0_8_ = param_1;
      bVar16 = 0xc;
      uVar45 = 0;
      lVar18 = local_80;
      plVar30 = (long *)&DAT_0081b4d8;
      do {
        plVar50 = plVar30 + -3;
        bVar53 = (int)uVar39 < (int)plVar30[-1] + iVar29 + -1;
        uVar39 = local_a0[0];
        if (bVar53) goto joined_r0x007b1ea2;
        if (lVar18 == 0) {
          if ((*(byte *)((long)local_c0 + 0xd) & 0x10) == 0) {
            local_70 = plVar30[-2];
            lVar18 = *plVar50;
            *(undefined8 *)(puVar35 + lVar46 + -8) = 0x7b1e80;
            memcpy(local_78,__tens + lVar18 * 8,local_70 << 3);
          }
          else {
            local_70 = plVar30[-2] + 1;
            lVar18 = *plVar50;
            *(undefined8 *)(puVar35 + lVar46 + -8) = 0x7b25f7;
            memcpy(local_78 + 1,__tens + lVar18 * 8,local_70 * 8);
            *local_78 = 0;
            local_a0[0] = local_a0[0] + 0x40;
          }
LAB_007b1e84:
          bVar53 = local_90 == local_70;
          if (local_70 < local_90) goto LAB_007b1f10;
LAB_007b1e91:
          lVar18 = local_80;
          uVar39 = local_a0[0];
          if (bVar53) {
            *(undefined8 *)(puVar35 + lVar46 + -8) = 0x7b2ea0;
            iVar43 = __mpn_cmp(local_98,local_78);
            lVar18 = local_80;
            uVar39 = local_a0[0];
            if (-1 < iVar43) goto LAB_007b1f10;
          }
        }
        else {
          lVar27 = *plVar50;
          lVar31 = plVar30[-2];
          *(undefined8 *)(puVar35 + lVar46 + -8) = 0x7b1ee9;
          lVar18 = __mpn_mul(local_78,local_88,lVar18,lVar27 * 8 + 0x81b528,lVar31 + -1);
          if (lVar18 == 0) {
            local_70 = plVar30[-2] + local_80 + -2;
            goto LAB_007b1e84;
          }
          local_70 = plVar30[-2] + local_80 + -1;
          bVar53 = local_90 == local_70;
          if (local_90 <= local_70) goto LAB_007b1e91;
LAB_007b1f10:
          *(undefined8 *)(puVar35 + lVar46 + -8) = 0x7b1f25;
          local_80 = local_70;
          memcpy(local_88,local_78,local_70 << 3);
          lVar18 = 0x3f;
          if (local_88[local_80 + -1] != 0) {
            for (; local_88[local_80 + -1] >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          iVar29 = ((int)local_80 * 0x40 + -0x81) - ((uint)lVar18 ^ 0x3f);
          uVar45 = uVar45 | 1 << (bVar16 & 0x1f);
          lVar18 = local_80;
          uVar39 = local_a0[0];
        }
joined_r0x007b1ea2:
        if (plVar50 == &_fpioconst_pow10) goto LAB_007b1f63;
        bVar16 = bVar16 - 1;
        plVar30 = plVar50;
        local_a0[0] = uVar39;
      } while( true );
    }
    if ((int)local_a0[0] < 0) {
      bVar16 = 0xc;
      *(undefined8 *)(puVar35 + lVar46 + -8) = 0x7b313e;
      uVar51 = __mpn_lshift(local_98,local_68,lVar18,iVar29);
      auVar9._12_4_ = 0;
      auVar9._0_12_ = local_d8._4_12_;
      local_d8 = auVar9 << 0x20;
      local_e8._0_8_ = param_1;
      uVar39 = -local_a0[0];
      local_98[local_90] = uVar51;
      local_a8 = 1;
      plVar30 = (long *)&DAT_0081b4d8;
      local_a0[0] = uVar39;
      local_90 = local_90 + 1;
      do {
        plVar50 = plVar30 + -3;
        if (*(int *)((long)plVar30 + -4) <= (int)uVar39) {
          lVar18 = plVar30[-2] + -1;
          lVar27 = *plVar50;
          if (local_90 < lVar18) {
            *(undefined8 *)(puVar35 + lVar46 + -8) = 0x7b31ab;
            lVar18 = __mpn_mul(local_78,lVar27 * 8 + 0x81b528,lVar18,local_98,local_90);
          }
          else {
            *(undefined8 *)(puVar35 + lVar46 + -8) = 0x7b327b;
            lVar18 = __mpn_mul(local_78,local_98,local_90,lVar27 * 8 + 0x81b528,lVar18);
          }
          if (lVar18 == 0) {
            local_70 = plVar30[-2] + local_90 + -2;
          }
          else {
            local_70 = plVar30[-2] + local_90 + -1;
          }
          puVar23 = local_78 + local_70 + -1;
          uVar51 = 0x3f;
          if (*puVar23 != 0) {
            for (; *puVar23 >> uVar51 == 0; uVar51 = uVar51 - 1) {
            }
          }
          iVar29 = (int)(uVar51 ^ 0x3f);
          iVar43 = ((((int)local_70 - (int)local_90) + 1) * 0x40 - iVar29) + -1;
          if (local_a0[0] + 3 == iVar43) {
            if (iVar29 < 0x3d) {
              local_58 = 0;
              uStack_50 = 10L << (0x3cU - (char)(uVar51 ^ 0x3f) & 0x3f);
              if ((int)(local_a0[0] + 2) < iVar43) {
LAB_007b337c:
                if ((uStack_50 <= *puVar23) &&
                   ((uVar39 = local_a0[0], *puVar23 != uStack_50 ||
                    (local_58 <= local_78[local_70 + -2])))) goto LAB_007b3219;
              }
            }
            else {
              local_58 = _DAT_00838010;
              uStack_50 = _UNK_00838018;
              *(undefined8 *)(puVar35 + lVar46 + -8) = 0x7b3a53;
              __mpn_lshift(&local_58,&local_58,2,0x40 - iVar29);
              if ((int)(local_a0[0] + 2) < iVar43) {
                uVar39 = local_a0[0];
                if (local_a0[0] + 3 != iVar43) goto LAB_007b3219;
                puVar23 = local_78 + local_70 + -1;
                goto LAB_007b337c;
              }
            }
LAB_007b3298:
            uVar39 = local_a0[0] - iVar43;
            local_d8._0_4_ = local_d8._0_4_ | 1 << (bVar16 & 0x1f);
            if ((int)uVar39 < 0) {
              iVar29 = iVar29 - uVar39;
            }
            uVar51 = *local_78;
            puVar23 = local_78;
            local_a0[0] = uVar39;
            if (uVar51 == 0) {
              lVar31 = 1;
              do {
                lVar18 = lVar31;
                puVar23 = puVar23 + 1;
                uVar51 = *puVar23;
                iVar43 = (int)lVar18;
                lVar27 = (long)iVar43;
                lVar31 = lVar18 + 1;
              } while (uVar51 == 0);
              if (iVar29 == 0x3f) {
LAB_007b3307:
                local_90 = local_70 - lVar27;
                if (0 < local_90) {
                  lVar31 = 0;
                  do {
                    local_98[lVar31] = local_78[lVar18 + lVar31];
                    lVar31 = lVar31 + 1;
                    local_90 = local_70 - lVar27;
                  } while (lVar31 < local_90);
                }
              }
              else {
                iVar44 = 0;
                for (; (uVar51 & 1) == 0; uVar51 = uVar51 >> 1 | 0x8000000000000000) {
                  iVar44 = iVar44 + 1;
                }
                if (iVar44 < 0x3f - iVar29) {
                  lVar31 = (long)(iVar43 + -1);
                  lVar27 = local_70 - lVar31;
                  puVar23 = local_78 + lVar18 + -1;
                }
                else {
                  lVar31 = (long)iVar43;
                  lVar27 = local_70 - lVar31;
                }
LAB_007b38fc:
                *(undefined8 *)(puVar35 + lVar46 + -8) = 0x7b3904;
                __mpn_rshift(local_98,puVar23,lVar27);
                local_90 = local_70 - lVar31;
                uVar39 = local_a0[0];
              }
            }
            else {
              if (iVar29 == 0x3f) {
                lVar18 = 0;
                lVar27 = 0;
                goto LAB_007b3307;
              }
              iVar43 = 0;
              for (; (uVar51 & 1) == 0; uVar51 = uVar51 >> 1 | 0x8000000000000000) {
                iVar43 = iVar43 + 1;
              }
              if (0x3f - iVar29 <= iVar43) {
                lVar31 = 0;
                lVar27 = local_70;
                goto LAB_007b38fc;
              }
              *(undefined8 *)(puVar35 + lVar46 + -8) = 0x7b3e85;
              uVar51 = __mpn_lshift(local_98,local_78,local_70,iVar29 + 1);
              local_90 = local_70 + 1;
              local_98[local_70] = uVar51;
              uVar39 = local_a0[0];
            }
          }
          else {
            uVar39 = local_a0[0];
            if (iVar43 <= (int)(local_a0[0] + 2)) goto LAB_007b3298;
          }
        }
LAB_007b3219:
        bVar16 = bVar16 - 1;
        param_1 = (_IO_FILE *)local_e8._0_8_;
        if (plVar50 == &DAT_0081b3b8) {
          if (0 < (int)uVar39) {
            *(undefined8 *)(puVar35 + lVar46 + -8) = 0x7b37ce;
            __mpn_mul_1(local_78,local_98,local_90,10);
            local_70 = local_90;
            iVar29 = 0;
            for (uVar51 = *local_78; (uVar51 & 1) == 0; uVar51 = uVar51 >> 1 | 0x8000000000000000) {
              iVar29 = iVar29 + 1;
            }
            uVar39 = 4;
            if ((int)local_a0[0] < 5) {
              uVar39 = local_a0[0];
            }
            if (iVar29 < (int)uVar39) {
              *(undefined8 *)(puVar35 + lVar46 + -8) = 0x7b3819;
              uVar51 = __mpn_lshift(local_98,local_78,local_90,0x40 - uVar39);
              if (uVar51 != 0) {
                local_98[local_70] = uVar51;
                local_70 = local_70 + 1;
              }
            }
            else {
              *(undefined8 *)(puVar35 + lVar46 + -8) = 0x7b3d89;
              __mpn_rshift(local_98,local_78,local_90);
            }
            local_d8._0_4_ = local_d8._0_4_ | 1;
            local_90 = local_70;
          }
          break;
        }
        plVar30 = plVar50;
      } while (0 < (int)uVar39);
      local_a0[0] = local_d8._0_4_;
      lVar27 = local_90;
    }
    else {
      *(undefined8 *)(puVar35 + lVar46 + -8) = 0x7b2e61;
      uVar51 = __mpn_lshift(local_98,local_68,lVar18,local_a0[0] + iVar29);
      local_98[local_90] = uVar51;
      local_a0[0] = 0;
      lVar27 = local_90 + 1;
    }
    goto LAB_007b1fe8;
  }
  lVar18 = param_2[1];
  local_110 = *(char **)(lVar18 + 0x40);
  local_c8 = *(wchar_t *)(lVar18 + 0x58);
  if (-1 < (char)bVar3) goto LAB_007b1672;
  pbVar47 = *(byte **)(lVar18 + 0x50);
LAB_007b185e:
  local_d8[0] = *pbVar47;
  if (0x7d < (byte)(*pbVar47 - 1)) goto LAB_007b1672;
  param_5 = (ulong)local_c4;
  if ((bVar16 >> 2 & 1) == 0) {
    if ((bVar16 & 1) == 0) {
      local_118 = *(char **)(param_2[1] + 0x48);
    }
    else {
      local_118 = *(char **)(param_2[4] + 0x58);
    }
    local_11c = -(uint)(*local_118 != '\0') & 0xfffffffe;
    local_f0 = (byte *)0x0;
    if (*local_118 != '\0') {
      local_f0 = pbVar47;
    }
    goto LAB_007b1692;
  }
  if ((bVar16 & 1) == 0) {
    local_11c = *(wchar_t *)(param_2[1] + 0x60);
  }
  else {
    local_11c = *(wchar_t *)(param_2[4] + 0x1a0);
  }
  pauVar26 = (undefined1 (*) [16])*param_4;
  local_118 = (char *)0x0;
  local_f0 = (byte *)0x0;
  if (local_11c != L'\0') {
    local_f0 = pbVar47;
  }
  if ((bVar16 & 0x10) == 0) goto LAB_007b18d8;
LAB_007b169d:
  local_d8 = *pauVar26;
  local_e8[0] = bVar3;
  lVar18 = __unordtf2(*(undefined8 *)*pauVar26,*(undefined8 *)*pauVar26);
  uVar51 = (ulong)local_e8[0];
  if (lVar18 == 0) {
    local_f8 = (byte *)CONCAT71(local_f8._1_7_,local_e8[0]);
    local_e8 = local_d8 & _DAT_00837ff0;
    lVar18 = __unordtf2(SUB168(local_d8 & _DAT_00837ff0,0),_DAT_00834c10);
    if (lVar18 == 0) {
      lVar18 = __lttf2(local_e8._0_8_,_DAT_00834c10);
      if (0 < lVar18) {
        local_ac = movmskps(unaff_R13D,local_d8);
        pbVar47 = &DAT_0080280d;
        uVar51 = (ulong)local_f8 & 0xff;
        local_ac = local_ac & 8;
        piVar25 = (int *)&DAT_00837fa4;
        if ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)(int)local_c0[2] * 2) & 1) == 0)
        {
          piVar25 = &DAT_00837fc4;
          pbVar47 = &DAT_0081ad24;
        }
        goto LAB_007b178c;
      }
    }
    lVar18 = __mpn_extract_float128(local_d8._0_8_,local_68,2,local_a0,&local_ac);
    iVar29 = (int)lVar18 * 0x40 + -0x70;
    goto LAB_007b1c7d;
  }
  local_ac = movmskps(unaff_R13D,local_d8);
  local_ac = local_ac & 8;
LAB_007b2553:
  pbVar47 = &DAT_00837f90;
  piVar25 = (int *)&DAT_00837f94;
  if ((*(byte *)(*(long *)(in_FS_OFFSET + -0x40) + 1 + (long)(int)local_c0[2] * 2) & 1) == 0) {
    piVar25 = (int *)&DAT_00837fb4;
    pbVar47 = &DAT_0081ad28;
  }
LAB_007b178c:
  uVar39 = local_c0[1];
  uVar45 = (uint)uVar51;
  bVar16 = ((byte)(uVar51 >> 5) ^ 1) & 1;
  if (local_ac != 0) {
    iVar29 = uVar39 - 4;
    bVar53 = 0 < iVar29;
    if ((0 < iVar29) && (iVar43 = iVar29, bVar16 != 0)) goto LAB_007b19b0;
    iVar43 = 0;
LAB_007b17c0:
    if (local_c4 == 0) {
      pcVar7 = param_1->_IO_write_ptr;
      if (param_1->_IO_write_end <= pcVar7) {
        local_d8._0_8_ = piVar25;
        iVar44 = 0x2d;
LAB_007b3cb2:
        iVar44 = __overflow(param_1,iVar44);
        piVar25 = (int *)local_d8._0_8_;
        goto LAB_007b393e;
      }
      param_1->_IO_write_ptr = pcVar7 + 1;
      *pcVar7 = '-';
    }
    else {
      pvVar24 = param_1->__pad2;
      if ((pvVar24 == (void *)0x0) ||
         (puVar5 = *(undefined4 **)((long)pvVar24 + 0x20),
         *(undefined4 **)((long)pvVar24 + 0x28) <= puVar5)) {
        local_d8._0_8_ = piVar25;
        uVar40 = 0x2d;
LAB_007b3929:
        iVar44 = __woverflow(param_1,uVar40);
        piVar25 = (int *)local_d8._0_8_;
LAB_007b393e:
        if (iVar44 == -1) {
          iVar43 = -1;
          goto LAB_007b1b88;
        }
      }
      else {
        *(undefined4 **)((long)pvVar24 + 0x20) = puVar5 + 1;
        *puVar5 = 0x2d;
      }
    }
    goto LAB_007b1ab4;
  }
  if ((uVar51 & 0x50) == 0) {
    iVar29 = uVar39 - 3;
  }
  else {
    iVar29 = uVar39 - 4;
  }
  bVar53 = 0 < iVar29;
  if ((iVar29 < 1) || (iVar43 = iVar29, bVar16 == 0)) {
    iVar43 = 0;
    iVar44 = 0;
    if ((uVar51 & 0x40) != 0) {
LAB_007b1a79:
      if (local_c4 == 0) {
        pcVar7 = param_1->_IO_write_ptr;
        if (param_1->_IO_write_end <= pcVar7) {
          local_d8._0_8_ = piVar25;
          iVar44 = 0x2b;
          goto LAB_007b3cb2;
        }
        param_1->_IO_write_ptr = pcVar7 + 1;
        *pcVar7 = '+';
      }
      else {
        pvVar24 = param_1->__pad2;
        if ((pvVar24 == (void *)0x0) ||
           (puVar5 = *(undefined4 **)((long)pvVar24 + 0x20),
           *(undefined4 **)((long)pvVar24 + 0x28) <= puVar5)) {
          local_d8._0_8_ = piVar25;
          uVar40 = 0x2b;
          goto LAB_007b3929;
        }
        *(undefined4 **)((long)pvVar24 + 0x20) = puVar5 + 1;
        *puVar5 = 0x2b;
      }
      goto LAB_007b1ab4;
    }
LAB_007b1a0f:
    if ((uVar45 & 0x10) != 0) {
      iVar43 = iVar44;
      if (local_c4 == 0) {
        pcVar7 = param_1->_IO_write_ptr;
        if (param_1->_IO_write_end <= pcVar7) {
          local_d8._0_8_ = piVar25;
          iVar44 = __overflow(param_1,0x20);
          piVar25 = (int *)local_d8._0_8_;
          goto joined_r0x007b40d4;
        }
        param_1->_IO_write_ptr = pcVar7 + 1;
        *pcVar7 = ' ';
      }
      else {
        pvVar24 = param_1->__pad2;
        if ((pvVar24 == (void *)0x0) ||
           (puVar5 = *(undefined4 **)((long)pvVar24 + 0x20),
           *(undefined4 **)((long)pvVar24 + 0x28) <= puVar5)) {
          local_d8._0_8_ = piVar25;
          iVar44 = __woverflow(param_1,0x20);
          piVar25 = (int *)local_d8._0_8_;
joined_r0x007b40d4:
          puVar38 = auStack_158;
          if (iVar44 == -1) goto LAB_007b23a2;
        }
        else {
          *(undefined4 **)((long)pvVar24 + 0x20) = puVar5 + 1;
          *puVar5 = 0x20;
        }
      }
LAB_007b1ab4:
      iVar44 = iVar43 + 1;
    }
    if (local_c4 == 0) {
      bVar16 = *pbVar47;
      pbVar21 = (byte *)param_1->_IO_write_ptr;
      if (pbVar21 < param_1->_IO_write_end) {
        param_1->_IO_write_ptr = (char *)(pbVar21 + 1);
        *pbVar21 = bVar16;
      }
      else {
        iVar43 = __overflow(param_1,(uint)bVar16);
        puVar38 = auStack_158;
        if (iVar43 == -1) goto LAB_007b23a2;
      }
      bVar16 = pbVar47[1];
      pbVar21 = (byte *)param_1->_IO_write_ptr;
      if (pbVar21 < param_1->_IO_write_end) {
        param_1->_IO_write_ptr = (char *)(pbVar21 + 1);
        *pbVar21 = bVar16;
      }
      else {
        iVar43 = __overflow(param_1,(uint)bVar16);
        puVar38 = auStack_158;
        if (iVar43 == -1) goto LAB_007b23a2;
      }
      bVar16 = pbVar47[2];
      pbVar47 = (byte *)param_1->_IO_write_ptr;
      if (pbVar47 < param_1->_IO_write_end) {
        param_1->_IO_write_ptr = (char *)(pbVar47 + 1);
        *pbVar47 = bVar16;
      }
      else {
        iVar43 = __overflow(param_1,(uint)bVar16);
        puVar38 = auStack_158;
        if (iVar43 == -1) goto LAB_007b23a2;
      }
      iVar43 = iVar44 + 3;
      puVar32 = auStack_158;
      if (((local_c0[3] & 0x20) == 0) || (puVar32 = auStack_158, !bVar53)) goto LAB_007b1b88;
      lVar18 = _IO_padn(param_1,0x20,(long)iVar29);
LAB_007b1b7c:
      puVar38 = auStack_158;
      if (lVar18 == iVar29) {
        iVar43 = iVar44 + 3 + iVar29;
        puVar32 = auStack_158;
        goto LAB_007b1b88;
      }
    }
    else {
      pvVar24 = param_1->__pad2;
      iVar43 = *piVar25;
      if ((pvVar24 == (void *)0x0) ||
         (piVar6 = *(int **)((long)pvVar24 + 0x20), *(int **)((long)pvVar24 + 0x28) <= piVar6)) {
        local_d8._0_8_ = piVar25;
        iVar43 = __woverflow(param_1);
        puVar38 = auStack_158;
        if (iVar43 != -1) {
          pvVar24 = param_1->__pad2;
          iVar43 = *(int *)(local_d8._0_8_ + 4);
          piVar25 = (int *)(local_d8._0_8_ + 8);
          if (pvVar24 != (void *)0x0) goto LAB_007b1b05;
LAB_007b24dc:
          iVar43 = __woverflow(param_1);
          puVar38 = auStack_158;
          if (iVar43 != -1) {
            pvVar24 = param_1->__pad2;
            iVar43 = *piVar25;
            if (pvVar24 != (void *)0x0) goto LAB_007b1b2d;
LAB_007b2505:
            iVar43 = __woverflow(param_1);
LAB_007b1b4b:
            puVar38 = auStack_158;
            if (iVar43 != -1) {
              iVar43 = iVar44 + 3;
              puVar32 = auStack_158;
              if (((local_c0[3] & 0x20) == 0) || (puVar32 = auStack_158, !bVar53))
              goto LAB_007b1b88;
              lVar18 = _IO_wpadn(param_1,0x20,(long)iVar29);
              goto LAB_007b1b7c;
            }
          }
        }
      }
      else {
        *(int **)((long)pvVar24 + 0x20) = piVar6 + 1;
        *piVar6 = iVar43;
        puVar38 = auStack_158;
        if (iVar43 != -1) {
          iVar43 = piVar25[1];
          piVar25 = piVar25 + 2;
LAB_007b1b05:
          piVar6 = *(int **)((long)pvVar24 + 0x20);
          if (*(int **)((long)pvVar24 + 0x28) <= piVar6) goto LAB_007b24dc;
          *(int **)((long)pvVar24 + 0x20) = piVar6 + 1;
          *piVar6 = iVar43;
          puVar38 = auStack_158;
          if (iVar43 != -1) {
            iVar43 = *piVar25;
LAB_007b1b2d:
            piVar25 = *(int **)((long)pvVar24 + 0x20);
            if (*(int **)((long)pvVar24 + 0x28) <= piVar25) goto LAB_007b2505;
            *(int **)((long)pvVar24 + 0x20) = piVar25 + 1;
            *piVar25 = iVar43;
            goto LAB_007b1b4b;
          }
        }
      }
    }
  }
  else {
LAB_007b19b0:
    local_d8._0_8_ = piVar25;
    if (local_c4 == 0) {
      lVar18 = _IO_padn(param_1,0x20,(long)iVar43);
    }
    else {
      lVar18 = _IO_wpadn();
    }
    puVar38 = auStack_158;
    if (lVar18 == iVar43) {
      bVar53 = true;
      piVar25 = (int *)local_d8._0_8_;
      iVar29 = iVar43;
      if (local_ac != 0) goto LAB_007b17c0;
      uVar45 = (uint)(byte)local_c0[3];
      iVar44 = iVar43;
      if (((byte)local_c0[3] & 0x40) != 0) goto LAB_007b1a79;
      goto LAB_007b1a0f;
    }
  }
  goto LAB_007b23a2;
LAB_007b1f63:
  param_1 = (_IO_FILE *)local_d8._0_8_;
  local_a0[0] = uVar45;
  lVar27 = local_90;
  if (0 < lVar18) {
    lVar31 = 0x3f;
    if (local_88[lVar18 + -1] != 0) {
      for (; local_88[lVar18 + -1] >> lVar31 == 0; lVar31 = lVar31 + -1) {
      }
    }
    uVar51 = *local_88;
    uVar39 = (uint)lVar31 ^ 0x3f;
    puVar23 = local_88;
    if (uVar51 == 0) {
      lVar49 = 0;
      lVar31 = 0;
LAB_007b1fc5:
      uVar51 = *(ulong *)((long)local_98 + lVar49);
      iVar29 = (int)lVar31;
      if (uVar51 == 0) goto LAB_007b1fa8;
      if (uVar39 != 0) {
        iVar43 = 0;
        for (; (uVar51 & 1) == 0; uVar51 = uVar51 >> 1 | 0x8000000000000000) {
          iVar43 = iVar43 + 1;
        }
        iVar44 = 0x40 - uVar39;
        if (iVar29 != 0) goto LAB_007b372e;
        goto LAB_007b3bee;
      }
      if (iVar29 != 0) goto LAB_007b3b61;
      goto LAB_007b1fe8;
    }
    if (uVar39 != 0) {
      iVar43 = 0;
      for (; (uVar51 & 1) == 0; uVar51 = uVar51 >> 1 | 0x8000000000000000) {
        iVar43 = iVar43 + 1;
      }
      uVar51 = *local_98;
      if (uVar51 == 0) {
        iVar44 = 0x40 - uVar39;
        lVar49 = 0;
      }
      else {
        iVar29 = 0;
        for (; (uVar51 & 1) == 0; uVar51 = uVar51 >> 1 | 0x8000000000000000) {
          iVar29 = iVar29 + 1;
        }
        if (iVar43 <= iVar29) {
          iVar29 = iVar43;
        }
        iVar44 = 0x40 - uVar39;
        lVar49 = 0;
        iVar43 = iVar29;
      }
LAB_007b3bee:
      iVar29 = 0;
      lVar31 = 0;
      if (iVar44 <= iVar43) goto LAB_007b3bfc;
      local_d8._0_4_ = uVar39;
      *(undefined8 *)(puVar35 + lVar46 + -8) = 0x7b3efe;
      __mpn_lshift(local_88,local_88);
      *(undefined8 *)(puVar35 + lVar46 + -8) = 0x7b3f1a;
      uVar51 = __mpn_lshift(local_98,local_98,local_90,local_d8._0_4_);
      lVar27 = local_90;
      if (uVar51 != 0) {
        local_98[local_90] = uVar51;
        lVar27 = local_90 + 1;
      }
    }
  }
  goto LAB_007b1fe8;
LAB_007b1fa8:
  uVar51 = puVar23[1];
  iVar29 = iVar29 + 1;
  puVar23 = puVar23 + 1;
  lVar31 = lVar31 + 1;
  lVar49 = lVar49 + 8;
  if (uVar51 != 0) goto LAB_007b36f7;
  goto LAB_007b1fc5;
LAB_007b36f7:
  if (uVar39 == 0) {
LAB_007b3b61:
    lVar49 = (long)iVar29;
    lVar18 = lVar18 - lVar49;
    if (0 < lVar18) {
      lVar27 = 0;
      do {
        local_88[lVar27] = local_88[lVar31 + lVar27];
        lVar27 = lVar27 + 1;
        lVar18 = local_80 - lVar49;
      } while (lVar27 < lVar18);
    }
    lVar27 = local_90 - lVar49;
    local_80 = lVar18;
    if (0 < local_90 - lVar49) {
      lVar18 = 0;
      do {
        local_98[lVar18] = local_98[lVar31 + lVar18];
        lVar18 = lVar18 + 1;
        lVar27 = local_90 - lVar49;
      } while (lVar18 < local_90 - lVar49);
    }
  }
  else {
    uVar28 = *(ulong *)((long)local_98 + lVar49);
    iVar43 = 0;
    for (; (uVar51 & 1) == 0; uVar51 = uVar51 >> 1 | 0x8000000000000000) {
      iVar43 = iVar43 + 1;
    }
    if (uVar28 == 0) {
      iVar44 = 0x40 - uVar39;
    }
    else {
      iVar8 = 0;
      for (; (uVar28 & 1) == 0; uVar28 = uVar28 >> 1 | 0x8000000000000000) {
        iVar8 = iVar8 + 1;
      }
      if (iVar43 <= iVar8) {
        iVar8 = iVar43;
      }
      iVar44 = 0x40 - uVar39;
      iVar43 = iVar8;
    }
LAB_007b372e:
    lVar31 = (long)iVar29;
    if (iVar43 < iVar44) {
      lVar48 = (long)(iVar29 + -1);
      *(undefined8 *)(puVar35 + lVar46 + -8) = 0x7b3754;
      __mpn_rshift(local_88,(long)local_88 + lVar49 + -8,lVar18 - lVar48,iVar44);
      local_80 = local_80 - lVar31;
      *(undefined8 *)(puVar35 + lVar46 + -8) = 0x7b3775;
      __mpn_rshift(local_98,(long)local_98 + lVar49 + -8,local_90 - lVar48,iVar44);
      lVar27 = local_90 - lVar48;
      if (local_98[(local_90 - lVar48) + -1] == 0) {
        lVar27 = local_90 - lVar31;
      }
    }
    else {
LAB_007b3bfc:
      *(undefined8 *)(puVar35 + lVar46 + -8) = 0x7b3c0b;
      __mpn_rshift(local_88,puVar23,lVar18 - lVar31,iVar44);
      local_80 = local_80 - (iVar29 + 1);
      *(undefined8 *)(puVar35 + lVar46 + -8) = 0x7b3c2f;
      __mpn_rshift(local_98,(long)local_98 + lVar49,local_90 - lVar31,iVar44);
      lVar27 = local_90 - lVar31;
      if (local_98[(local_90 - lVar31) + -1] == 0) {
        lVar27 = local_90 - (iVar29 + 1);
      }
    }
  }
LAB_007b1fe8:
  local_90 = lVar27;
  local_140 = local_c0[1];
  local_a4 = local_c0[2];
  uVar39 = *local_c0;
  uVar51 = *(ulong *)(in_FS_OFFSET + -0x50);
  local_f8 = (byte *)CONCAT44(local_f8._4_4_,uVar39);
  local_144 = *(undefined4 *)(uVar51 + (long)(int)local_a4 * 4);
  if ((char)local_144 == 'e') {
    if ((int)uVar39 < 0) {
      local_128 = 0xe;
      local_f8 = (byte *)CONCAT44(local_f8._4_4_,6);
    }
    else {
      local_128 = (long)(int)uVar39 + 8;
    }
LAB_007b2f74:
    uVar42 = 1;
    local_130 = 0x7fffffff;
    local_120 = 1;
    local_e8._0_4_ = (uint)local_f8;
LAB_007b20ba:
    if (local_f0 != (byte *)0x0) {
LAB_007b20c8:
      local_d8[0] = *local_f0;
      if ((byte)(*local_f0 - 1) < 0x7e) {
        uVar51 = (ulong)local_120;
        pbVar47 = local_f0;
        iVar29 = 0;
        do {
          uVar39 = (uint)(char)*pbVar47;
          if ((uint)uVar51 <= uVar39) {
            lVar18 = (long)(iVar29 + 1);
            local_12c = iVar29;
            goto LAB_007b2133;
          }
          pbVar21 = pbVar47 + 1;
          pbVar47 = pbVar47 + 1;
          local_12c = iVar29 + 1;
          uVar45 = (uint)uVar51 - uVar39;
          uVar51 = (ulong)uVar45;
          if (0x7e < *pbVar21) {
            lVar18 = (long)(iVar29 + 2);
            goto LAB_007b2133;
          }
          iVar29 = local_12c;
        } while (*pbVar21 != 0);
        uVar45 = uVar45 - 1;
        uVar51 = (ulong)uVar45 % (ulong)uVar39;
        local_12c = uVar45 / uVar39 + local_12c;
        lVar18 = (long)(local_12c + 1);
      }
      else {
        local_12c = 0;
        lVar18 = 1;
      }
LAB_007b2133:
      local_128 = local_128 + lVar18;
      goto LAB_007b213a;
    }
    local_12c = 0;
LAB_007b2151:
    local_d8._0_4_ = uVar42;
    if ((ulong)(long)(int)local_e8._0_4_ <= local_128) {
      lVar18 = local_128 * 4;
      uVar28 = lVar18 + 8;
      *(undefined8 *)(puVar35 + lVar46 + -8) = 0x7b217e;
      iVar29 = __libc_alloca_cutoff(uVar28,uVar42,uVar51);
      if ((iVar29 == 0) && (0x1000 < uVar28)) {
        *(undefined8 *)(puVar35 + lVar46 + -8) = 0x7b3b1c;
        local_138 = (wchar_t *)malloc(uVar28);
        puVar38 = puVar35 + lVar46;
        if (local_138 != (wchar_t *)0x0) {
          local_154 = 0;
          local_148 = 1;
          puVar32 = puVar35 + lVar46;
          goto LAB_007b21fe;
        }
      }
      else {
        uVar51 = lVar18 + 0x1f;
        puVar32 = puVar35 + lVar46;
        while (puVar37 != puVar35 + (lVar46 - (uVar51 & 0xfffffffffffff000))) {
          puVar38 = puVar32 + -0x1000;
          *(undefined8 *)(puVar32 + -8) = *(undefined8 *)(puVar32 + -8);
          puVar37 = puVar32 + -0x1000;
          puVar32 = puVar32 + -0x1000;
        }
        uVar51 = (ulong)((uint)uVar51 & 0xff0);
        lVar18 = -uVar51;
        if (uVar51 != 0) {
          *(undefined8 *)(puVar38 + -8) = *(undefined8 *)(puVar38 + -8);
        }
        local_154 = 1;
        local_148 = 0;
        local_138 = (wchar_t *)((ulong)(puVar38 + lVar18 + 0xf) & 0xfffffffffffffff0);
        puVar32 = puVar38 + lVar18;
LAB_007b21fe:
        __s1 = local_138 + 2;
        if ((local_a8 == 0) || (local_a4 != 0x66)) {
          if ((int)local_120 < 1) {
            local_13c = 0;
            pwVar19 = __s1;
          }
          else {
            pwVar19 = local_138 + (ulong)(local_120 - 1) + 3;
            pwVar52 = __s1;
            do {
              pwVar20 = pwVar52 + 1;
              *(undefined8 *)(puVar32 + -8) = 0x7b2254;
              wVar17 = hack_digit(&local_a8);
              *pwVar52 = wVar17;
              pwVar52 = pwVar20;
            } while (pwVar20 != pwVar19);
            local_13c = local_120;
            pwVar19 = __s1 + local_120;
          }
          if (((local_c0[3] & 8) != 0) || (0 < (int)(uint)local_f8)) {
LAB_007b228b:
            *pwVar19 = local_c8;
            pwVar19 = pwVar19 + 1;
            iVar29 = 1;
            goto LAB_007b229c;
          }
          if (0 < (int)local_e8._0_4_) {
            if ((local_90 < 2) && (*local_98 == 0)) {
              iVar29 = 1;
              goto LAB_007b229c;
            }
            goto LAB_007b228b;
          }
          local_108 = (_IO_FILE *)((ulong)local_108._4_4_ << 0x20);
          uVar39 = 0;
          iVar43 = (uint)local_f8;
        }
        else {
          pwVar19 = local_138 + 4;
          local_a0[0] = local_a0[0] - 1;
          local_138[2] = L'0';
          local_138[3] = local_c8;
          local_13c = 0;
          iVar29 = local_d8._0_4_;
LAB_007b229c:
          local_108 = (_IO_FILE *)((ulong)local_108._4_4_ << 0x20);
          uVar39 = 0;
          local_d8._0_4_ = (uint)local_f8;
          local_150 = param_1;
LAB_007b22c3:
          pwVar52 = pwVar19;
          iVar43 = local_d8._0_4_;
          if ((int)uVar39 < (int)local_d8._0_4_) goto LAB_007b22ec;
          while ((param_1 = local_150, (int)uVar39 < (int)local_e8._0_4_ &&
                 ((pwVar52 = pwVar19, 1 < local_90 || (*local_98 != 0))))) {
LAB_007b22ec:
            do {
              uVar39 = uVar39 + 1;
              pwVar19 = pwVar52 + 1;
              *(undefined8 *)(puVar32 + -8) = 0x7b22fc;
              wVar17 = hack_digit(&local_a8);
              *pwVar52 = wVar17;
              if ((iVar29 == 0) && (wVar17 == L'0')) {
                local_e8._0_4_ = local_e8._0_4_ + 1;
                if (0 < (int)(uint)local_f8) {
                  iVar43 = (int)local_108 + 1;
                  local_108 = (_IO_FILE *)CONCAT44(local_108._4_4_,iVar43);
                  local_d8._0_4_ = (uint)local_f8 + iVar43;
                }
                goto LAB_007b22c3;
              }
              iVar29 = 1;
              pwVar52 = pwVar19;
              iVar43 = local_d8._0_4_;
            } while ((int)uVar39 < (int)local_d8._0_4_);
          }
        }
        wVar17 = pwVar19[-1];
        if (wVar17 == local_c8) {
          wVar17 = pwVar19[-2];
        }
        local_e8._0_4_ = wVar17;
        local_d8._0_4_ = iVar43;
        *(undefined8 *)(puVar32 + -8) = 0x7b266b;
        iVar29 = hack_digit(&local_a8);
        bVar53 = iVar29 != 0x30 && iVar29 != 0x35;
        if (iVar29 == 0x30 || iVar29 == 0x35) {
          if (local_90 == 1) {
            if (*local_98 != 0) {
              lVar18 = 1;
              if (local_80 == 0) goto LAB_007b26be;
              goto LAB_007b26c6;
            }
          }
          else {
            lVar18 = local_90;
            if (local_80 == 0) {
              for (; lVar18 != 0; lVar18 = lVar18 + -1) {
LAB_007b26be:
                if (local_98[lVar18 + -1] != 0) goto LAB_007b26c6;
              }
            }
            else {
LAB_007b26c6:
              bVar53 = true;
            }
          }
        }
        in_FPUControlWord = in_FPUControlWord & 0xc00;
        iVar43 = local_d8._0_4_;
        if (in_FPUControlWord == 0x800) {
          if (local_ac != 0) goto LAB_007b2710;
LAB_007b2d3a:
          if (iVar29 < 0x35) {
LAB_007b2703:
            if (!bVar53) goto LAB_007b2710;
          }
LAB_007b2d43:
          wVar17 = pwVar19[-1];
          pwVar52 = pwVar19;
          if (uVar39 == 0) {
LAB_007b2fa1:
            if (pwVar52[-1] == local_c8) {
              pwVar52 = pwVar52 + -1;
            }
            while (pwVar52 = pwVar52 + -1, __s1 <= pwVar52) {
              if (*pwVar52 != L'9') {
                if (__s1 <= pwVar52) {
                  *pwVar52 = *pwVar52 + L'\x01';
                  goto LAB_007b2710;
                }
                break;
              }
              *pwVar52 = L'0';
            }
            if (local_a4 == 0x66) {
              if (local_13c == local_130) {
                *local_138 = L'1';
                local_138[1] = local_c8;
                if (((local_c0[3] & 8) != 0) || (uVar45 = local_130, uVar39 != 0)) {
                  local_138[(long)(int)local_13c + 2] = L'0';
                  uVar45 = uVar39 + 1 + local_13c;
                }
                local_a0[0] = local_a0[0] + 1;
                local_13c = 1;
                local_a4 = (-(uint)((*(ushort *)
                                      (*(long *)(in_FS_OFFSET + -0x40) + (long)(int)local_c0[2] * 2)
                                    & 0x100) == 0) & 0x20) + 0x45;
                __s1 = local_138;
                uVar39 = uVar45;
              }
              else {
                local_13c = local_13c + 1;
                local_138[1] = L'1';
                __s1 = local_138 + 1;
              }
            }
            else {
              local_138[2] = L'1';
              local_a0[0] = local_a0[0] + ((-(uint)(local_a8 == 0) & 2) - 1);
              if (local_a0[0] == 0) {
                local_a8 = 0;
              }
            }
            if ((int)local_130 < (int)(local_13c + uVar39)) {
              iVar29 = (local_13c + uVar39) - local_130;
              uVar39 = uVar39 - iVar29;
              pwVar19 = pwVar19 + -(long)iVar29;
            }
            goto LAB_007b2710;
          }
          iVar29 = 0;
          while (pwVar52 = pwVar52 + -1, local_c8 != wVar17) {
            if (wVar17 != L'9') {
              if ((iVar29 != (uint)local_f8) || ((int)local_108 < 1)) goto LAB_007b2dc3;
              goto LAB_007b2da1;
            }
            *pwVar52 = L'0';
            iVar29 = iVar29 + 1;
            wVar17 = pwVar52[-1];
          }
          if ((iVar29 == (uint)local_f8) && (0 < (int)local_108)) {
LAB_007b2da1:
            iVar29 = (int)local_108 + -1;
            local_108 = (_IO_FILE *)CONCAT44(local_108._4_4_,iVar29);
            if (wVar17 == local_c8) goto LAB_007b3971;
            iVar43 = iVar29 + (uint)local_f8;
LAB_007b2dc3:
            wVar17 = wVar17 + L'\x01';
            *pwVar52 = wVar17;
          }
          else {
LAB_007b3971:
            iVar43 = (uint)local_f8 + (int)local_108;
            wVar17 = *pwVar52;
            if (((((char)local_144 == 'g') && (local_a4 == 0x66)) && ((local_c0[3] & 8) != 0)) &&
               ((pwVar52 == local_138 + 3 && (local_138[2] == L'0')))) {
              iVar43 = (int)local_108 + -1 + (uint)local_f8;
            }
          }
          if (local_c8 == wVar17) goto LAB_007b2fa1;
          if (iVar43 < (int)uVar39) goto LAB_007b272c;
        }
        else {
          if (in_FPUControlWord < 0x801) {
            if (in_FPUControlWord == 0) {
              if (0x34 < iVar29) {
                if ((local_e8 & (undefined1  [16])0x1) == (undefined1  [16])0x0) goto LAB_007b2703;
                goto LAB_007b2d43;
              }
            }
            else {
              if (in_FPUControlWord != 0x400) {
                    /* WARNING: Subroutine does not return */
                __printf_fp_l_cold();
              }
              if (local_ac != 0) goto LAB_007b2d3a;
            }
          }
          else if (in_FPUControlWord != 0xc00) {
                    /* WARNING: Subroutine does not return */
            __printf_fp_l_cold();
          }
LAB_007b2710:
          if (iVar43 < (int)uVar39) {
LAB_007b272c:
            do {
              if (pwVar19[-1] != L'0') break;
              uVar39 = uVar39 - 1;
              pwVar19 = pwVar19 + -1;
            } while (iVar43 < (int)uVar39);
          }
          if (((uVar39 == 0) && ((local_c0[3] & 8) == 0)) && (pwVar19[-1] == local_c8)) {
            pwVar19 = pwVar19 + -1;
          }
        }
        uVar39 = local_13c;
        if (local_f0 != (byte *)0x0) {
          if (local_13c != local_120) {
            local_12c = 0;
            local_d8[0] = *local_f0;
            if (0x7d < (byte)(*local_f0 - 1)) goto LAB_007b28ba;
            local_12c = 0;
            pbVar47 = local_f0;
            uVar45 = local_13c;
            do {
              uVar41 = (uint)(char)*pbVar47;
              if (uVar45 <= uVar41) goto LAB_007b27c7;
              pbVar21 = pbVar47 + 1;
              pbVar47 = pbVar47 + 1;
              local_12c = local_12c + 1;
              uVar45 = uVar45 - uVar41;
              if (0x7e < *pbVar21) goto LAB_007b27c7;
            } while (*pbVar21 != 0);
            local_12c = (uVar45 - 1) / uVar41 + local_12c;
          }
LAB_007b27c7:
          if (local_12c != 0) {
            lVar46 = (long)local_12c;
            lVar18 = (int)local_13c + lVar46;
            local_d8._0_8_ = lVar18 * 4;
            *(undefined8 *)(puVar32 + -8) = 0x7b2808;
            wmemmove(__s1 + lVar18,__s1 + (int)local_13c,
                     (long)pwVar19 - (long)(__s1 + (int)local_13c) >> 2);
            pwVar52 = (wchar_t *)((long)__s1 + local_d8._0_8_ + -4);
            uVar45 = (uint)(char)*local_f0;
            pbVar47 = local_f0;
            do {
              uVar28 = (ulong)uVar39;
              uVar39 = uVar39 - uVar45;
              uVar51 = (ulong)uVar39;
              pwVar20 = pwVar52;
              do {
                uVar41 = (int)uVar28 - 1;
                uVar28 = (ulong)uVar41;
                *pwVar20 = __s1[uVar28];
                pwVar20 = pwVar20 + -1;
              } while (uVar41 != uVar39);
              pwVar20 = pwVar52 + (-1 - (ulong)(uVar45 - 1));
              pwVar52 = pwVar52 + (-2 - (ulong)(uVar45 - 1));
              *pwVar20 = local_11c;
              bVar16 = pbVar47[1];
              if (0x7e < bVar16) break;
              if (bVar16 == 0) {
                bVar16 = *pbVar47;
              }
              else {
                pbVar47 = pbVar47 + 1;
              }
              uVar45 = (uint)(char)bVar16;
            } while (uVar45 < uVar39);
            do {
              uVar51 = (ulong)((int)uVar51 - 1);
              pwVar20 = pwVar52 + -1;
              *pwVar52 = __s1[uVar51];
              pwVar52 = pwVar20;
            } while (__s1 < pwVar20);
            pwVar19 = pwVar19 + lVar46;
          }
        }
LAB_007b28ba:
        pwVar52 = pwVar19;
        if (local_a4 != 0x66) {
          uVar42 = 0x2b;
          if (local_a8 != 0) {
            if (((char)local_144 == 'g') && (local_a0[0] == 4)) {
              *(undefined8 *)(puVar32 + -8) = 0x7b4183;
              wmemcpy(__s1,L"0.0001",6);
              __s1[1] = local_c8;
              if (pwVar19 < __s1 + 2) {
                pwVar52 = pwVar19 + 5;
              }
              else {
                pwVar52 = pwVar19 + 4;
                *(undefined8 *)(puVar32 + -8) = 0x7b41c5;
                FUN_00401270(__s1 + 6,0x30,(long)pwVar19 - (long)(__s1 + 2) >> 2);
              }
              goto LAB_007b2953;
            }
            uVar42 = 0x2d;
          }
          *(ulong *)pwVar19 = CONCAT44(uVar42,local_a4);
          if ((int)local_a0[0] < 10) {
            pwVar19[2] = L'0';
            pwVar19 = pwVar19 + 3;
          }
          else {
            iVar29 = 10;
            do {
              iVar29 = iVar29 * 10;
              pwVar52 = pwVar19 + 2;
            } while (iVar29 <= (int)local_a0[0]);
            do {
              pwVar19 = pwVar52 + 1;
              iVar43 = iVar29 / 10;
              iVar44 = (int)local_a0[0] / iVar43;
              local_a0[0] = (int)local_a0[0] % iVar43;
              *pwVar52 = iVar44 + L'0';
              bVar53 = 0x6d < iVar29;
              pwVar52 = pwVar19;
              iVar29 = iVar43;
            } while (bVar53);
          }
          pwVar52 = pwVar19 + 1;
          *pwVar19 = local_a0[0] + L'0';
        }
LAB_007b2953:
        bVar16 = (byte)local_c0[3];
        pbVar47 = (byte *)((long)pwVar52 - (long)__s1 >> 2);
        iVar29 = (int)pbVar47;
        if ((local_ac == 0) && ((bVar16 & 0x50) == 0)) {
          local_d8._0_4_ = local_140 - iVar29;
          if ((((bVar16 & 0x20) != 0) || (uVar39 = local_c0[4], uVar39 == 0x30)) ||
             ((int)(local_140 - iVar29) < 1)) {
            iVar43 = 0;
            goto LAB_007b301b;
          }
LAB_007b29ba:
          lVar18 = (long)(int)local_d8._0_4_;
          if (local_c4 == 0) {
            *(undefined8 *)(puVar32 + -8) = 0x7b3b50;
            lVar46 = _IO_padn(param_1,uVar39,lVar18);
          }
          else {
            *(undefined8 *)(puVar32 + -8) = 0x7b29da;
            lVar46 = _IO_wpadn();
          }
          if (lVar46 == lVar18) {
            iVar43 = local_d8._0_4_;
            goto LAB_007b29f0;
          }
LAB_007b238c:
          puVar38 = puVar32;
          if (local_154 != 0) goto LAB_007b23a2;
        }
        else {
          local_d8._0_4_ = (local_140 - 1) - iVar29;
          if (((bVar16 & 0x20) == 0) &&
             ((uVar39 = local_c0[4], 0 < (int)local_d8._0_4_ && (uVar39 != 0x30))))
          goto LAB_007b29ba;
          iVar43 = 0;
LAB_007b29f0:
          if (local_ac != 0) {
            if (local_c4 == 0) {
              pcVar7 = param_1->_IO_write_ptr;
              if (pcVar7 < param_1->_IO_write_end) {
                param_1->_IO_write_ptr = pcVar7 + 1;
                *pcVar7 = '-';
                goto LAB_007b2a35;
              }
              local_e8._0_4_ = iVar43;
              iVar43 = 0x2d;
LAB_007b3f86:
              *(undefined8 *)(puVar32 + -8) = 0x7b3f8e;
              iVar44 = __overflow(param_1,iVar43);
            }
            else {
              pvVar24 = param_1->__pad2;
              if ((pvVar24 != (void *)0x0) &&
                 (puVar5 = *(undefined4 **)((long)pvVar24 + 0x20),
                 puVar5 < *(undefined4 **)((long)pvVar24 + 0x28))) {
                *(undefined4 **)((long)pvVar24 + 0x20) = puVar5 + 1;
                *puVar5 = 0x2d;
                goto LAB_007b2a35;
              }
              local_e8._0_4_ = iVar43;
              uVar40 = 0x2d;
LAB_007b236f:
              *(undefined8 *)(puVar32 + -8) = 0x7b2377;
              iVar44 = __woverflow(param_1,uVar40);
            }
            iVar43 = local_e8._0_4_;
            if (iVar44 != -1) goto LAB_007b2a35;
            goto LAB_007b238c;
          }
          bVar16 = (byte)local_c0[3];
LAB_007b301b:
          if ((bVar16 & 0x40) == 0) {
            if ((bVar16 & 0x10) != 0) {
              if (local_c4 == 0) {
                pcVar7 = param_1->_IO_write_ptr;
                if (param_1->_IO_write_end <= pcVar7) {
                  local_e8._0_4_ = iVar43;
                  iVar43 = 0x20;
                  goto LAB_007b3f86;
                }
                param_1->_IO_write_ptr = pcVar7 + 1;
                *pcVar7 = ' ';
              }
              else {
                pvVar24 = param_1->__pad2;
                if ((pvVar24 == (void *)0x0) ||
                   (puVar5 = *(undefined4 **)((long)pvVar24 + 0x20),
                   *(undefined4 **)((long)pvVar24 + 0x28) <= puVar5)) {
                  local_e8._0_4_ = iVar43;
                  uVar40 = 0x20;
                  goto LAB_007b236f;
                }
                *(undefined4 **)((long)pvVar24 + 0x20) = puVar5 + 1;
                *puVar5 = 0x20;
              }
              goto LAB_007b2a35;
            }
          }
          else {
            if (local_c4 == 0) {
              pcVar7 = param_1->_IO_write_ptr;
              if (param_1->_IO_write_end <= pcVar7) {
                local_e8._0_4_ = iVar43;
                iVar43 = 0x2b;
                goto LAB_007b3f86;
              }
              param_1->_IO_write_ptr = pcVar7 + 1;
              *pcVar7 = '+';
            }
            else {
              pvVar24 = param_1->__pad2;
              if ((pvVar24 == (void *)0x0) ||
                 (puVar5 = *(undefined4 **)((long)pvVar24 + 0x20),
                 *(undefined4 **)((long)pvVar24 + 0x28) <= puVar5)) {
                local_e8._0_4_ = iVar43;
                uVar40 = 0x2b;
                goto LAB_007b236f;
              }
              *(undefined4 **)((long)pvVar24 + 0x20) = puVar5 + 1;
              *puVar5 = 0x2b;
            }
LAB_007b2a35:
            iVar43 = iVar43 + 1;
            bVar16 = (byte)local_c0[3];
          }
          if ((((bVar16 & 0x20) == 0) && (local_c0[4] == 0x30)) && (0 < (int)local_d8._0_4_)) {
            lVar18 = (long)(int)local_d8._0_4_;
            local_e8._0_4_ = iVar43;
            if (local_c4 == 0) {
              *(undefined8 *)(puVar32 + -8) = 0x7b3dd2;
              lVar46 = _IO_padn(param_1,0x30,lVar18);
            }
            else {
              *(undefined8 *)(puVar32 + -8) = 0x7b3af2;
              lVar46 = _IO_wpadn();
            }
            if (lVar46 != lVar18) goto LAB_007b238c;
            iVar43 = local_e8._0_4_ + local_d8._0_4_;
          }
          if (local_c4 == 0) {
            if ((*(byte *)((long)local_c0 + 0xd) & 8) != 0) {
              local_128 = *(uint *)(*local_100 + 0xa8) * local_128;
            }
            local_e8._0_4_ = iVar43;
            *(undefined8 *)(puVar32 + -8) = 0x7b2ab0;
            __n = strlen(local_110);
            if (local_118 == (char *)0x0) {
              lVar18 = 0;
              pbVar21 = (byte *)0x0;
              iVar43 = local_e8._0_4_;
            }
            else {
              *(undefined8 *)(puVar32 + -8) = 0x7b2acf;
              pbVar21 = (byte *)strlen(local_118);
              lVar18 = (long)local_12c * (long)pbVar21;
              iVar43 = local_e8._0_4_;
            }
            local_f8 = (byte *)(lVar18 + local_128 + 2 + __n);
            if (local_148 == 0) {
              for (puVar38 = puVar32;
                  puVar38 != puVar32 + -((ulong)(local_f8 + 0x17) & 0xfffffffffffff000);
                  puVar38 = puVar38 + -0x1000) {
                *(undefined8 *)(puVar38 + -8) = *(undefined8 *)(puVar38 + -8);
              }
              uVar51 = (ulong)((uint)(local_f8 + 0x17) & 0xff0);
              lVar18 = -uVar51;
              puVar32 = puVar38 + lVar18;
              if (uVar51 != 0) {
                *(undefined8 *)(puVar38 + -8) = *(undefined8 *)(puVar38 + -8);
              }
              local_e8._0_8_ = (ulong)(puVar38 + lVar18 + 0xf) & 0xfffffffffffffff0;
LAB_007b2b5d:
              wVar15 = local_c8;
              wVar17 = local_11c;
              if (__s1 < pwVar52) {
                local_100 = (long *)CONCAT44(local_100._4_4_,iVar43);
                pbVar47 = (byte *)local_e8._0_8_;
                local_108 = param_1;
                local_f0 = pbVar21;
                do {
                  while (wVar4 = *__s1, wVar4 == wVar15) {
                    __s1 = __s1 + 1;
                    *(undefined8 *)(puVar32 + -8) = 0x7b2bd2;
                    pbVar47 = (byte *)mempcpy(pbVar47,local_110,__n);
                    if (pwVar52 <= __s1) goto LAB_007b2bda;
                  }
                  if (wVar17 == wVar4) {
                    *(undefined8 *)(puVar32 + -8) = 0x7b2e43;
                    pbVar47 = (byte *)mempcpy(pbVar47,local_118,(size_t)local_f0);
                  }
                  else {
                    *pbVar47 = (byte)wVar4;
                    pbVar47 = pbVar47 + 1;
                  }
                  __s1 = __s1 + 1;
                } while (__s1 < pwVar52);
LAB_007b2bda:
                pbVar21 = pbVar47;
                param_1 = local_108;
                iVar43 = (int)local_100;
                if ((*(byte *)((long)local_c0 + 0xd) & 8) != 0) goto LAB_007b3d95;
                __s1 = (wchar_t *)local_e8._0_8_;
                iVar29 = (int)local_100;
              }
              else {
                pbVar21 = (byte *)local_e8._0_8_;
                if ((*(byte *)((long)local_c0 + 0xd) & 8) == 0) goto LAB_007b2c74;
LAB_007b3d95:
                local_f0 = (byte *)CONCAT44(local_f0._4_4_,iVar43);
                pbVar47 = local_f8 + local_e8._0_8_;
                *(undefined8 *)(puVar32 + -8) = 0x7b3dbb;
                __s1 = (wchar_t *)_i18n_number_rewrite(local_e8._0_8_,pbVar21,pbVar47);
                iVar29 = (int)local_f0;
              }
              pbVar47 = pbVar47 + -(long)__s1;
              pwVar19 = __s1;
              iVar43 = iVar29;
              pbVar21 = pbVar47;
              if (0x14 < (long)pbVar47) {
                lVar18 = *(long *)(param_1 + 1);
                if (lVar18 - 0x932180U < 0x828) {
                  pcVar22 = *(code **)(lVar18 + 0x38);
                  local_f0._0_4_ = iVar29;
                }
                else {
                  local_f0 = (byte *)CONCAT44(local_f0._4_4_,iVar29);
                  *(undefined8 *)(puVar32 + -8) = 0x7b3fb3;
                  local_f8 = pbVar47;
                  _IO_vtable_check();
                  pcVar22 = *(code **)(lVar18 + 0x38);
                  pbVar47 = local_f8;
                }
                goto LAB_007b2c40;
              }
              while (pbVar21 != (byte *)0x0) {
                pwVar52 = (wchar_t *)((long)pwVar19 + 1);
                pbVar21 = (byte *)param_1->_IO_write_ptr;
                wVar17 = *pwVar19;
                if (pbVar21 < param_1->_IO_write_end) {
                  param_1->_IO_write_ptr = (char *)(pbVar21 + 1);
                  *pbVar21 = (byte)wVar17;
                }
                else {
                  *(undefined8 *)(puVar32 + -8) = 0x7b34b2;
                  iVar43 = __overflow(param_1,(uint)(byte)wVar17);
                  if (iVar43 == -1) {
                    puVar38 = puVar32;
                    if (local_154 != 0) goto LAB_007b23a2;
                    *(undefined8 *)(puVar32 + -8) = 0x7b34d6;
                    free((void *)local_e8._0_8_);
                    *(undefined8 *)(puVar32 + -8) = 0x7b34e2;
                    free(local_138);
                    iVar43 = -1;
                    goto LAB_007b1b88;
                  }
                }
                pwVar19 = pwVar52;
                iVar43 = (iVar29 + (int)pwVar52) - (int)__s1;
                pbVar21 = pbVar47 + ((long)__s1 - (long)pwVar52);
              }
              goto LAB_007b2c74;
            }
            local_f0 = (byte *)CONCAT44(local_f0._4_4_,iVar43);
            *(undefined8 *)(puVar32 + -8) = 0x7b3e0b;
            pvVar24 = malloc((size_t)local_f8);
            local_e8._0_8_ = pvVar24;
            iVar43 = (int)local_f0;
            if (pvVar24 != (void *)0x0) goto LAB_007b2b5d;
          }
          else {
            if ((*(byte *)((long)local_c0 + 0xd) & 8) != 0) {
              local_e8._0_4_ = iVar43;
              *(undefined8 *)(puVar32 + -8) = 0x7b3df0;
              _i18n_number_rewrite(0,0,0);
              iVar43 = local_e8._0_4_;
            }
            if (pwVar52 == __s1) {
              if (pbVar47 == (byte *)0x0) {
                auVar14._8_8_ = 0;
                auVar14._0_8_ = local_e8._8_8_;
                local_e8 = auVar14 << 0x40;
              }
              else {
                do {
                  pvVar24 = param_1->__pad2;
                  wVar17 = *__s1;
                  if ((pvVar24 == (void *)0x0) ||
                     (pwVar19 = *(wchar_t **)((long)pvVar24 + 0x20),
                     *(wchar_t **)((long)pvVar24 + 0x28) <= pwVar19)) {
                    local_e8._0_8_ = param_1;
                    *(undefined8 *)(puVar32 + -8) = 0x7b2f43;
                    wVar17 = __woverflow();
                    param_1 = (_IO_FILE *)local_e8._0_8_;
                  }
                  else {
                    *(wchar_t **)((long)pvVar24 + 0x20) = pwVar19 + 1;
                    *pwVar19 = wVar17;
                  }
                  if (wVar17 == L'\xffffffff') goto LAB_007b238c;
                  iVar44 = (int)pbVar47;
                  pbVar47 = pbVar47 + -1;
                  __s1 = __s1 + 1;
                } while (pbVar47 != (byte *)0x0);
                auVar11._8_8_ = 0;
                auVar11._0_8_ = local_e8._8_8_;
                local_e8 = auVar11 << 0x40;
                iVar43 = (iVar29 + 1 + iVar43) - iVar44;
              }
LAB_007b2c74:
              if (local_148 != 0) {
                *(undefined8 *)(puVar32 + -8) = 0x7b3c7f;
                free((void *)local_e8._0_8_);
                *(undefined8 *)(puVar32 + -8) = 0x7b3c8b;
                free(local_138);
                auVar12._8_8_ = 0;
                auVar12._0_8_ = local_e8._8_8_;
                local_e8 = auVar12 << 0x40;
                local_138 = (wchar_t *)0x0;
              }
              if (((local_c0[3] & 0x20) == 0) || ((int)local_d8._0_4_ < 1)) goto LAB_007b1b88;
              lVar18 = (long)(int)local_d8._0_4_;
              uVar39 = local_c0[4];
              if (local_c4 == 0) {
                *(undefined8 *)(puVar32 + -8) = 0x7b3a16;
                lVar46 = _IO_padn(param_1,uVar39,lVar18);
              }
              else {
                *(undefined8 *)(puVar32 + -8) = 0x7b2cc4;
                lVar46 = _IO_wpadn();
              }
              if (lVar46 == lVar18) {
                iVar43 = iVar43 + local_d8._0_4_;
                goto LAB_007b1b88;
              }
            }
            else {
              lVar18 = *(long *)(param_1 + 1);
              if (lVar18 - 0x932180U < 0x828) {
                auVar10._8_8_ = 0;
                auVar10._0_8_ = local_e8._8_8_;
                local_e8 = auVar10 << 0x40;
                pcVar22 = *(code **)(lVar18 + 0x38);
                local_f0._0_4_ = iVar43;
              }
              else {
                local_f0 = (byte *)CONCAT44(local_f0._4_4_,iVar43);
                *(undefined8 *)(puVar32 + -8) = 0x7b3f58;
                local_f8 = pbVar47;
                _IO_vtable_check();
                pcVar22 = *(code **)(lVar18 + 0x38);
                auVar13._8_8_ = 0;
                auVar13._0_8_ = local_e8._8_8_;
                local_e8 = auVar13 << 0x40;
                pbVar47 = local_f8;
              }
LAB_007b2c40:
              local_f8 = (byte *)CONCAT44(local_f8._4_4_,(int)local_f0);
              *(undefined8 *)(puVar32 + -8) = 0x7b2c59;
              local_f0 = pbVar47;
              pbVar47 = (byte *)(*pcVar22)(param_1,__s1,pbVar47);
              if (pbVar47 == local_f0) {
                iVar43 = (uint)local_f8 + (int)local_f0;
                goto LAB_007b2c74;
              }
            }
            puVar38 = puVar32;
            if (local_154 != 0) goto LAB_007b23a2;
            *(undefined8 *)(puVar32 + -8) = 0x7b410f;
            free((void *)local_e8._0_8_);
          }
        }
        *(undefined8 *)(puVar32 + -8) = 0x7b23a2;
        free(local_138);
        puVar38 = puVar32;
      }
LAB_007b23a2:
      iVar43 = -1;
      puVar32 = puVar38;
      goto LAB_007b1b88;
    }
  }
  else {
    if ((char)local_144 != 'f') {
      local_130 = 6;
      if ((-1 < (int)uVar39) && (local_130 = 1, uVar39 != 0)) {
        local_130 = uVar39;
      }
      uVar51 = (ulong)local_a0[0];
      if (local_a8 == 0) {
        if ((int)local_130 <= (int)local_a0[0]) goto LAB_007b3509;
        local_120 = local_a0[0] + 1;
        local_e8._0_4_ = local_130 - local_120;
LAB_007b2082:
        local_a4 = 0x66;
        local_128 = (long)(int)local_130 + 5;
      }
      else {
        if ((int)local_a0[0] < 5) {
          local_120 = 0;
          local_e8._0_4_ = local_130;
          goto LAB_007b2082;
        }
LAB_007b3509:
        local_120 = 1;
        local_a4 = local_a4 - 2;
        local_e8._0_4_ = local_130 - 1;
        local_128 = (long)(int)local_e8._0_4_ + 8;
      }
      uVar42 = 0;
      uVar39 = local_e8._0_4_;
      if ((local_c0[3] & 8) == 0) {
        uVar39 = 0;
      }
      local_f8 = (byte *)CONCAT44(local_f8._4_4_,uVar39);
      goto LAB_007b20ba;
    }
    local_a4 = 0x66;
    uVar51 = (ulong)(int)uVar39;
    if ((int)uVar39 < 0) {
      local_f8 = (byte *)CONCAT44(local_f8._4_4_,6);
      uVar51 = 6;
    }
    local_12c = local_a8;
    if (local_a8 != 0) {
      local_128 = uVar51 + 2;
      goto LAB_007b2f74;
    }
    uVar42 = 1;
    local_130 = 0x7fffffff;
    local_120 = local_a0[0] + 1;
    local_128 = uVar51 + 2 + (long)(int)local_a0[0];
    local_e8._0_4_ = (uint)local_f8;
    if (local_f0 != (byte *)0x0) goto LAB_007b20c8;
LAB_007b213a:
    if (local_128 < 0x3ffffffffffffffd) goto LAB_007b2151;
  }
  iVar43 = -1;
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
LAB_007b1b88:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar43;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar32 + -8) = 0x7b416f;
  __stack_chk_fail_local();
}


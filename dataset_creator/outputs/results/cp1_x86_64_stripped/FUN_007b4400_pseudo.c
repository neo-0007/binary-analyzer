
long * FUN_007b4400(undefined8 param_1,int param_2,ulong *param_3,undefined8 param_4,
                   undefined8 param_5,undefined4 param_6,uint param_7,undefined8 param_8,
                   long param_9)

{
  long *plVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  uint *puVar20;
  ulong *puVar21;
  ulong *puVar22;
  uint *puVar23;
  long lVar24;
  uint **ppuVar25;
  uint **ppuVar26;
  uint **ppuVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  undefined1 uVar30;
  uint uVar31;
  uint uVar32;
  ulong uVar33;
  char *pcVar34;
  ulong uVar35;
  long in_FS_OFFSET;
  bool bVar36;
  uint *local_158;
  ulong local_150;
  uint local_144;
  ulong local_140;
  ulong local_138;
  undefined1 *local_130;
  long local_128;
  undefined8 local_120;
  ulong *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  ulong local_f8;
  uint local_f0;
  int local_ec;
  ulong local_e8;
  ulong local_e0;
  undefined1 local_d8 [16];
  long local_c8;
  long lStack_c0;
  
  ppuVar25 = &local_158;
  ppuVar27 = &local_158;
  local_118 = param_3;
  local_108 = param_4;
  local_100 = param_1;
  local_ec = param_2;
  local_128 = FUN_007841f0(param_9);
  local_144 = param_7 & 0x20000000;
  if (local_144 == 0) {
    iVar11 = FUN_0076d7f0(local_ec,&local_c8);
    if (iVar11 < 0) {
      pcVar34 = "cannot stat shared object";
      plVar13 = (long *)0x0;
      local_f0 = *(uint *)(in_FS_OFFSET + -0x58);
      ppuVar26 = &local_158;
      if (local_ec != -1) {
        FUN_0076e4b0();
        ppuVar26 = &local_158;
      }
      goto LAB_007b4922;
    }
    local_d8._8_8_ = lStack_c0;
    local_d8._0_8_ = local_c8;
    for (plVar13 = (long *)(&PTR_DAT_0093eb60)[param_9 * 0x14]; plVar13 != (long *)0x0;
        plVar13 = (long *)plVar13[3]) {
      if ((((*(byte *)((long)plVar13 + 0x31e) & 2) == 0) && (plVar13[0x76] == local_c8)) &&
         (plVar13[0x77] == lStack_c0)) {
        FUN_0076e4b0(local_ec);
        FUN_007104f0(local_108);
        FUN_007b4310(plVar13[7],local_100);
        return plVar13;
      }
    }
  }
  else {
    if (param_9 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006e2220("nsid == LM_ID_BASE","dl-load.c",0x3c3,"_dl_map_object_from_fd");
    }
    local_d8 = (undefined1  [16])0x0;
  }
  local_f0 = param_7 & 4;
  if (local_f0 != 0) {
    FUN_007104f0(local_108);
    FUN_0076e4b0(local_ec);
    return (long *)0x0;
  }
  if (((byte)DAT_0094b0e4 & 0x40) != 0) {
    FUN_00787060("file=%s [%lu];  generating link map\n",local_100,param_9);
  }
  plVar13 = (long *)FUN_007b96e0(local_108,local_100,param_6,param_5,param_7,param_9);
  if (plVar13 == (long *)0x0) {
    pcVar34 = "cannot create shared object descriptor";
    local_f0 = *(uint *)(in_FS_OFFSET + -0x58);
    ppuVar26 = &local_158;
    if (local_ec != -1) {
      FUN_0076e4b0(local_ec);
      ppuVar26 = &local_158;
    }
    goto LAB_007b4922;
  }
  uVar14 = local_118[5];
  plVar13[0x56] = local_118[4];
  local_140 = CONCAT62(local_140._2_6_,(short)local_118[3]);
  uVar35 = local_118[8];
  *(ushort *)(plVar13 + 0x57) = (ushort)uVar35;
  lVar24 = (ulong)(ushort)uVar35 * 0x38;
  if (*local_118 < lVar24 + uVar14) {
    for (; ppuVar27 != (uint **)((long)&local_158 - (lVar24 + 0x17U & 0xfffffffffffff000));
        ppuVar27 = (uint **)((long)ppuVar27 + -0x1000)) {
      *(undefined8 *)((long)ppuVar27 + -8) = *(undefined8 *)((long)ppuVar27 + -8);
    }
    uVar14 = (ulong)((uint)(lVar24 + 0x17U) & 0xff0);
    lVar16 = -uVar14;
    ppuVar25 = (uint **)((long)ppuVar27 + lVar16);
    puVar28 = (undefined1 *)((long)ppuVar27 + lVar16);
    if (uVar14 != 0) {
      *(undefined8 *)((long)ppuVar27 + -8) = *(undefined8 *)((long)ppuVar27 + -8);
    }
    iVar11 = local_ec;
    local_158 = (uint *)((ulong)((long)ppuVar27 + lVar16 + 0xf) & 0xfffffffffffffff0);
    *(undefined8 *)((long)ppuVar27 + lVar16 + -8) = 0x7b4c79;
    lVar16 = FUN_007abc10(iVar11,(uint *)((ulong)((long)ppuVar27 + lVar16 + 0xf) &
                                         0xfffffffffffffff0),lVar24);
    if (lVar16 != lVar24) {
      pcVar34 = "cannot read file data";
      goto LAB_007b57ae;
    }
  }
  else {
    local_158 = (uint *)((long)local_118 + uVar14 + 8);
  }
  lVar24 = DAT_00945878;
  uVar35 = DAT_0093eb18;
  uVar2 = *(ushort *)(plVar13 + 0x57);
  local_130 = (undefined1 *)ppuVar25;
  uVar14 = (ulong)uVar2 * 0x38 + 0xf;
  puVar29 = (undefined1 *)((long)ppuVar25 + -(uVar14 & 0xfffffffffffff000));
  puVar28 = local_130;
  for (; local_130 = puVar28, ppuVar25 != (uint **)puVar29;
      ppuVar25 = (uint **)((long)ppuVar25 + -0x1000)) {
    *(undefined8 *)((long)ppuVar25 + -8) = *(undefined8 *)((long)ppuVar25 + -8);
    puVar28 = local_130;
  }
  uVar14 = (ulong)((uint)uVar14 & 0xff0);
  lVar16 = -uVar14;
  puVar22 = (ulong *)((long)ppuVar25 + lVar16);
  if (uVar14 != 0) {
    *(undefined8 *)((long)ppuVar25 + -8) = *(undefined8 *)((long)ppuVar25 + -8);
  }
  local_138 = (ulong)((long)ppuVar25 + lVar16 + 7) >> 3;
  if (local_158 < local_158 + (ulong)uVar2 * 0xe) {
    local_110 = local_110 & 0xffffffffffffff00;
    uVar15 = 0;
    local_e8 = 7;
    local_120 = DAT_00945878;
    local_e0 = local_e0 & 0xffffffffffffff00;
    local_150 = DAT_0093eb18;
    uVar14 = DAT_0093eb18 - 1;
    local_f8 = -DAT_0093eb18;
    uVar17 = 0;
    puVar23 = local_158;
    do {
      uVar32 = *puVar23;
      if (uVar32 == 7) {
        if (*(long *)(puVar23 + 10) != 0) {
          uVar19 = *(ulong *)(puVar23 + 0xc);
          plVar13[0x88] = *(long *)(puVar23 + 10);
          plVar13[0x89] = uVar19;
          uVar6 = *(ulong *)(puVar23 + 4);
          if (uVar19 != 0) {
            uVar19 = uVar19 - 1 & uVar6;
          }
          plVar13[0x8a] = uVar19;
          lVar18 = *(long *)(puVar23 + 8);
          plVar13[0x86] = uVar6;
          plVar13[0x87] = lVar18;
          if (((*(byte *)((long)plVar13 + 0x31c) & 3) != 1) && (lVar24 == 0)) {
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)((long)ppuVar25 + lVar16 + -8) = 0x7b4af3;
            FUN_006e2220("false && \"TLS not initialized in static application\"","dl-load.c",0x4b3,
                         "_dl_map_object_from_fd");
          }
        }
      }
      else if (uVar32 < 8) {
        if (uVar32 == 2) {
          if (*(long *)(puVar23 + 8) == 0) {
            local_110 = CONCAT71(local_110._1_7_,1);
          }
          else {
            plVar13[2] = *(long *)(puVar23 + 4);
            *(short *)((long)plVar13 + 0x2ba) = (short)(*(ulong *)(puVar23 + 10) >> 4);
            *(byte *)((long)plVar13 + 0x31e) =
                 (byte)(((puVar23[1] >> 1 ^ 1) & 1) << 5) | *(byte *)((long)plVar13 + 0x31e) & 0xdf;
          }
        }
        else if (uVar32 == 6) {
          plVar13[0x55] = *(long *)(puVar23 + 4);
        }
        else if (uVar32 == 1) {
          uVar19 = *(ulong *)(puVar23 + 4);
          uVar6 = *(ulong *)(puVar23 + 2);
          if ((uVar19 - uVar6 & uVar14) != 0) {
            pcVar34 = "ELF load command address/offset not page-aligned";
            goto LAB_007b48cf;
          }
          lVar18 = *(long *)(puVar23 + 8);
          lVar8 = *(long *)(puVar23 + 10);
          *(ulong *)((long)ppuVar25 + uVar17 * 0x38 + lVar16) = uVar19 & local_f8;
          ((ulong *)((long)ppuVar25 + uVar17 * 0x38 + lVar16))[1] =
               uVar14 + lVar18 + uVar19 & local_f8;
          lVar10 = uVar17 * 0x38 + lVar16;
          *(ulong *)((long)ppuVar25 + lVar10 + 0x18) = uVar19 + lVar8;
          uVar7 = *(ulong *)(puVar23 + 0xc);
          *(ulong *)((long)ppuVar25 + lVar10 + 0x10) = lVar18 + uVar19;
          uVar33 = uVar7;
          if (uVar7 <= uVar15) {
            uVar33 = uVar15;
          }
          if ((uVar7 - 1 & uVar7) == 0) {
            uVar15 = uVar33;
          }
          *(ulong *)((long)ppuVar25 + lVar10 + 0x28) = uVar6 & local_f8;
          if (1 < uVar17 + 1) {
            uVar30 = (byte)local_e0;
            if (*(ulong *)((long)ppuVar25 + lVar10 + -0x30) != (uVar19 & local_f8)) {
              uVar30 = 1;
            }
            local_e0 = CONCAT71(local_e0._1_7_,uVar30);
          }
          *(uint *)((long)ppuVar25 + uVar17 * 0x38 + lVar16 + 0x30) =
               0x73516240 >> (sbyte)((puVar23[1] & 7) << 2) & 0xf;
          uVar17 = uVar17 + 1;
        }
      }
      else if (uVar32 == 0x6474e551) {
        local_e8 = (ulong)puVar23[1];
      }
      else if (uVar32 == 0x6474e552) {
        lVar18 = *(long *)(puVar23 + 10);
        plVar13[0x8e] = *(long *)(puVar23 + 4);
        plVar13[0x8f] = lVar18;
      }
      puVar23 = puVar23 + 0xe;
    } while (puVar23 < local_158 + (ulong)uVar2 * 0xe);
    if (uVar17 != 0) {
      puVar21 = (ulong *)((long)ppuVar25 + lVar16 + 0x20);
      uVar14 = 0;
      do {
        uVar19 = uVar14;
        uVar14 = uVar19 + 1;
        *puVar21 = uVar15;
        puVar21 = puVar21 + 7;
      } while (uVar14 != uVar17);
      local_120 = CONCAT44((int)((ulong)lVar24 >> 0x20),(uint)(ushort)local_140);
      if ((ushort)local_140 == 3) {
        if ((plVar13[2] != 0) && ((char)local_110 == '\0')) {
          uVar14 = *(ulong *)(local_138 * 8);
          uVar15 = *(ulong *)(local_138 * 8 + 0x20);
          local_f8 = *(long *)((long)ppuVar25 + uVar19 * 0x38 + lVar16 + 0x18) - uVar14;
          if (uVar35 < uVar15) {
            local_110 = uVar15 + local_f8;
            if (local_f8 < uVar15) {
              local_110 = uVar15 * 2;
            }
            *(undefined8 *)((long)ppuVar25 + lVar16 + -8) = 0x7b5624;
            uVar35 = FUN_0076f020(DAT_0093eb30 & uVar14,local_110,0,0x22,0xffffffff,0);
            if (uVar35 != 0xffffffffffffffff) {
              uVar3 = *(undefined4 *)(local_138 * 8 + 0x30);
              uVar5 = *(undefined8 *)(local_138 * 8 + 0x28);
              local_140 = CONCAT44(local_140._4_4_,uVar3);
              *(undefined8 *)((long)ppuVar25 + lVar16 + -8) = 0x7b567c;
              local_150 = uVar35;
              uVar15 = FUN_0076f020((uVar15 - 1) + uVar35 & -uVar15,local_f8,uVar3,0x812,local_ec,
                                    uVar5);
              uVar35 = local_150;
              if (uVar15 != 0xffffffffffffffff) {
                uVar32 = (uint)local_140;
                if (uVar15 != local_150) {
                  local_150 = CONCAT44(local_150._4_4_,(uint)local_140);
                  local_140 = uVar35;
                  *(undefined8 *)((long)ppuVar25 + lVar16 + -8) = 0x7b5895;
                  FUN_0076f080(uVar35);
                  uVar35 = local_140;
                  uVar32 = (uint)local_150;
                }
                if (local_110 + uVar35 != ((DAT_0093eb18 - 1) + local_f8 + uVar15 & -DAT_0093eb18))
                {
                  local_110 = CONCAT44(local_110._4_4_,uVar32);
                  *(undefined8 *)((long)ppuVar25 + lVar16 + -8) = 0x7b5873;
                  FUN_0076f080();
                  uVar32 = (uint)local_110;
                }
                plVar13[0x6b] = uVar15;
                goto LAB_007b4748;
              }
              *(undefined8 *)((long)ppuVar25 + lVar16 + -8) = 0x7b59e9;
              FUN_0076f080(local_150,local_110);
            }
LAB_007b48b1:
            pcVar34 = "failed to map segment from shared object";
          }
          else {
            uVar3 = *(undefined4 *)(local_138 * 8 + 0x30);
            uVar5 = *(undefined8 *)(local_138 * 8 + 0x28);
            local_110._4_4_ = (undefined4)(local_110 >> 0x20);
            local_110 = CONCAT44(local_110._4_4_,uVar3);
            *(undefined8 *)((long)ppuVar25 + lVar16 + -8) = 0x7b472d;
            uVar15 = FUN_0076f020(DAT_0093eb30 & uVar14,local_f8,uVar3,0x802,local_ec,uVar5);
            plVar13[0x6b] = uVar15;
            uVar32 = (uint)local_110;
            if (uVar15 == 0xffffffffffffffff) goto LAB_007b48b1;
LAB_007b4748:
            plVar13[0x6c] = local_f8 + uVar15;
            *plVar13 = uVar15 - uVar14;
            if ((byte)local_e0 == '\0') {
LAB_007b47b4:
              *(byte *)((long)plVar13 + 0x31e) = *(byte *)((long)plVar13 + 0x31e) | 4;
              do {
                do {
                  if ((uVar32 & 4) != 0) {
                    plVar13[0x6d] = puVar22[1] + *plVar13;
                  }
                  if (plVar13[0x55] == 0) {
                    uVar14 = puVar22[5];
                    uVar35 = local_118[5];
                    if ((uVar14 <= uVar35) &&
                       (uVar35 + (ulong)(ushort)local_118[8] * 0x38 <=
                        (puVar22[1] + uVar14) - *puVar22)) {
                      plVar13[0x55] = (uVar35 + *puVar22) - uVar14;
                    }
                  }
                  if (puVar22[2] < puVar22[3]) {
                    uVar15 = puVar22[2] + *plVar13;
                    uVar14 = puVar22[3] + *plVar13;
                    uVar35 = (uVar15 - 1) + DAT_0093eb18 & -DAT_0093eb18;
                    if (uVar14 < uVar35) {
                      uVar35 = uVar14;
                    }
                    if (uVar15 < uVar35) {
                      if ((uVar32 & 2) == 0) {
                        local_110 = CONCAT44(local_110._4_4_,uVar32);
                        *(undefined8 *)((long)ppuVar25 + lVar16 + -8) = 0x7b590b;
                        local_138 = uVar14;
                        local_e0 = uVar15;
                        iVar11 = FUN_0076f0b0(-DAT_0093eb18 & uVar15,DAT_0093eb18,uVar32 | 2);
                        uVar14 = local_e0;
                        uVar3 = (uint)local_110;
                        if (iVar11 < 0) goto LAB_007b54db;
                        local_110 = local_138;
                        lVar24 = uVar35 - local_e0;
                        local_e0 = CONCAT44(local_e0._4_4_,uVar3);
                        *(undefined8 *)((long)ppuVar25 + lVar16 + -8) = 0x7b5946;
                        uVar14 = thunk_FUN_00713720(uVar14,0,lVar24);
                        *(undefined8 *)((long)ppuVar25 + lVar16 + -8) = 0x7b5961;
                        FUN_0076f0b0(-DAT_0093eb18 & uVar14,DAT_0093eb18,local_e0 & 0xffffffff);
                        uVar14 = local_110;
                        uVar32 = (uint)local_e0;
                      }
                      else {
                        local_e0 = CONCAT44(local_e0._4_4_,uVar32);
                        *(undefined8 *)((long)ppuVar25 + lVar16 + -8) = 0x7b4833;
                        local_110 = uVar14;
                        thunk_FUN_00713720(uVar15,0,uVar35 - uVar15);
                        uVar14 = local_110;
                        uVar32 = (uint)local_e0;
                      }
                    }
                    if (uVar35 < uVar14) {
                      *(undefined8 *)((long)ppuVar25 + lVar16 + -8) = 0x7b5494;
                      lVar24 = FUN_0076f020(uVar35,uVar14 - uVar35,uVar32,0x32,0xffffffff,0);
                      if (lVar24 == -1) {
                        pcVar34 = "cannot map zero-fill pages";
                        goto LAB_007b48b8;
                      }
                    }
                  }
                  puVar22 = puVar22 + 7;
LAB_007b484e:
                  puVar28 = local_130;
                  if ((ulong *)((long)ppuVar25 + uVar17 * 0x38 + lVar16) <= puVar22) {
                    if (plVar13[2] != 0) {
                      lVar24 = *plVar13;
                      puVar22 = (ulong *)(plVar13[2] + lVar24);
                      plVar13[2] = (long)puVar22;
                      if (puVar22 != (ulong *)0x0) {
                        uVar14 = *puVar22;
                        goto joined_r0x007b4cca;
                      }
                    }
                    uVar32 = *(uint *)((long)plVar13 + 0x3ec);
                    goto LAB_007b4eaf;
                  }
                  uVar14 = puVar22[1];
                  uVar35 = *puVar22;
                  uVar32 = (uint)puVar22[6];
                } while (uVar14 <= uVar35);
                uVar15 = puVar22[5];
                lVar24 = *plVar13;
                local_e0 = CONCAT44(local_e0._4_4_,uVar32);
                *(undefined8 *)((long)ppuVar25 + lVar16 + -8) = 0x7b48a0;
                lVar24 = FUN_0076f020(uVar35 + lVar24,uVar14 - uVar35,uVar32,0x812,local_ec,uVar15);
                uVar32 = (uint)local_e0;
              } while (lVar24 != -1);
              goto LAB_007b48b1;
            }
            local_e0 = CONCAT44(local_e0._4_4_,uVar32);
            uVar35 = *(ulong *)((long)ppuVar25 + uVar17 * 0x38 + lVar16 + -0x38);
            uVar19 = *(ulong *)(local_138 * 8 + 8);
            if (uVar35 < uVar19) {
              pcVar34 = "ELF load command address/offset not page-aligned";
            }
            else {
              *(undefined8 *)((long)ppuVar25 + lVar16 + -8) = 0x7b47a5;
              iVar11 = FUN_0076f0b0((uVar15 - uVar14) + uVar19,uVar35 - uVar19,0);
              uVar32 = (uint)local_e0;
              if (-1 < iVar11) goto LAB_007b47b4;
LAB_007b54db:
              pcVar34 = "cannot change memory protections";
            }
          }
LAB_007b48b8:
          *(undefined1 (*) [16])(plVar13 + 0x6b) = (undefined1  [16])0x0;
          puVar28 = local_130;
          goto LAB_007b48cf;
        }
      }
      else {
        if (local_144 == 0) {
          pcVar34 = "cannot dynamically load executable";
          goto LAB_007b48cf;
        }
        if (plVar13[2] == 0) {
          if ((char)local_110 == '\0') {
            lVar24 = *(long *)((long)ppuVar25 + (uVar17 - 1) * 0x38 + lVar16 + 0x18);
LAB_007b5521:
            local_f8 = lVar24 - *(long *)(local_138 * 8);
            plVar13[0x6b] = *(long *)(local_138 * 8) + *plVar13;
            plVar13[0x6c] = lVar24 + *plVar13;
            *(byte *)((long)plVar13 + 0x31e) =
                 *(byte *)((long)plVar13 + 0x31e) & 0xfb | ((byte)local_e0 ^ 1) << 2;
            puVar22 = (ulong *)((long)ppuVar25 + lVar16);
            goto LAB_007b484e;
          }
        }
        else if ((char)local_110 == '\0') {
          lVar24 = *(long *)((long)ppuVar25 + (uVar17 - 1) * 0x38 + lVar16 + 0x18);
          goto LAB_007b5521;
        }
      }
      pcVar34 = "object file has no dynamic section";
      goto LAB_007b48cf;
    }
  }
  pcVar34 = "object file has no loadable segments";
  goto LAB_007b48cf;
joined_r0x007b4cca:
  if (uVar14 == 0) goto LAB_007b4d68;
  if (uVar14 < 0x23) {
LAB_007b4d09:
    plVar13[uVar14 + 8] = (long)puVar22;
  }
  else {
    if (0x6fffffff - uVar14 < 0x10) {
      uVar14 = 0x70000022 - uVar14;
      goto LAB_007b4d09;
    }
    uVar32 = (int)uVar14 * 2;
    if (0xfffffff8 < uVar32) {
      uVar14 = (ulong)(0x32 - ((int)uVar32 >> 1));
      goto LAB_007b4d09;
    }
    if (0x6ffffdff - uVar14 < 0xc) {
      uVar14 = 0x6ffffe35 - uVar14;
      goto LAB_007b4d09;
    }
    if (0x6ffffeff - uVar14 < 0xb) {
      uVar14 = 0x6fffff41 - uVar14;
      goto LAB_007b4d09;
    }
  }
  uVar14 = puVar22[2];
  puVar22 = puVar22 + 2;
  goto joined_r0x007b4cca;
LAB_007b4d68:
  if ((lVar24 != 0) && ((*(byte *)((long)plVar13 + 0x31e) & 0x20) == 0)) {
    if (plVar13[0xc] != 0) {
      plVar1 = (long *)(plVar13[0xc] + 8);
      *plVar1 = *plVar1 + lVar24;
    }
    if (plVar13[0xb] != 0) {
      plVar1 = (long *)(plVar13[0xb] + 8);
      *plVar1 = *plVar1 + lVar24;
    }
    if (plVar13[0xd] != 0) {
      plVar1 = (long *)(plVar13[0xd] + 8);
      *plVar1 = *plVar1 + lVar24;
    }
    if (plVar13[0xe] != 0) {
      plVar1 = (long *)(plVar13[0xe] + 8);
      *plVar1 = *plVar1 + lVar24;
    }
    if (plVar13[0xf] != 0) {
      plVar1 = (long *)(plVar13[0xf] + 8);
      *plVar1 = *plVar1 + lVar24;
    }
    if (plVar13[0x1f] != 0) {
      plVar1 = (long *)(plVar13[0x1f] + 8);
      *plVar1 = *plVar1 + lVar24;
    }
    if (plVar13[0x3a] != 0) {
      plVar1 = (long *)(plVar13[0x3a] + 8);
      *plVar1 = *plVar1 + lVar24;
    }
    if (plVar13[0x54] != 0) {
      plVar1 = (long *)(plVar13[0x54] + 8);
      *plVar1 = *plVar1 + lVar24;
    }
  }
  if ((plVar13[0x1c] != 0) && (*(long *)(plVar13[0x1c] + 8) != 7)) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(local_130 + -8) = 0x7b5a88;
    FUN_006e2220("info[DT_PLTREL]->d_un.d_val == DT_RELA","get-dynamic-info.h",0x66,
                 "elf_get_dynamic_info");
  }
  if ((plVar13[0xf] != 0) && (*(long *)(plVar13[0x11] + 8) != 0x18)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(local_130 + -8) = &UNK_007b5aa7;
    FUN_006e2220("info[DT_RELAENT]->d_un.d_val == sizeof (ElfW(Rela))","get-dynamic-info.h",0x6e,
                 "elf_get_dynamic_info");
  }
  lVar24 = plVar13[0x26];
  if (lVar24 != 0) {
    uVar14 = *(ulong *)(lVar24 + 8);
    *(int *)(plVar13 + 0x7e) = (int)uVar14;
    if ((uVar14 & 2) != 0) {
      plVar13[0x18] = lVar24;
    }
    if ((uVar14 & 4) != 0) {
      plVar13[0x1e] = lVar24;
    }
    if ((uVar14 & 8) != 0) {
      plVar13[0x20] = lVar24;
    }
  }
  if (plVar13[0x2f] == 0) {
    uVar32 = *(uint *)((long)plVar13 + 0x3ec);
  }
  else {
    uVar14 = *(ulong *)(plVar13[0x2f] + 8);
    *(uint *)((long)plVar13 + 0x3ec) = (uint)uVar14;
    if ((uVar14 & 8) != 0) {
      *(undefined1 *)(plVar13 + 100) = 1;
    }
    if ((((byte)DAT_0094b0e4 & 0x40) == 0) || ((uVar14 & 0xf7fff716) == 0)) {
      uVar32 = *(uint *)((long)plVar13 + 0x3ec);
      uVar12 = (uint)uVar14;
    }
    else {
      *(undefined8 *)(local_130 + -8) = 0x7b58c4;
      FUN_00787060("\nWARNING: Unsupported flag value(s) of 0x%x in DT_FLAGS_1.\n");
      uVar32 = *(uint *)((long)plVar13 + 0x3ec);
      uVar12 = uVar32;
    }
    if ((uVar12 & 1) != 0) {
      plVar13[0x20] = plVar13[0x2f];
    }
  }
  if (plVar13[0x25] != 0) {
    plVar13[0x17] = 0;
  }
LAB_007b4eaf:
  if (((uVar32 & 0x40) == 0) || (-1 < (int)param_7)) {
    if (((uVar32 & 0x8000000) == 0) || (local_144 != 0)) {
      if (plVar13[0x55] == 0) {
        lVar16 = (ulong)(ushort)local_118[8] * 0x38;
        *(undefined8 *)(puVar28 + -8) = 0x7b5740;
        lVar24 = FUN_007101b0(lVar16);
        puVar23 = local_158;
        if (lVar24 == 0) {
          pcVar34 = "cannot allocate memory for program header";
          goto LAB_007b57ae;
        }
        *(undefined8 *)(puVar28 + -8) = 0x7b575b;
        local_e0 = thunk_FUN_00713a50(lVar24,puVar23,lVar16);
        plVar13[0x55] = local_e0;
        *(byte *)((long)plVar13 + 0x31d) = *(byte *)((long)plVar13 + 0x31d) | 8;
      }
      else {
        local_e0 = plVar13[0x55] + *plVar13;
        plVar13[0x55] = local_e0;
      }
      if ((~DAT_0093eb08 & local_e8 & 1) != 0) {
        DAT_0093aed0 = DAT_0093aed0 | 7;
        *(undefined8 *)(puVar28 + -8) = 0x7b5786;
        local_f0 = FUN_007c77b0(param_8);
        if (local_f0 != 0) {
          pcVar34 = "cannot enable executable stack as shared object requires";
          goto LAB_007b48cf;
        }
        local_e0 = plVar13[0x55];
        local_f0 = 0;
      }
      iVar11 = local_ec;
      if (plVar13[0x86] != 0) {
        plVar13[0x86] = plVar13[0x86] + *plVar13;
      }
      for (uVar14 = local_e0 + (ulong)*(ushort *)(plVar13 + 0x57) * 0x38; uVar14 != local_e0;
          uVar14 = uVar14 - 0x38) {
        if (*(int *)(uVar14 - 0x38) == 4) {
          uVar35 = *(ulong *)(uVar14 - 0x10);
          if (((*(byte *)((long)plVar13 + 0x321) & 3) == 0) && (*(long *)(uVar14 - 8) == 8)) {
            if (0xc < uVar35) {
              puVar23 = (uint *)(*(long *)(uVar14 - 0x28) + *plVar13);
              uVar32 = 0;
              uVar12 = 0;
              local_110 = local_110 & 0xffffffff00000000;
              lVar24 = 0xc - (long)puVar23;
              local_e8 = local_e8 & 0xffffffff00000000;
              do {
                uVar17 = (ulong)*puVar23;
                if (((*puVar23 == 4) && (puVar23[2] == 5)) && (puVar23[3] == 0x554e47)) {
                  if ((*(byte *)((long)plVar13 + 0x321) & 3) != 0) goto LAB_007b4fd0;
                  *(byte *)((long)plVar13 + 0x321) = *(byte *)((long)plVar13 + 0x321) & 0xfc | 1;
                  uVar31 = puVar23[1];
                  uVar15 = (ulong)uVar31;
                  if ((uVar31 < 8) || ((uVar31 & 7) != 0)) goto LAB_007b4fd0;
                  puVar20 = puVar23 + 4;
                  local_118 = (ulong *)CONCAT44(local_118._4_4_,4);
                  uVar17 = (long)puVar20 + uVar15;
                  uVar31 = uVar32;
                  do {
                    uVar32 = *puVar20;
                    uVar4 = puVar20[1];
                    if ((uVar32 < uVar31) || (uVar17 < (long)puVar20 + (ulong)uVar4 + 8))
                    goto LAB_007b4fd0;
                    if (((uVar32 & 0xffff7fff) == 0xc0000002) || (uVar32 == 0xb0008000)) {
                      if (uVar4 != 4) goto LAB_007b4fd0;
                      uVar31 = puVar20[2];
                      if (uVar32 == 0xc0000002) {
                        local_e8 = CONCAT44(local_e8._4_4_,uVar31);
                        uVar31 = uVar12;
                      }
                      else if (uVar32 != 0xb0008000) {
                        local_110 = CONCAT44(local_110._4_4_,uVar31);
                        uVar17 = 4;
                        uVar32 = 0xc0008002;
                        goto LAB_007b515b;
                      }
                    }
                    else {
                      uVar31 = uVar12;
                      if (0xc0008002 < uVar32) break;
                    }
                    uVar12 = uVar31;
                    puVar20 = (uint *)((long)puVar20 + ((ulong)uVar4 + 7 & 0xfffffffffffffff8) + 8);
                    uVar31 = uVar32;
                  } while (7 < (long)(uVar17 - (long)puVar20));
                  uVar17 = 4;
                }
                else {
                  uVar15 = (ulong)puVar23[1];
                }
LAB_007b515b:
                puVar23 = (uint *)((long)puVar23 +
                                  (uVar15 + 7 + (uVar17 + 0x13 & 0xfffffffffffffff8) &
                                  0xfffffffffffffff8));
              } while ((ulong)((long)puVar23 + lVar24) < uVar35);
              if (((int)local_e8 != 0 || uVar12 != 0) || (uint)local_110 != 0) {
                *(uint *)((long)plVar13 + 0x32c) = uVar12;
                *(ulong *)((long)plVar13 + 0x324) = CONCAT44((uint)local_110,(int)local_e8);
                *(byte *)((long)plVar13 + 0x321) = *(byte *)((long)plVar13 + 0x321) & 0xfc | 2;
                goto LAB_007b4fd0;
              }
            }
            *(byte *)((long)plVar13 + 0x321) = *(byte *)((long)plVar13 + 0x321) & 0xfc | 1;
          }
        }
        else if (((*(int *)(uVar14 - 0x38) == 0x6474e553) && (*(long *)(uVar14 - 8) == 8)) &&
                (0xc < *(ulong *)(uVar14 - 0x10))) {
          puVar23 = (uint *)(*plVar13 + *(long *)(uVar14 - 0x28));
          lVar24 = 0xc - (long)puVar23;
          do {
            if (((*puVar23 == 4) && (puVar23[2] == 5)) && (puVar23[3] == 0x554e47)) break;
            puVar23 = (uint *)((long)puVar23 +
                              ((ulong)puVar23[1] + 7 + ((ulong)*puVar23 + 0x13 & 0xfffffffffffffff8)
                              & 0xfffffffffffffff8));
          } while ((ulong)((long)puVar23 + lVar24) < *(ulong *)(uVar14 - 0x10));
        }
LAB_007b4fd0:
      }
      *(undefined8 *)(puVar28 + -8) = 0x7b4fec;
      iVar11 = FUN_0076e4b0(iVar11);
      if (iVar11 == 0) {
        if (((int)local_120 == 2) && ((*(byte *)((long)plVar13 + 0x31c) & 3) != 0)) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)(puVar28 + -8) = 0x7b5412;
          FUN_006e2220("type != ET_EXEC || l->l_type == lt_executable","dl-load.c",0x571,
                       "_dl_map_object_from_fd");
        }
        lVar24 = *plVar13;
        lVar16 = plVar13[0x56] + lVar24;
        plVar13[0x56] = lVar16;
        if (((byte)DAT_0094b0e4 & 0x40) != 0) {
          lVar18 = plVar13[2];
          *(ulong *)(puVar28 + -0x10) = (ulong)*(ushort *)(plVar13 + 0x57);
          *(undefined8 *)(puVar28 + -0x18) = 0x10;
          *(long *)(puVar28 + -0x20) = plVar13[0x55];
          *(undefined8 *)(puVar28 + -0x28) = 0x10;
          *(long *)(puVar28 + -0x30) = lVar16;
          *(undefined8 *)(puVar28 + -0x38) = 0x10;
          *(ulong *)(puVar28 + -0x40) = local_f8;
          *(undefined8 *)(puVar28 + -0x48) = 0x7b5845;
          FUN_00787060("  dynamic: 0x%0*lx  base: 0x%0*lx   size: 0x%0*Zx\n    entry: 0x%0*lx  phdr: 0x%0*lx  phnum:   %*u\n\n"
                       ,0x10,lVar18,0x10,lVar24,0x10);
        }
        *(undefined8 *)(puVar28 + -8) = 0x7b502a;
        FUN_007ba9d0(plVar13);
        if ((((param_7 & 8) == 0) && (plVar13[0x18] != 0)) &&
           (puVar9 = (undefined8 *)plVar13[0x73], (long *)*puVar9 != plVar13 + 0x58)) {
          *(long **)plVar13[0x5a] = plVar13;
          lVar24 = plVar13[0x72];
          *(undefined4 *)(plVar13 + 0x5b) = 1;
          *(undefined8 *)(puVar28 + -8) = 0x7b59b8;
          thunk_FUN_00713610(puVar9 + 1,puVar9,lVar24 * 8 + -8);
          *(long **)plVar13[0x73] = plVar13 + 0x5a;
        }
        if ((*(byte *)((long)plVar13 + 0x3ec) & 0x20) != 0) {
          DAT_0094ae80 = plVar13;
        }
        bVar36 = DAT_0094b0d0 != 0;
        plVar13[0x76] = local_d8._0_8_;
        plVar13[0x77] = local_d8._8_8_;
        if (bVar36) {
          if (plVar13[0x16] == 0) goto LAB_007b508c;
          lVar24 = *(long *)(plVar13[0x16] + 8);
          lVar16 = *(long *)(plVar13[0xd] + 8);
          lVar18 = 0;
          if ((*(byte *)((long)plVar13 + 0x31e) & 0x20) != 0) {
            lVar18 = *plVar13;
          }
          lVar8 = plVar13[7];
          *(undefined8 *)(puVar28 + -8) = 0x7b57fd;
          FUN_007b4310(lVar8,lVar24 + lVar16 + lVar18);
        }
        if ((*(long *)(&DAT_0093eb80 + param_9 * 0xa0) == 0) && (plVar13[0x16] != 0)) {
          lVar24 = *(long *)(plVar13[0x16] + 8);
          lVar16 = *(long *)(plVar13[0xd] + 8);
          lVar18 = 0;
          if ((*(byte *)((long)plVar13 + 0x31e) & 0x20) != 0) {
            lVar18 = *plVar13;
          }
          *(undefined8 *)(puVar28 + -8) = 0x7b55c9;
          iVar11 = thunk_FUN_00712780(lVar24 + lVar16 + lVar18,"libc.so.6");
          if (iVar11 == 0) {
            *(long **)(&DAT_0093eb80 + param_9 * 0xa0) = plVar13;
          }
        }
LAB_007b508c:
        if ((plVar13[0x88] != 0) &&
           (((*(byte *)((long)plVar13 + 0x31c) & 3) == 1 || (DAT_00945878 != 0)))) {
          *(undefined8 *)(puVar28 + -8) = 0x7b50b1;
          FUN_00789de0(plVar13);
        }
        *(undefined8 *)(puVar28 + -8) = 0x7b50bd;
        FUN_007b9640(plVar13,param_9);
        if (*(int *)(local_128 + 0x18) == 0) {
          *(undefined4 *)(local_128 + 0x18) = 1;
          *(undefined8 *)(puVar28 + -8) = 0x7b5443;
          FUN_007841e0();
        }
        else if (*(int *)(local_128 + 0x18) != 1) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)(puVar28 + -8) = 0x7b50f7;
          FUN_006e2220("r->r_state == RT_ADD","dl-load.c",0x5e2,"_dl_map_object_from_fd");
        }
        return plVar13;
      }
      pcVar34 = "cannot close file descriptor";
LAB_007b57ae:
      local_f0 = *(uint *)(in_FS_OFFSET + -0x58);
    }
    else {
      pcVar34 = "cannot dynamically load position-independent executable";
    }
  }
  else {
    pcVar34 = "cannot dynamically load position-independent executable";
    if ((uVar32 & 0x8000000) == 0) {
      pcVar34 = "shared object cannot be dlopen()ed";
    }
  }
LAB_007b48cf:
  iVar11 = local_ec;
  if (local_ec != -1) {
    *(undefined8 *)(puVar28 + -8) = 0x7b48e3;
    FUN_0076e4b0(iVar11);
  }
  lVar24 = plVar13[0x6b];
  if (lVar24 != 0) {
    lVar16 = plVar13[0x6c];
    *(undefined8 *)(puVar28 + -8) = 0x7b528a;
    FUN_0076f080(lVar24,lVar16 - lVar24);
  }
  if (plVar13[0x6a] != -1) {
    *(undefined8 *)(puVar28 + -8) = 0x7b4905;
    FUN_007104f0();
  }
  if (*(int *)(plVar13[7] + 0x10) == 0) {
    *(undefined8 *)(puVar28 + -8) = 0x7b52a5;
    FUN_007104f0();
  }
  ppuVar26 = (uint **)puVar28;
  if ((*(byte *)((long)plVar13 + 0x31d) & 8) != 0) {
    lVar24 = plVar13[0x55];
    *(undefined8 *)(puVar28 + -8) = 0x7b529b;
    FUN_007104f0(lVar24);
  }
LAB_007b4922:
  *(undefined8 *)((long)ppuVar26 + -8) = 0x7b492a;
  FUN_007104f0(plVar13);
  uVar5 = local_108;
  *(undefined8 *)((long)ppuVar26 + -8) = 0x7b4936;
  FUN_007104f0(uVar5);
  uVar32 = local_f0;
  uVar5 = local_100;
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)ppuVar26 + -8) = 0x7b494d;
  FUN_0078db10(uVar32,uVar5,0,pcVar34);
}


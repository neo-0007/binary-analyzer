
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007621d0(char *param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  uint *puVar11;
  char *pcVar12;
  ulong *puVar13;
  long lVar14;
  byte *pbVar15;
  ulong *puVar16;
  ulong *puVar17;
  int *piVar18;
  undefined *puVar19;
  undefined8 uVar20;
  bool bVar21;
  ulong uVar22;
  uint *puVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  long *plVar27;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  long in_FS_OFFSET;
  undefined1 auVar31 [16];
  int local_144;
  long local_138;
  long local_130;
  long *local_120;
  ulong *local_118;
  long lStack_110;
  int local_108;
  char local_104;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  long local_d8;
  long local_d0;
  long local_a8;
  long local_80;
  uint local_48;
  uint uStack_44;
  long local_40;
  
  iVar6 = DAT_0094aac8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_120 = (long *)0x0;
  DAT_0094aac8 = 0;
  if ((long *)param_1 == (long *)0x0) {
    param_1 = "/etc/localtime";
LAB_007622a7:
    if (((iVar6 != 0) && (iVar6 = FUN_0076d7d0(param_1,&local_d8), iVar6 == 0)) &&
       ((local_d0 == DAT_0094ab28 && ((local_d8 == DAT_0094ab30 && (local_80 == DAT_0094ab20))))))
    goto LAB_0076271f;
    puVar11 = (uint *)FUN_006fda20(param_1,"rce");
    plVar27 = local_120;
    if (puVar11 != (uint *)0x0) {
      uVar7 = FUN_00702290(puVar11);
      iVar6 = FUN_0076d7f0(uVar7,&local_d8);
      if (iVar6 == 0) {
        iVar6 = 2;
        FUN_007104f0(DAT_0094b5b8);
        DAT_0094b5b8 = (ulong *)0x0;
        DAT_0094ab30 = local_d8;
        DAT_0094ab28 = local_d0;
        *puVar11 = *puVar11 | 0x8000;
        DAT_0094ab20 = local_80;
        do {
          lVar10 = FUN_007a2290(&local_108,0x2c,1,puVar11);
          if ((lVar10 != 1) || (local_108 != 0x66695a54)) break;
          uVar25 = (ulong)(int)(local_f0 >> 0x18 | (local_f0 & 0xff0000) >> 8 |
                                (local_f0 & 0xff00) << 8 | local_f0 << 0x18);
          uVar28 = (ulong)(int)(local_f4 >> 0x18 | (local_f4 & 0xff0000) >> 8 |
                                (local_f4 & 0xff00) << 8 | local_f4 << 0x18);
          uVar30 = uVar28;
          if (uVar28 <= uVar25) {
            uVar30 = uVar25;
          }
          DAT_0094ab18 = (long)(int)(local_e8 >> 0x18 | (local_e8 & 0xff0000) >> 8 |
                                     (local_e8 & 0xff00) << 8 | local_e8 << 0x18);
          DAT_0094ab08 = (ulong)(int)(local_e4 >> 0x18 | (local_e4 & 0xff0000) >> 8 |
                                      (local_e4 & 0xff00) << 8 | local_e4 << 0x18);
          DAT_0094aae0 = (ulong)(int)(local_ec >> 0x18 | (local_ec & 0xff0000) >> 8 |
                                      (local_ec & 0xff00) << 8 | local_ec << 0x18);
          uVar26 = (ulong)(int)(local_e0 >> 0x18 | (local_e0 & 0xff0000) >> 8 |
                                (local_e0 & 0xff00) << 8 | local_e0 << 0x18);
          if (DAT_0094ab08 < uVar30) break;
          if (iVar6 == 1) {
            lVar10 = FUN_00702b70(puVar11);
            uVar30 = local_a8 - lVar10;
            if ((((-1 < (long)uVar30) &&
                 (uVar22 = DAT_0094ab18 * 9 + DAT_0094ab08 * 6 + uVar26, uVar22 <= uVar30)) &&
                (uVar30 = uVar30 - uVar22, DAT_0094aae0 < 0x1555555555555556)) &&
               (((DAT_0094aae0 * 0xc <= uVar30 &&
                 (uVar30 = uVar30 + DAT_0094aae0 * -0xc, uVar25 <= uVar30)) &&
                ((lVar10 = uVar30 - uVar25, lVar10 != 0 &&
                 ((uVar28 <= lVar10 - 1U && (lVar10 = (lVar10 - uVar28) + -1, lVar10 != 0)))))))) {
              local_144 = 8;
LAB_00762519:
              lVar14 = DAT_0094ab18;
              uVar30 = uVar26 + lVar10 + param_2 + DAT_0094ab18 * 9 +
                       DAT_0094ab08 * 8 + DAT_0094aae0 * 0x10;
              auVar31 = FUN_007101b0(uVar30);
              puVar13 = auVar31._0_8_;
              DAT_0094b5b8 = puVar13;
              if (puVar13 != (ulong *)0x0) {
                if (CARRY8(uVar30,(ulong)puVar13)) {
                  FUN_007a3000(puVar13,uVar30,auVar31._8_8_,lVar14);
                  lVar14 = DAT_0094ab18;
                }
                local_118 = puVar13;
                lStack_110 = uVar30 + (long)puVar13;
                FUN_007a2f60(&local_118,8,8,lVar14);
                DAT_0094aad8 = FUN_007a2f60(&local_118,0x10,8,DAT_0094aae0);
                DAT_0094ab00 = (int *)FUN_007a2f60(&local_118,8,4,DAT_0094ab08);
                DAT_0094ab10 = (byte *)FUN_007a2f60(&local_118,1,1,DAT_0094ab18);
                DAT_0094aaf8 = FUN_007a2f60(&local_118,1,1,uVar26);
                pcVar12 = (char *)0x0;
                if (local_144 == 8) {
                  pcVar12 = (char *)FUN_007a2f60(&local_118,1,1,lVar10);
                }
                DAT_0094aad0 = pcVar12;
                if (param_2 != 0) {
                  uVar20 = FUN_007a2f60(&local_118,1,1,param_2);
                  *param_3 = uVar20;
                }
                if (local_118 != (ulong *)0x0) {
                  lVar24 = (long)local_144;
                  lVar14 = FUN_007a2290(DAT_0094b5b8,lVar24,DAT_0094ab18,puVar11);
                  if ((lVar14 == DAT_0094ab18) &&
                     (lVar14 = FUN_007a2290(DAT_0094ab10,1,lVar14,puVar11), puVar13 = DAT_0094b5b8,
                     lVar14 == DAT_0094ab18)) {
                    if (DAT_0094ab18 == 0) {
                      if (DAT_0094ab08 != 0) goto LAB_007628db;
                      goto LAB_007629a9;
                    }
                    pbVar15 = DAT_0094ab10;
                    goto LAB_007626cd;
                  }
                }
              }
            }
            break;
          }
          if (local_104 == '\0') {
            lVar10 = 0;
            local_144 = 4;
            goto LAB_00762519;
          }
          iVar6 = 1;
          iVar8 = FUN_00702400(puVar11,uVar25 + uVar26 + uVar28 + DAT_0094ab18 * 5 +
                                       DAT_0094ab08 * 6 + DAT_0094aae0 * 8,1);
        } while (iVar8 == 0);
      }
      goto LAB_007622fa;
    }
  }
  else {
    cVar1 = (char)*(long *)param_1;
    if (cVar1 != '\0') {
      if (DAT_0093ae30 == 0) {
        if (cVar1 != '/') {
LAB_00762314:
          pcVar12 = (char *)FUN_006e8e30("TZDIR");
          if (pcVar12 == (char *)0x0) {
            pcVar12 = "/usr/share/zoneinfo";
          }
          else if (*pcVar12 == '\0') {
            pcVar12 = "/usr/share/zoneinfo";
          }
          iVar8 = FUN_006f4ae0(&local_120,"%s/%s",pcVar12,param_1);
          param_1 = (char *)local_120;
          plVar27 = local_120;
          if (iVar8 == -1) goto LAB_00762258;
        }
        goto LAB_007622a7;
      }
      if (cVar1 == '/') {
        if (((((*(long *)param_1 == 0x636f6c2f6374652f) &&
              ((int)*(long *)((long)param_1 + 8) == 0x69746c61)) &&
             (*(short *)((long)param_1 + 0xc) == 0x656d)) &&
            (*(char *)((long)param_1 + 0xe) == '\0')) ||
           (((*(long *)((long)param_1 + 8) == 0x69656e6f7a2f6572 &&
              *(long *)param_1 == 0x6168732f7273752f &&
             ((short)*(long *)((long)param_1 + 0x10) == 0x666e)) &&
            (*(char *)((long)param_1 + 0x12) == 'o')))) {
          lVar10 = FUN_004011e0(param_1,&DAT_00823afa);
          plVar27 = (long *)0x0;
          if (lVar10 == 0) goto LAB_007622a7;
          goto LAB_00762258;
        }
      }
      else {
        lVar10 = FUN_004011e0(param_1,&DAT_00823afa);
        if (lVar10 == 0) goto LAB_00762314;
      }
    }
    plVar27 = (long *)0x0;
  }
  goto LAB_00762258;
  while (pbVar15 = pbVar15 + 1, pbVar15 != DAT_0094ab10 + DAT_0094ab18) {
LAB_007626cd:
    if (DAT_0094ab08 <= *pbVar15) goto LAB_007622fa;
  }
  lVar14 = DAT_0094ab18;
  if (local_144 == 4) {
    do {
      lVar14 = lVar14 + -1;
      uVar9 = *(uint *)((long)puVar13 + lVar14 * 4);
      puVar13[lVar14] =
           (long)(int)(uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                      uVar9 << 0x18);
    } while (lVar14 != 0);
  }
  else {
    puVar13 = DAT_0094b5b8 + DAT_0094ab18;
    puVar16 = DAT_0094b5b8;
    do {
      uVar30 = *puVar16;
      puVar17 = puVar16 + 1;
      *puVar16 = uVar30 >> 0x38 | (uVar30 & 0xff000000000000) >> 0x28 |
                 (uVar30 & 0xff0000000000) >> 0x18 | (uVar30 & 0xff00000000) >> 8 |
                 (uVar30 & 0xff000000) << 8 | (uVar30 & 0xff0000) << 0x18 |
                 (uVar30 & 0xff00) << 0x28 | uVar30 << 0x38;
      puVar16 = puVar17;
    } while (puVar13 != puVar17);
  }
LAB_007628db:
  uVar30 = 0;
  do {
    lVar14 = FUN_007a2290(&local_48,1,4,puVar11);
    if (lVar14 != 4) goto LAB_007622fa;
    pbVar15 = *(byte **)(puVar11 + 2);
    if (pbVar15 < *(byte **)(puVar11 + 4)) {
      *(byte **)(puVar11 + 2) = pbVar15 + 1;
      uVar9 = (uint)*pbVar15;
    }
    else {
      uVar9 = FUN_007067b0(puVar11);
    }
    if (1 < uVar9) goto LAB_007622fa;
    *(char *)(DAT_0094ab00 + uVar30 * 2 + 1) = (char)uVar9;
    pbVar15 = *(byte **)(puVar11 + 2);
    if (pbVar15 < *(byte **)(puVar11 + 4)) {
      *(byte **)(puVar11 + 2) = pbVar15 + 1;
      uVar9 = (uint)*pbVar15;
    }
    else {
      uVar9 = FUN_007067b0(puVar11);
    }
    uVar22 = DAT_0094ab08;
    if (uVar26 < (ulong)(long)(int)uVar9) goto LAB_007622fa;
    puVar23 = (uint *)(DAT_0094ab00 + uVar30 * 2);
    uVar30 = uVar30 + 1;
    *(char *)((long)puVar23 + 5) = (char)uVar9;
    *puVar23 = local_48 >> 0x18 | (local_48 & 0xff0000) >> 8 | (local_48 & 0xff00) << 8 |
               local_48 << 0x18;
  } while (uVar30 < uVar22);
LAB_007629a9:
  uVar30 = FUN_007a2290(DAT_0094aaf8,1,uVar26,puVar11);
  if (uVar30 == uVar26) {
    if (DAT_0094aae0 != 0) {
      if (local_144 == 4) {
        uVar30 = 0;
        do {
          lVar14 = FUN_007a2290(&local_48,1,4,puVar11);
          if (lVar14 != 4) goto LAB_007622fa;
          lVar24 = uVar30 * 0x10;
          *(long *)(DAT_0094aad8 + lVar24) =
               (long)(int)(local_48 >> 0x18 | (local_48 & 0xff0000) >> 8 | (local_48 & 0xff00) << 8
                          | local_48 << 0x18);
          lVar14 = FUN_007a2290(&local_48,1,4,puVar11);
          uVar26 = DAT_0094aae0;
          if (lVar14 != 4) goto LAB_007622fa;
          uVar30 = uVar30 + 1;
          *(long *)(DAT_0094aad8 + 8 + lVar24) =
               (long)(int)(local_48 >> 0x18 | (local_48 & 0xff0000) >> 8 | (local_48 & 0xff00) << 8
                          | local_48 << 0x18);
        } while (uVar30 < uVar26);
      }
      else {
        uVar30 = 0;
        do {
          lVar14 = FUN_007a2290(&local_48,1,lVar24,puVar11);
          if (lVar24 != lVar14) goto LAB_007622fa;
          lVar29 = uVar30 * 0x10;
          *(ulong *)(DAT_0094aad8 + lVar29) =
               (ulong)(uStack_44 >> 0x18) | (((ulong)uStack_44 & 0xff0000) << 0x20) >> 0x28 |
               (((ulong)uStack_44 & 0xff00) << 0x20) >> 0x18 |
               (((ulong)uStack_44 & 0xff) << 0x20) >> 8 | ((ulong)local_48 & 0xff000000) << 8 |
               ((ulong)local_48 & 0xff0000) << 0x18 | ((ulong)local_48 & 0xff00) << 0x28 |
               CONCAT44(uStack_44,local_48) << 0x38;
          lVar14 = FUN_007a2290(&local_48,1,4,puVar11);
          uVar26 = DAT_0094aae0;
          if (lVar14 != 4) goto LAB_007622fa;
          uVar30 = uVar30 + 1;
          *(long *)(DAT_0094aad8 + 8 + lVar29) =
               (long)(int)(local_48 >> 0x18 | (local_48 & 0xff0000) >> 8 | (local_48 & 0xff00) << 8
                          | local_48 << 0x18);
        } while (uVar30 < uVar26);
      }
    }
    uVar26 = 0;
    uVar30 = DAT_0094ab08;
    piVar18 = DAT_0094ab00;
    if (uVar25 != 0) {
      do {
        pbVar15 = *(byte **)(puVar11 + 2);
        if (pbVar15 < *(byte **)(puVar11 + 4)) {
          *(byte **)(puVar11 + 2) = pbVar15 + 1;
          uVar9 = (uint)*pbVar15;
        }
        else {
          uVar9 = FUN_007067b0(puVar11);
          if (uVar9 == 0xffffffff) goto LAB_007622fa;
        }
        piVar18 = DAT_0094ab00;
        *(bool *)((long)DAT_0094ab00 + uVar26 * 8 + 6) = uVar9 != 0;
        uVar26 = uVar26 + 1;
        uVar30 = DAT_0094ab08;
      } while (uVar25 != uVar26);
    }
    while (uVar26 < uVar30) {
      uVar26 = uVar26 + 1;
      *(undefined1 *)((long)piVar18 + uVar26 * 8 + -2) = 0;
    }
    for (uVar30 = 0; uVar25 = DAT_0094ab08, uVar30 != uVar28; uVar30 = uVar30 + 1) {
      pbVar15 = *(byte **)(puVar11 + 2);
      if (pbVar15 < *(byte **)(puVar11 + 4)) {
        *(byte **)(puVar11 + 2) = pbVar15 + 1;
        uVar9 = (uint)*pbVar15;
      }
      else {
        uVar9 = FUN_007067b0(puVar11);
        piVar18 = DAT_0094ab00;
        if (uVar9 == 0xffffffff) goto LAB_007622fa;
      }
      *(bool *)((long)piVar18 + uVar30 * 8 + 7) = uVar9 != 0;
    }
    while (uVar30 < uVar25) {
      uVar30 = uVar30 + 1;
      *(undefined1 *)((long)piVar18 + uVar30 * 8 + -1) = 0;
    }
    if (DAT_0094aad0 != (char *)0x0) {
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006e2220("tzspec_len > 0","tzfile.c",0x186,"__tzfile_read");
      }
      pbVar15 = *(byte **)(puVar11 + 2);
      if (pbVar15 < *(byte **)(puVar11 + 4)) {
        *(byte **)(puVar11 + 2) = pbVar15 + 1;
        uVar9 = (uint)*pbVar15;
      }
      else {
        uVar9 = FUN_007067b0(puVar11);
      }
      if (((uVar9 != 10) ||
          (lVar14 = FUN_007a2290(DAT_0094aad0,1,lVar10 + -1,puVar11), pcVar12 = DAT_0094aad0,
          lVar10 + -1 != lVar14)) ||
         ((DAT_0094aad0[lVar10 + -1] = '\0', pcVar12 != (char *)0x0 && (*pcVar12 == '\0')))) {
        DAT_0094aad0 = (char *)0x0;
      }
    }
    FUN_006fd190();
    for (uVar30 = 0; uVar30 < DAT_0094ab08; uVar30 = uVar30 + 1) {
      lVar10 = FUN_007612e0();
      plVar27 = local_120;
      if (lVar10 == 0) goto LAB_00762258;
    }
    _PTR_DAT_0093ea00 = (undefined1  [16])0x0;
    lVar10 = DAT_0094ab18;
    do {
      do {
        if (lVar10 == 0) goto LAB_00762d67;
        lVar10 = lVar10 + -1;
        bVar2 = *(byte *)(DAT_0094ab00 + (ulong)DAT_0094ab10[lVar10] * 2 + 1);
      } while ((&PTR_DAT_0093ea00)[bVar2] != (undefined *)0x0);
      puVar19 = (undefined *)FUN_007612e0();
      (&PTR_DAT_0093ea00)[bVar2] = puVar19;
    } while ((&PTR_DAT_0093ea00)[(int)(1 - (uint)bVar2)] == (undefined *)0x0);
LAB_00762d67:
    if (PTR_DAT_0093ea00 == (undefined *)0x0) {
      uVar20 = FUN_007612e0();
      PTR_DAT_0093ea00 = (undefined *)uVar20;
    }
    if (PTR_DAT_0093ea08 == (undefined *)0x0) {
      PTR_DAT_0093ea08 = PTR_DAT_0093ea00;
    }
    if (DAT_0094ab18 == 0) {
      DAT_0094aae8 = (long)*DAT_0094ab00;
      DAT_0094aaf0 = DAT_0094aae8;
    }
    else {
      bVar21 = false;
      bVar3 = false;
      DAT_0094aae8 = 0;
      bVar4 = false;
      DAT_0094aaf0 = 0;
      pbVar15 = DAT_0094ab10 + DAT_0094ab18;
      bVar5 = false;
      do {
        if (bVar5) {
          if (bVar21) {
LAB_00762f24:
            if (bVar3) {
              DAT_0094aae8 = local_130;
            }
            if (bVar4) {
              DAT_0094aaf0 = local_138;
            }
            goto LAB_00762dab;
          }
          piVar18 = DAT_0094ab00 + (ulong)pbVar15[-1] * 2;
          if ((char)piVar18[1] != '\0') {
LAB_00762f5e:
            local_130 = (long)*piVar18;
            bVar3 = true;
            bVar21 = true;
            goto LAB_00762eaa;
          }
        }
        else {
          piVar18 = DAT_0094ab00 + (ulong)pbVar15[-1] * 2;
          if ((char)piVar18[1] == '\0') {
            local_138 = (long)*piVar18;
            bVar4 = true;
            bVar5 = true;
LAB_00762eaa:
            if ((bool)(bVar5 & bVar21)) goto LAB_00762f24;
          }
          else if (!bVar21) goto LAB_00762f5e;
        }
        pbVar15 = pbVar15 + -1;
      } while (pbVar15 != DAT_0094ab10);
      if (bVar3) {
        DAT_0094aae8 = local_130;
      }
      if (bVar4) {
        DAT_0094aaf0 = local_138;
      }
      if (!bVar21) {
        DAT_0094aae8 = DAT_0094aaf0;
      }
    }
LAB_00762dab:
    _DAT_0094aa40 = -DAT_0094aaf0;
    _DAT_0094aa48 = (uint)(DAT_0094aae8 != DAT_0094aaf0);
LAB_0076271f:
    DAT_0094aac8 = 1;
    FUN_007104f0(local_120);
    goto LAB_00762274;
  }
LAB_007622fa:
  FUN_006fd190(puVar11);
  plVar27 = local_120;
LAB_00762258:
  FUN_007104f0(plVar27);
  FUN_007104f0(DAT_0094b5b8);
  DAT_0094b5b8 = (ulong *)0x0;
LAB_00762274:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return;
}


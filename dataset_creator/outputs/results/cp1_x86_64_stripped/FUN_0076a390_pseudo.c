
/* WARNING: Type propagation algorithm not settling */

void FUN_0076a390(void)

{
  char *pcVar1;
  ushort uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  uint *puVar7;
  long lVar8;
  undefined1 *puVar9;
  char *pcVar10;
  char *pcVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  ulong uVar20;
  ushort *puVar21;
  long lVar22;
  char *unaff_RBX;
  char *pcVar23;
  long *plVar24;
  undefined8 **ppuVar25;
  uint uVar26;
  char *pcVar27;
  undefined *puVar28;
  long in_FS_OFFSET;
  bool bVar29;
  bool bVar30;
  long local_158;
  undefined8 *local_150;
  char local_12a;
  char local_129;
  undefined8 *local_128;
  long local_120;
  undefined8 *local_118;
  long local_110;
  char *local_108;
  undefined8 local_100;
  char *local_f8;
  char *local_f0;
  int local_e8;
  int local_e4;
  int local_e0;
  uint local_dc;
  undefined1 local_d8 [88];
  undefined8 local_80;
  undefined8 uStack_78;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_12a = '\0';
  local_128 = (undefined8 *)0x0;
  local_120 = 0;
  local_118 = (undefined8 *)0x0;
  local_110 = 0;
  local_129 = '\0';
  puVar7 = (uint *)FUN_006fda20("/etc/gai.conf","rce");
  if (puVar7 != (uint *)0x0) {
    uVar5 = FUN_00702290(puVar7);
    iVar6 = FUN_0076d7f0(uVar5,local_d8);
    if (iVar6 == 0) {
      local_108 = (char *)0x0;
      uVar26 = *puVar7;
      local_100 = 0;
      *puVar7 = uVar26 | 0x8000;
      if ((uVar26 & 0x10) == 0) {
        bVar30 = false;
        local_158 = 0;
        local_150 = (undefined8 *)0x0;
        do {
          lVar8 = FUN_007956f0(&local_108,&local_100,puVar7);
          pcVar23 = local_108;
          if (lVar8 < 1) break;
          puVar9 = (undefined1 *)thunk_FUN_00712710(local_108,0x23);
          if (puVar9 != (undefined1 *)0x0) {
            *puVar9 = 0;
            pcVar23 = local_108;
          }
          cVar4 = *pcVar23;
          puVar21 = *(ushort **)(in_FS_OFFSET + -0x40);
          uVar2 = puVar21[cVar4];
          while ((uVar2 & 0x2000) != 0) {
            pcVar23 = pcVar23 + 1;
            cVar4 = *pcVar23;
            uVar2 = puVar21[cVar4];
          }
          pcVar11 = pcVar23;
          if (cVar4 == '\0') {
            lVar22 = 0;
            pcVar27 = pcVar23;
            local_f8 = pcVar23;
          }
          else {
            while( true ) {
              cVar4 = pcVar11[1];
              lVar8 = (long)cVar4;
              pcVar27 = pcVar11 + 1;
              if ((uVar2 & 0x2000) != 0) break;
              if (cVar4 == '\0') {
                lVar22 = (long)pcVar27 - (long)pcVar23;
                local_f8 = pcVar27;
                if ((*puVar21 & 0x2000) == 0) goto LAB_0076a880;
                goto LAB_0076a53a;
              }
              uVar2 = puVar21[lVar8];
              pcVar11 = pcVar27;
            }
            *pcVar11 = '\0';
            puVar21 = *(ushort **)(in_FS_OFFSET + -0x40);
            lVar22 = (long)pcVar11 - (long)pcVar23;
            if ((*(byte *)((long)puVar21 + (long)cVar4 * 2 + 1) & 0x20) != 0) {
LAB_0076a53a:
              pcVar11 = pcVar11 + 2;
              do {
                pcVar27 = pcVar11;
                lVar8 = (long)*pcVar27;
                pcVar11 = pcVar27 + 1;
              } while ((*(byte *)((long)puVar21 + lVar8 * 2 + 1) & 0x20) != 0);
            }
            cVar4 = (char)lVar8;
            pcVar11 = pcVar27;
            while (local_f8 = pcVar11, cVar4 != '\0') {
              if ((*(byte *)((long)puVar21 + lVar8 * 2 + 1) & 0x20) != 0) {
                local_f8 = pcVar27;
                if (pcVar23 != pcVar11) {
                  pcVar10 = pcVar11 + 1;
                  *pcVar11 = '\0';
                  cVar4 = pcVar11[1];
                  puVar21 = *(ushort **)(in_FS_OFFSET + -0x40);
                  uVar2 = puVar21[cVar4];
                  goto joined_r0x0076a5b0;
                }
                goto LAB_0076a680;
              }
              cVar4 = pcVar11[1];
              lVar8 = (long)cVar4;
              pcVar11 = pcVar11 + 1;
            }
          }
LAB_0076a880:
          if (pcVar23 == local_f8) goto LAB_0076a680;
          if ((*puVar21 & 0x2000) == 0) {
            *local_f8 = '\0';
            lVar8 = lVar22 + -7;
            bVar29 = lVar8 == 0;
            pcVar10 = local_f8;
            if (bVar29) goto LAB_0076a8a8;
LAB_0076a629:
            if (bVar29 || SBORROW8(lVar22,7) != lVar8 < 0) {
              if (lVar22 == 5) {
                iVar6 = thunk_FUN_00712780(pcVar23,"label");
                if (iVar6 == 0) {
                  pcVar23 = &local_12a;
                  plVar24 = &local_120;
                  ppuVar25 = &local_128;
                  goto LAB_0076a7b2;
                }
              }
              else if ((lVar22 == 6) && (iVar6 = thunk_FUN_00712780(pcVar23,"reload"), iVar6 == 0))
              {
                iVar6 = thunk_FUN_00712780(pcVar27,"yes");
                DAT_0094ab64 = (uint)(iVar6 == 0);
                if (iVar6 == 0) {
                  DAT_0094ab60 = 1;
                }
              }
              goto LAB_0076a680;
            }
            if ((lVar22 != 10) || (iVar6 = thunk_FUN_00712780(pcVar23,"precedence"), iVar6 != 0))
            goto LAB_0076a680;
            pcVar23 = &local_129;
            plVar24 = &local_110;
            ppuVar25 = &local_118;
LAB_0076a7b2:
            cVar4 = FUN_00769640(ppuVar25,plVar24,pcVar23,pcVar27,pcVar10,&local_f8);
            if (cVar4 != '\0') goto LAB_0076a680;
LAB_0076a7c7:
            FUN_007104f0(local_108);
            FUN_006fd190(puVar7);
            puVar16 = local_128;
            goto joined_r0x0076a7f4;
          }
          do {
            pcVar10 = local_f8 + 1;
            cVar4 = *pcVar10;
            uVar2 = puVar21[cVar4];
joined_r0x0076a5b0:
            local_f8 = pcVar10;
          } while ((uVar2 & 0x2000) != 0);
          pcVar11 = pcVar10;
          if (cVar4 != '\0') {
            bVar29 = false;
            while ((uVar2 & 0x2000) == 0) {
              pcVar1 = pcVar11 + 1;
              pcVar11 = pcVar11 + 1;
              local_f8 = pcVar11;
              if (*pcVar1 == '\0') goto LAB_0076a61c;
              bVar29 = true;
              unaff_RBX = pcVar11;
              uVar2 = puVar21[*pcVar1];
            }
            local_f8 = pcVar10;
            if (bVar29) {
              local_f8 = unaff_RBX;
            }
          }
LAB_0076a61c:
          *pcVar11 = '\0';
          lVar8 = lVar22 + -7;
          bVar29 = lVar22 == 7;
          if (!bVar29) goto LAB_0076a629;
LAB_0076a8a8:
          iVar6 = thunk_FUN_00712780(pcVar23,"scopev4");
          if (iVar6 == 0) {
            *(undefined4 *)(in_FS_OFFSET + -0x58) = 0;
            puVar9 = (undefined1 *)thunk_FUN_00712710(pcVar27,0x2f);
            if (puVar9 == (undefined1 *)0x0) {
              local_f8 = (char *)0x0;
            }
            else {
              local_f8 = puVar9 + 1;
              *puVar9 = 0;
            }
            pcVar23 = local_f8;
            iVar6 = FUN_007774c0(10,pcVar27,&local_e8);
            if (iVar6 == 0) {
              iVar6 = FUN_007774c0(2,pcVar27,&local_dc);
              if (iVar6 != 0) {
                if (pcVar23 == (char *)0x0) {
                  if (*local_f0 == '\0') {
                    uVar15 = 0x20;
                    goto LAB_0076ad68;
                  }
                }
                else {
                  uVar15 = FUN_006e9510(pcVar23,&local_f0,10);
                  if (((uVar15 != 0xffffffffffffffff) && (*local_f0 == '\0')) && (uVar15 < 0x21)) {
LAB_0076ad68:
                    uVar20 = FUN_006e9510(pcVar10,&local_f0,10);
                    if (((uVar20 != 0xffffffffffffffff) && (*local_f0 == '\0')) &&
                       (uVar20 < 0x80000000)) {
                      lVar8 = uVar15 + 0x60;
                      puVar16 = (undefined8 *)FUN_007101b0(0x18);
                      if (puVar16 == (undefined8 *)0x0) goto LAB_0076a7c7;
                      uVar26 = 0;
                      if (lVar8 != 0x60) {
                        uVar26 = -1 << (0x80U - (char)lVar8 & 0x1f);
                        uVar26 = uVar26 >> 0x18 | (uVar26 & 0xff0000) >> 8 | (uVar26 & 0xff00) << 8
                                 | uVar26 << 0x18;
                      }
                      local_158 = local_158 + 1;
                      *(int *)(puVar16 + 1) = (int)uVar20;
                      bVar30 = (bool)(bVar30 | lVar8 == 0x60);
                      puVar16[2] = local_150;
                      *puVar16 = CONCAT44(uVar26,local_dc & uVar26);
                      local_150 = puVar16;
                    }
                  }
                }
              }
            }
            else if ((local_e8 == 0 && local_e4 == 0) && (local_e0 == -0x10000)) {
              if (pcVar23 == (char *)0x0) {
                if (*local_f0 == '\0') {
                  lVar8 = 0x80;
                  goto LAB_0076a99f;
                }
              }
              else {
                lVar8 = FUN_006e9510(pcVar23,&local_f0,10);
                if (((lVar8 != -1) && (*local_f0 == '\0')) && (lVar8 - 0x60U < 0x21)) {
LAB_0076a99f:
                  uVar15 = FUN_006e9510(pcVar10,&local_f0,10);
                  if (((uVar15 != 0xffffffffffffffff) && (*local_f0 == '\0')) &&
                     (uVar15 < 0x80000000)) {
                    puVar16 = (undefined8 *)FUN_007101b0(0x18);
                    if (puVar16 == (undefined8 *)0x0) goto LAB_0076a7c7;
                    uVar26 = 0;
                    if (lVar8 != 0x60) {
                      uVar26 = -1 << (0x80U - (char)lVar8 & 0x1f);
                    }
                    uVar26 = uVar26 >> 0x18 | (uVar26 & 0xff0000) >> 8 | (uVar26 & 0xff00) << 8 |
                             uVar26 << 0x18;
                    local_158 = local_158 + 1;
                    *(int *)(puVar16 + 1) = (int)uVar15;
                    bVar30 = (bool)(bVar30 | lVar8 == 0x60);
                    puVar16[2] = local_150;
                    *puVar16 = CONCAT44(uVar26,local_dc & uVar26);
                    local_150 = puVar16;
                  }
                }
              }
            }
          }
LAB_0076a680:
        } while ((*puVar7 & 0x10) == 0);
        lVar8 = local_120;
        FUN_007104f0(local_108);
        FUN_006fd190(puVar7);
        if (lVar8 != 0) {
          iVar6 = (int)lVar8;
          if (local_12a == '\0') {
            lVar8 = lVar8 + 1;
            local_120 = lVar8;
            puVar12 = (undefined *)FUN_007101b0(lVar8 * 0x18);
            puVar16 = local_128;
            if (puVar12 != (undefined *)0x0) {
              *(undefined8 *)((undefined1 (*) [16])(puVar12 + (long)iVar6 * 0x18))[1] = 0x100000000;
              *(undefined1 (*) [16])(puVar12 + (long)iVar6 * 0x18) = (undefined1  [16])0x0;
              goto LAB_0076a6d6;
            }
          }
          else {
            puVar12 = (undefined *)FUN_007101b0(lVar8 * 0x18);
            puVar16 = local_128;
            if (puVar12 != (undefined *)0x0) {
LAB_0076a6d6:
              puVar16 = local_128;
              if (0 < iVar6) {
                lVar22 = (long)(int)(iVar6 - 1U) * 0x18;
                puVar13 = (undefined8 *)(puVar12 + lVar22);
                puVar18 = local_128;
                do {
                  uVar3 = puVar18[1];
                  puVar14 = puVar13 + -3;
                  *puVar13 = *puVar18;
                  puVar13[1] = uVar3;
                  puVar19 = puVar18 + 2;
                  puVar18 = (undefined8 *)puVar18[3];
                  puVar13[2] = *puVar19;
                  puVar13 = puVar14;
                } while (puVar14 !=
                         (undefined8 *)(puVar12 + (ulong)(iVar6 - 1U) * -0x18 + lVar22 + -0x18));
              }
              while (puVar16 != (undefined8 *)0x0) {
                puVar18 = (undefined8 *)puVar16[3];
                FUN_007104f0(puVar16);
                puVar16 = puVar18;
              }
              local_128 = (undefined8 *)0x0;
              FUN_006e8e20(puVar12,lVar8,0x18,FUN_007694c0);
              goto LAB_0076aab9;
            }
          }
joined_r0x0076a7f4:
          while (puVar18 = local_118, puVar16 != (undefined8 *)0x0) {
            puVar18 = (undefined8 *)puVar16[3];
            FUN_007104f0(puVar16);
            puVar16 = puVar18;
          }
          while (puVar18 != (undefined8 *)0x0) {
            puVar16 = (undefined8 *)puVar18[3];
            FUN_007104f0(puVar18);
            puVar18 = puVar16;
          }
          while (local_150 != (undefined8 *)0x0) {
            puVar16 = (undefined8 *)local_150[2];
            FUN_007104f0(local_150);
            local_150 = puVar16;
          }
          goto LAB_0076ac75;
        }
        puVar12 = &DAT_0082d6c0;
LAB_0076aab9:
        puVar28 = &DAT_0082d640;
        if (local_110 != 0) goto LAB_0076aad1;
LAB_0076ab90:
        if (local_158 == 0) {
          puVar17 = &DAT_0082d780;
        }
        else {
          if (bVar30) {
            puVar17 = (undefined *)FUN_007101b0(local_158 * 0xc);
            if (puVar17 == (undefined *)0x0) {
LAB_0076b00b:
              if (puVar12 != &DAT_0082d6c0) {
                FUN_007104f0(puVar12);
              }
              puVar16 = local_128;
              if (puVar28 != &DAT_0082d640) {
                FUN_007104f0(puVar28);
                puVar16 = local_128;
              }
              goto joined_r0x0076a7f4;
            }
            iVar6 = (int)local_158;
          }
          else {
            local_158 = local_158 + 1;
            puVar17 = (undefined *)FUN_007101b0(local_158 * 0xc);
            if (puVar17 == (undefined *)0x0) goto LAB_0076b00b;
            iVar6 = (int)local_158 + -1;
            *(undefined8 *)(puVar17 + (long)iVar6 * 0xc) = 0;
            *(undefined4 *)((long)(puVar17 + (long)iVar6 * 0xc) + 8) = 0xe;
          }
          if (0 < iVar6) {
            lVar8 = (long)(int)(iVar6 - 1U) * 0xc;
            puVar18 = (undefined8 *)(puVar17 + lVar8);
            puVar16 = local_150;
            do {
              puVar19 = (undefined8 *)((long)puVar18 + -0xc);
              *puVar18 = *puVar16;
              puVar13 = puVar16 + 1;
              puVar16 = (undefined8 *)puVar16[2];
              *(undefined4 *)(puVar18 + 1) = *(undefined4 *)puVar13;
              puVar18 = puVar19;
            } while (puVar19 != (undefined8 *)(puVar17 + (ulong)(iVar6 - 1U) * -0xc + lVar8 + -0xc))
            ;
          }
          while (local_150 != (undefined8 *)0x0) {
            puVar16 = (undefined8 *)local_150[2];
            FUN_007104f0(local_150);
            local_150 = puVar16;
          }
          FUN_006e8e20(puVar17,local_158,0xc,FUN_007694e0);
        }
      }
      else {
        FUN_006fd190(puVar7);
        if (local_110 != 0) {
          puVar12 = &DAT_0082d6c0;
          bVar30 = false;
          local_150 = (undefined8 *)0x0;
          local_158 = 0;
LAB_0076aad1:
          lVar8 = local_110;
          iVar6 = (int)local_110;
          if (local_129 == '\0') {
            lVar8 = local_110 + 1;
            local_110 = lVar8;
            puVar28 = (undefined *)FUN_007101b0(lVar8 * 0x18);
            if (puVar28 == (undefined *)0x0) goto LAB_0076af97;
            *(undefined8 *)((undefined1 (*) [16])(puVar28 + (long)iVar6 * 0x18))[1] = 0x2800000000;
            *(undefined1 (*) [16])(puVar28 + (long)iVar6 * 0x18) = (undefined1  [16])0x0;
          }
          else {
            puVar28 = (undefined *)FUN_007101b0(local_110 * 0x18);
            if (puVar28 == (undefined *)0x0) {
LAB_0076af97:
              puVar16 = local_128;
              if (puVar12 != &DAT_0082d6c0) {
                FUN_007104f0(puVar12);
                puVar16 = local_128;
              }
              goto joined_r0x0076a7f4;
            }
          }
          puVar16 = local_118;
          if (0 < iVar6) {
            lVar22 = (long)(int)(iVar6 - 1U) * 0x18;
            puVar13 = (undefined8 *)(puVar28 + lVar22);
            puVar18 = local_118;
            do {
              uVar3 = puVar18[1];
              puVar14 = puVar13 + -3;
              *puVar13 = *puVar18;
              puVar13[1] = uVar3;
              puVar19 = puVar18 + 2;
              puVar18 = (undefined8 *)puVar18[3];
              puVar13[2] = *puVar19;
              puVar13 = puVar14;
            } while ((undefined8 *)(puVar28 + (ulong)(iVar6 - 1U) * -0x18 + lVar22 + -0x18) !=
                     puVar14);
          }
          while (puVar16 != (undefined8 *)0x0) {
            puVar18 = (undefined8 *)puVar16[3];
            FUN_007104f0(puVar16);
            puVar16 = puVar18;
          }
          local_118 = (undefined8 *)0x0;
          FUN_006e8e20(puVar28,lVar8,0x18,FUN_007694c0);
          goto LAB_0076ab90;
        }
        puVar28 = &DAT_0082d640;
        puVar12 = &DAT_0082d6c0;
        puVar17 = &DAT_0082d780;
      }
      bVar30 = DAT_0094ab70 != &DAT_0082d6c0;
      DAT_0094ab70 = puVar12;
      if (bVar30) {
        FUN_007104f0();
      }
      bVar30 = DAT_0094ab68 != &DAT_0082d640;
      DAT_0094ab68 = puVar28;
      if (bVar30) {
        FUN_007104f0();
      }
      bVar30 = DAT_0094ab78 != &DAT_0082d780;
      DAT_0094ab78 = puVar17;
      if (bVar30) {
        FUN_007104f0();
      }
      DAT_0094ab50 = local_80;
      DAT_0094ab58 = uStack_78;
      goto LAB_0076acc4;
    }
    FUN_006fd190(puVar7);
  }
LAB_0076ac75:
  if (DAT_0094ab70 != &DAT_0082d6c0) {
    DAT_0094ab70 = &DAT_0082d6c0;
    FUN_007104f0();
  }
  if (DAT_0094ab68 != &DAT_0082d640) {
    DAT_0094ab68 = &DAT_0082d640;
    FUN_007104f0();
  }
  if (DAT_0094ab78 != &DAT_0082d780) {
    DAT_0094ab78 = &DAT_0082d780;
    FUN_007104f0();
  }
LAB_0076acc4:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}



undefined8 FUN_0078b640(uint *param_1,int param_2,int param_3)

{
  short sVar1;
  ushort uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  short *psVar7;
  uint *puVar8;
  short *psVar9;
  uint *extraout_RDX;
  long lVar10;
  uint unaff_EBX;
  short *psVar11;
  uint *puVar12;
  char *pcVar13;
  long lVar14;
  undefined8 uVar15;
  char *pcVar16;
  uint *puVar17;
  uint *puVar18;
  ulong uVar19;
  uint *puVar20;
  uint *puVar21;
  uint *puVar22;
  uint *puVar23;
  uint *puVar24;
  uint *puVar25;
  long lVar26;
  undefined8 local_c8;
  uint *local_c0;
  ushort local_a2;
  uint *local_a0;
  undefined1 local_65 [13];
  uint local_58 [10];
  
  if (*(long *)(param_1 + 0x1a) == 0) {
    return 0;
  }
  lVar26 = *(long *)(*(long *)(param_1 + 0x1a) + 8);
  if ((*(byte *)((long)param_1 + 0x31e) & 0x20) != 0) {
    lVar26 = lVar26 + *(long *)param_1;
  }
  lVar14 = *(long *)(param_1 + 0x58);
  lVar3 = *(long *)(param_1 + 0x5c);
  if (lVar14 == 0) {
    puVar25 = (uint *)0x0;
    if (lVar3 == 0) {
      return 0;
    }
    goto LAB_0078bb70;
  }
  psVar7 = (short *)(*(long *)(lVar14 + 8) + *(long *)param_1);
  if (*psVar7 == 1) {
    puVar25 = (uint *)0x0;
    do {
      uVar5 = *(uint *)(psVar7 + 2);
      for (puVar8 = (uint *)(&PTR_DAT_0093eb60)[*(long *)(param_1 + 0xc) * 0x14];
          puVar8 != (uint *)0x0; puVar8 = *(uint **)(puVar8 + 6)) {
        iVar6 = FUN_007b93e0((ulong)uVar5 + lVar26,puVar8);
        if (iVar6 != 0) goto LAB_0078b70c;
      }
      if (param_1[0xb2] == 0) {
LAB_0078ba78:
                    /* WARNING: Subroutine does not return */
        FUN_006e2220("needed != NULL","dl-version.c",0xcc,"_dl_check_map_versions");
      }
      uVar19 = 0;
      while( true ) {
        iVar6 = FUN_007b93e0((ulong)uVar5 + lVar26,
                             *(undefined8 *)(*(long *)(param_1 + 0xb0) + uVar19 * 8));
        if (iVar6 != 0) break;
        uVar4 = (int)uVar19 + 1;
        uVar19 = (ulong)uVar4;
        if (param_1[0xb2] <= uVar4) goto LAB_0078ba78;
      }
      puVar8 = *(uint **)(*(long *)(param_1 + 0xb0) + uVar19 * 8);
      if (puVar8 == (uint *)0x0) goto LAB_0078ba78;
LAB_0078b70c:
      if ((param_3 == 0) || ((*(byte *)((long)puVar8 + 0x31d) & 0x20) == 0)) {
        puVar12 = (uint *)((ulong)*(uint *)(psVar7 + 4) + (long)psVar7);
        do {
          pcVar16 = *(char **)(param_1 + 2);
          local_a2 = (ushort)puVar12[1];
          puVar22 = (uint *)((ulong)puVar12[2] + lVar26);
          puVar18 = *(uint **)(puVar8 + 10);
          uVar5 = *puVar12;
          psVar11 = (short *)(ulong)uVar5;
          if (((char)*(uint *)pcVar16 == '\0') &&
             (pcVar16 = *(char **)PTR_PTR_0093adf8, (uint *)pcVar16 == (uint *)0x0)) {
            pcVar16 = "<main program>";
          }
          puVar20 = *(uint **)(*(long *)(puVar18 + 0x1a) + 8);
          if ((*(byte *)((long)puVar18 + 0x31e) & 0x20) != 0) {
            puVar20 = (uint *)((long)puVar20 + *(long *)puVar18);
          }
          local_c8 = (uint *)(CONCAT44(local_c8._4_4_,DAT_0094b0e4) & 0xffffffff00000010);
          if ((DAT_0094b0e4 & 0x10) != 0) {
            pcVar13 = *(char **)(puVar18 + 2);
            if ((*pcVar13 == '\0') && (pcVar13 = *(char **)PTR_PTR_0093adf8, pcVar13 == (char *)0x0)
               ) {
              pcVar13 = "<main program>";
            }
            FUN_00787060("checking for version `%s\' in file %s [%lu] required by file %s [%lu]\n",
                         puVar22,pcVar13,*(undefined8 *)(puVar18 + 0xc),pcVar16,
                         *(undefined8 *)(param_1 + 0xc));
            local_c0 = (uint *)pcVar16;
            local_a0 = puVar8;
          }
          puVar21 = puVar20;
          puVar23 = puVar22;
          if (*(long *)(puVar18 + 0x5c) == 0) {
            psVar9 = psVar11;
            if (param_2 != 0) goto LAB_0078baae;
          }
          else {
            lVar10 = *(long *)(*(long *)(puVar18 + 0x5c) + 8);
            if (lVar10 == 0) {
LAB_0078bef7:
                    /* WARNING: Subroutine does not return */
              FUN_006e2220("def_offset != 0","dl-version.c",0x57,"match_symbol");
            }
            psVar9 = (short *)(lVar10 + *(long *)puVar18);
            puVar24 = puVar25;
            if (*psVar9 != 1) {
LAB_0078b91f:
              local_65[0] = 0;
              FUN_00795230(*psVar9,local_65,10,0);
              pcVar16 = *(char **)(puVar18 + 2);
              if ((*pcVar16 == '\0') &&
                 (pcVar16 = *(char **)PTR_PTR_0093adf8, pcVar16 == (char *)0x0)) {
                pcVar16 = "<main program>";
              }
              FUN_007843e0(local_58,pcVar16,"unsupported version %s of Verdef record");
              psVar9 = psVar11;
              puVar25 = puVar24;
LAB_0078b976:
              do {
                puVar22 = local_58;
                FUN_0078dac0(0,puVar22,"version lookup error");
                puVar20 = extraout_RDX;
                puVar12 = puVar18;
                puVar8 = puVar23;
LAB_0078b990:
                iVar6 = thunk_FUN_00712780(puVar22,(char *)((ulong)*(uint *)((long)psVar9 +
                                                                            (ulong)*(uint *)(psVar9 
                                                  + 6)) + (long)puVar8));
                puVar18 = local_c8;
                puVar23 = puVar8;
                if (iVar6 != 0) goto LAB_0078b903;
                do {
                  while( true ) {
                    uVar5 = *(ushort *)((long)puVar12 + 6) & 0x7fff;
                    uVar4 = (uint)puVar25;
                    puVar25 = (uint *)((ulong)puVar25 & 0xffffffff);
                    if (uVar4 < uVar5) {
                      puVar25 = (uint *)(ulong)uVar5;
                    }
                    param_1 = local_c0;
                    if (puVar12[3] == 0) goto LAB_0078bcb5;
                    puVar12 = (uint *)((long)puVar12 + (ulong)puVar12[3]);
LAB_0078b86c:
                    local_a2 = (ushort)puVar12[1];
                    puVar22 = (uint *)((ulong)puVar12[2] + lVar26);
                    puVar21 = (uint *)(ulong)*puVar12;
                    pcVar16 = (char *)puVar20;
                    if (((char)*puVar20 == '\0') &&
                       (pcVar16 = *(char **)PTR_PTR_0093adf8, (uint *)pcVar16 == (uint *)0x0)) {
                      pcVar16 = "<main program>";
                    }
                    puVar17 = *(uint **)(*(long *)(puVar18 + 0x1a) + 8);
                    if ((*(byte *)((long)puVar18 + 0x31e) & 0x20) != 0) {
                      puVar17 = (uint *)((long)puVar17 + *(long *)puVar18);
                    }
                    puVar23 = puVar8;
                    if (*(long *)(puVar18 + 0x5c) == 0) break;
                    lVar10 = *(long *)(*(long *)(puVar18 + 0x5c) + 8);
                    if (lVar10 == 0) goto LAB_0078bef7;
                    psVar9 = (short *)(lVar10 + *(long *)puVar18);
                    sVar1 = *psVar9;
                    puVar24 = puVar25;
                    while( true ) {
                      puVar8 = puVar17;
                      psVar11 = psVar9;
                      if (sVar1 != 1) goto LAB_0078b91f;
                      puVar23 = puVar8;
                      puVar25 = puVar24;
                      local_c8 = puVar18;
                      local_a0 = (uint *)pcVar16;
                      if (*(int *)(psVar9 + 4) == (int)puVar21) goto LAB_0078b990;
LAB_0078b903:
                      puVar18 = local_c8;
                      if (*(uint *)(psVar9 + 8) == 0) break;
                      psVar9 = (short *)((long)psVar9 + (ulong)*(uint *)(psVar9 + 8));
                      sVar1 = *psVar9;
                      pcVar16 = (char *)local_a0;
                      puVar17 = puVar23;
                      puVar24 = puVar25;
                    }
                    pcVar16 = (char *)local_a0;
                    if ((local_a2 & 2) == 0) goto LAB_0078be72;
                    puVar8 = puVar23;
                    if (param_2 != 0) goto LAB_0078bd07;
                  }
                } while (param_2 == 0);
LAB_0078baae:
                pcVar16 = *(char **)(puVar18 + 2);
                if ((*pcVar16 == '\0') &&
                   (pcVar16 = *(char **)PTR_PTR_0093adf8, pcVar16 == (char *)0x0)) {
                  pcVar16 = "<main program>";
                }
                FUN_007843e0(local_58,pcVar16,"no version information available (required by %s)");
              } while( true );
            }
            puVar23 = (uint *)(ulong)uVar5;
            while( true ) {
              local_c0 = puVar12;
              local_a0 = puVar18;
              if ((uVar5 == *(uint *)(psVar9 + 4)) &&
                 (iVar6 = thunk_FUN_00712780(puVar22,(char *)((ulong)*(uint *)((long)psVar9 +
                                                                              (ulong)*(uint *)(
                                                  psVar9 + 6)) + (long)puVar20)), iVar6 == 0))
              goto LAB_0078b832;
              puVar21 = puVar22;
              if (*(uint *)(psVar9 + 8) == 0) break;
              psVar9 = (short *)((long)psVar9 + (ulong)*(uint *)(psVar9 + 8));
              psVar11 = psVar9;
              puVar24 = puVar8;
              if (*psVar9 != 1) goto LAB_0078b91f;
            }
            if ((local_a2 & 2) == 0) goto LAB_0078be72;
            if (param_2 != 0) goto LAB_0078bd07;
          }
LAB_0078b832:
          uVar4 = *(ushort *)((long)puVar12 + 6) & 0x7fff;
          uVar5 = (uint)puVar25;
          if ((uint)puVar25 < uVar4) {
            uVar5 = uVar4;
          }
          puVar25 = (uint *)(ulong)uVar5;
          if (puVar12[3] == 0) break;
          puVar12 = (uint *)((long)puVar12 + (ulong)puVar12[3]);
          if ((int)local_c8 == 0) {
            puVar20 = *(uint **)(param_1 + 2);
            puVar18 = *(uint **)(puVar8 + 10);
            puVar8 = puVar20;
            local_c0 = param_1;
            goto LAB_0078b86c;
          }
        } while( true );
      }
LAB_0078bcb5:
      if (*(uint *)(psVar7 + 6) == 0) goto LAB_0078bb58;
      psVar7 = (short *)((long)psVar7 + (ulong)*(uint *)(psVar7 + 6));
    } while( true );
  }
  local_65[0] = 0;
  uVar15 = FUN_00795230(*psVar7,local_65,10,0);
  pcVar16 = *(char **)(param_1 + 2);
  if ((*pcVar16 == '\0') && (pcVar16 = *(char **)PTR_PTR_0093adf8, pcVar16 == (char *)0x0)) {
    pcVar16 = "<main program>";
  }
  FUN_007843e0(local_58,pcVar16,"unsupported version %s of Verneed record",uVar15);
  uVar15 = 0;
LAB_0078be42:
  puVar25 = local_58;
  lVar10 = FUN_0078dac0(uVar15,puVar25,0);
LAB_0078be4c:
  lVar10 = lVar10 + *(long *)param_1;
LAB_0078bbe7:
  *(long *)(param_1 + 0xd2) = lVar10;
  if (lVar14 != 0) {
    lVar14 = *(long *)(lVar14 + 8) + *(long *)param_1;
    while( true ) {
      puVar8 = (uint *)((ulong)*(uint *)(lVar14 + 8) + lVar14);
      while( true ) {
        uVar2 = *(ushort *)((long)puVar8 + 6);
        if ((uVar2 & 0x7fff) < unaff_EBX) {
          uVar5 = *puVar8;
          puVar12 = puVar25 + (ulong)(uVar2 & 0x7fff) * 6;
          puVar12[3] = uVar2 & 0x8000;
          uVar4 = puVar8[2];
          puVar12[2] = uVar5;
          *(ulong *)puVar12 = (ulong)uVar4 + lVar26;
          *(ulong *)(puVar12 + 4) = (ulong)*(uint *)(lVar14 + 4) + lVar26;
          uVar5 = puVar8[3];
        }
        else {
          uVar5 = puVar8[3];
        }
        if (uVar5 == 0) break;
        puVar8 = (uint *)((long)puVar8 + (ulong)uVar5);
      }
      if (*(uint *)(lVar14 + 0xc) == 0) break;
      lVar14 = lVar14 + (ulong)*(uint *)(lVar14 + 0xc);
    }
  }
  if (lVar3 != 0) {
    lVar14 = *(long *)(lVar3 + 8) + *(long *)param_1;
    while( true ) {
      if ((*(byte *)(lVar14 + 2) & 1) == 0) {
        uVar5 = *(uint *)(lVar14 + (ulong)*(uint *)(lVar14 + 0xc));
        puVar8 = puVar25 + (ulong)(*(ushort *)(lVar14 + 4) & 0x7fff) * 6;
        puVar8[2] = *(uint *)(lVar14 + 8);
        *(ulong *)puVar8 = (ulong)uVar5 + lVar26;
        puVar8[4] = 0;
        puVar8[5] = 0;
        uVar5 = *(uint *)(lVar14 + 0x10);
      }
      else {
        uVar5 = *(uint *)(lVar14 + 0x10);
      }
      if (uVar5 == 0) break;
      lVar14 = lVar14 + (ulong)uVar5;
    }
  }
  return 0;
LAB_0078be72:
  pcVar13 = *(char **)(puVar18 + 2);
  if ((*pcVar13 == '\0') && (pcVar13 = *(char **)PTR_PTR_0093adf8, pcVar13 == (char *)0x0)) {
    pcVar13 = "<main program>";
  }
  FUN_007843e0(local_58,pcVar13,"version `%s\' not found (required by %s)",puVar22,pcVar16);
  goto LAB_0078b976;
LAB_0078bd07:
  pcVar13 = *(char **)(puVar18 + 2);
  if ((*pcVar13 == '\0') && (pcVar13 = *(char **)PTR_PTR_0093adf8, pcVar13 == (char *)0x0)) {
    pcVar13 = "<main program>";
  }
  FUN_007843e0(local_58,pcVar13,"weak version `%s\' not found (required by %s)",puVar22,pcVar16);
  goto LAB_0078b976;
LAB_0078bb58:
  iVar6 = (int)puVar25;
  if (lVar3 != 0) {
LAB_0078bb70:
    lVar10 = *(long *)(lVar3 + 8) + *(long *)param_1;
    while( true ) {
      uVar5 = *(ushort *)(lVar10 + 4) & 0x7fff;
      if ((uint)puVar25 < uVar5) {
        puVar25 = (uint *)(ulong)uVar5;
      }
      iVar6 = (int)puVar25;
      if (*(uint *)(lVar10 + 0x10) == 0) break;
      lVar10 = lVar10 + (ulong)*(uint *)(lVar10 + 0x10);
    }
  }
  if (iVar6 == 0) {
    return 0;
  }
  unaff_EBX = iVar6 + 1;
  puVar25 = (uint *)FUN_00711600(unaff_EBX,0x18);
  *(uint **)(param_1 + 0xba) = puVar25;
  if (puVar25 == (uint *)0x0) {
    pcVar16 = *(char **)(param_1 + 2);
    if ((*pcVar16 == '\0') && (pcVar16 = *(char **)PTR_PTR_0093adf8, pcVar16 == (char *)0x0)) {
      pcVar16 = "<main program>";
    }
    FUN_00784320(local_58,pcVar16,"cannot allocate version reference table");
    uVar15 = 0xc;
    goto LAB_0078be42;
  }
  param_1[0xbc] = unaff_EBX;
  lVar10 = *(long *)(*(long *)(param_1 + 0x74) + 8);
  if ((*(byte *)((long)param_1 + 0x31e) & 0x20) == 0) goto LAB_0078bbe7;
  goto LAB_0078be4c;
}


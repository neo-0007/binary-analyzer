
undefined8 _dl_check_map_versions(uint *param_1,int param_2,int param_3)

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
  uint *__s1;
  uint *puVar22;
  uint *puVar23;
  uint *puVar24;
  long lVar25;
  undefined8 local_c8;
  uint *local_c0;
  ushort local_a2;
  uint *local_a0;
  undefined1 local_65 [13];
  uint local_58 [10];
  
  if (*(long *)(param_1 + 0x1a) == 0) {
    return 0;
  }
  lVar25 = *(long *)(*(long *)(param_1 + 0x1a) + 8);
  if ((*(byte *)((long)param_1 + 0x31e) & 0x20) != 0) {
    lVar25 = lVar25 + *(long *)param_1;
  }
  lVar14 = *(long *)(param_1 + 0x58);
  lVar3 = *(long *)(param_1 + 0x5c);
  if (lVar14 == 0) {
    puVar24 = (uint *)0x0;
    if (lVar3 == 0) {
      return 0;
    }
    goto LAB_00782240;
  }
  psVar7 = (short *)(*(long *)(lVar14 + 8) + *(long *)param_1);
  if (*psVar7 == 1) {
    puVar24 = (uint *)0x0;
    do {
      uVar5 = *(uint *)(psVar7 + 2);
      for (puVar8 = (uint *)(&_dl_ns)[*(long *)(param_1 + 0xc) * 0x14]; puVar8 != (uint *)0x0;
          puVar8 = *(uint **)(puVar8 + 6)) {
        iVar6 = _dl_name_match_p((ulong)uVar5 + lVar25,puVar8);
        if (iVar6 != 0) goto LAB_00781ddc;
      }
      if (param_1[0xb2] == 0) {
LAB_00782148:
                    /* WARNING: Subroutine does not return */
        __assert_fail("needed != NULL","dl-version.c",0xcc,"_dl_check_map_versions");
      }
      uVar19 = 0;
      while( true ) {
        iVar6 = _dl_name_match_p((ulong)uVar5 + lVar25,
                                 *(undefined8 *)(*(long *)(param_1 + 0xb0) + uVar19 * 8));
        if (iVar6 != 0) break;
        uVar4 = (int)uVar19 + 1;
        uVar19 = (ulong)uVar4;
        if (param_1[0xb2] <= uVar4) goto LAB_00782148;
      }
      puVar8 = *(uint **)(*(long *)(param_1 + 0xb0) + uVar19 * 8);
      if (puVar8 == (uint *)0x0) goto LAB_00782148;
LAB_00781ddc:
      if ((param_3 == 0) || ((*(byte *)((long)puVar8 + 0x31d) & 0x20) == 0)) {
        puVar12 = (uint *)((ulong)*(uint *)(psVar7 + 4) + (long)psVar7);
        do {
          pcVar16 = *(char **)(param_1 + 2);
          local_a2 = (ushort)puVar12[1];
          __s1 = (uint *)((ulong)puVar12[2] + lVar25);
          puVar18 = *(uint **)(puVar8 + 10);
          uVar5 = *puVar12;
          psVar11 = (short *)(ulong)uVar5;
          if (((char)*(uint *)pcVar16 == '\0') &&
             (pcVar16 = *(char **)_dl_argv, (uint *)pcVar16 == (uint *)0x0)) {
            pcVar16 = "<main program>";
          }
          puVar20 = *(uint **)(*(long *)(puVar18 + 0x1a) + 8);
          if ((*(byte *)((long)puVar18 + 0x31e) & 0x20) != 0) {
            puVar20 = (uint *)((long)puVar20 + *(long *)puVar18);
          }
          local_c8 = (uint *)(CONCAT44(local_c8._4_4_,_dl_debug_mask) & 0xffffffff00000010);
          if ((_dl_debug_mask & 0x10) != 0) {
            pcVar13 = *(char **)(puVar18 + 2);
            if ((*pcVar13 == '\0') && (pcVar13 = *(char **)_dl_argv, pcVar13 == (char *)0x0)) {
              pcVar13 = "<main program>";
            }
            _dl_debug_printf("checking for version `%s\' in file %s [%lu] required by file %s [%lu]\n"
                             ,__s1,pcVar13,*(undefined8 *)(puVar18 + 0xc),pcVar16,
                             *(undefined8 *)(param_1 + 0xc));
            local_c0 = (uint *)pcVar16;
            local_a0 = puVar8;
          }
          puVar21 = puVar20;
          puVar22 = __s1;
          if (*(long *)(puVar18 + 0x5c) == 0) {
            psVar9 = psVar11;
            if (param_2 != 0) goto LAB_0078217e;
          }
          else {
            lVar10 = *(long *)(*(long *)(puVar18 + 0x5c) + 8);
            if (lVar10 == 0) {
LAB_007825c7:
                    /* WARNING: Subroutine does not return */
              __assert_fail("def_offset != 0","dl-version.c",0x57,"match_symbol");
            }
            psVar9 = (short *)(lVar10 + *(long *)puVar18);
            puVar23 = puVar24;
            if (*psVar9 != 1) {
LAB_00781fef:
              local_65[0] = 0;
              _itoa_word(*psVar9,local_65,10,0);
              pcVar16 = *(char **)(puVar18 + 2);
              if ((*pcVar16 == '\0') && (pcVar16 = *(char **)_dl_argv, pcVar16 == (char *)0x0)) {
                pcVar16 = "<main program>";
              }
              _dl_exception_create_format
                        (local_58,pcVar16,"unsupported version %s of Verdef record");
              psVar9 = psVar11;
              puVar24 = puVar23;
LAB_00782046:
              do {
                __s1 = local_58;
                _dl_signal_exception(0,__s1,"version lookup error");
                puVar20 = extraout_RDX;
                puVar12 = puVar18;
                puVar8 = puVar22;
LAB_00782060:
                iVar6 = strcmp((char *)__s1,
                               (char *)((ulong)*(uint *)((long)psVar9 + (ulong)*(uint *)(psVar9 + 6)
                                                        ) + (long)puVar8));
                puVar18 = local_c8;
                puVar22 = puVar8;
                if (iVar6 != 0) goto LAB_00781fd3;
                do {
                  while( true ) {
                    uVar5 = *(ushort *)((long)puVar12 + 6) & 0x7fff;
                    uVar4 = (uint)puVar24;
                    puVar24 = (uint *)((ulong)puVar24 & 0xffffffff);
                    if (uVar4 < uVar5) {
                      puVar24 = (uint *)(ulong)uVar5;
                    }
                    param_1 = local_c0;
                    if (puVar12[3] == 0) goto LAB_00782385;
                    puVar12 = (uint *)((long)puVar12 + (ulong)puVar12[3]);
LAB_00781f3c:
                    local_a2 = (ushort)puVar12[1];
                    __s1 = (uint *)((ulong)puVar12[2] + lVar25);
                    puVar21 = (uint *)(ulong)*puVar12;
                    pcVar16 = (char *)puVar20;
                    if (((char)*puVar20 == '\0') &&
                       (pcVar16 = *(char **)_dl_argv, (uint *)pcVar16 == (uint *)0x0)) {
                      pcVar16 = "<main program>";
                    }
                    puVar17 = *(uint **)(*(long *)(puVar18 + 0x1a) + 8);
                    if ((*(byte *)((long)puVar18 + 0x31e) & 0x20) != 0) {
                      puVar17 = (uint *)((long)puVar17 + *(long *)puVar18);
                    }
                    puVar22 = puVar8;
                    if (*(long *)(puVar18 + 0x5c) == 0) break;
                    lVar10 = *(long *)(*(long *)(puVar18 + 0x5c) + 8);
                    if (lVar10 == 0) goto LAB_007825c7;
                    psVar9 = (short *)(lVar10 + *(long *)puVar18);
                    sVar1 = *psVar9;
                    puVar23 = puVar24;
                    while( true ) {
                      puVar8 = puVar17;
                      psVar11 = psVar9;
                      if (sVar1 != 1) goto LAB_00781fef;
                      puVar22 = puVar8;
                      puVar24 = puVar23;
                      local_c8 = puVar18;
                      local_a0 = (uint *)pcVar16;
                      if (*(int *)(psVar9 + 4) == (int)puVar21) goto LAB_00782060;
LAB_00781fd3:
                      puVar18 = local_c8;
                      if (*(uint *)(psVar9 + 8) == 0) break;
                      psVar9 = (short *)((long)psVar9 + (ulong)*(uint *)(psVar9 + 8));
                      sVar1 = *psVar9;
                      pcVar16 = (char *)local_a0;
                      puVar17 = puVar22;
                      puVar23 = puVar24;
                    }
                    pcVar16 = (char *)local_a0;
                    if ((local_a2 & 2) == 0) goto LAB_00782542;
                    puVar8 = puVar22;
                    if (param_2 != 0) goto LAB_007823d7;
                  }
                } while (param_2 == 0);
LAB_0078217e:
                pcVar16 = *(char **)(puVar18 + 2);
                if ((*pcVar16 == '\0') && (pcVar16 = *(char **)_dl_argv, pcVar16 == (char *)0x0)) {
                  pcVar16 = "<main program>";
                }
                _dl_exception_create_format
                          (local_58,pcVar16,"no version information available (required by %s)");
              } while( true );
            }
            puVar22 = (uint *)(ulong)uVar5;
            while( true ) {
              local_c0 = puVar12;
              local_a0 = puVar18;
              if ((uVar5 == *(uint *)(psVar9 + 4)) &&
                 (iVar6 = strcmp((char *)__s1,
                                 (char *)((ulong)*(uint *)((long)psVar9 +
                                                          (ulong)*(uint *)(psVar9 + 6)) +
                                         (long)puVar20)), iVar6 == 0)) goto LAB_00781f02;
              puVar21 = __s1;
              if (*(uint *)(psVar9 + 8) == 0) break;
              psVar9 = (short *)((long)psVar9 + (ulong)*(uint *)(psVar9 + 8));
              psVar11 = psVar9;
              puVar23 = puVar8;
              if (*psVar9 != 1) goto LAB_00781fef;
            }
            if ((local_a2 & 2) == 0) goto LAB_00782542;
            if (param_2 != 0) goto LAB_007823d7;
          }
LAB_00781f02:
          uVar4 = *(ushort *)((long)puVar12 + 6) & 0x7fff;
          uVar5 = (uint)puVar24;
          if ((uint)puVar24 < uVar4) {
            uVar5 = uVar4;
          }
          puVar24 = (uint *)(ulong)uVar5;
          if (puVar12[3] == 0) break;
          puVar12 = (uint *)((long)puVar12 + (ulong)puVar12[3]);
          if ((int)local_c8 == 0) {
            puVar20 = *(uint **)(param_1 + 2);
            puVar18 = *(uint **)(puVar8 + 10);
            puVar8 = puVar20;
            local_c0 = param_1;
            goto LAB_00781f3c;
          }
        } while( true );
      }
LAB_00782385:
      if (*(uint *)(psVar7 + 6) == 0) goto LAB_00782228;
      psVar7 = (short *)((long)psVar7 + (ulong)*(uint *)(psVar7 + 6));
    } while( true );
  }
  local_65[0] = 0;
  uVar15 = _itoa_word(*psVar7,local_65,10,0);
  pcVar16 = *(char **)(param_1 + 2);
  if ((*pcVar16 == '\0') && (pcVar16 = *(char **)_dl_argv, pcVar16 == (char *)0x0)) {
    pcVar16 = "<main program>";
  }
  _dl_exception_create_format(local_58,pcVar16,"unsupported version %s of Verneed record",uVar15);
  uVar15 = 0;
LAB_00782512:
  puVar24 = local_58;
  lVar10 = _dl_signal_exception(uVar15,puVar24,0);
LAB_0078251c:
  lVar10 = lVar10 + *(long *)param_1;
LAB_007822b7:
  *(long *)(param_1 + 0xd2) = lVar10;
  if (lVar14 != 0) {
    lVar14 = *(long *)(lVar14 + 8) + *(long *)param_1;
    while( true ) {
      puVar8 = (uint *)((ulong)*(uint *)(lVar14 + 8) + lVar14);
      while( true ) {
        uVar2 = *(ushort *)((long)puVar8 + 6);
        if ((uVar2 & 0x7fff) < unaff_EBX) {
          uVar5 = *puVar8;
          puVar12 = puVar24 + (ulong)(uVar2 & 0x7fff) * 6;
          puVar12[3] = uVar2 & 0x8000;
          uVar4 = puVar8[2];
          puVar12[2] = uVar5;
          *(ulong *)puVar12 = (ulong)uVar4 + lVar25;
          *(ulong *)(puVar12 + 4) = (ulong)*(uint *)(lVar14 + 4) + lVar25;
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
        puVar8 = puVar24 + (ulong)(*(ushort *)(lVar14 + 4) & 0x7fff) * 6;
        puVar8[2] = *(uint *)(lVar14 + 8);
        *(ulong *)puVar8 = (ulong)uVar5 + lVar25;
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
LAB_00782542:
  pcVar13 = *(char **)(puVar18 + 2);
  if ((*pcVar13 == '\0') && (pcVar13 = *(char **)_dl_argv, pcVar13 == (char *)0x0)) {
    pcVar13 = "<main program>";
  }
  _dl_exception_create_format
            (local_58,pcVar13,"version `%s\' not found (required by %s)",__s1,pcVar16);
  goto LAB_00782046;
LAB_007823d7:
  pcVar13 = *(char **)(puVar18 + 2);
  if ((*pcVar13 == '\0') && (pcVar13 = *(char **)_dl_argv, pcVar13 == (char *)0x0)) {
    pcVar13 = "<main program>";
  }
  _dl_exception_create_format
            (local_58,pcVar13,"weak version `%s\' not found (required by %s)",__s1,pcVar16);
  goto LAB_00782046;
LAB_00782228:
  iVar6 = (int)puVar24;
  if (lVar3 != 0) {
LAB_00782240:
    lVar10 = *(long *)(lVar3 + 8) + *(long *)param_1;
    while( true ) {
      uVar5 = *(ushort *)(lVar10 + 4) & 0x7fff;
      if ((uint)puVar24 < uVar5) {
        puVar24 = (uint *)(ulong)uVar5;
      }
      iVar6 = (int)puVar24;
      if (*(uint *)(lVar10 + 0x10) == 0) break;
      lVar10 = lVar10 + (ulong)*(uint *)(lVar10 + 0x10);
    }
  }
  if (iVar6 == 0) {
    return 0;
  }
  unaff_EBX = iVar6 + 1;
  puVar24 = (uint *)calloc((ulong)unaff_EBX,0x18);
  *(uint **)(param_1 + 0xba) = puVar24;
  if (puVar24 == (uint *)0x0) {
    pcVar16 = *(char **)(param_1 + 2);
    if ((*pcVar16 == '\0') && (pcVar16 = *(char **)_dl_argv, pcVar16 == (char *)0x0)) {
      pcVar16 = "<main program>";
    }
    _dl_exception_create(local_58,pcVar16,"cannot allocate version reference table");
    uVar15 = 0xc;
    goto LAB_00782512;
  }
  param_1[0xbc] = unaff_EBX;
  lVar10 = *(long *)(*(long *)(param_1 + 0x74) + 8);
  if ((*(byte *)((long)param_1 + 0x31e) & 0x20) == 0) goto LAB_007822b7;
  goto LAB_0078251c;
}


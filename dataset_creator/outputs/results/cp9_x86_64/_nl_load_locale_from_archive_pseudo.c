
char * _nl_load_locale_from_archive(int param_1,undefined8 *param_2)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  size_t sVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  char *__s;
  char *__s1;
  size_t sVar13;
  void *pvVar14;
  byte *pbVar15;
  ulong uVar16;
  int *piVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong *puVar20;
  ulong *puVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  long in_FS_OFFSET;
  ulong local_148;
  int local_13c;
  undefined8 *local_138;
  ulong local_130;
  ulong local_128;
  char *local_120;
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
  ulong *puVar21;
  
  puVar19 = &local_148;
  puVar21 = &local_148;
  puVar20 = &local_148;
  puVar22 = &local_148;
  pbVar15 = (byte *)*param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_13c = param_1;
  local_138 = param_2;
  sysconf(0x1e);
  for (puVar11 = archloaded; puVar11 != (undefined8 *)0x0; puVar11 = (undefined8 *)*puVar11) {
    pbVar25 = (byte *)puVar11[1];
    if ((pbVar25 == pbVar15) || (iVar7 = strcmp((char *)pbVar15,(char *)pbVar25), iVar7 == 0)) {
      *local_138 = pbVar25;
      pcVar9 = (char *)puVar11[(long)local_13c + 2];
      goto LAB_006d6aa6;
    }
  }
  pcVar9 = strchr((char *)pbVar15,0x2e);
  puVar19 = &local_148;
  pbVar25 = pbVar15;
  if ((pcVar9 == (char *)0x0) || (puVar19 = &local_148, (pcVar9[1] & 0xbfU) == 0)) {
LAB_006d6aec:
    if (archmapped == (char *)0x0) {
      local_120 = archmapped;
      archmapped = (char *)&headmap;
      *(undefined8 *)((long)puVar19 + -8) = 0x6d6eaf;
      iVar7 = __open64_nocancel("/usr/lib/locale/locale-archive",0x80000);
      if (-1 < iVar7) {
        *(undefined8 *)((long)puVar19 + -8) = 0x6d7006;
        iVar8 = fstat(iVar7,(stat *)archive_stat);
        uVar6 = archive_stat._48_8_;
        if (iVar8 != -1) {
          *(undefined8 *)((long)puVar19 + -8) = 0x6d703e;
          pvVar14 = mmap64((void *)0x0,archive_stat._48_8_,1,2,iVar7,0);
          if (pvVar14 != (void *)0xffffffffffffffff) {
            uVar18 = (ulong)*(uint *)((long)pvVar14 + 8) +
                     (ulong)*(uint *)((long)pvVar14 + 0x10) * 0xc;
            uVar16 = (ulong)*(uint *)((long)pvVar14 + 0x20) +
                     (ulong)*(uint *)((long)pvVar14 + 0x24) * 0x6c;
            if (uVar18 < uVar16) {
              uVar18 = uVar16;
            }
            uVar16 = (ulong)(uint)(*(int *)((long)pvVar14 + 0x18) + *(int *)((long)pvVar14 + 0x14));
            if (uVar18 < uVar16) {
              uVar18 = uVar16;
            }
            if (uVar18 <= (ulong)uVar6) {
              *(undefined8 *)((long)puVar19 + -8) = 0x6d7099;
              __close_nocancel(iVar7);
              DAT_0093929c = (uint)uVar6;
              headmap = pvVar14;
              goto LAB_006d6b0c;
            }
            *(undefined8 *)((long)puVar19 + -8) = 0x6d70b7;
            munmap(pvVar14,uVar6);
          }
        }
        *(undefined8 *)((long)puVar19 + -8) = 0x6d70cd;
        __close_nocancel(iVar7);
        pcVar9 = local_120;
        goto LAB_006d6aa6;
      }
    }
    else if (headmap != (void *)0x0) {
LAB_006d6b0c:
      pvVar14 = headmap;
      *(undefined8 *)((long)puVar19 + -8) = 0x6d6b14;
      sVar10 = strlen((char *)pbVar25);
      uVar18 = sVar10 & 0xffffffff;
      if (sVar10 == 0) {
LAB_006d6ed0:
        uVar18 = 0xffffffff;
      }
      else {
        pbVar15 = pbVar25;
        do {
          bVar2 = *pbVar15;
          pbVar15 = pbVar15 + 1;
          uVar23 = ((uint)uVar18 << 9 | (uint)uVar18 >> 0x17) + (uint)bVar2;
          uVar18 = (ulong)uVar23;
        } while (pbVar25 + sVar10 != pbVar15);
        if (uVar23 == 0) goto LAB_006d6ed0;
      }
      local_148 = (ulong)*(uint *)((long)pvVar14 + 8);
      uVar23 = *(uint *)((long)pvVar14 + 0x10);
      if (2 < uVar23) {
        uVar24 = (ulong)uVar23;
        uVar16 = uVar18 % uVar24;
        lVar1 = uVar18 % (ulong)(uVar23 - 2) + 1;
        do {
          piVar17 = (int *)((long)pvVar14 + local_148 + uVar16 * 0xc);
          do {
            uVar23 = piVar17[1];
            if (uVar23 == 0) goto LAB_006d6ec0;
            if (*piVar17 == (int)uVar18) {
              local_120 = (char *)CONCAT44(local_120._4_4_,(int)uVar18);
              local_130 = uVar16;
              local_128 = uVar24;
              *(undefined8 *)((long)puVar19 + -8) = 0x6d6bef;
              iVar7 = strcmp((char *)pbVar25,(char *)((ulong)uVar23 + (long)pvVar14));
              uVar18 = (ulong)local_120 & 0xffffffff;
              uVar16 = local_130;
              uVar24 = local_128;
              if (iVar7 == 0) {
                uVar23 = piVar17[2];
                if (uVar23 == 0) goto LAB_006d6ec0;
                if ((ulong)DAT_0093929c != archive_stat._48_8_) {
                    /* WARNING: Subroutine does not return */
                  *(undefined **)((long)puVar19 + -8) = &UNK_006d7118;
                  __assert_fail("headmap.len == archive_stat.st_size","loadarchive.c",0x136,
                                "_nl_load_locale_from_archive");
                }
                uVar3 = *(uint *)((long)pvVar14 + (ulong)uVar23 + 4);
                uVar4 = *(uint *)((long)pvVar14 + (ulong)uVar23 + 8);
                uVar18 = (ulong)uVar4;
                if (DAT_0093929c < uVar4 + uVar3) goto LAB_006d6ec0;
                local_118[0] = (ulong)uVar3 + (long)pvVar14;
                uVar3 = *(uint *)((long)pvVar14 + (ulong)uVar23 + 0x10);
                uVar16 = (ulong)uVar3;
                uVar4 = *(uint *)((long)pvVar14 + (ulong)uVar23 + 0xc);
                local_118[1] = uVar18;
                if (DAT_0093929c < uVar3 + uVar4) goto LAB_006d6ec0;
                local_118[2] = (ulong)uVar4 + (long)pvVar14;
                uVar3 = *(uint *)((long)pvVar14 + (ulong)uVar23 + 0x18);
                uVar18 = (ulong)uVar3;
                uVar4 = *(uint *)((long)pvVar14 + (ulong)uVar23 + 0x14);
                local_118[3] = uVar16;
                if (DAT_0093929c < uVar3 + uVar4) goto LAB_006d6ec0;
                local_118[4] = (ulong)uVar4 + (long)pvVar14;
                uVar3 = *(uint *)((long)pvVar14 + (ulong)uVar23 + 0x20);
                uVar16 = (ulong)uVar3;
                uVar4 = *(uint *)((long)pvVar14 + (ulong)uVar23 + 0x1c);
                local_f0 = uVar18;
                if (DAT_0093929c < uVar3 + uVar4) goto LAB_006d6ec0;
                local_e8 = (ulong)uVar4 + (long)pvVar14;
                uVar3 = *(uint *)((long)pvVar14 + (ulong)uVar23 + 0x28);
                uVar18 = (ulong)uVar3;
                uVar4 = *(uint *)((long)pvVar14 + (ulong)uVar23 + 0x24);
                local_e0 = uVar16;
                if (DAT_0093929c < uVar4 + uVar3) goto LAB_006d6ec0;
                local_d8 = (ulong)uVar4 + (long)pvVar14;
                uVar3 = *(uint *)((long)pvVar14 + (ulong)uVar23 + 0x30);
                uVar16 = (ulong)uVar3;
                uVar4 = *(uint *)((long)pvVar14 + (ulong)uVar23 + 0x2c);
                local_d0 = uVar18;
                if (DAT_0093929c < uVar4 + uVar3) goto LAB_006d6ec0;
                local_c8 = (ulong)uVar4 + (long)pvVar14;
                uVar3 = *(uint *)((long)pvVar14 + (ulong)uVar23 + 0x40);
                uVar18 = (ulong)uVar3;
                uVar4 = *(uint *)((long)pvVar14 + (ulong)uVar23 + 0x3c);
                local_c0 = uVar16;
                if (DAT_0093929c < uVar4 + uVar3) goto LAB_006d6ec0;
                local_a8 = (ulong)uVar4 + (long)pvVar14;
                uVar3 = *(uint *)((long)pvVar14 + (ulong)uVar23 + 0x48);
                uVar16 = (ulong)uVar3;
                uVar4 = *(uint *)((long)pvVar14 + (ulong)uVar23 + 0x44);
                local_a0 = uVar18;
                if (DAT_0093929c < uVar4 + uVar3) goto LAB_006d6ec0;
                local_98 = (ulong)uVar4 + (long)pvVar14;
                uVar3 = *(uint *)((long)pvVar14 + (ulong)uVar23 + 0x50);
                uVar18 = (ulong)uVar3;
                uVar4 = *(uint *)((long)pvVar14 + (ulong)uVar23 + 0x4c);
                local_90 = uVar16;
                if (DAT_0093929c < uVar4 + uVar3) goto LAB_006d6ec0;
                local_88 = (ulong)uVar4 + (long)pvVar14;
                uVar3 = *(uint *)((long)pvVar14 + (ulong)uVar23 + 0x58);
                uVar16 = (ulong)uVar3;
                uVar4 = *(uint *)((long)pvVar14 + (ulong)uVar23 + 0x54);
                local_80 = uVar18;
                if (DAT_0093929c < uVar4 + uVar3) goto LAB_006d6ec0;
                local_78 = (ulong)uVar4 + (long)pvVar14;
                uVar3 = *(uint *)((long)pvVar14 + (ulong)uVar23 + 0x60);
                uVar4 = *(uint *)((long)pvVar14 + (ulong)uVar23 + 0x5c);
                local_70 = uVar16;
                if (DAT_0093929c < uVar4 + uVar3) goto LAB_006d6ec0;
                local_68 = (ulong)uVar4 + (long)pvVar14;
                uVar4 = *(uint *)((long)pvVar14 + (ulong)uVar23 + 0x68);
                uVar23 = *(uint *)((long)pvVar14 + (ulong)uVar23 + 100);
                local_60 = (ulong)uVar3;
                if (DAT_0093929c < uVar23 + uVar4) goto LAB_006d6ec0;
                local_58 = (long)pvVar14 + (ulong)uVar23;
                local_50 = (ulong)uVar4;
                *(undefined8 *)((long)puVar19 + -8) = 0x6d6dd0;
                puVar11 = (undefined8 *)malloc(0x78);
                if (puVar11 == (undefined8 *)0x0) goto LAB_006d6ec0;
                pcVar9 = (char *)*local_138;
                *(undefined8 *)((long)puVar19 + -8) = 0x6d6deb;
                pcVar9 = strdup(pcVar9);
                puVar11[1] = pcVar9;
                if (pcVar9 == (char *)0x0) {
                  local_120 = pcVar9;
                  *(undefined8 *)((long)puVar19 + -8) = 0x6d70e8;
                  free(puVar11);
                  pcVar9 = local_120;
                  goto LAB_006d6aa6;
                }
                uVar18 = 0;
                puVar12 = puVar11;
                *puVar11 = archloaded;
                archloaded = puVar12;
                goto LAB_006d6e24;
              }
            }
            uVar16 = uVar16 + lVar1;
            piVar17 = piVar17 + lVar1 * 3;
          } while (uVar16 < uVar24);
          uVar16 = uVar16 - uVar24;
        } while( true );
      }
    }
  }
  else {
    pcVar9 = pcVar9 + 1;
    __s = strchrnul(pcVar9,0x40);
    sVar10 = (long)__s - (long)pcVar9;
    __s1 = (char *)_nl_normalize_codeset(pcVar9,sVar10);
    puVar19 = &local_148;
    if (__s1 != (char *)0x0) {
      iVar7 = strncmp(__s1,pcVar9,sVar10);
      if ((iVar7 != 0) || (__s1[sVar10] != '\0')) {
        sVar10 = strlen(__s1);
        sVar13 = strlen(__s);
        local_120 = (char *)(sVar13 + 1);
        uVar18 = ((long)pcVar9 - (long)pbVar15) + sVar10 + 0x18 + sVar13;
        puVar19 = &local_148;
        while (puVar21 != (ulong *)((long)&local_148 - (uVar18 & 0xfffffffffffff000))) {
          puVar20 = (ulong *)((long)puVar19 + -0x1000);
          *(undefined8 *)((long)puVar19 + -8) = *(undefined8 *)((long)puVar19 + -8);
          puVar21 = (ulong *)((long)puVar19 + -0x1000);
          puVar19 = (ulong *)((long)puVar19 + -0x1000);
        }
        uVar18 = (ulong)((uint)uVar18 & 0xff0);
        lVar1 = -uVar18;
        puVar22 = (ulong *)((long)puVar20 + lVar1);
        if (uVar18 != 0) {
          *(undefined8 *)((long)puVar20 + -8) = *(undefined8 *)((long)puVar20 + -8);
        }
        pbVar25 = (byte *)((ulong)((long)puVar20 + lVar1 + 0xf) & 0xfffffffffffffff0);
        *(undefined8 *)((long)puVar20 + lVar1 + -8) = 0x6d6fb9;
        pvVar14 = mempcpy(pbVar25,pbVar15,(long)pcVar9 - (long)pbVar15);
        *(undefined8 *)((long)puVar20 + lVar1 + -8) = 0x6d6fc7;
        pvVar14 = mempcpy(pvVar14,__s1,sVar10);
        *(undefined8 *)((long)puVar20 + lVar1 + -8) = 0x6d6fd9;
        memcpy(pvVar14,__s,(size_t)local_120);
      }
      *(undefined8 *)((long)puVar22 + -8) = 0x6d6fe1;
      free(__s1);
      puVar19 = puVar22;
      goto LAB_006d6aec;
    }
  }
LAB_006d6ec0:
  pcVar9 = (char *)0x0;
LAB_006d6aa6:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((long)puVar19 + -8) = 0x6d70f9;
    __stack_chk_fail_local();
  }
  return pcVar9;
LAB_006d6e24:
  if (uVar18 != 6) {
    lVar1 = local_118[uVar18 * 2];
    lVar5 = local_118[uVar18 * 2 + 1];
    *(undefined8 *)((long)puVar19 + -8) = 0x6d6e41;
    puVar12 = (undefined8 *)_nl_intern_locale_data(uVar18 & 0xffffffff,lVar1,lVar5);
    puVar11[uVar18 + 2] = puVar12;
    if (puVar12 != (undefined8 *)0x0) {
      uVar6 = puVar11[1];
      *(undefined4 *)(puVar12 + 3) = 2;
      *(undefined4 *)(puVar12 + 6) = 0xffffffff;
      *puVar12 = uVar6;
    }
    if (uVar18 == 0xc) goto code_r0x006d6e67;
  }
  uVar18 = uVar18 + 1;
  goto LAB_006d6e24;
code_r0x006d6e67:
  *local_138 = puVar11[1];
  pcVar9 = (char *)puVar11[(long)local_13c + 2];
  goto LAB_006d6aa6;
}


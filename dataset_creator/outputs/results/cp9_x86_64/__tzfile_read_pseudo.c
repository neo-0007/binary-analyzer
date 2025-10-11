
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __tzfile_read(char *param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  FILE *__stream;
  size_t sVar10;
  __off64_t _Var11;
  ulong *puVar12;
  byte *pbVar13;
  ulong *puVar14;
  ulong *puVar15;
  int *piVar16;
  undefined *puVar17;
  undefined8 uVar18;
  bool bVar19;
  ulong uVar20;
  uint *puVar21;
  size_t sVar22;
  ulong uVar23;
  ulong uVar24;
  long *__ptr;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  long in_FS_OFFSET;
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
  stat64 local_d8;
  uint local_48;
  uint uStack_44;
  long local_40;
  
  iVar6 = __use_tzfile;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_120 = (long *)0x0;
  __use_tzfile = 0;
  if ((long *)param_1 == (long *)0x0) {
    param_1 = "/etc/localtime";
LAB_007588a7:
    if (((iVar6 != 0) && (iVar6 = stat64(param_1,&local_d8), iVar6 == 0)) &&
       ((local_d8.st_ino == tzfile_ino &&
        ((local_d8.st_dev == tzfile_dev && (local_d8.st_mtim.tv_sec == tzfile_mtime))))))
    goto LAB_00758d1f;
    __stream = fopen(param_1,"rce");
    __ptr = local_120;
    if (__stream != (FILE *)0x0) {
      iVar6 = fileno(__stream);
      iVar6 = fstat(iVar6,(stat *)&local_d8);
      if (iVar6 == 0) {
        iVar6 = 2;
        free(transitions);
        transitions = (ulong *)0x0;
        tzfile_dev = local_d8.st_dev;
        tzfile_ino = local_d8.st_ino;
        __stream->_flags = __stream->_flags | 0x8000;
        tzfile_mtime = local_d8.st_mtim.tv_sec;
        do {
          sVar10 = fread_unlocked(&local_108,0x2c,1,__stream);
          if ((sVar10 != 1) || (local_108 != 0x66695a54)) break;
          uVar23 = (ulong)(int)(local_f0 >> 0x18 | (local_f0 & 0xff0000) >> 8 |
                                (local_f0 & 0xff00) << 8 | local_f0 << 0x18);
          uVar25 = (ulong)(int)(local_f4 >> 0x18 | (local_f4 & 0xff0000) >> 8 |
                                (local_f4 & 0xff00) << 8 | local_f4 << 0x18);
          uVar27 = uVar25;
          if (uVar25 <= uVar23) {
            uVar27 = uVar23;
          }
          num_transitions =
               (size_t)(int)(local_e8 >> 0x18 | (local_e8 & 0xff0000) >> 8 |
                             (local_e8 & 0xff00) << 8 | local_e8 << 0x18);
          num_types = (ulong)(int)(local_e4 >> 0x18 | (local_e4 & 0xff0000) >> 8 |
                                   (local_e4 & 0xff00) << 8 | local_e4 << 0x18);
          num_leaps = (ulong)(int)(local_ec >> 0x18 | (local_ec & 0xff0000) >> 8 |
                                   (local_ec & 0xff00) << 8 | local_ec << 0x18);
          uVar24 = (ulong)(int)(local_e0 >> 0x18 | (local_e0 & 0xff0000) >> 8 |
                                (local_e0 & 0xff00) << 8 | local_e0 << 0x18);
          if (num_types < uVar27) break;
          if (iVar6 == 1) {
            _Var11 = ftello(__stream);
            uVar27 = local_d8.st_size - _Var11;
            if ((((-1 < (long)uVar27) &&
                 (uVar20 = num_transitions * 9 + num_types * 6 + uVar24, uVar20 <= uVar27)) &&
                (uVar27 = uVar27 - uVar20, num_leaps < 0x1555555555555556)) &&
               (((num_leaps * 0xc <= uVar27 &&
                 (uVar27 = uVar27 + num_leaps * -0xc, uVar23 <= uVar27)) &&
                ((lVar28 = uVar27 - uVar23, lVar28 != 0 &&
                 ((uVar25 <= lVar28 - 1U && (lVar28 = (lVar28 - uVar25) + -1, lVar28 != 0)))))))) {
              local_144 = 8;
LAB_00758b19:
              sVar22 = num_transitions;
              sVar10 = uVar24 + lVar28 + param_2 + num_transitions * 9 +
                       num_types * 8 + num_leaps * 0x10;
              puVar12 = (ulong *)malloc(sVar10);
              transitions = puVar12;
              if (puVar12 != (ulong *)0x0) {
                if (CARRY8(sVar10,(ulong)puVar12)) {
                  __libc_alloc_buffer_create_failure(puVar12,sVar10);
                  sVar22 = num_transitions;
                }
                local_118 = puVar12;
                lStack_110 = sVar10 + (long)puVar12;
                __libc_alloc_buffer_alloc_array(&local_118,8,8,sVar22);
                leaps = __libc_alloc_buffer_alloc_array(&local_118,0x10,8,num_leaps);
                types = (int *)__libc_alloc_buffer_alloc_array(&local_118,8,4,num_types);
                type_idxs = (byte *)__libc_alloc_buffer_alloc_array(&local_118,1,1,num_transitions);
                zone_names = (void *)__libc_alloc_buffer_alloc_array(&local_118,1,1,uVar24);
                pcVar9 = (char *)0x0;
                if (local_144 == 8) {
                  pcVar9 = (char *)__libc_alloc_buffer_alloc_array(&local_118,1,1,lVar28);
                }
                tzspec = pcVar9;
                if (param_2 != 0) {
                  uVar18 = __libc_alloc_buffer_alloc_array(&local_118,1,1,param_2);
                  *param_3 = uVar18;
                }
                if (local_118 != (ulong *)0x0) {
                  sVar22 = (size_t)local_144;
                  sVar10 = fread_unlocked(transitions,sVar22,num_transitions,__stream);
                  if ((sVar10 == num_transitions) &&
                     (sVar10 = fread_unlocked(type_idxs,1,sVar10,__stream), puVar12 = transitions,
                     sVar10 == num_transitions)) {
                    if (num_transitions == 0) {
                      if (num_types != 0) goto LAB_00758edb;
                      goto LAB_00758fa9;
                    }
                    pbVar13 = type_idxs;
                    goto LAB_00758ccd;
                  }
                }
              }
            }
            break;
          }
          if (local_104 == '\0') {
            lVar28 = 0;
            local_144 = 4;
            goto LAB_00758b19;
          }
          iVar6 = 1;
          iVar7 = fseek(__stream,uVar23 + uVar24 + uVar25 + num_transitions * 5 + num_types * 6 +
                                 num_leaps * 8,1);
        } while (iVar7 == 0);
      }
      goto LAB_007588fa;
    }
  }
  else {
    cVar1 = (char)*(long *)param_1;
    if (cVar1 != '\0') {
      if (__libc_enable_secure == 0) {
        if (cVar1 != '/') {
LAB_00758914:
          pcVar9 = getenv("TZDIR");
          if (pcVar9 == (char *)0x0) {
            pcVar9 = "/usr/share/zoneinfo";
          }
          else if (*pcVar9 == '\0') {
            pcVar9 = "/usr/share/zoneinfo";
          }
          iVar7 = asprintf((char **)&local_120,"%s/%s",pcVar9,param_1);
          param_1 = (char *)local_120;
          __ptr = local_120;
          if (iVar7 == -1) goto LAB_00758858;
        }
        goto LAB_007588a7;
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
          pcVar9 = strstr(param_1,(char *)((long)&slashdot_0 + 1));
          __ptr = (long *)0x0;
          if (pcVar9 == (char *)0x0) goto LAB_007588a7;
          goto LAB_00758858;
        }
      }
      else {
        pcVar9 = strstr(param_1,(char *)((long)&slashdot_0 + 1));
        if (pcVar9 == (char *)0x0) goto LAB_00758914;
      }
    }
    __ptr = (long *)0x0;
  }
  goto LAB_00758858;
  while (pbVar13 = pbVar13 + 1, pbVar13 != type_idxs + num_transitions) {
LAB_00758ccd:
    if (num_types <= *pbVar13) goto LAB_007588fa;
  }
  sVar10 = num_transitions;
  if (local_144 == 4) {
    do {
      sVar10 = sVar10 - 1;
      uVar8 = *(uint *)((long)puVar12 + sVar10 * 4);
      puVar12[sVar10] =
           (long)(int)(uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                      uVar8 << 0x18);
    } while (sVar10 != 0);
  }
  else {
    puVar12 = transitions + num_transitions;
    puVar14 = transitions;
    do {
      uVar27 = *puVar14;
      puVar15 = puVar14 + 1;
      *puVar14 = uVar27 >> 0x38 | (uVar27 & 0xff000000000000) >> 0x28 |
                 (uVar27 & 0xff0000000000) >> 0x18 | (uVar27 & 0xff00000000) >> 8 |
                 (uVar27 & 0xff000000) << 8 | (uVar27 & 0xff0000) << 0x18 |
                 (uVar27 & 0xff00) << 0x28 | uVar27 << 0x38;
      puVar14 = puVar15;
    } while (puVar12 != puVar15);
  }
LAB_00758edb:
  uVar27 = 0;
  do {
    sVar10 = fread_unlocked(&local_48,1,4,__stream);
    if (sVar10 != 4) goto LAB_007588fa;
    pbVar13 = (byte *)__stream->_IO_read_ptr;
    if (pbVar13 < __stream->_IO_read_end) {
      __stream->_IO_read_ptr = (char *)(pbVar13 + 1);
      uVar8 = (uint)*pbVar13;
    }
    else {
      uVar8 = __uflow(__stream);
    }
    if (1 < uVar8) goto LAB_007588fa;
    *(char *)(types + uVar27 * 2 + 1) = (char)uVar8;
    pbVar13 = (byte *)__stream->_IO_read_ptr;
    if (pbVar13 < __stream->_IO_read_end) {
      __stream->_IO_read_ptr = (char *)(pbVar13 + 1);
      uVar8 = (uint)*pbVar13;
    }
    else {
      uVar8 = __uflow(__stream);
    }
    uVar20 = num_types;
    if (uVar24 < (ulong)(long)(int)uVar8) goto LAB_007588fa;
    puVar21 = (uint *)(types + uVar27 * 2);
    uVar27 = uVar27 + 1;
    *(char *)((long)puVar21 + 5) = (char)uVar8;
    *puVar21 = local_48 >> 0x18 | (local_48 & 0xff0000) >> 8 | (local_48 & 0xff00) << 8 |
               local_48 << 0x18;
  } while (uVar27 < uVar20);
LAB_00758fa9:
  sVar10 = fread_unlocked(zone_names,1,uVar24,__stream);
  if (sVar10 == uVar24) {
    if (num_leaps != 0) {
      if (local_144 == 4) {
        uVar27 = 0;
        do {
          sVar10 = fread_unlocked(&local_48,1,4,__stream);
          if (sVar10 != 4) goto LAB_007588fa;
          lVar26 = uVar27 * 0x10;
          *(long *)(leaps + lVar26) =
               (long)(int)(local_48 >> 0x18 | (local_48 & 0xff0000) >> 8 | (local_48 & 0xff00) << 8
                          | local_48 << 0x18);
          sVar10 = fread_unlocked(&local_48,1,4,__stream);
          uVar24 = num_leaps;
          if (sVar10 != 4) goto LAB_007588fa;
          uVar27 = uVar27 + 1;
          *(long *)(leaps + 8 + lVar26) =
               (long)(int)(local_48 >> 0x18 | (local_48 & 0xff0000) >> 8 | (local_48 & 0xff00) << 8
                          | local_48 << 0x18);
        } while (uVar27 < uVar24);
      }
      else {
        uVar27 = 0;
        do {
          sVar10 = fread_unlocked(&local_48,1,sVar22,__stream);
          if (sVar22 != sVar10) goto LAB_007588fa;
          lVar26 = uVar27 * 0x10;
          *(ulong *)(leaps + lVar26) =
               (ulong)(uStack_44 >> 0x18) | (((ulong)uStack_44 & 0xff0000) << 0x20) >> 0x28 |
               (((ulong)uStack_44 & 0xff00) << 0x20) >> 0x18 |
               (((ulong)uStack_44 & 0xff) << 0x20) >> 8 | ((ulong)local_48 & 0xff000000) << 8 |
               ((ulong)local_48 & 0xff0000) << 0x18 | ((ulong)local_48 & 0xff00) << 0x28 |
               CONCAT44(uStack_44,local_48) << 0x38;
          sVar10 = fread_unlocked(&local_48,1,4,__stream);
          uVar24 = num_leaps;
          if (sVar10 != 4) goto LAB_007588fa;
          uVar27 = uVar27 + 1;
          *(long *)(leaps + 8 + lVar26) =
               (long)(int)(local_48 >> 0x18 | (local_48 & 0xff0000) >> 8 | (local_48 & 0xff00) << 8
                          | local_48 << 0x18);
        } while (uVar27 < uVar24);
      }
    }
    uVar24 = 0;
    uVar27 = num_types;
    piVar16 = types;
    if (uVar23 != 0) {
      do {
        pbVar13 = (byte *)__stream->_IO_read_ptr;
        if (pbVar13 < __stream->_IO_read_end) {
          __stream->_IO_read_ptr = (char *)(pbVar13 + 1);
          uVar8 = (uint)*pbVar13;
        }
        else {
          uVar8 = __uflow(__stream);
          if (uVar8 == 0xffffffff) goto LAB_007588fa;
        }
        piVar16 = types;
        *(bool *)((long)types + uVar24 * 8 + 6) = uVar8 != 0;
        uVar24 = uVar24 + 1;
        uVar27 = num_types;
      } while (uVar23 != uVar24);
    }
    while (uVar24 < uVar27) {
      uVar24 = uVar24 + 1;
      *(undefined1 *)((long)piVar16 + uVar24 * 8 + -2) = 0;
    }
    for (uVar27 = 0; uVar23 = num_types, uVar27 != uVar25; uVar27 = uVar27 + 1) {
      pbVar13 = (byte *)__stream->_IO_read_ptr;
      if (pbVar13 < __stream->_IO_read_end) {
        __stream->_IO_read_ptr = (char *)(pbVar13 + 1);
        uVar8 = (uint)*pbVar13;
      }
      else {
        uVar8 = __uflow(__stream);
        piVar16 = types;
        if (uVar8 == 0xffffffff) goto LAB_007588fa;
      }
      *(bool *)((long)piVar16 + uVar27 * 8 + 7) = uVar8 != 0;
    }
    while (uVar27 < uVar23) {
      uVar27 = uVar27 + 1;
      *(undefined1 *)((long)piVar16 + uVar27 * 8 + -1) = 0;
    }
    if (tzspec != (char *)0x0) {
      if (lVar28 == 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("tzspec_len > 0","tzfile.c",0x186,"__tzfile_read");
      }
      pbVar13 = (byte *)__stream->_IO_read_ptr;
      if (pbVar13 < __stream->_IO_read_end) {
        __stream->_IO_read_ptr = (char *)(pbVar13 + 1);
        uVar8 = (uint)*pbVar13;
      }
      else {
        uVar8 = __uflow(__stream);
      }
      if (((uVar8 != 10) ||
          (sVar10 = fread_unlocked(tzspec,1,lVar28 - 1U,__stream), pcVar9 = tzspec,
          lVar28 - 1U != sVar10)) ||
         ((tzspec[lVar28 + -1] = '\0', pcVar9 != (char *)0x0 && (*pcVar9 == '\0')))) {
        tzspec = (char *)0x0;
      }
    }
    fclose(__stream);
    for (uVar27 = 0; uVar27 < num_types; uVar27 = uVar27 + 1) {
      lVar28 = __tzstring();
      __ptr = local_120;
      if (lVar28 == 0) goto LAB_00758858;
    }
    _tzname = (undefined1  [16])0x0;
    sVar10 = num_transitions;
    do {
      do {
        if (sVar10 == 0) goto LAB_00759367;
        sVar10 = sVar10 - 1;
        bVar2 = *(byte *)(types + (ulong)type_idxs[sVar10] * 2 + 1);
      } while ((&tzname)[bVar2] != (undefined *)0x0);
      puVar17 = (undefined *)__tzstring();
      (&tzname)[bVar2] = puVar17;
    } while ((&tzname)[(int)(1 - (uint)bVar2)] == (undefined *)0x0);
LAB_00759367:
    if (tzname == (undefined *)0x0) {
      uVar18 = __tzstring();
      tzname = (undefined *)uVar18;
    }
    if (PTR_DAT_00931a28 == (undefined *)0x0) {
      PTR_DAT_00931a28 = tzname;
    }
    if (num_transitions == 0) {
      rule_dstoff = (long)*types;
      rule_stdoff = rule_dstoff;
    }
    else {
      bVar19 = false;
      bVar3 = false;
      rule_dstoff = 0;
      bVar4 = false;
      rule_stdoff = 0;
      pbVar13 = type_idxs + num_transitions;
      bVar5 = false;
      do {
        if (bVar5) {
          if (bVar19) {
LAB_00759524:
            if (bVar3) {
              rule_dstoff = local_130;
            }
            if (bVar4) {
              rule_stdoff = local_138;
            }
            goto LAB_007593ab;
          }
          piVar16 = types + (ulong)pbVar13[-1] * 2;
          if ((char)piVar16[1] != '\0') {
LAB_0075955e:
            local_130 = (long)*piVar16;
            bVar3 = true;
            bVar19 = true;
            goto LAB_007594aa;
          }
        }
        else {
          piVar16 = types + (ulong)pbVar13[-1] * 2;
          if ((char)piVar16[1] == '\0') {
            local_138 = (long)*piVar16;
            bVar4 = true;
            bVar5 = true;
LAB_007594aa:
            if ((bool)(bVar5 & bVar19)) goto LAB_00759524;
          }
          else if (!bVar19) goto LAB_0075955e;
        }
        pbVar13 = pbVar13 + -1;
      } while (pbVar13 != type_idxs);
      if (bVar3) {
        rule_dstoff = local_130;
      }
      if (bVar4) {
        rule_stdoff = local_138;
      }
      if (!bVar19) {
        rule_dstoff = rule_stdoff;
      }
    }
LAB_007593ab:
    timezone = -rule_stdoff;
    daylight = (uint)(rule_dstoff != rule_stdoff);
LAB_00758d1f:
    __use_tzfile = 1;
    free(local_120);
    goto LAB_00758874;
  }
LAB_007588fa:
  fclose(__stream);
  __ptr = local_120;
LAB_00758858:
  free(__ptr);
  free(transitions);
  transitions = (ulong *)0x0;
LAB_00758874:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return;
}


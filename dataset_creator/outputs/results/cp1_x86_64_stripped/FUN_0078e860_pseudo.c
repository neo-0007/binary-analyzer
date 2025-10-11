
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0078e860(void)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  long *plVar9;
  int *piVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  int *piVar14;
  ulong *puVar15;
  ulong uVar16;
  undefined8 unaff_RBX;
  char *pcVar17;
  long lVar18;
  ulong uVar19;
  int local_94;
  long local_90;
  undefined5 *local_80;
  undefined5 local_78;
  undefined1 auStack_73 [11];
  undefined8 local_68;
  char *local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  _DAT_0093ef50 = FUN_007b99f0();
  DAT_0093eea8 = DAT_0094ae70;
  DAT_0093eeb8 = (undefined2)DAT_0094ae68;
  if ((DAT_0094adf0 == 0) ||
     (plVar9 = (long *)FUN_007b96e0(&DAT_0083e5c2,&DAT_0083e5c2,1,0,0x1000000,0),
     lVar11 = DAT_0094adf0, plVar9 == (long *)0x0)) {
    if (DAT_0094ade8 != (long *)0x0) goto LAB_0078ec52;
    DAT_0093ae28 = 0;
LAB_0078f26b:
    DAT_0093ae20 = 0;
LAB_0078f276:
    DAT_0093ae18 = 0;
LAB_0078f281:
    _DAT_0093ae10 = 0;
  }
  else {
    uVar19 = 0;
    uVar13 = (ulong)*(ushort *)(DAT_0094adf0 + 0x38);
    piVar10 = (int *)(*(long *)(DAT_0094adf0 + 0x20) + DAT_0094adf0);
    *(ushort *)(plVar9 + 0x57) = *(ushort *)(DAT_0094adf0 + 0x38);
    plVar9[0x55] = (long)piVar10;
    if (uVar13 != 0) {
      do {
        while (iVar4 = *piVar10, iVar4 == 2) {
          uVar19 = uVar19 + 1;
          plVar9[2] = *(long *)(piVar10 + 4);
          *(short *)((long)plVar9 + 0x2ba) = (short)(*(ulong *)(piVar10 + 10) >> 4);
          *(byte *)((long)plVar9 + 0x31e) =
               (byte)((((uint)piVar10[1] >> 1 ^ 1) & 1) << 5) |
               *(byte *)((long)plVar9 + 0x31e) & 0xdf;
          piVar10 = piVar10 + 0xe;
          if (uVar19 == uVar13) goto LAB_0078e96a;
        }
        if (iVar4 == 1) {
          lVar18 = *(long *)(piVar10 + 4);
          if (*plVar9 == 0) {
            *plVar9 = lVar18;
          }
          uVar16 = lVar18 + *(long *)(piVar10 + 10);
          if ((ulong)plVar9[0x6c] <= uVar16) {
            plVar9[0x6c] = uVar16;
          }
          if (((*(byte *)(piVar10 + 1) & 1) != 0) && ((ulong)plVar9[0x6d] <= uVar16)) {
            plVar9[0x6d] = uVar16;
          }
        }
        else if (iVar4 == 7) {
                    /* WARNING: Subroutine does not return */
          FUN_006e2220("ph->p_type != PT_TLS","setup-vdso.h",0x3c,"setup_vdso");
        }
        uVar19 = uVar19 + 1;
        piVar10 = piVar10 + 0xe;
      } while (uVar19 != uVar13);
    }
LAB_0078e96a:
    lVar18 = lVar11 - *plVar9;
    plVar9[0x6d] = plVar9[0x6d] + lVar18;
    puVar15 = (ulong *)(lVar18 + plVar9[2]);
    *plVar9 = lVar18;
    plVar9[2] = (long)puVar15;
    plVar9[0x6b] = lVar11;
    plVar9[0x6c] = plVar9[0x6c] + lVar18;
    if (puVar15 != (ulong *)0x0) {
      uVar19 = *puVar15;
      while (uVar19 != 0) {
        if (uVar19 < 0x23) {
LAB_0078e9f9:
          plVar9[uVar19 + 8] = (long)puVar15;
        }
        else {
          if (0x6fffffff - uVar19 < 0x10) {
            uVar19 = 0x70000022 - uVar19;
            goto LAB_0078e9f9;
          }
          uVar5 = (int)uVar19 * 2;
          if (0xfffffff8 < uVar5) {
            uVar19 = (ulong)(0x32 - ((int)uVar5 >> 1));
            goto LAB_0078e9f9;
          }
          if (0x6ffffdff - uVar19 < 0xc) {
            uVar19 = 0x6ffffe35 - uVar19;
            goto LAB_0078e9f9;
          }
          if (0x6ffffeff - uVar19 < 0xb) {
            uVar19 = 0x6fffff41 - uVar19;
            goto LAB_0078e9f9;
          }
        }
        puVar1 = puVar15 + 2;
        puVar15 = puVar15 + 2;
        uVar19 = *puVar1;
      }
      if ((lVar18 != 0) && ((*(byte *)((long)plVar9 + 0x31e) & 0x20) == 0)) {
        if (plVar9[0xc] != 0) {
          plVar2 = (long *)(plVar9[0xc] + 8);
          *plVar2 = *plVar2 + lVar18;
        }
        if (plVar9[0xb] != 0) {
          plVar2 = (long *)(plVar9[0xb] + 8);
          *plVar2 = *plVar2 + lVar18;
        }
        if (plVar9[0xd] != 0) {
          plVar2 = (long *)(plVar9[0xd] + 8);
          *plVar2 = *plVar2 + lVar18;
        }
        if (plVar9[0xe] != 0) {
          plVar2 = (long *)(plVar9[0xe] + 8);
          *plVar2 = *plVar2 + lVar18;
        }
        if (plVar9[0xf] != 0) {
          plVar2 = (long *)(plVar9[0xf] + 8);
          *plVar2 = *plVar2 + lVar18;
        }
        if (plVar9[0x1f] != 0) {
          plVar2 = (long *)(plVar9[0x1f] + 8);
          *plVar2 = *plVar2 + lVar18;
        }
        if (plVar9[0x3a] != 0) {
          plVar2 = (long *)(plVar9[0x3a] + 8);
          *plVar2 = *plVar2 + lVar18;
        }
        if (plVar9[0x54] != 0) {
          plVar2 = (long *)(plVar9[0x54] + 8);
          *plVar2 = *plVar2 + lVar18;
        }
      }
      if ((plVar9[0x1c] != 0) && (*(long *)(plVar9[0x1c] + 8) != 7)) {
                    /* WARNING: Subroutine does not return */
        FUN_006e2220("info[DT_PLTREL]->d_un.d_val == DT_RELA","get-dynamic-info.h",0x66,
                     "elf_get_dynamic_info");
      }
      if ((plVar9[0xf] != 0) && (*(long *)(plVar9[0x11] + 8) != 0x18)) {
                    /* WARNING: Subroutine does not return */
        FUN_006e2220("info[DT_RELAENT]->d_un.d_val == sizeof (ElfW(Rela))","get-dynamic-info.h",0x6e
                     ,"elf_get_dynamic_info");
      }
      lVar11 = plVar9[0x26];
      if (lVar11 != 0) {
        uVar19 = *(ulong *)(lVar11 + 8);
        *(int *)(plVar9 + 0x7e) = (int)uVar19;
        if ((uVar19 & 2) != 0) {
          plVar9[0x18] = lVar11;
        }
        if ((uVar19 & 4) != 0) {
          plVar9[0x1e] = lVar11;
        }
        if ((uVar19 & 8) != 0) {
          plVar9[0x20] = lVar11;
        }
      }
      if (plVar9[0x2f] != 0) {
        uVar19 = *(ulong *)(plVar9[0x2f] + 8);
        *(int *)((long)plVar9 + 0x3ec) = (int)uVar19;
        uVar13 = uVar19 & 0xffffffff;
        if ((uVar19 & 8) != 0) {
          *(undefined1 *)(plVar9 + 100) = 1;
        }
        if ((((byte)DAT_0094b0e4 & 0x40) != 0) && ((uVar19 & 0xf7fff716) != 0)) {
          FUN_00787060("\nWARNING: Unsupported flag value(s) of 0x%x in DT_FLAGS_1.\n");
          uVar13 = (ulong)*(uint *)((long)plVar9 + 0x3ec);
        }
        if ((uVar13 & 1) != 0) {
          plVar9[0x20] = plVar9[0x2f];
        }
      }
      if (plVar9[0x25] != 0) {
        plVar9[0x17] = 0;
      }
    }
    FUN_007ba9d0(plVar9);
    plVar2 = (long *)plVar9[0x74];
    *(byte *)((long)plVar9 + 0x31c) = *(byte *)((long)plVar9 + 0x31c) | 4;
    *(undefined4 *)((long)plVar9 + 0x3e4) = 1;
    *(undefined4 *)(plVar2 + 1) = 1;
    *plVar2 = (long)(plVar9 + 5);
    if (plVar9[0x16] != 0) {
      lVar11 = 0;
      if ((*(byte *)((long)plVar9 + 0x31e) & 0x20) != 0) {
        lVar11 = *plVar9;
      }
      lVar11 = *(long *)(plVar9[0x16] + 8) + *(long *)(plVar9[0xd] + 8) + lVar11;
      *(long *)plVar9[7] = lVar11;
      plVar9[1] = lVar11;
    }
    FUN_007b9640(plVar9,0);
    DAT_0093eb28 = 1;
    DAT_0094ade8 = plVar9;
LAB_0078ec52:
    local_68 = 0;
    auStack_73 = SUB1611((undefined1  [16])0x0,5);
    local_78 = 0x2000000000;
    local_58 = "LINUX_2.6";
    local_50 = 0x103ae75f6;
    local_48 = 0;
    local_80 = &local_78;
    plVar9 = (long *)FUN_007b82e0("__vdso_clock_gettime",DAT_0094ade8,&local_80,DAT_0094ade8 + 0x74,
                                  &local_58,0,0,0);
    if (local_80 == (undefined5 *)0x0) {
      DAT_0093ae28 = 0;
    }
    else {
      if ((*(short *)((long)local_80 + 6) == -0xf) || (plVar9 == (long *)0x0)) {
        lVar11 = 0;
      }
      else {
        lVar11 = *plVar9;
      }
      DAT_0093ae28 = lVar11 + *(long *)(local_80 + 1);
    }
    if (DAT_0094ade8 == (long *)0x0) goto LAB_0078f26b;
    local_58 = "LINUX_2.6";
    local_68 = 0;
    auStack_73 = SUB1611((undefined1  [16])0x0,5);
    local_78 = 0x2000000000;
    local_50 = 0x103ae75f6;
    local_48 = 0;
    local_80 = &local_78;
    plVar9 = (long *)FUN_007b82e0("__vdso_gettimeofday",DAT_0094ade8,&local_80,DAT_0094ade8 + 0x74,
                                  &local_58,0,0,0);
    if (local_80 == (undefined5 *)0x0) {
      DAT_0093ae20 = 0;
    }
    else {
      if ((*(short *)((long)local_80 + 6) == -0xf) || (plVar9 == (long *)0x0)) {
        lVar11 = 0;
      }
      else {
        lVar11 = *plVar9;
      }
      DAT_0093ae20 = lVar11 + *(long *)(local_80 + 1);
    }
    if (DAT_0094ade8 == (long *)0x0) goto LAB_0078f276;
    local_58 = "LINUX_2.6";
    local_68 = 0;
    auStack_73 = SUB1611((undefined1  [16])0x0,5);
    local_78 = 0x2000000000;
    local_50 = 0x103ae75f6;
    local_48 = 0;
    local_80 = &local_78;
    plVar9 = (long *)FUN_007b82e0("__vdso_time",DAT_0094ade8,&local_80,DAT_0094ade8 + 0x74,&local_58
                                  ,0,0,0);
    if (local_80 == (undefined5 *)0x0) {
      DAT_0093ae18 = 0;
    }
    else {
      if ((*(short *)((long)local_80 + 6) == -0xf) || (plVar9 == (long *)0x0)) {
        lVar11 = 0;
      }
      else {
        lVar11 = *plVar9;
      }
      DAT_0093ae18 = lVar11 + *(long *)(local_80 + 1);
    }
    if (DAT_0094ade8 == (long *)0x0) goto LAB_0078f281;
    local_58 = "LINUX_2.6";
    local_68 = 0;
    auStack_73 = SUB1611((undefined1  [16])0x0,5);
    local_78 = 0x2000000000;
    local_50 = 0x103ae75f6;
    local_48 = 0;
    local_80 = &local_78;
    plVar9 = (long *)FUN_007b82e0("__vdso_getcpu",DAT_0094ade8,&local_80,DAT_0094ade8 + 0x74,
                                  &local_58,0,0,0);
    if (local_80 == (undefined5 *)0x0) {
      _DAT_0093ae10 = 0;
    }
    else {
      if ((*(short *)((long)local_80 + 6) == -0xf) || (plVar9 == (long *)0x0)) {
        _DAT_0093ae10 = 0;
      }
      else {
        _DAT_0093ae10 = *plVar9;
      }
      _DAT_0093ae10 = _DAT_0093ae10 + *(long *)(local_80 + 1);
    }
    if (DAT_0094ade8 != (long *)0x0) {
      local_58 = "LINUX_2.6";
      local_68 = 0;
      auStack_73 = SUB1611((undefined1  [16])0x0,5);
      local_78 = 0x2000000000;
      local_50 = 0x103ae75f6;
      local_48 = 0;
      local_80 = &local_78;
      plVar9 = (long *)FUN_007b82e0("__vdso_clock_getres",DAT_0094ade8,&local_80,DAT_0094ade8 + 0x74
                                    ,&local_58,0,0,0);
      if (local_80 != (undefined5 *)0x0) {
        if ((*(short *)((long)local_80 + 6) == -0xf) || (plVar9 == (long *)0x0)) {
          _DAT_0093ae08 = 0;
        }
        else {
          _DAT_0093ae08 = *plVar9;
        }
        _DAT_0093ae08 = _DAT_0093ae08 + *(long *)(local_80 + 1);
        goto LAB_0078ef5f;
      }
    }
  }
  _DAT_0093ae08 = 0;
LAB_0078ef5f:
  if (DAT_0093ae30 != 0) {
    pcVar17 = "GCONV_PATH";
    do {
      FUN_00791b80(pcVar17);
      lVar11 = FUN_00401230(pcVar17,0);
      pcVar17 = (char *)(lVar11 + 1);
    } while (pcVar17 < "");
  }
  pcVar17 = (char *)FUN_006e8e30("LD_WARN");
  if (pcVar17 != (char *)0x0) {
    pcVar17 = (char *)(ulong)(*pcVar17 != '\0');
  }
  DAT_0094b0d8 = SUB84(pcVar17,0);
  uVar12 = FUN_006e8e30("LD_LIBRARY_PATH");
  FUN_007b62b0(uVar12,"LD_LIBRARY_PATH",0,0);
  DAT_0094ae88 = DAT_0094ae90;
  pcVar17 = (char *)FUN_006e8e30("LD_BIND_NOW");
  DAT_0094b0e0 = 1;
  if (pcVar17 != (char *)0x0) {
    DAT_0094b0e0 = (uint)(*pcVar17 == '\0');
  }
  pcVar17 = (char *)FUN_006e8e30("LD_BIND_NOT");
  DAT_0094b0a8 = 0;
  if (pcVar17 != (char *)0x0) {
    DAT_0094b0a8 = (uint)(*pcVar17 != '\0');
  }
  pcVar17 = (char *)FUN_006e8e30("LD_DYNAMIC_WEAK");
  DAT_0094b0dc = 1;
  if (pcVar17 != (char *)0x0) {
    DAT_0094b0dc = (uint)(*pcVar17 == '\0');
  }
  DAT_0094b0c8 = (char *)FUN_006e8e30("LD_PROFILE_OUTPUT");
  if ((DAT_0094b0c8 == (char *)0x0) || (*DAT_0094b0c8 == '\0')) {
    DAT_0094b0c8 = "/var/profile";
    if (DAT_0093ae30 == 0) {
      DAT_0094b0c8 = "/var/tmp";
    }
  }
  if ((DAT_0094b0f0 != (char *)0x0) && (*DAT_0094b0f0 == '\0')) {
    DAT_0094b0f0 = (char *)0x0;
  }
  pcVar17 = (char *)FUN_006e8e30("LD_ASSUME_KERNEL");
  if (pcVar17 != (char *)0x0) {
    uVar19 = 0;
    lVar11 = 0;
    while( true ) {
      uVar13 = FUN_007b94a0(pcVar17);
      if ((0xfe < uVar13) || (local_58 == pcVar17)) goto LAB_0078f13f;
      cVar3 = *local_58;
      if (lVar11 == 2) break;
      if ((cVar3 != '\0') && (cVar3 != '.')) goto LAB_0078f13f;
      uVar19 = uVar19 | uVar13 << ((char)lVar11 * -8 + 0x10U & 0x3f);
      if (cVar3 == '\0') goto LAB_0078f133;
      lVar11 = lVar11 + 1;
      pcVar17 = local_58 + 1;
    }
    uVar19 = uVar19 | uVar13;
LAB_0078f133:
    if (uVar19 != 0) {
      DAT_0094ae98 = (undefined4)uVar19;
    }
  }
LAB_0078f13f:
  if (DAT_0094b0f0 != (char *)0x0) {
    DAT_0094b0e8 = thunk_FUN_007129d0();
  }
  if ((DAT_0094ae70 != (int *)0x0) &&
     (piVar10 = DAT_0094ae70 + DAT_0094ae68 * 0xe, DAT_0094ae70 < piVar10)) {
    bVar6 = false;
    piVar14 = DAT_0094ae70;
    bVar8 = false;
    do {
      while (bVar7 = bVar8, *piVar14 != 0x6474e551) {
        if (*piVar14 == 0x6474e552) {
          unaff_RBX = *(undefined8 *)(piVar14 + 4);
          local_90 = *(long *)(piVar14 + 10);
          bVar6 = true;
        }
        piVar14 = piVar14 + 0xe;
        bVar8 = bVar7;
        if (piVar10 <= piVar14) goto LAB_0078f1d2;
      }
      local_94 = piVar14[1];
      piVar14 = piVar14 + 0xe;
      bVar7 = true;
      bVar8 = true;
    } while (piVar14 < piVar10);
LAB_0078f1d2:
    if (bVar6) {
      _DAT_0093f070 = unaff_RBX;
      DAT_0093f078 = local_90;
    }
    if (bVar7) {
      DAT_0093eb08 = local_94;
    }
  }
  if (PTR_FUN_0093af58 != (undefined *)0x0) {
    FUN_00784e40();
  }
  if (DAT_0093f078 == 0) {
    return;
  }
  FUN_00787620(&DAT_0093ec00);
  return;
}


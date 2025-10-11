
/* WARNING: Removing unreachable block (ram,0x006d1820) */
/* WARNING: Removing unreachable block (ram,0x006d16f9) */
/* WARNING: Removing unreachable block (ram,0x006d170b) */
/* WARNING: Removing unreachable block (ram,0x006d1e55) */
/* WARNING: Removing unreachable block (ram,0x006d1e02) */
/* WARNING: Removing unreachable block (ram,0x006d2024) */
/* WARNING: Removing unreachable block (ram,0x006d1de2) */
/* WARNING: Removing unreachable block (ram,0x006d19c8) */
/* WARNING: Removing unreachable block (ram,0x006d19a1) */
/* WARNING: Removing unreachable block (ram,0x006d197a) */
/* WARNING: Removing unreachable block (ram,0x006d196a) */
/* WARNING: Removing unreachable block (ram,0x006d1645) */
/* WARNING: Removing unreachable block (ram,0x006d161e) */
/* WARNING: Removing unreachable block (ram,0x006d15f7) */
/* WARNING: Removing unreachable block (ram,0x006d15e7) */
/* WARNING: Removing unreachable block (ram,0x006d1f42) */
/* WARNING: Removing unreachable block (ram,0x006d1f1b) */
/* WARNING: Removing unreachable block (ram,0x006d1ef4) */
/* WARNING: Removing unreachable block (ram,0x006d1ee4) */
/* WARNING: Removing unreachable block (ram,0x006d0efa) */
/* WARNING: Removing unreachable block (ram,0x006d2010) */
/* WARNING: Removing unreachable block (ram,0x006d1e7d) */
/* WARNING: Removing unreachable block (ram,0x006d1e85) */
/* WARNING: Removing unreachable block (ram,0x006d16f4) */
/* WARNING: Removing unreachable block (ram,0x006d144e) */
/* WARNING: Removing unreachable block (ram,0x006d1a59) */
/* WARNING: Removing unreachable block (ram,0x006d1a71) */
/* WARNING: Removing unreachable block (ram,0x006d1a7a) */
/* WARNING: Removing unreachable block (ram,0x006d1a7f) */
/* WARNING: Removing unreachable block (ram,0x006d1a84) */
/* WARNING: Removing unreachable block (ram,0x006d1a9a) */
/* WARNING: Removing unreachable block (ram,0x006d1aaf) */
/* WARNING: Removing unreachable block (ram,0x006d1aba) */
/* WARNING: Removing unreachable block (ram,0x006d1503) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006d0e60(undefined8 param_1,int param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 long param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  Elf64_Rela *pEVar10;
  ulong *puVar11;
  long *plVar12;
  ulong uVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long in_FS_OFFSET;
  undefined8 local_108;
  undefined8 local_100;
  ulong local_f8;
  undefined8 local_e8;
  undefined8 local_e0;
  ulong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58 [5];
  
  DAT_0094ab80 = (long *)(param_3 + 8 + (long)param_2 * 8);
  DAT_0093ae00 = param_7;
  plVar12 = DAT_0094ab80;
  do {
    lVar19 = *plVar12;
    plVar12 = plVar12 + 1;
  } while (lVar19 != 0);
  FUN_0078e460();
  if (DAT_0094ae70 == 0) {
    if (Elf64_Ehdr_00400000.e_phentsize != 0x38) {
                    /* WARNING: Subroutine does not return */
      FUN_006e2220("__ehdr_start.e_phentsize == sizeof *GL(dl_phdr)","../csu/libc-start.c",0x11a,
                   "__libc_start_main_impl");
    }
    DAT_0094ae70 = Elf64_Ehdr_00400000.e_phoff + 0x400000;
    DAT_0094ae68 = (ulong)Elf64_Ehdr_00400000.e_phnum;
  }
  FUN_00790690();
  FUN_0078ce20(DAT_0094ab80);
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  puVar2 = (undefined4 *)cpuid_basic_info(0);
  DAT_0094aec4 = *puVar2;
  iVar15 = puVar2[1];
  iVar4 = puVar2[2];
  iVar5 = puVar2[3];
  if ((iVar15 == 0x756e6547) && (iVar5 == 0x6c65746e)) {
    if (iVar4 != 0x49656e69) goto LAB_006d0f26;
    FUN_006d0020(&local_80,&local_7c,local_58,&local_78);
    puVar3 = (uint *)cpuid(0x80000000);
    uVar8 = *puVar3;
    if (0x80000000 < uVar8) {
      puVar2 = (undefined4 *)cpuid(0x80000001);
      _DAT_0094af14 = *puVar2;
      _DAT_0094af18 = puVar2[1];
      DAT_0094af20 = puVar2[2];
      DAT_0094af1c = puVar2[3];
      if (0x80000006 < uVar8) {
        puVar2 = (undefined4 *)cpuid(0x80000007);
        _DAT_0094af54 = *puVar2;
        _DAT_0094af58 = puVar2[1];
        _DAT_0094af60 = puVar2[2];
        _DAT_0094af5c = puVar2[3];
        if (uVar8 != 0x80000007) {
          puVar2 = (undefined4 *)cpuid(0x80000008);
          _DAT_0094af74 = *puVar2;
          DAT_0094af78 = puVar2[1];
          _DAT_0094af80 = puVar2[2];
          _DAT_0094af7c = puVar2[3];
        }
      }
    }
    FUN_006d09b0();
    if (local_80 == 6) {
      local_7c = local_7c + (int)local_58[0];
      if (local_7c < 0x5e) {
        if (local_7c < 0x25) {
          if (local_7c == 0x1c) {
LAB_006d224d:
            DAT_0094aff4 = DAT_0094aff4 | 4;
            goto LAB_006d1f7d;
          }
          if (local_7c < 0x1d) {
            if (local_7c != 0x1a) goto LAB_006d2107;
          }
          else if (1 < local_7c - 0x1e) {
LAB_006d2107:
            if ((DAT_0094aedc._3_1_ & 0x10) == 0) goto LAB_006d1f7d;
          }
LAB_006d21b7:
          DAT_0094aff4 = DAT_0094aff4 | 0x39;
LAB_006d21be:
          if (0x5e < local_7c) goto LAB_006d2161;
        }
        else {
          uVar16 = 1L << ((char)local_7c - 0x25U & 0x3f);
          if ((uVar16 & 0x1a401a000040000) != 0) {
LAB_006d223e:
            DAT_0094aff4 = DAT_0094aff4 | 0x138;
            goto LAB_006d21be;
          }
          if ((uVar16 & 0x681) != 0) goto LAB_006d21b7;
          if (local_7c == 0x26) goto LAB_006d224d;
          if ((DAT_0094aedc._3_1_ & 0x10) != 0) goto LAB_006d21b7;
        }
        if (0x3b < local_7c) {
          switch(local_7c) {
          case 0x3c:
          case 0x45:
          case 0x46:
switchD_006d21e5_caseD_3c:
            _DAT_0094af08 = _DAT_0094af08 & 0xfffffffffffff7ff;
            break;
          case 0x3f:
            if (local_78 < 4) goto switchD_006d21e5_caseD_3c;
            break;
          case 0x4e:
          case 0x5e:
switchD_006d21e5_caseD_4e:
            _DAT_0094af08 = _DAT_0094af08 & 0xfffffffffffff7ef;
            _DAT_0094af10 = _DAT_0094af10 | 0x800;
            goto LAB_006d1f7d;
          case 0x55:
            if (local_78 < 6) goto switchD_006d21e5_caseD_4e;
          }
        }
      }
      else {
        if (0x3d < local_7c - 0x5f) {
          if ((DAT_0094aedc._3_1_ & 0x10) != 0) goto LAB_006d21b7;
          goto LAB_006d21be;
        }
        uVar16 = 1L << ((byte)(local_7c - 0x5f) & 0x3f);
        if ((uVar16 & 0x2080008000000000) == 0) {
          if ((uVar16 & 0x8400001) != 0) goto LAB_006d223e;
          if ((DAT_0094aedc._3_1_ & 0x10) != 0) goto LAB_006d21b7;
        }
        else {
          DAT_0094aff4 = DAT_0094aff4 | 0x139;
        }
LAB_006d2161:
        if (((local_7c & 0xffffffef) == 0x8e) && (local_78 < 0xd)) goto switchD_006d21e5_caseD_4e;
      }
    }
LAB_006d1f7d:
    if ((DAT_0094aef8._3_1_ & 8) == 0) {
      if (((byte)DAT_0094af94 & 0x10) == 0) {
        DAT_0094aff4 = DAT_0094aff4 | 0x1000;
      }
      if ((_DAT_0094af08 & 0x800) != 0) goto LAB_006d1fa2;
    }
    else {
LAB_006d1fa2:
      DAT_0094aff4 = DAT_0094aff4 | 0x400;
    }
    if (((byte)DAT_0094af00 & 0x10) != 0) {
      DAT_0094aff4 = DAT_0094aff4 | 0x8000;
    }
    iVar15 = 1;
  }
  else if ((iVar15 == 0x68747541) && (iVar5 == 0x444d4163)) {
    if (iVar4 != 0x69746e65) goto LAB_006d0f26;
LAB_006d15ba:
    FUN_006d0020(&local_80,&local_7c,local_58,&local_78);
    puVar3 = (uint *)cpuid(0x80000000);
    uVar8 = *puVar3;
    if (0x80000000 < uVar8) {
      puVar2 = (undefined4 *)cpuid(0x80000001);
      _DAT_0094af14 = *puVar2;
      _DAT_0094af18 = puVar2[1];
      DAT_0094af20 = puVar2[2];
      DAT_0094af1c = puVar2[3];
      if (0x80000006 < uVar8) {
        puVar2 = (undefined4 *)cpuid(0x80000007);
        _DAT_0094af54 = *puVar2;
        _DAT_0094af58 = puVar2[1];
        _DAT_0094af60 = puVar2[2];
        _DAT_0094af5c = puVar2[3];
        if (uVar8 != 0x80000007) {
          puVar2 = (undefined4 *)cpuid(0x80000008);
          _DAT_0094af74 = *puVar2;
          DAT_0094af78 = puVar2[1];
          _DAT_0094af80 = puVar2[2];
          _DAT_0094af7c = puVar2[3];
        }
      }
    }
    FUN_006d09b0();
    if ((DAT_0094aeec & 0x10000000) != 0) {
      DAT_0094af2c = DAT_0094af2c | DAT_0094af1c & 0x10000;
    }
    if ((local_80 == 0x15) && (local_7c - 0x60 < 0x20)) {
      DAT_0094aff4 = DAT_0094aff4 & 0xfffffdff | 10;
    }
    iVar15 = 2;
  }
  else {
    if ((iVar15 == 0x6f677948) && (iVar5 == 0x656e6975)) {
      if (iVar4 == 0x6e65476e) goto LAB_006d15ba;
    }
    else if ((iVar15 == 0x746e6543) && (iVar5 == 0x736c7561)) {
      if (iVar4 == 0x48727561) {
LAB_006d193a:
        FUN_006d0020(&local_80,&local_7c,&local_60,local_58);
        puVar3 = (uint *)cpuid(0x80000000);
        uVar8 = *puVar3;
        if (0x80000000 < uVar8) {
          puVar2 = (undefined4 *)cpuid(0x80000001);
          _DAT_0094af14 = *puVar2;
          _DAT_0094af18 = puVar2[1];
          DAT_0094af20 = puVar2[2];
          DAT_0094af1c = puVar2[3];
          if (0x80000006 < uVar8) {
            puVar2 = (undefined4 *)cpuid(0x80000007);
            _DAT_0094af54 = *puVar2;
            _DAT_0094af58 = puVar2[1];
            _DAT_0094af60 = puVar2[2];
            _DAT_0094af5c = puVar2[3];
            if (uVar8 != 0x80000007) {
              puVar2 = (undefined4 *)cpuid(0x80000008);
              _DAT_0094af74 = *puVar2;
              DAT_0094af78 = puVar2[1];
              _DAT_0094af80 = puVar2[2];
              _DAT_0094af7c = puVar2[3];
            }
          }
        }
        FUN_006d09b0();
        local_7c = (int)local_60 + local_7c;
        if (local_80 == 6) {
          if ((local_7c == 0xf) || (local_7c == 0x19)) {
LAB_006d1fe8:
            _DAT_0094af08 = _DAT_0094af08 & 0xffffffffffffffdf;
            DAT_0094aeec = DAT_0094aeec & 0xefffffff;
            DAT_0094aff4 = DAT_0094aff4 & 0xfffffdff | 0x100;
          }
        }
        else if (local_80 == 7) {
          if (local_7c == 0x1b) goto LAB_006d1fe8;
          if (local_7c == 0x3b) {
            DAT_0094aeec = DAT_0094aeec & 0xefffffff;
            _DAT_0094af08 = _DAT_0094af08 & 0xffffffffffffffdf;
            DAT_0094aff4 = DAT_0094aff4 & 0xfffffdff;
          }
        }
        iVar15 = 3;
        goto LAB_006d0f64;
      }
    }
    else if ((iVar15 == 0x68532020 && iVar5 == 0x20206961) && (iVar4 == 0x68676e61))
    goto LAB_006d193a;
LAB_006d0f26:
    FUN_006d0020(0,0,0,0);
    FUN_006d09b0();
    iVar15 = 4;
  }
LAB_006d0f64:
  puVar11 = local_58;
  if ((DAT_0094aee0 & 0x100) != 0) {
    DAT_0094aff4 = DAT_0094aff4 | 0x40;
  }
  if ((DAT_0094aee0 & 0x8000) != 0) {
    DAT_0094aff4 = DAT_0094aff4 | 0x80;
  }
  _DAT_0094aec8 = CONCAT44(local_7c,local_80);
  local_70 = 0xffffffffffffffff;
  local_74 = 0;
  DAT_0094aec0 = iVar15;
  _DAT_0094aed0 = local_78;
  if (iVar15 == 1) {
    local_f8 = FUN_006d08c0(0xbc);
    local_d8 = FUN_006d08c0(0xbf);
    uVar16 = FUN_006d08c0(0xc2);
    local_70 = uVar16;
    local_108 = FUN_006d08c0(0xb9);
    local_100 = FUN_006d08c0(0xbb);
    local_e8 = FUN_006d08c0(0xbd);
    local_e0 = FUN_006d08c0(0xbe);
    local_d0 = FUN_006d08c0(0xc0);
    local_c8 = FUN_006d08c0(0xc1);
    local_c0 = FUN_006d08c0(0xc3);
    local_b8 = FUN_006d08c0(0xc4);
    local_b0 = FUN_006d08c0(0xc5);
    FUN_006d01b0(&local_70,&local_74,local_d8);
  }
  else if (iVar15 == 3) {
    local_f8 = FUN_006cfbc0(0xbc);
    local_d8 = FUN_006cfbc0(0xbf);
    uVar16 = FUN_006cfbc0(0xc2);
    local_70 = uVar16;
    local_108 = FUN_006cfbc0(0xb9);
    local_100 = FUN_006cfbc0(0xbb);
    local_e8 = FUN_006cfbc0(0xbd);
    local_e0 = FUN_006cfbc0(0xbe);
    local_d0 = FUN_006cfbc0(0xc0);
    local_c8 = FUN_006cfbc0(0xc1);
    local_c0 = FUN_006cfbc0(0xc3);
    local_b8 = FUN_006cfbc0(0xc4);
    FUN_006d01b0(&local_70,&local_74,local_d8);
    local_b0 = 0xffffffffffffffff;
  }
  else if (iVar15 == 2) {
    uVar8 = local_80;
    local_f8 = FUN_006cfd90(0xbc);
    local_d8 = FUN_006cfd90(0xbf);
    uVar16 = FUN_006cfd90(0xc2);
    local_70 = uVar16;
    local_108 = FUN_006cfd90(0xb9);
    uVar18 = uVar16;
    local_100 = FUN_006cfd90(0xbb);
    local_e8 = FUN_006cfd90(0xbd);
    local_e0 = FUN_006cfd90(0xbe);
    local_d0 = FUN_006cfd90(0xc0);
    local_c8 = FUN_006cfd90(0xc1);
    local_c0 = FUN_006cfd90(0xc3);
    local_b8 = FUN_006cfd90(0xc4);
    puVar3 = (uint *)cpuid(0x80000000);
    if ((long)uVar18 < 1) {
      local_b0 = 0xffffffffffffffff;
      local_70 = local_d8;
    }
    else {
      if (*puVar3 < 0x80000008) {
LAB_006d1dfd:
        lVar19 = cpuid_Version_info(1);
        if ((*(uint *)(lVar19 + 8) & 0x10000000) != 0) {
          local_74 = *(uint *)(lVar19 + 4) >> 0x10 & 0xff;
        }
        if (local_74 != 0) goto LAB_006d1e27;
      }
      else {
        lVar19 = cpuid(0x80000008);
        local_74 = 1 << ((byte)(*(uint *)(lVar19 + 0xc) >> 0xc) & 0xf);
        if (0x16 < uVar8) goto LAB_006d1dfd;
LAB_006d1e27:
        local_70 = (long)uVar18 / (long)(ulong)local_74;
      }
      if (uVar8 < 0x17) {
        local_b0 = 0xffffffffffffffff;
        local_70 = local_70 + local_d8;
      }
      else {
        puVar3 = (uint *)cpuid(0x8000001d);
        local_b0 = 0xffffffffffffffff;
        local_70 = ((ulong)(*puVar3 >> 0xe & 0xfff) + 1) * local_70;
      }
    }
  }
  else {
    local_b0 = 0xffffffffffffffff;
    uVar16 = 0xffffffffffffffff;
    local_b8 = 0xffffffffffffffff;
    local_c0 = 0xffffffffffffffff;
    local_c8 = 0xffffffffffffffff;
    local_d0 = 0xffffffffffffffff;
    local_d8 = 0xffffffffffffffff;
    local_e0 = 0xffffffffffffffff;
    local_e8 = 0xffffffffffffffff;
    local_f8 = 0xffffffffffffffff;
    local_100 = 0xffffffffffffffff;
    local_108 = 0xffffffffffffffff;
  }
  lVar19 = local_70 * 3;
  DAT_0094b040 = local_108;
  DAT_0094b048 = local_100;
  DAT_0094b050 = local_f8;
  DAT_0094b058 = local_e8;
  DAT_0094b060 = local_e0;
  DAT_0094b068 = local_d8;
  DAT_0094b070 = local_d0;
  DAT_0094b078 = local_c8;
  lVar17 = lVar19 + 3;
  if (-1 < lVar19) {
    lVar17 = lVar19;
  }
  DAT_0094b088 = local_c0;
  uVar18 = lVar17 >> 2;
  if (0xfffffffffffffff < uVar18) {
    uVar18 = 0xfffffffffffffff;
  }
  DAT_0094b090 = local_b8;
  DAT_0094b098 = local_b0;
  if (uVar18 < 0x4040) {
    uVar18 = 0x4040;
  }
  if (((_DAT_0094af08 & 0x10000) == 0) || ((DAT_0094aff4 & 0x1000) != 0)) {
    uVar8 = (-(uint)((DAT_0094aff4 & 0x200) == 0) & 0xffffe800) + 0x2000;
    uVar14 = (-(uint)((DAT_0094aff4 & 0x200) == 0) & 0xffffff80) + 0x100;
  }
  else {
    uVar8 = 0x4000;
    uVar14 = 0x200;
  }
  if ((_DAT_0094af10 & 0x10) != 0) {
    uVar8 = 0x840;
  }
  uVar9 = (ulong)uVar8;
  if (iVar15 != 2) {
    local_d8 = uVar18;
  }
  DAT_0094b080 = uVar16;
  FUN_0078d220(0x1c,puVar11,0);
  uVar16 = local_58[0];
  if (local_58[0] == 0) {
    uVar16 = local_f8;
  }
  FUN_0078d220(4,puVar11,0);
  if (local_58[0] != 0) {
    local_70 = local_58[0];
  }
  FUN_0078d220(0x10,puVar11,0);
  uVar13 = local_58[0];
  if (0xfffffffffffbfbe < local_58[0] - 0x4041) {
    uVar13 = uVar18;
  }
  FUN_0078d220(10,puVar11,0);
  if ((long)(ulong)uVar14 < (long)local_58[0]) {
    uVar9 = local_58[0] & 0xffffffff;
  }
  FUN_0078d220(0xf,puVar11,0);
  uVar6 = local_58[0];
  local_58[0] = 0xffffffffffffffff;
  local_60 = 0;
  local_68 = uVar16;
  FUN_0078ccd0(0x1c,&local_68,&local_60,puVar11);
  uVar18 = local_70;
  local_58[0] = 0xffffffffffffffff;
  local_60 = 0;
  local_68 = local_70;
  FUN_0078ccd0(4,&local_68,&local_60,puVar11);
  local_60 = 0x4040;
  local_58[0] = 0xfffffffffffffff;
  local_68 = uVar13;
  FUN_0078ccd0(0x10,&local_68,&local_60,puVar11);
  local_58[0] = 0xffffffffffffffff;
  local_68 = uVar9;
  local_60 = (ulong)uVar14;
  FUN_0078ccd0(10,&local_68,&local_60,puVar11);
  local_58[0] = 0xffffffffffffffff;
  local_68 = uVar6;
  local_60 = 1;
  FUN_0078ccd0(0xf,&local_68,&local_60,puVar11);
  DAT_0094b038 = uVar6;
  DAT_0094b018 = uVar18;
  DAT_0094b010 = uVar16;
  DAT_0094b020 = uVar13;
  DAT_0094b028 = uVar9;
  DAT_0094b030 = local_d8;
  FUN_0078d220(0x18,puVar11,&LAB_0078f9a0);
  if ((DAT_0094aeec & 0x8000000) == 0) {
    DAT_0094af44 = DAT_0094af44 & 0xffffffe8;
    DAT_0094aeec = DAT_0094aeec & 0xfbffffff;
  }
  else if ((DAT_0094af44 & 2) != 0 || (DAT_0094aeec & 0x4000000) != 0) goto LAB_006d13e1;
  DAT_0094aeec = DAT_0094aeec & 0xcfffefff;
  DAT_0094b000 = 0;
  _DAT_0094afa4 = _DAT_0094afa4 & 0xffffffcf;
  _DAT_0094af08 = _DAT_0094af08 & DAT_00822c48;
  _DAT_0094af10 = _DAT_0094af10 & 0xfc3ffef3;
  DAT_0094af2c = DAT_0094af2c & 0xfffef7ff;
LAB_006d13e1:
  DAT_0094ae60 = 2;
  uVar8 = DAT_0094aeec;
  if (DAT_0094aec0 == 1) goto LAB_006d1887;
  do {
    while( true ) {
      FUN_0078d220(0x17,puVar11,FUN_00790460);
      FUN_0078d220(0x11,puVar11,FUN_007904f0);
      syscall();
      _DAT_0094af10 = _DAT_0094af10 & 0xffefffff;
      _DAT_0094af08 = _DAT_0094af08 & 0xffffff7fffffffff;
      uVar16 = DAT_0094b010 & 0xffffffffffffff00;
      if (0 < (long)uVar16) {
        DAT_0093d718 = (long)uVar16 >> 1;
        DAT_0093d710 = uVar16;
      }
      uVar16 = DAT_0094b018 & 0xffffffffffffff00;
      if (0 < (long)uVar16) {
        DAT_0093d708 = (long)uVar16 >> 1;
        _DAT_0093d700 = uVar16;
      }
      DAT_00945830 = DAT_0094b020;
      DAT_0093d6f8 = DAT_0094b028;
      DAT_0093d6f0 = DAT_0094b038;
      DAT_00945828 = DAT_0094b030;
      if ((DAT_0094aff4 & 0x8000) != 0) {
        _DAT_00945820 = _DAT_00945820 | 1;
      }
      FUN_004057e0(0x3001,puVar11);
      pEVar10 = Elf64_Rela_ARRAY_004002e8;
      do {
        puVar1 = (undefined8 *)pEVar10->r_offset;
        if ((int)pEVar10->r_info != 0x25) {
                    /* WARNING: Subroutine does not return */
          FUN_00703110("Unexpected reloc type in static binary.\n");
        }
        uVar7 = (*(code *)pEVar10->r_addend)();
        pEVar10 = pEVar10 + 1;
        *puVar1 = uVar7;
      } while (pEVar10 < (Elf64_Rela *)0x400678);
      FUN_006d2430();
      *(undefined4 *)(in_FS_OFFSET + 0x48) = DAT_0094b0a4;
      *(ulong *)(in_FS_OFFSET + 0x28) = *DAT_0093adf0 & 0xffffffffffffff00;
      uVar8 = FUN_00790580();
      if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00703110("FATAL: cannot determine kernel version\n");
      }
      if ((DAT_0094ae98 == 0) || (uVar8 < DAT_0094ae98)) {
        DAT_0094ae98 = uVar8;
      }
      if ((int)uVar8 < 0x30200) {
                    /* WARNING: Subroutine does not return */
        FUN_00703110("FATAL: kernel too old\n");
      }
      if (PTR_0093af40 != (undefined *)0x0) {
        func_0x00000000();
      }
      *(ulong *)(in_FS_OFFSET + 0x30) = DAT_0093adf0[1];
      if (param_6 != 0) {
        FUN_006e93d0(param_6,0,0);
      }
      FUN_007906e0(1);
      FUN_007908a0(param_2,param_3,DAT_0094ab80);
      FUN_006e93d0(FUN_006cff40,0,0);
      if (DAT_0093ae30 != 0) {
        FUN_006d2290();
      }
      plVar12 = DAT_0094ab80;
      FUN_00401000();
      lVar19 = 0;
      puVar11 = (ulong *)&DAT_00000009;
      do {
        (*(code *)(&PTR_FUN_008dd270)[lVar19])(param_2,param_3,plVar12);
        lVar19 = lVar19 + 1;
      } while (lVar19 != 9);
      FUN_00784240(0,0);
      uVar8 = FUN_006cff80(param_1,param_2,param_3);
LAB_006d1887:
      if ((_DAT_0094af08 & 0x10000000) != 0) break;
LAB_006d18cc:
      if (((((_DAT_0094af08 & 0x20) != 0) && ((uVar8 & 0x1000) != 0)) &&
          ((DAT_0094af08 & 0x108) == 0x108)) &&
         (((DAT_0094af2c & 0x20) != 0 && ((uVar8 & 0xc00000) == 0xc00000)))) {
        DAT_0094b0f0 = "haswell";
      }
    }
    if ((_DAT_0094af08 & 0x8000000) == 0) {
      if (((DAT_0094af08 & 0x40020000) == 0x40020000) && ((int)DAT_0094af08 < 0)) {
        DAT_0094ae60 = 6;
      }
      goto LAB_006d18cc;
    }
    if ((_DAT_0094af08 & 0x4000000) == 0) goto LAB_006d18cc;
    DAT_0094b0f0 = "xeon_phi";
  } while( true );
}


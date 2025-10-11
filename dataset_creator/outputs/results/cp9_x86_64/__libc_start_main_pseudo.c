
/* WARNING: Removing unreachable block (ram,0x006c7e10) */
/* WARNING: Removing unreachable block (ram,0x006c7ce9) */
/* WARNING: Removing unreachable block (ram,0x006c7cfb) */
/* WARNING: Removing unreachable block (ram,0x006c8445) */
/* WARNING: Removing unreachable block (ram,0x006c83f2) */
/* WARNING: Removing unreachable block (ram,0x006c8614) */
/* WARNING: Removing unreachable block (ram,0x006c83d2) */
/* WARNING: Removing unreachable block (ram,0x006c7fb8) */
/* WARNING: Removing unreachable block (ram,0x006c7f91) */
/* WARNING: Removing unreachable block (ram,0x006c7f6a) */
/* WARNING: Removing unreachable block (ram,0x006c7f5a) */
/* WARNING: Removing unreachable block (ram,0x006c7c35) */
/* WARNING: Removing unreachable block (ram,0x006c7c0e) */
/* WARNING: Removing unreachable block (ram,0x006c7be7) */
/* WARNING: Removing unreachable block (ram,0x006c7bd7) */
/* WARNING: Removing unreachable block (ram,0x006c8532) */
/* WARNING: Removing unreachable block (ram,0x006c850b) */
/* WARNING: Removing unreachable block (ram,0x006c84e4) */
/* WARNING: Removing unreachable block (ram,0x006c84d4) */
/* WARNING: Removing unreachable block (ram,0x006c74ea) */
/* WARNING: Removing unreachable block (ram,0x006c8600) */
/* WARNING: Removing unreachable block (ram,0x006c846d) */
/* WARNING: Removing unreachable block (ram,0x006c8475) */
/* WARNING: Removing unreachable block (ram,0x006c7ce4) */
/* WARNING: Removing unreachable block (ram,0x006c7a3e) */
/* WARNING: Removing unreachable block (ram,0x006c8049) */
/* WARNING: Removing unreachable block (ram,0x006c8061) */
/* WARNING: Removing unreachable block (ram,0x006c806a) */
/* WARNING: Removing unreachable block (ram,0x006c806f) */
/* WARNING: Removing unreachable block (ram,0x006c8074) */
/* WARNING: Removing unreachable block (ram,0x006c808a) */
/* WARNING: Removing unreachable block (ram,0x006c809f) */
/* WARNING: Removing unreachable block (ram,0x006c80aa) */
/* WARNING: Removing unreachable block (ram,0x006c7af3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __libc_start_main(undefined8 param_1,int param_2,long param_3,undefined8 param_4,
                      undefined8 param_5,long param_6,undefined8 param_7)

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
  
  environ = (long *)(param_3 + 8 + (long)param_2 * 8);
  __libc_stack_end = param_7;
  plVar12 = environ;
  do {
    lVar19 = *plVar12;
    plVar12 = plVar12 + 1;
  } while (lVar19 != 0);
  _dl_aux_init();
  if (_dl_phdr == 0) {
    if (__ehdr_start.e_phentsize != 0x38) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("__ehdr_start.e_phentsize == sizeof *GL(dl_phdr)","../csu/libc-start.c",0x11a,
                    "__libc_start_main_impl");
    }
    _dl_phdr = __ehdr_start.e_phoff + 0x400000;
    _dl_phnum = (ulong)__ehdr_start.e_phnum;
  }
  __libc_init_secure();
  __tunables_init(environ);
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  puVar2 = (undefined4 *)cpuid_basic_info(0);
  DAT_0093dec4 = *puVar2;
  iVar15 = puVar2[1];
  iVar4 = puVar2[2];
  iVar5 = puVar2[3];
  if ((iVar15 == 0x756e6547) && (iVar5 == 0x6c65746e)) {
    if (iVar4 != 0x49656e69) goto LAB_006c7516;
    get_common_indices_constprop_0(&local_80,&local_7c,local_58,&local_78);
    puVar3 = (uint *)cpuid(0x80000000);
    uVar8 = *puVar3;
    if (0x80000000 < uVar8) {
      puVar2 = (undefined4 *)cpuid(0x80000001);
      _DAT_0093df14 = *puVar2;
      _DAT_0093df18 = puVar2[1];
      DAT_0093df20 = puVar2[2];
      DAT_0093df1c = puVar2[3];
      if (0x80000006 < uVar8) {
        puVar2 = (undefined4 *)cpuid(0x80000007);
        _DAT_0093df54 = *puVar2;
        _DAT_0093df58 = puVar2[1];
        _DAT_0093df60 = puVar2[2];
        _DAT_0093df5c = puVar2[3];
        if (uVar8 != 0x80000007) {
          puVar2 = (undefined4 *)cpuid(0x80000008);
          _DAT_0093df74 = *puVar2;
          DAT_0093df78 = puVar2[1];
          _DAT_0093df80 = puVar2[2];
          _DAT_0093df7c = puVar2[3];
        }
      }
    }
    update_active_constprop_0();
    if (local_80 == 6) {
      local_7c = local_7c + (int)local_58[0];
      if (local_7c < 0x5e) {
        if (local_7c < 0x25) {
          if (local_7c == 0x1c) {
LAB_006c883d:
            DAT_0093dff4 = DAT_0093dff4 | 4;
            goto LAB_006c856d;
          }
          if (local_7c < 0x1d) {
            if (local_7c != 0x1a) goto LAB_006c86f7;
          }
          else if (1 < local_7c - 0x1e) {
LAB_006c86f7:
            if ((DAT_0093dedc._3_1_ & 0x10) == 0) goto LAB_006c856d;
          }
LAB_006c87a7:
          DAT_0093dff4 = DAT_0093dff4 | 0x39;
LAB_006c87ae:
          if (0x5e < local_7c) goto LAB_006c8751;
        }
        else {
          uVar16 = 1L << ((char)local_7c - 0x25U & 0x3f);
          if ((uVar16 & 0x1a401a000040000) != 0) {
LAB_006c882e:
            DAT_0093dff4 = DAT_0093dff4 | 0x138;
            goto LAB_006c87ae;
          }
          if ((uVar16 & 0x681) != 0) goto LAB_006c87a7;
          if (local_7c == 0x26) goto LAB_006c883d;
          if ((DAT_0093dedc._3_1_ & 0x10) != 0) goto LAB_006c87a7;
        }
        if (0x3b < local_7c) {
          switch(local_7c) {
          case 0x3c:
          case 0x45:
          case 0x46:
switchD_006c87d5_caseD_3c:
            _DAT_0093df08 = _DAT_0093df08 & 0xfffffffffffff7ff;
            break;
          case 0x3f:
            if (local_78 < 4) goto switchD_006c87d5_caseD_3c;
            break;
          case 0x4e:
          case 0x5e:
switchD_006c87d5_caseD_4e:
            _DAT_0093df08 = _DAT_0093df08 & 0xfffffffffffff7ef;
            _DAT_0093df10 = _DAT_0093df10 | 0x800;
            goto LAB_006c856d;
          case 0x55:
            if (local_78 < 6) goto switchD_006c87d5_caseD_4e;
          }
        }
      }
      else {
        if (0x3d < local_7c - 0x5f) {
          if ((DAT_0093dedc._3_1_ & 0x10) != 0) goto LAB_006c87a7;
          goto LAB_006c87ae;
        }
        uVar16 = 1L << ((byte)(local_7c - 0x5f) & 0x3f);
        if ((uVar16 & 0x2080008000000000) == 0) {
          if ((uVar16 & 0x8400001) != 0) goto LAB_006c882e;
          if ((DAT_0093dedc._3_1_ & 0x10) != 0) goto LAB_006c87a7;
        }
        else {
          DAT_0093dff4 = DAT_0093dff4 | 0x139;
        }
LAB_006c8751:
        if (((local_7c & 0xffffffef) == 0x8e) && (local_78 < 0xd)) goto switchD_006c87d5_caseD_4e;
      }
    }
LAB_006c856d:
    if ((DAT_0093def8._3_1_ & 8) == 0) {
      if (((byte)DAT_0093df94 & 0x10) == 0) {
        DAT_0093dff4 = DAT_0093dff4 | 0x1000;
      }
      if ((_DAT_0093df08 & 0x800) != 0) goto LAB_006c8592;
    }
    else {
LAB_006c8592:
      DAT_0093dff4 = DAT_0093dff4 | 0x400;
    }
    if (((byte)DAT_0093df00 & 0x10) != 0) {
      DAT_0093dff4 = DAT_0093dff4 | 0x8000;
    }
    iVar15 = 1;
  }
  else if ((iVar15 == 0x68747541) && (iVar5 == 0x444d4163)) {
    if (iVar4 != 0x69746e65) goto LAB_006c7516;
LAB_006c7baa:
    get_common_indices_constprop_0(&local_80,&local_7c,local_58,&local_78);
    puVar3 = (uint *)cpuid(0x80000000);
    uVar8 = *puVar3;
    if (0x80000000 < uVar8) {
      puVar2 = (undefined4 *)cpuid(0x80000001);
      _DAT_0093df14 = *puVar2;
      _DAT_0093df18 = puVar2[1];
      DAT_0093df20 = puVar2[2];
      DAT_0093df1c = puVar2[3];
      if (0x80000006 < uVar8) {
        puVar2 = (undefined4 *)cpuid(0x80000007);
        _DAT_0093df54 = *puVar2;
        _DAT_0093df58 = puVar2[1];
        _DAT_0093df60 = puVar2[2];
        _DAT_0093df5c = puVar2[3];
        if (uVar8 != 0x80000007) {
          puVar2 = (undefined4 *)cpuid(0x80000008);
          _DAT_0093df74 = *puVar2;
          DAT_0093df78 = puVar2[1];
          _DAT_0093df80 = puVar2[2];
          _DAT_0093df7c = puVar2[3];
        }
      }
    }
    update_active_constprop_0();
    if ((DAT_0093deec & 0x10000000) != 0) {
      DAT_0093df2c = DAT_0093df2c | DAT_0093df1c & 0x10000;
    }
    if ((local_80 == 0x15) && (local_7c - 0x60 < 0x20)) {
      DAT_0093dff4 = DAT_0093dff4 & 0xfffffdff | 10;
    }
    iVar15 = 2;
  }
  else {
    if ((iVar15 == 0x6f677948) && (iVar5 == 0x656e6975)) {
      if (iVar4 == 0x6e65476e) goto LAB_006c7baa;
    }
    else if ((iVar15 == 0x746e6543) && (iVar5 == 0x736c7561)) {
      if (iVar4 == 0x48727561) {
LAB_006c7f2a:
        get_common_indices_constprop_0(&local_80,&local_7c,&local_60,local_58);
        puVar3 = (uint *)cpuid(0x80000000);
        uVar8 = *puVar3;
        if (0x80000000 < uVar8) {
          puVar2 = (undefined4 *)cpuid(0x80000001);
          _DAT_0093df14 = *puVar2;
          _DAT_0093df18 = puVar2[1];
          DAT_0093df20 = puVar2[2];
          DAT_0093df1c = puVar2[3];
          if (0x80000006 < uVar8) {
            puVar2 = (undefined4 *)cpuid(0x80000007);
            _DAT_0093df54 = *puVar2;
            _DAT_0093df58 = puVar2[1];
            _DAT_0093df60 = puVar2[2];
            _DAT_0093df5c = puVar2[3];
            if (uVar8 != 0x80000007) {
              puVar2 = (undefined4 *)cpuid(0x80000008);
              _DAT_0093df74 = *puVar2;
              DAT_0093df78 = puVar2[1];
              _DAT_0093df80 = puVar2[2];
              _DAT_0093df7c = puVar2[3];
            }
          }
        }
        update_active_constprop_0();
        local_7c = (int)local_60 + local_7c;
        if (local_80 == 6) {
          if ((local_7c == 0xf) || (local_7c == 0x19)) {
LAB_006c85d8:
            _DAT_0093df08 = _DAT_0093df08 & 0xffffffffffffffdf;
            DAT_0093deec = DAT_0093deec & 0xefffffff;
            DAT_0093dff4 = DAT_0093dff4 & 0xfffffdff | 0x100;
          }
        }
        else if (local_80 == 7) {
          if (local_7c == 0x1b) goto LAB_006c85d8;
          if (local_7c == 0x3b) {
            DAT_0093deec = DAT_0093deec & 0xefffffff;
            _DAT_0093df08 = _DAT_0093df08 & 0xffffffffffffffdf;
            DAT_0093dff4 = DAT_0093dff4 & 0xfffffdff;
          }
        }
        iVar15 = 3;
        goto LAB_006c7554;
      }
    }
    else if ((iVar15 == 0x68532020 && iVar5 == 0x20206961) && (iVar4 == 0x68676e61))
    goto LAB_006c7f2a;
LAB_006c7516:
    get_common_indices_constprop_0(0,0,0,0);
    update_active_constprop_0();
    iVar15 = 4;
  }
LAB_006c7554:
  puVar11 = local_58;
  if ((DAT_0093dee0 & 0x100) != 0) {
    DAT_0093dff4 = DAT_0093dff4 | 0x40;
  }
  if ((DAT_0093dee0 & 0x8000) != 0) {
    DAT_0093dff4 = DAT_0093dff4 | 0x80;
  }
  _DAT_0093dec8 = CONCAT44(local_7c,local_80);
  local_70 = 0xffffffffffffffff;
  local_74 = 0;
  _dl_x86_cpu_features = iVar15;
  _DAT_0093ded0 = local_78;
  if (iVar15 == 1) {
    local_f8 = handle_intel_constprop_0(0xbc);
    local_d8 = handle_intel_constprop_0(0xbf);
    uVar16 = handle_intel_constprop_0(0xc2);
    local_70 = uVar16;
    local_108 = handle_intel_constprop_0(0xb9);
    local_100 = handle_intel_constprop_0(0xbb);
    local_e8 = handle_intel_constprop_0(0xbd);
    local_e0 = handle_intel_constprop_0(0xbe);
    local_d0 = handle_intel_constprop_0(0xc0);
    local_c8 = handle_intel_constprop_0(0xc1);
    local_c0 = handle_intel_constprop_0(0xc3);
    local_b8 = handle_intel_constprop_0(0xc4);
    local_b0 = handle_intel_constprop_0(0xc5);
    get_common_cache_info_constprop_0(&local_70,&local_74,local_d8);
  }
  else if (iVar15 == 3) {
    local_f8 = handle_zhaoxin(0xbc);
    local_d8 = handle_zhaoxin(0xbf);
    uVar16 = handle_zhaoxin(0xc2);
    local_70 = uVar16;
    local_108 = handle_zhaoxin(0xb9);
    local_100 = handle_zhaoxin(0xbb);
    local_e8 = handle_zhaoxin(0xbd);
    local_e0 = handle_zhaoxin(0xbe);
    local_d0 = handle_zhaoxin(0xc0);
    local_c8 = handle_zhaoxin(0xc1);
    local_c0 = handle_zhaoxin(0xc3);
    local_b8 = handle_zhaoxin(0xc4);
    get_common_cache_info_constprop_0(&local_70,&local_74,local_d8);
    local_b0 = 0xffffffffffffffff;
  }
  else if (iVar15 == 2) {
    uVar8 = local_80;
    local_f8 = handle_amd(0xbc);
    local_d8 = handle_amd(0xbf);
    uVar16 = handle_amd(0xc2);
    local_70 = uVar16;
    local_108 = handle_amd(0xb9);
    uVar18 = uVar16;
    local_100 = handle_amd(0xbb);
    local_e8 = handle_amd(0xbd);
    local_e0 = handle_amd(0xbe);
    local_d0 = handle_amd(0xc0);
    local_c8 = handle_amd(0xc1);
    local_c0 = handle_amd(0xc3);
    local_b8 = handle_amd(0xc4);
    puVar3 = (uint *)cpuid(0x80000000);
    if ((long)uVar18 < 1) {
      local_b0 = 0xffffffffffffffff;
      local_70 = local_d8;
    }
    else {
      if (*puVar3 < 0x80000008) {
LAB_006c83ed:
        lVar19 = cpuid_Version_info(1);
        if ((*(uint *)(lVar19 + 8) & 0x10000000) != 0) {
          local_74 = *(uint *)(lVar19 + 4) >> 0x10 & 0xff;
        }
        if (local_74 != 0) goto LAB_006c8417;
      }
      else {
        lVar19 = cpuid(0x80000008);
        local_74 = 1 << ((byte)(*(uint *)(lVar19 + 0xc) >> 0xc) & 0xf);
        if (0x16 < uVar8) goto LAB_006c83ed;
LAB_006c8417:
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
  _DAT_0093e040 = local_108;
  _DAT_0093e048 = local_100;
  _DAT_0093e050 = local_f8;
  _DAT_0093e058 = local_e8;
  _DAT_0093e060 = local_e0;
  _DAT_0093e068 = local_d8;
  _DAT_0093e070 = local_d0;
  _DAT_0093e078 = local_c8;
  lVar17 = lVar19 + 3;
  if (-1 < lVar19) {
    lVar17 = lVar19;
  }
  _DAT_0093e088 = local_c0;
  uVar18 = lVar17 >> 2;
  if (0xfffffffffffffff < uVar18) {
    uVar18 = 0xfffffffffffffff;
  }
  _DAT_0093e090 = local_b8;
  _DAT_0093e098 = local_b0;
  if (uVar18 < 0x4040) {
    uVar18 = 0x4040;
  }
  if (((_DAT_0093df08 & 0x10000) == 0) || ((DAT_0093dff4 & 0x1000) != 0)) {
    uVar8 = (-(uint)((DAT_0093dff4 & 0x200) == 0) & 0xffffe800) + 0x2000;
    uVar14 = (-(uint)((DAT_0093dff4 & 0x200) == 0) & 0xffffff80) + 0x100;
  }
  else {
    uVar8 = 0x4000;
    uVar14 = 0x200;
  }
  if ((_DAT_0093df10 & 0x10) != 0) {
    uVar8 = 0x840;
  }
  uVar9 = (ulong)uVar8;
  if (iVar15 != 2) {
    local_d8 = uVar18;
  }
  _DAT_0093e080 = uVar16;
  __tunable_get_val(0x1c,puVar11,0);
  uVar16 = local_58[0];
  if (local_58[0] == 0) {
    uVar16 = local_f8;
  }
  __tunable_get_val(4,puVar11,0);
  if (local_58[0] != 0) {
    local_70 = local_58[0];
  }
  __tunable_get_val(0x10,puVar11,0);
  uVar13 = local_58[0];
  if (0xfffffffffffbfbe < local_58[0] - 0x4041) {
    uVar13 = uVar18;
  }
  __tunable_get_val(10,puVar11,0);
  if ((long)(ulong)uVar14 < (long)local_58[0]) {
    uVar9 = local_58[0] & 0xffffffff;
  }
  __tunable_get_val(0xf,puVar11,0);
  uVar6 = local_58[0];
  local_58[0] = 0xffffffffffffffff;
  local_60 = 0;
  local_68 = uVar16;
  __tunable_set_val(0x1c,&local_68,&local_60,puVar11);
  uVar18 = local_70;
  local_58[0] = 0xffffffffffffffff;
  local_60 = 0;
  local_68 = local_70;
  __tunable_set_val(4,&local_68,&local_60,puVar11);
  local_60 = 0x4040;
  local_58[0] = 0xfffffffffffffff;
  local_68 = uVar13;
  __tunable_set_val(0x10,&local_68,&local_60,puVar11);
  local_58[0] = 0xffffffffffffffff;
  local_68 = uVar9;
  local_60 = (ulong)uVar14;
  __tunable_set_val(10,&local_68,&local_60,puVar11);
  local_58[0] = 0xffffffffffffffff;
  local_68 = uVar6;
  local_60 = 1;
  __tunable_set_val(0xf,&local_68,&local_60,puVar11);
  DAT_0093e038 = uVar6;
  DAT_0093e018 = uVar18;
  DAT_0093e010 = uVar16;
  DAT_0093e020 = uVar13;
  DAT_0093e028 = uVar9;
  DAT_0093e030 = local_d8;
  __tunable_get_val(0x18,puVar11,_dl_tunable_set_hwcaps);
  if ((DAT_0093deec & 0x8000000) == 0) {
    _DAT_0093df44 = _DAT_0093df44 & 0xffffffe8;
    DAT_0093deec = DAT_0093deec & 0xfbffffff;
  }
  else if ((_DAT_0093df44 & 2) != 0 || (DAT_0093deec & 0x4000000) != 0) goto LAB_006c79d1;
  DAT_0093deec = DAT_0093deec & 0xcfffefff;
  _DAT_0093e000 = 0;
  _DAT_0093dfa4 = _DAT_0093dfa4 & 0xffffffcf;
  _DAT_0093df08 = _DAT_0093df08 & DAT_00818a28;
  _DAT_0093df10 = _DAT_0093df10 & 0xfc3ffef3;
  DAT_0093df2c = DAT_0093df2c & 0xfffef7ff;
LAB_006c79d1:
  _dl_hwcap = 2;
  uVar8 = DAT_0093deec;
  if (_dl_x86_cpu_features == 1) goto LAB_006c7e77;
  do {
    while( true ) {
      __tunable_get_val(0x17,puVar11,_dl_tunable_set_x86_ibt);
      __tunable_get_val(0x11,puVar11,_dl_tunable_set_x86_shstk);
      syscall();
      _DAT_0093df10 = _DAT_0093df10 & 0xffefffff;
      _DAT_0093df08 = _DAT_0093df08 & 0xffffff7fffffffff;
      uVar16 = DAT_0093e010 & 0xffffffffffffff00;
      if (0 < (long)uVar16) {
        __x86_data_cache_size_half = (long)uVar16 >> 1;
        __x86_data_cache_size = uVar16;
      }
      uVar16 = DAT_0093e018 & 0xffffffffffffff00;
      if (0 < (long)uVar16) {
        __x86_shared_cache_size_half = (long)uVar16 >> 1;
        __x86_shared_cache_size = uVar16;
      }
      __x86_shared_non_temporal_threshold = DAT_0093e020;
      __x86_rep_movsb_threshold = DAT_0093e028;
      __x86_rep_stosb_threshold = DAT_0093e038;
      __x86_rep_movsb_stop_threshold = DAT_0093e030;
      if ((DAT_0093dff4 & 0x8000) != 0) {
        __x86_string_control = __x86_string_control | 1;
      }
      _dl_relocate_static_pie(0x3001,puVar11);
      pEVar10 = __rela_iplt_start;
      do {
        puVar1 = (undefined8 *)pEVar10->r_offset;
        if ((int)pEVar10->r_info != 0x25) {
                    /* WARNING: Subroutine does not return */
          __libc_fatal("Unexpected reloc type in static binary.\n");
        }
        uVar7 = (*(code *)pEVar10->r_addend)();
        pEVar10 = pEVar10 + 1;
        *puVar1 = uVar7;
      } while (pEVar10 < (Elf64_Rela *)&__rela_iplt_end);
      __libc_setup_tls();
      *(undefined4 *)(in_FS_OFFSET + 0x48) = _dl_x86_feature_1;
      *(ulong *)(in_FS_OFFSET + 0x28) = *_dl_random & 0xffffffffffffff00;
      uVar8 = _dl_discover_osversion();
      if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        __libc_fatal("FATAL: cannot determine kernel version\n");
      }
      if ((_dl_osversion == 0) || (uVar8 < _dl_osversion)) {
        _dl_osversion = uVar8;
      }
      if ((int)uVar8 < 0x30200) {
                    /* WARNING: Subroutine does not return */
        __libc_fatal("FATAL: kernel too old\n");
      }
      if (PTR_0092df40 != (undefined *)0x0) {
        func_0x00000000();
      }
      *(ulong *)(in_FS_OFFSET + 0x30) = _dl_random[1];
      if (param_6 != 0) {
        __cxa_atexit(param_6,0,0);
      }
      __libc_early_init(1);
      __libc_init_first(param_2,param_3,environ);
      __cxa_atexit(call_fini,0,0);
      if (__libc_enable_secure != 0) {
        __libc_check_standard_fds();
      }
      plVar12 = environ;
      _init();
      lVar19 = 0;
      puVar11 = (ulong *)0x9;
      do {
        (*(code *)(&__frame_dummy_init_array_entry)[lVar19])(param_2,param_3,plVar12);
        lVar19 = lVar19 + 1;
      } while (lVar19 != 9);
      _dl_debug_initialize(0,0);
      uVar8 = __libc_start_call_main(param_1,param_2,param_3);
LAB_006c7e77:
      if ((_DAT_0093df08 & 0x10000000) != 0) break;
LAB_006c7ebc:
      if (((((_DAT_0093df08 & 0x20) != 0) && ((uVar8 & 0x1000) != 0)) &&
          ((DAT_0093df08 & 0x108) == 0x108)) &&
         (((DAT_0093df2c & 0x20) != 0 && ((uVar8 & 0xc00000) == 0xc00000)))) {
        _dl_platform = "haswell";
      }
    }
    if ((_DAT_0093df08 & 0x8000000) == 0) {
      if (((DAT_0093df08 & 0x40020000) == 0x40020000) && ((int)DAT_0093df08 < 0)) {
        _dl_hwcap = 6;
      }
      goto LAB_006c7ebc;
    }
    if ((_DAT_0093df08 & 0x4000000) == 0) goto LAB_006c7ebc;
    _dl_platform = "xeon_phi";
  } while( true );
}



/* std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > std::num_get<wchar_t,
   std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> >
   >::_M_extract_int[abi:cxx11]<unsigned int>(std::istreambuf_iterator<wchar_t,
   std::char_traits<wchar_t> >, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> >,
   std::ios_base&, std::_Ios_Iostate&, unsigned int&) const */

undefined1  [16]
std::num_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::
_M_extract_int_abi_cxx11_<unsigned_int>
          (undefined8 param_1,long *param_2,ulong param_3,long *param_4,int param_5,long param_6,
          uint *param_7,uint *param_8)

{
  ulong uVar1;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  wchar_t __c;
  ulong uVar12;
  int *piVar13;
  wchar_t *pwVar14;
  int *piVar15;
  ulong uVar16;
  __numpunct_cache<wchar_t> *this;
  undefined1 uVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  bool bVar21;
  bool bVar22;
  long lVar23;
  long in_FS_OFFSET;
  bool bVar24;
  bool bVar25;
  undefined1 auVar26 [16];
  wchar_t local_cc;
  int local_c8;
  long *local_b8;
  ulong local_a8;
  size_t local_98;
  byte local_6a;
  undefined1 *local_68;
  ulong local_60;
  undefined1 local_58;
  undefined7 uStack_57;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_cc = (wchar_t)param_3;
  uVar12 = locale::id::_M_id((id *)&__cxx11::numpunct<wchar_t>::id);
  plVar2 = (long *)(*(long *)(*(long *)(param_6 + 0xd0) + 0x18) + uVar12 * 8);
  lVar23 = *plVar2;
  if (lVar23 == 0) {
                    /* try { // try from 00653965 to 00653969 has its CatchHandler @ 00653d4d */
    this = (__numpunct_cache<wchar_t> *)operator_new(0x150);
    *(undefined4 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined ***)this = &PTR____numpunct_cache_009276c8;
    this[0x20] = (__numpunct_cache<wchar_t>)0x0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    this[0x148] = (__numpunct_cache<wchar_t>)0x0;
                    /* try { // try from 006539d2 to 006539d6 has its CatchHandler @ 00653d44 */
    __numpunct_cache<wchar_t>::_M_cache(this,(locale *)(param_6 + 0xd0));
    locale::_Impl::_M_install_cache(*(_Impl **)(param_6 + 0xd0),(facet *)this,uVar12);
    lVar23 = *plVar2;
  }
  uVar12 = 8;
  uVar18 = *(uint *)(param_6 + 0x18) & 0x4a;
  if ((uVar18 != 0x40) && (uVar12 = 10, uVar18 == 8)) {
    uVar12 = 0x10;
  }
  bVar24 = local_cc == L'\xffffffff';
  bVar5 = param_2 != (long *)0x0 && bVar24;
  bVar6 = bVar24;
  if (bVar5) {
    if ((int *)param_2[2] < (int *)param_2[3]) {
      iVar11 = *(int *)param_2[2];
    }
    else {
      iVar11 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    plVar2 = (long *)0x0;
    if (iVar11 != -1) {
      plVar2 = param_2;
    }
    param_2 = plVar2;
    bVar6 = iVar11 == -1 && bVar5;
  }
  bVar25 = param_5 == -1;
  bVar21 = param_4 != (long *)0x0 && bVar25;
  local_b8 = param_4;
  bVar5 = bVar25;
  if (bVar21) {
    if ((int *)param_4[2] < (int *)param_4[3]) {
      iVar11 = *(int *)param_4[2];
    }
    else {
      iVar11 = (**(code **)(*param_4 + 0x48))(param_4);
    }
    local_b8 = (long *)0x0;
    if (iVar11 != -1) {
      local_b8 = param_4;
    }
    bVar5 = iVar11 == -1 && bVar21;
  }
  if (bVar6 == bVar5) {
    bVar24 = false;
    cVar7 = *(char *)(lVar23 + 0x20);
    __c = L'\0';
    bVar5 = false;
    bVar6 = true;
    local_c8 = 0;
LAB_006531fc:
    if ((int)uVar12 == 0x10) goto LAB_006530f0;
LAB_00653206:
    local_98 = (size_t)(int)uVar12;
    local_a8 = uVar12;
  }
  else {
    __c = local_cc;
    if ((param_2 != (long *)0x0) && (bVar24)) {
      if ((wchar_t *)param_2[2] < (wchar_t *)param_2[3]) {
        __c = *(wchar_t *)param_2[2];
      }
      else {
        __c = (**(code **)(*param_2 + 0x48))(param_2);
      }
      if (__c == L'\xffffffff') {
        param_2 = (long *)0x0;
      }
    }
    bVar24 = *(wchar_t *)(lVar23 + 0xe0) == __c;
    cVar7 = *(char *)(lVar23 + 0x20);
    if ((((!bVar24) && (*(wchar_t *)(lVar23 + 0xe4) != __c)) ||
        ((cVar7 != '\0' && (*(wchar_t *)(lVar23 + 0x4c) == __c)))) ||
       (*(wchar_t *)(lVar23 + 0x48) == __c)) {
LAB_00653120:
      local_c8 = 0;
      bVar5 = false;
      do {
        if (((cVar7 != '\0') && (*(wchar_t *)(lVar23 + 0x4c) == __c)) ||
           (*(wchar_t *)(lVar23 + 0x48) == __c)) break;
        iVar11 = (int)uVar12;
        if (*(wchar_t *)(lVar23 + 0xf0) == __c) {
          bVar6 = (bool)(bVar5 ^ 1U | iVar11 == 10);
          if (!bVar6) goto LAB_0065315e;
          bVar5 = uVar18 == 0 || iVar11 == 8;
          if (uVar18 != 0 && iVar11 != 8) {
            local_c8 = local_c8 + 1;
            goto LAB_00653198;
          }
          piVar15 = (int *)param_2[2];
          piVar13 = (int *)param_2[3];
          local_c8 = 0;
          uVar12 = 8;
          if (piVar15 < piVar13) goto LAB_006531a9;
LAB_00653420:
          (**(code **)(*param_2 + 0x50))(param_2);
          piVar15 = (int *)param_2[2];
          if (piVar15 < (int *)param_2[3]) goto LAB_006531ba;
LAB_00653448:
          iVar11 = (**(code **)(*param_2 + 0x48))(param_2);
        }
        else {
          if (!bVar5) break;
LAB_0065315e:
          if ((*(wchar_t *)(lVar23 + 0xe8) != __c) && (*(wchar_t *)(lVar23 + 0xec) != __c)) {
            bVar5 = true;
            bVar6 = false;
            goto LAB_006531fc;
          }
          bVar6 = iVar11 == 0x10 || uVar18 == 0;
          if (iVar11 != 0x10 && uVar18 != 0) {
            local_98 = (size_t)iVar11;
            bVar5 = true;
            local_a8 = uVar12;
            goto LAB_00653213;
          }
          local_c8 = 0;
          bVar6 = false;
          uVar12 = 0x10;
LAB_00653198:
          piVar15 = (int *)param_2[2];
          piVar13 = (int *)param_2[3];
          bVar5 = bVar6;
          if (piVar13 <= piVar15) goto LAB_00653420;
LAB_006531a9:
          piVar15 = piVar15 + 1;
          param_2[2] = (long)piVar15;
          if (piVar13 <= piVar15) goto LAB_00653448;
LAB_006531ba:
          iVar11 = *piVar15;
        }
        if (iVar11 == -1) {
          param_2 = (long *)0x0;
        }
        bVar21 = local_b8 != (long *)0x0 && bVar25;
        bVar6 = bVar25;
        if (bVar21) {
          if ((int *)local_b8[2] < (int *)local_b8[3]) {
            iVar10 = *(int *)local_b8[2];
          }
          else {
            iVar10 = (**(code **)(*local_b8 + 0x48))();
          }
          plVar2 = (long *)0x0;
          if (iVar10 != -1) {
            plVar2 = local_b8;
          }
          local_b8 = plVar2;
          bVar6 = iVar10 == -1 && bVar21;
        }
        if ((iVar11 == -1) == bVar6) {
          local_cc = L'\xffffffff';
          cVar7 = *(char *)(lVar23 + 0x20);
          bVar6 = true;
          goto LAB_006531fc;
        }
        __c = L'\xffffffff';
        if (param_2 != (long *)0x0) {
          if ((wchar_t *)param_2[2] < (wchar_t *)param_2[3]) {
            __c = *(wchar_t *)param_2[2];
          }
          else {
            __c = (**(code **)(*param_2 + 0x48))(param_2);
          }
          if (__c == L'\xffffffff') {
            param_2 = (long *)0x0;
          }
        }
        cVar7 = *(char *)(lVar23 + 0x20);
        local_cc = L'\xffffffff';
      } while (bVar5);
      bVar6 = false;
      goto LAB_006531fc;
    }
    piVar13 = (int *)param_2[3];
    if ((int *)param_2[2] < piVar13) {
      piVar15 = (int *)param_2[2] + 1;
      param_2[2] = (long)piVar15;
    }
    else {
      (**(code **)(*param_2 + 0x50))(param_2);
      piVar15 = (int *)param_2[2];
      piVar13 = (int *)param_2[3];
    }
    if (piVar15 < piVar13) {
      iVar11 = *piVar15;
    }
    else {
      iVar11 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    if (iVar11 == -1) {
      param_2 = (long *)0x0;
    }
    bVar5 = local_b8 != (long *)0x0 && bVar25;
    bVar6 = bVar25;
    if (bVar5) {
      if ((int *)local_b8[2] < (int *)local_b8[3]) {
        iVar10 = *(int *)local_b8[2];
      }
      else {
        iVar10 = (**(code **)(*local_b8 + 0x48))();
      }
      plVar2 = (long *)0x0;
      if (iVar10 != -1) {
        plVar2 = local_b8;
      }
      local_b8 = plVar2;
      bVar6 = iVar10 == -1 && bVar5;
    }
    if (bVar6 != (iVar11 == -1)) {
      __c = L'\xffffffff';
      if (param_2 != (long *)0x0) {
        if ((wchar_t *)param_2[2] < (wchar_t *)param_2[3]) {
          __c = *(wchar_t *)param_2[2];
        }
        else {
          __c = (**(code **)(*param_2 + 0x48))(param_2);
        }
        if (__c == L'\xffffffff') {
          param_2 = (long *)0x0;
        }
      }
      local_cc = L'\xffffffff';
      cVar7 = *(char *)(lVar23 + 0x20);
      goto LAB_00653120;
    }
    local_cc = L'\xffffffff';
    cVar7 = *(char *)(lVar23 + 0x20);
    bVar5 = false;
    bVar6 = true;
    local_c8 = 0;
    if ((int)uVar12 != 0x10) goto LAB_00653206;
LAB_006530f0:
    local_98 = 0x16;
    local_a8 = 0x16;
  }
LAB_00653213:
  local_58 = 0;
  local_60 = 0;
  local_68 = &local_58;
  if (cVar7 != '\0') {
    __cxx11::string::reserve((string *)&local_68,0x20);
  }
  uVar18 = (uint)(0xffffffff / uVar12);
  bVar3 = *(byte *)(lVar23 + 0x148);
  if (bVar3 == 0) {
    local_6a = 0;
    if (bVar6 == false) {
      uVar9 = 0;
LAB_0065328e:
      if ((uint)local_a8 < 0xb) {
        if ((__c < L'0') || ((int)local_98 + L'0' <= __c)) goto LAB_006536a0;
        uVar8 = __c + L'\xffffffd0';
LAB_006532af:
        if (uVar9 <= uVar18) goto LAB_006534e0;
LAB_006532bd:
        piVar13 = (int *)param_2[2];
        piVar15 = (int *)param_2[3];
        local_6a = 1;
        if (piVar15 <= piVar13) goto LAB_0065350b;
LAB_006532d3:
        piVar13 = piVar13 + 1;
        param_2[2] = (long)piVar13;
LAB_006532db:
        if (piVar13 < piVar15) {
          iVar11 = *piVar13;
        }
        else {
          iVar11 = (**(code **)(*param_2 + 0x48))(param_2);
        }
        if (iVar11 == -1) {
          param_2 = (long *)0x0;
        }
        bVar21 = local_b8 != (long *)0x0 && bVar25;
        bVar22 = bVar25;
        if (bVar21) {
          if ((int *)local_b8[2] < (int *)local_b8[3]) {
            iVar10 = *(int *)local_b8[2];
          }
          else {
            iVar10 = (**(code **)(*local_b8 + 0x48))();
          }
          plVar2 = (long *)0x0;
          if (iVar10 != -1) {
            plVar2 = local_b8;
          }
          local_b8 = plVar2;
          bVar22 = iVar10 == -1 && bVar21;
        }
        if ((iVar11 == -1) == bVar22) goto code_r0x00653318;
        if (param_2 == (long *)0x0) {
          __c = L'\xffffffff';
        }
        else {
          if ((wchar_t *)param_2[2] < (wchar_t *)param_2[3]) {
            __c = *(wchar_t *)param_2[2];
          }
          else {
                    /* try { // try from 00653b48 to 00653b5b has its CatchHandler @ 00653d3b */
            __c = (**(code **)(*param_2 + 0x48))(param_2);
          }
          if (__c == L'\xffffffff') {
            param_2 = (long *)0x0;
          }
        }
        local_cc = L'\xffffffff';
        goto LAB_0065328e;
      }
      uVar8 = __c + L'\xffffffd0';
      if (uVar8 < 10) goto LAB_006532af;
      if ((uint)(__c + L'\xffffff9f') < 6) {
        uVar8 = __c + L'\xffffffa9';
        if (uVar18 < uVar9) goto LAB_006532bd;
LAB_006534e0:
        uVar19 = uVar9 * (int)uVar12;
        uVar9 = uVar8 + uVar19;
        piVar13 = (int *)param_2[2];
        local_6a = local_6a | CARRY4(uVar8,uVar19);
        piVar15 = (int *)param_2[3];
        local_c8 = local_c8 + 1;
        if (piVar13 < piVar15) goto LAB_006532d3;
LAB_0065350b:
                    /* try { // try from 00653512 to 006538a6 has its CatchHandler @ 00653d3b */
        (**(code **)(*param_2 + 0x50))(param_2);
        piVar13 = (int *)param_2[2];
        piVar15 = (int *)param_2[3];
        goto LAB_006532db;
      }
      if ((uint)(__c + L'\xffffffbf') < 6) {
        uVar8 = __c + L'\xffffffc9';
        goto LAB_006532af;
      }
LAB_006536a0:
      bVar3 = 0;
      bVar4 = bVar6;
    }
    else {
      uVar9 = 0;
      bVar3 = bVar6;
      bVar4 = 0;
    }
  }
  else {
    if (bVar6 == false) {
      local_6a = 0;
      uVar9 = 0;
      do {
        uVar1 = local_60;
        bVar4 = *(byte *)(lVar23 + 0x20);
        if ((bVar4 == 0) || (*(wchar_t *)(lVar23 + 0x4c) != __c)) {
          if ((__c == *(wchar_t *)(lVar23 + 0x48)) ||
             (pwVar14 = wmemchr((wchar_t *)(lVar23 + 0xf0),__c,local_98), pwVar14 == (wchar_t *)0x0)
             ) goto LAB_006536a0;
          uVar8 = (uint)((long)pwVar14 - (lVar23 + 0xf0) >> 2);
          if (0xf < (int)uVar8) {
            uVar8 = uVar8 - 6;
          }
          if (uVar9 <= uVar18) {
            uVar19 = uVar9 * (int)uVar12;
            uVar9 = uVar8 + uVar19;
            local_c8 = local_c8 + 1;
            local_6a = local_6a | CARRY4(uVar8,uVar19);
            goto LAB_00653742;
          }
          piVar13 = (int *)param_2[3];
          piVar15 = (int *)param_2[2];
          local_6a = bVar3;
          if (piVar15 < piVar13) goto LAB_0065374f;
LAB_006537c6:
          (**(code **)(*param_2 + 0x50))(param_2);
          piVar15 = (int *)param_2[2];
          piVar13 = (int *)param_2[3];
        }
        else {
          if (local_c8 == 0) {
            bVar3 = 0;
            goto LAB_0065332f;
          }
          uVar17 = (undefined1)local_c8;
          uVar20 = local_60 + 1;
          uVar16 = 0xf;
          if (local_68 != &local_58) {
            uVar16 = CONCAT71(uStack_57,local_58);
          }
          if (uVar16 < uVar20) {
                    /* try { // try from 00653aa2 to 00653b24 has its CatchHandler @ 00653d3b */
            __cxx11::string::_M_mutate((string *)&local_68,local_60,0,(char *)0x0,1);
          }
          local_c8 = 0;
          local_68[uVar1] = uVar17;
          local_68[uVar20] = 0;
          local_60 = uVar20;
LAB_00653742:
          piVar15 = (int *)param_2[2];
          piVar13 = (int *)param_2[3];
          if (piVar13 <= piVar15) goto LAB_006537c6;
LAB_0065374f:
          piVar15 = piVar15 + 1;
          param_2[2] = (long)piVar15;
        }
        if (piVar15 < piVar13) {
          iVar11 = *piVar15;
        }
        else {
                    /* try { // try from 00653bf2 to 00653c04 has its CatchHandler @ 00653d3b */
          iVar11 = (**(code **)(*param_2 + 0x48))(param_2);
        }
        if (iVar11 == -1) {
          param_2 = (long *)0x0;
        }
        bVar21 = local_b8 != (long *)0x0 && bVar25;
        bVar22 = bVar25;
        if (bVar21) {
          if ((int *)local_b8[2] < (int *)local_b8[3]) {
            iVar10 = *(int *)local_b8[2];
          }
          else {
            iVar10 = (**(code **)(*local_b8 + 0x48))();
          }
          plVar2 = (long *)0x0;
          if (iVar10 != -1) {
            plVar2 = local_b8;
          }
          local_b8 = plVar2;
          bVar22 = iVar10 == -1 && bVar21;
        }
        if (bVar22 == (iVar11 == -1)) goto code_r0x00653790;
        if (param_2 == (long *)0x0) {
          __c = L'\xffffffff';
        }
        else {
          if ((wchar_t *)param_2[2] < (wchar_t *)param_2[3]) {
            __c = *(wchar_t *)param_2[2];
          }
          else {
            __c = (**(code **)(*param_2 + 0x48))(param_2);
          }
          if (__c == L'\xffffffff') {
            param_2 = (long *)0x0;
          }
        }
        local_cc = L'\xffffffff';
      } while( true );
    }
    local_6a = 0;
    uVar9 = 0;
    bVar4 = 0;
    bVar3 = bVar6;
  }
LAB_0065332f:
  uVar12 = local_60;
  if (local_60 == 0) {
    if ((bVar5) || (local_c8 != 0)) {
LAB_00653608:
      if (bVar4 == 0) {
        if (local_6a == 0) {
          uVar18 = -uVar9;
          if (!bVar24) {
            uVar18 = uVar9;
          }
          *param_8 = uVar18;
        }
        else {
          *param_8 = 0xffffffff;
          *param_7 = 4;
        }
        goto LAB_00653366;
      }
    }
  }
  else {
    uVar1 = local_60 + 1;
    uVar20 = 0xf;
    if (local_68 != &local_58) {
      uVar20 = CONCAT71(uStack_57,local_58);
    }
    if (uVar20 < uVar1) {
      __cxx11::string::_M_mutate((string *)&local_68,local_60,0,(char *)0x0,1);
    }
    local_68[uVar12] = (undefined1)local_c8;
    local_68[uVar12 + 1] = 0;
    local_60 = uVar1;
    cVar7 = __verify_grouping(*(char **)(lVar23 + 0x10),*(ulong *)(lVar23 + 0x18),
                              (string *)&local_68);
    if (cVar7 == '\0') {
      *param_7 = 4;
    }
    if (((local_c8 != 0) || (bVar5)) || (local_60 != 0)) goto LAB_00653608;
  }
  *param_8 = 0;
  *param_7 = 4;
LAB_00653366:
  if (bVar3 != 0) {
    *param_7 = *param_7 | 2;
  }
  if (local_68 != &local_58) {
    operator_delete(local_68);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  auVar26._8_8_ = param_3 & 0xffffffff00000000 | (ulong)(uint)local_cc;
  auVar26._0_8_ = param_2;
  return auVar26;
code_r0x00653790:
  local_cc = L'\xffffffff';
  bVar4 = bVar6;
  goto LAB_0065332f;
code_r0x00653318:
  local_cc = L'\xffffffff';
  bVar3 = 1;
  bVar4 = bVar6;
  goto LAB_0065332f;
}


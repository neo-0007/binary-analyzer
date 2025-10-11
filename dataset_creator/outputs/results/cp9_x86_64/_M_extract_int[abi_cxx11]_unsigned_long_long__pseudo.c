
/* std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > std::num_get<wchar_t,
   std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> >
   >::_M_extract_int[abi:cxx11]<unsigned long long>(std::istreambuf_iterator<wchar_t,
   std::char_traits<wchar_t> >, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> >,
   std::ios_base&, std::_Ios_Iostate&, unsigned long long&) const */

undefined1  [16]
std::num_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::
_M_extract_int_abi_cxx11_<unsigned_long_long>
          (undefined8 param_1,long *param_2,ulong param_3,long *param_4,int param_5,long param_6,
          uint *param_7,ulong *param_8)

{
  ulong uVar1;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  wchar_t __c;
  ulong uVar11;
  int *piVar12;
  ulong uVar13;
  wchar_t *pwVar14;
  int *piVar15;
  ulong uVar16;
  __numpunct_cache<wchar_t> *this;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  bool bVar20;
  ulong uVar21;
  bool bVar22;
  uint uVar23;
  long lVar24;
  bool bVar25;
  int iVar26;
  long in_FS_OFFSET;
  bool bVar27;
  bool bVar28;
  undefined1 auVar29 [16];
  long *local_d0;
  wchar_t local_c0;
  size_t local_98;
  undefined1 *local_68;
  ulong local_60;
  undefined1 local_58;
  undefined7 uStack_57;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c0 = (wchar_t)param_3;
  uVar11 = locale::id::_M_id((id *)&__cxx11::numpunct<wchar_t>::id);
  plVar2 = (long *)(*(long *)(*(long *)(param_6 + 0xd0) + 0x18) + uVar11 * 8);
  lVar24 = *plVar2;
  if (lVar24 == 0) {
                    /* try { // try from 00656445 to 00656449 has its CatchHandler @ 00656806 */
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
                    /* try { // try from 006564b2 to 006564b6 has its CatchHandler @ 006567fd */
    __numpunct_cache<wchar_t>::_M_cache(this,(locale *)(param_6 + 0xd0));
    locale::_Impl::_M_install_cache(*(_Impl **)(param_6 + 0xd0),(facet *)this,uVar11);
    lVar24 = *plVar2;
  }
  uVar18 = *(uint *)(param_6 + 0x18);
  uVar17 = uVar18 & 0x4a;
  uVar23 = 8;
  if (uVar17 != 0x40) {
    uVar23 = 0x10;
    if (uVar17 != 8) {
      uVar23 = 10;
    }
  }
  bVar27 = local_c0 == L'\xffffffff';
  bVar25 = param_2 != (long *)0x0 && bVar27;
  bVar7 = bVar27;
  if (bVar25) {
    if ((int *)param_2[2] < (int *)param_2[3]) {
      iVar26 = *(int *)param_2[2];
    }
    else {
      iVar26 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    plVar2 = (long *)0x0;
    if (iVar26 != -1) {
      plVar2 = param_2;
    }
    param_2 = plVar2;
    bVar7 = iVar26 == -1 && bVar25;
  }
  uVar18 = uVar18 & 0x4a;
  bVar28 = param_5 == -1;
  bVar25 = param_4 != (long *)0x0 && bVar28;
  local_d0 = param_4;
  bVar20 = bVar28;
  if (bVar25) {
    if ((int *)param_4[2] < (int *)param_4[3]) {
      iVar26 = *(int *)param_4[2];
    }
    else {
      iVar26 = (**(code **)(*param_4 + 0x48))(param_4);
    }
    local_d0 = (long *)0x0;
    if (iVar26 != -1) {
      local_d0 = param_4;
    }
    bVar20 = iVar26 == -1 && bVar25;
  }
  if (bVar7 == bVar20) {
    bVar27 = false;
    cVar8 = *(char *)(lVar24 + 0x20);
    __c = L'\0';
    iVar26 = 0;
    bVar7 = true;
    bVar25 = false;
LAB_00655d08:
    if (uVar23 == 0x10) goto LAB_00655c01;
LAB_00655d12:
    local_98 = (size_t)(int)uVar23;
    uVar18 = uVar23;
  }
  else {
    __c = local_c0;
    if ((param_2 != (long *)0x0) && (bVar27)) {
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
    bVar27 = *(wchar_t *)(lVar24 + 0xe0) == __c;
    cVar8 = *(char *)(lVar24 + 0x20);
    if ((((!bVar27) && (*(wchar_t *)(lVar24 + 0xe4) != __c)) ||
        ((cVar8 != '\0' && (*(wchar_t *)(lVar24 + 0x4c) == __c)))) ||
       (*(wchar_t *)(lVar24 + 0x48) == __c)) {
LAB_00655c30:
      iVar26 = 0;
      bVar25 = false;
      do {
        if (((cVar8 != '\0') && (*(wchar_t *)(lVar24 + 0x4c) == __c)) ||
           (*(wchar_t *)(lVar24 + 0x48) == __c)) break;
        if (*(wchar_t *)(lVar24 + 0xf0) == __c) {
          bVar7 = (bool)(bVar25 ^ 1U | uVar23 == 10);
          if (!bVar7) goto LAB_00655c6e;
          bVar25 = uVar18 == 0 || uVar23 == 8;
          if (uVar18 != 0 && uVar23 != 8) {
            iVar26 = iVar26 + 1;
            goto LAB_00655ca3;
          }
          piVar15 = (int *)param_2[2];
          piVar12 = (int *)param_2[3];
          iVar26 = 0;
          uVar23 = 8;
          if (piVar12 <= piVar15) goto LAB_00655f20;
LAB_00655cb4:
          piVar15 = piVar15 + 1;
          param_2[2] = (long)piVar15;
          if (piVar15 < piVar12) goto LAB_00655cc5;
LAB_00655f48:
          iVar10 = (**(code **)(*param_2 + 0x48))(param_2);
        }
        else {
          if (!bVar25) break;
LAB_00655c6e:
          if ((*(wchar_t *)(lVar24 + 0xe8) != __c) && (*(wchar_t *)(lVar24 + 0xec) != __c)) {
            bVar25 = true;
            bVar7 = false;
            goto LAB_00655d08;
          }
          bVar7 = uVar23 == 0x10 || uVar18 == 0;
          if (uVar23 != 0x10 && uVar18 != 0) {
            local_98 = (size_t)(int)uVar23;
            bVar25 = true;
            uVar18 = uVar23;
            goto LAB_00655d1f;
          }
          iVar26 = 0;
          bVar7 = false;
          uVar23 = 0x10;
LAB_00655ca3:
          piVar15 = (int *)param_2[2];
          piVar12 = (int *)param_2[3];
          bVar25 = bVar7;
          if (piVar15 < piVar12) goto LAB_00655cb4;
LAB_00655f20:
          (**(code **)(*param_2 + 0x50))(param_2);
          piVar15 = (int *)param_2[2];
          if ((int *)param_2[3] <= piVar15) goto LAB_00655f48;
LAB_00655cc5:
          iVar10 = *piVar15;
        }
        if (iVar10 == -1) {
          param_2 = (long *)0x0;
        }
        bVar20 = local_d0 != (long *)0x0 && bVar28;
        bVar7 = bVar28;
        if (bVar20) {
          if ((int *)local_d0[2] < (int *)local_d0[3]) {
            iVar9 = *(int *)local_d0[2];
          }
          else {
            iVar9 = (**(code **)(*local_d0 + 0x48))();
          }
          plVar2 = (long *)0x0;
          if (iVar9 != -1) {
            plVar2 = local_d0;
          }
          local_d0 = plVar2;
          bVar7 = iVar9 == -1 && bVar20;
        }
        if ((iVar10 == -1) == bVar7) {
          local_c0 = L'\xffffffff';
          cVar8 = *(char *)(lVar24 + 0x20);
          bVar7 = true;
          goto LAB_00655d08;
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
        cVar8 = *(char *)(lVar24 + 0x20);
        local_c0 = L'\xffffffff';
      } while (bVar25);
      bVar7 = false;
      goto LAB_00655d08;
    }
    piVar12 = (int *)param_2[3];
    if ((int *)param_2[2] < piVar12) {
      piVar15 = (int *)param_2[2] + 1;
      param_2[2] = (long)piVar15;
    }
    else {
      (**(code **)(*param_2 + 0x50))(param_2);
      piVar15 = (int *)param_2[2];
      piVar12 = (int *)param_2[3];
    }
    if (piVar15 < piVar12) {
      iVar26 = *piVar15;
    }
    else {
      iVar26 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    if (iVar26 == -1) {
      param_2 = (long *)0x0;
    }
    bVar25 = local_d0 != (long *)0x0 && bVar28;
    bVar7 = bVar28;
    if (bVar25) {
      if ((int *)local_d0[2] < (int *)local_d0[3]) {
        iVar10 = *(int *)local_d0[2];
      }
      else {
        iVar10 = (**(code **)(*local_d0 + 0x48))();
      }
      plVar2 = (long *)0x0;
      if (iVar10 != -1) {
        plVar2 = local_d0;
      }
      local_d0 = plVar2;
      bVar7 = iVar10 == -1 && bVar25;
    }
    if (bVar7 != (iVar26 == -1)) {
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
      local_c0 = L'\xffffffff';
      cVar8 = *(char *)(lVar24 + 0x20);
      goto LAB_00655c30;
    }
    bVar7 = true;
    cVar8 = *(char *)(lVar24 + 0x20);
    iVar26 = 0;
    bVar25 = false;
    local_c0 = L'\xffffffff';
    if (uVar23 != 0x10) goto LAB_00655d12;
LAB_00655c01:
    local_98 = 0x16;
    uVar18 = 0x16;
  }
LAB_00655d1f:
  local_58 = 0;
  local_60 = 0;
  local_68 = &local_58;
  if (cVar8 != '\0') {
    __cxx11::string::reserve((string *)&local_68,0x20);
  }
  uVar19 = (ulong)(int)uVar23;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar19;
  uVar11 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar6,0);
  bVar4 = *(byte *)(lVar24 + 0x148);
  if (bVar4 == 0) {
    bVar3 = 0;
    if (bVar7 == false) {
      uVar13 = 0;
LAB_00655da0:
      if (uVar18 < 0xb) {
        if ((__c < L'0') || ((int)local_98 + L'0' <= __c)) goto LAB_00656190;
        uVar23 = __c + L'\xffffffd0';
LAB_00655dc1:
        if (uVar11 < uVar13) goto LAB_00655dcc;
LAB_00655fe0:
        uVar21 = uVar19 * uVar13;
        uVar13 = (long)(int)uVar23 + uVar21;
        bVar3 = bVar3 | CARRY8((long)(int)uVar23,uVar21);
        piVar12 = (int *)param_2[2];
        piVar15 = (int *)param_2[3];
        iVar26 = iVar26 + 1;
        if (piVar15 <= piVar12) goto LAB_0065600d;
LAB_00655de2:
        piVar12 = piVar12 + 1;
        param_2[2] = (long)piVar12;
LAB_00655dea:
        if (piVar12 < piVar15) {
          iVar10 = *piVar12;
        }
        else {
          iVar10 = (**(code **)(*param_2 + 0x48))(param_2);
        }
        if (iVar10 == -1) {
          param_2 = (long *)0x0;
        }
        bVar22 = local_d0 != (long *)0x0 && bVar28;
        bVar20 = bVar28;
        if (bVar22) {
          if ((int *)local_d0[2] < (int *)local_d0[3]) {
            iVar9 = *(int *)local_d0[2];
          }
          else {
            iVar9 = (**(code **)(*local_d0 + 0x48))();
          }
          plVar2 = (long *)0x0;
          if (iVar9 != -1) {
            plVar2 = local_d0;
          }
          local_d0 = plVar2;
          bVar20 = iVar9 == -1 && bVar22;
        }
        if ((iVar10 == -1) == bVar20) goto code_r0x00655e29;
        if (param_2 == (long *)0x0) {
          __c = L'\xffffffff';
        }
        else {
          if ((wchar_t *)param_2[2] < (wchar_t *)param_2[3]) {
            __c = *(wchar_t *)param_2[2];
          }
          else {
                    /* try { // try from 00656628 to 0065663b has its CatchHandler @ 006567f4 */
            __c = (**(code **)(*param_2 + 0x48))(param_2);
          }
          if (__c == L'\xffffffff') {
            param_2 = (long *)0x0;
          }
        }
        local_c0 = L'\xffffffff';
        goto LAB_00655da0;
      }
      uVar23 = __c + L'\xffffffd0';
      if (uVar23 < 10) goto LAB_00655dc1;
      if ((uint)(__c + L'\xffffff9f') < 6) {
        uVar23 = __c + L'\xffffffa9';
        if (uVar13 <= uVar11) goto LAB_00655fe0;
LAB_00655dcc:
        piVar12 = (int *)param_2[2];
        piVar15 = (int *)param_2[3];
        bVar3 = 1;
        if (piVar12 < piVar15) goto LAB_00655de2;
LAB_0065600d:
                    /* try { // try from 00656014 to 00656386 has its CatchHandler @ 006567f4 */
        (**(code **)(*param_2 + 0x50))(param_2);
        piVar12 = (int *)param_2[2];
        piVar15 = (int *)param_2[3];
        goto LAB_00655dea;
      }
      if ((uint)(__c + L'\xffffffbf') < 6) {
        uVar23 = __c + L'\xffffffc9';
        goto LAB_00655dc1;
      }
LAB_00656190:
      bVar4 = 0;
      bVar5 = bVar7;
    }
    else {
      uVar13 = 0;
      bVar4 = bVar7;
      bVar5 = 0;
    }
  }
  else {
    if (bVar7 == false) {
      bVar3 = 0;
      uVar13 = 0;
      do {
        uVar21 = local_60;
        bVar5 = *(byte *)(lVar24 + 0x20);
        if ((bVar5 == 0) || (*(wchar_t *)(lVar24 + 0x4c) != __c)) {
          if ((__c == *(wchar_t *)(lVar24 + 0x48)) ||
             (pwVar14 = wmemchr((wchar_t *)(lVar24 + 0xf0),__c,local_98), pwVar14 == (wchar_t *)0x0)
             ) goto LAB_00656190;
          iVar10 = (int)((long)pwVar14 - (lVar24 + 0xf0) >> 2);
          if (0xf < iVar10) {
            iVar10 = iVar10 + -6;
          }
          if (uVar13 <= uVar11) {
            uVar21 = uVar19 * uVar13;
            uVar13 = (long)iVar10 + uVar21;
            bVar3 = bVar3 | CARRY8((long)iVar10,uVar21);
            iVar26 = iVar26 + 1;
            goto LAB_00656230;
          }
          piVar12 = (int *)param_2[3];
          piVar15 = (int *)param_2[2];
          bVar3 = bVar4;
          if (piVar12 <= piVar15) goto LAB_006562b6;
LAB_0065623d:
          piVar15 = piVar15 + 1;
          param_2[2] = (long)piVar15;
        }
        else {
          if (iVar26 == 0) {
            bVar4 = 0;
            goto LAB_00655e40;
          }
          uVar1 = local_60 + 1;
          uVar16 = 0xf;
          if (local_68 != &local_58) {
            uVar16 = CONCAT71(uStack_57,local_58);
          }
          if (uVar16 < uVar1) {
                    /* try { // try from 00656582 to 00656604 has its CatchHandler @ 006567f4 */
            __cxx11::string::_M_mutate((string *)&local_68,local_60,0,(char *)0x0,1);
          }
          local_68[uVar21] = (char)iVar26;
          local_68[uVar1] = 0;
          iVar26 = 0;
          local_60 = uVar1;
LAB_00656230:
          piVar15 = (int *)param_2[2];
          piVar12 = (int *)param_2[3];
          if (piVar15 < piVar12) goto LAB_0065623d;
LAB_006562b6:
          (**(code **)(*param_2 + 0x50))(param_2);
          piVar15 = (int *)param_2[2];
          piVar12 = (int *)param_2[3];
        }
        if (piVar15 < piVar12) {
          iVar10 = *piVar15;
        }
        else {
                    /* try { // try from 006566d2 to 006566e4 has its CatchHandler @ 006567f4 */
          iVar10 = (**(code **)(*param_2 + 0x48))(param_2);
        }
        if (iVar10 == -1) {
          param_2 = (long *)0x0;
        }
        bVar22 = local_d0 != (long *)0x0 && bVar28;
        bVar20 = bVar28;
        if (bVar22) {
          if ((int *)local_d0[2] < (int *)local_d0[3]) {
            iVar9 = *(int *)local_d0[2];
          }
          else {
            iVar9 = (**(code **)(*local_d0 + 0x48))();
          }
          plVar2 = (long *)0x0;
          if (iVar9 != -1) {
            plVar2 = local_d0;
          }
          local_d0 = plVar2;
          bVar20 = iVar9 == -1 && bVar22;
        }
        if (bVar20 == (iVar10 == -1)) goto code_r0x00656280;
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
        local_c0 = L'\xffffffff';
      } while( true );
    }
    bVar3 = 0;
    uVar13 = 0;
    bVar5 = 0;
    bVar4 = bVar7;
  }
LAB_00655e40:
  uVar11 = local_60;
  if (local_60 == 0) {
    if ((bVar25) || (iVar26 != 0)) {
LAB_00656107:
      if (bVar5 == 0) {
        if (bVar3 == 0) {
          if (bVar27) {
            uVar13 = -uVar13;
          }
          *param_8 = uVar13;
        }
        else {
          *param_8 = 0xffffffffffffffff;
          *param_7 = 4;
        }
        goto LAB_00655e75;
      }
    }
  }
  else {
    uVar19 = local_60 + 1;
    uVar21 = 0xf;
    if (local_68 != &local_58) {
      uVar21 = CONCAT71(uStack_57,local_58);
    }
    if (uVar21 < uVar19) {
      __cxx11::string::_M_mutate((string *)&local_68,local_60,0,(char *)0x0,1);
    }
    local_68[uVar11] = (char)iVar26;
    local_68[uVar11 + 1] = 0;
    local_60 = uVar19;
    cVar8 = __verify_grouping(*(char **)(lVar24 + 0x10),*(ulong *)(lVar24 + 0x18),
                              (string *)&local_68);
    if (cVar8 == '\0') {
      *param_7 = 4;
    }
    if (((iVar26 != 0) || (bVar25)) || (local_60 != 0)) goto LAB_00656107;
  }
  *param_8 = 0;
  *param_7 = 4;
LAB_00655e75:
  if (bVar4 != 0) {
    *param_7 = *param_7 | 2;
  }
  if (local_68 != &local_58) {
    operator_delete(local_68);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar29._8_8_ = param_3 & 0xffffffff00000000 | (ulong)(uint)local_c0;
    auVar29._0_8_ = param_2;
    return auVar29;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
code_r0x00656280:
  local_c0 = L'\xffffffff';
  bVar5 = bVar7;
  goto LAB_00655e40;
code_r0x00655e29:
  local_c0 = L'\xffffffff';
  bVar4 = 1;
  bVar5 = bVar7;
  goto LAB_00655e40;
}


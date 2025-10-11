
/* std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > std::num_get<wchar_t,
   std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> >
   >::_M_extract_int[abi:cxx11]<long>(std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> >,
   std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> >, std::ios_base&,
   std::_Ios_Iostate&, long&) const */

undefined1  [16]
std::num_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::
_M_extract_int_abi_cxx11_<long>
          (undefined8 param_1,long *param_2,ulong param_3,long *param_4,int param_5,long param_6,
          uint *param_7,ulong *param_8)

{
  ulong uVar1;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  wchar_t __c;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  wchar_t *pwVar12;
  int *piVar13;
  ulong uVar14;
  __numpunct_cache<wchar_t> *this;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  bool bVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  bool bVar22;
  bool bVar23;
  int iVar24;
  long lVar25;
  long in_FS_OFFSET;
  bool bVar26;
  bool bVar27;
  undefined1 auVar28 [16];
  long *local_d8;
  wchar_t local_c8;
  size_t local_98;
  bool local_79;
  undefined1 *local_68;
  ulong local_60;
  undefined1 local_58;
  undefined7 uStack_57;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c8 = (wchar_t)param_3;
  uVar9 = locale::id::_M_id((id *)&__cxx11::numpunct<wchar_t>::id);
  plVar2 = (long *)(*(long *)(*(long *)(param_6 + 0xd0) + 0x18) + uVar9 * 8);
  lVar25 = *plVar2;
  if (lVar25 == 0) {
                    /* try { // try from 00651ca5 to 00651ca9 has its CatchHandler @ 00652070 */
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
                    /* try { // try from 00651d12 to 00651d16 has its CatchHandler @ 00652067 */
    __numpunct_cache<wchar_t>::_M_cache(this,(locale *)(param_6 + 0xd0));
    locale::_Impl::_M_install_cache(*(_Impl **)(param_6 + 0xd0),(facet *)this,uVar9);
    lVar25 = *plVar2;
  }
  uVar16 = *(uint *)(param_6 + 0x18);
  uVar15 = uVar16 & 0x4a;
  uVar20 = 8;
  if (uVar15 != 0x40) {
    uVar20 = 0x10;
    if (uVar15 != 8) {
      uVar20 = 10;
    }
  }
  bVar26 = local_c8 == L'\xffffffff';
  bVar22 = param_2 != (long *)0x0 && bVar26;
  bVar23 = bVar26;
  if (bVar22) {
    if ((int *)param_2[2] < (int *)param_2[3]) {
      iVar24 = *(int *)param_2[2];
    }
    else {
      iVar24 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    plVar2 = (long *)0x0;
    if (iVar24 != -1) {
      plVar2 = param_2;
    }
    param_2 = plVar2;
    bVar23 = iVar24 == -1 && bVar22;
  }
  uVar16 = uVar16 & 0x4a;
  bVar27 = param_5 == -1;
  bVar22 = param_4 != (long *)0x0 && bVar27;
  local_d8 = param_4;
  bVar18 = bVar27;
  if (bVar22) {
    if ((int *)param_4[2] < (int *)param_4[3]) {
      iVar24 = *(int *)param_4[2];
    }
    else {
      iVar24 = (**(code **)(*param_4 + 0x48))(param_4);
    }
    local_d8 = (long *)0x0;
    if (iVar24 != -1) {
      local_d8 = param_4;
    }
    bVar18 = iVar24 == -1 && bVar22;
  }
  if (bVar23 == bVar18) {
    local_79 = false;
    cVar6 = *(char *)(lVar25 + 0x20);
    __c = L'\0';
    iVar24 = 0;
    bVar23 = true;
    bVar22 = false;
LAB_006514ea:
    if (uVar20 == 0x10) goto LAB_006513e8;
LAB_006514f4:
    local_98 = (size_t)(int)uVar20;
    uVar16 = uVar20;
  }
  else {
    __c = local_c8;
    if ((param_2 != (long *)0x0) && (bVar26)) {
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
    local_79 = *(wchar_t *)(lVar25 + 0xe0) == __c;
    cVar6 = *(char *)(lVar25 + 0x20);
    if ((((!local_79) && (*(wchar_t *)(lVar25 + 0xe4) != __c)) ||
        ((cVar6 != '\0' && (*(wchar_t *)(lVar25 + 0x4c) == __c)))) ||
       (*(wchar_t *)(lVar25 + 0x48) == __c)) {
LAB_00651410:
      iVar24 = 0;
      bVar22 = false;
      do {
        if (((cVar6 != '\0') && (*(wchar_t *)(lVar25 + 0x4c) == __c)) ||
           (*(wchar_t *)(lVar25 + 0x48) == __c)) break;
        if (*(wchar_t *)(lVar25 + 0xf0) == __c) {
          bVar23 = (bool)(bVar22 ^ 1U | uVar20 == 10);
          if (!bVar23) goto LAB_0065144e;
          bVar22 = uVar16 == 0 || uVar20 == 8;
          if (uVar16 != 0 && uVar20 != 8) {
            iVar24 = iVar24 + 1;
            goto LAB_00651483;
          }
          piVar13 = (int *)param_2[2];
          piVar11 = (int *)param_2[3];
          iVar24 = 0;
          uVar20 = 8;
          if (piVar11 <= piVar13) goto LAB_00651728;
LAB_00651494:
          piVar13 = piVar13 + 1;
          param_2[2] = (long)piVar13;
          if (piVar13 < piVar11) goto LAB_006514a5;
LAB_00651750:
          iVar8 = (**(code **)(*param_2 + 0x48))(param_2);
        }
        else {
          if (!bVar22) break;
LAB_0065144e:
          if ((*(wchar_t *)(lVar25 + 0xe8) != __c) && (*(wchar_t *)(lVar25 + 0xec) != __c)) {
            bVar22 = true;
            bVar23 = false;
            goto LAB_006514ea;
          }
          bVar23 = uVar20 == 0x10 || uVar16 == 0;
          if (uVar20 != 0x10 && uVar16 != 0) {
            local_98 = (size_t)(int)uVar20;
            bVar22 = true;
            uVar16 = uVar20;
            goto LAB_00651501;
          }
          iVar24 = 0;
          bVar23 = false;
          uVar20 = 0x10;
LAB_00651483:
          piVar13 = (int *)param_2[2];
          piVar11 = (int *)param_2[3];
          bVar22 = bVar23;
          if (piVar13 < piVar11) goto LAB_00651494;
LAB_00651728:
          (**(code **)(*param_2 + 0x50))(param_2);
          piVar13 = (int *)param_2[2];
          if ((int *)param_2[3] <= piVar13) goto LAB_00651750;
LAB_006514a5:
          iVar8 = *piVar13;
        }
        if (iVar8 == -1) {
          param_2 = (long *)0x0;
        }
        bVar26 = local_d8 != (long *)0x0 && bVar27;
        bVar23 = bVar27;
        if (bVar26) {
          if ((int *)local_d8[2] < (int *)local_d8[3]) {
            iVar7 = *(int *)local_d8[2];
          }
          else {
            iVar7 = (**(code **)(*local_d8 + 0x48))();
          }
          plVar2 = (long *)0x0;
          if (iVar7 != -1) {
            plVar2 = local_d8;
          }
          local_d8 = plVar2;
          bVar23 = iVar7 == -1 && bVar26;
        }
        if ((iVar8 == -1) == bVar23) {
          local_c8 = L'\xffffffff';
          cVar6 = *(char *)(lVar25 + 0x20);
          bVar23 = true;
          goto LAB_006514ea;
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
        cVar6 = *(char *)(lVar25 + 0x20);
        local_c8 = L'\xffffffff';
      } while (bVar22);
      bVar23 = false;
      goto LAB_006514ea;
    }
    piVar11 = (int *)param_2[3];
    if ((int *)param_2[2] < piVar11) {
      piVar13 = (int *)param_2[2] + 1;
      param_2[2] = (long)piVar13;
    }
    else {
      (**(code **)(*param_2 + 0x50))(param_2);
      piVar13 = (int *)param_2[2];
      piVar11 = (int *)param_2[3];
    }
    if (piVar13 < piVar11) {
      iVar24 = *piVar13;
    }
    else {
      iVar24 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    if (iVar24 == -1) {
      param_2 = (long *)0x0;
    }
    bVar22 = local_d8 != (long *)0x0 && bVar27;
    bVar23 = bVar27;
    if (bVar22) {
      if ((int *)local_d8[2] < (int *)local_d8[3]) {
        iVar8 = *(int *)local_d8[2];
      }
      else {
        iVar8 = (**(code **)(*local_d8 + 0x48))();
      }
      plVar2 = (long *)0x0;
      if (iVar8 != -1) {
        plVar2 = local_d8;
      }
      local_d8 = plVar2;
      bVar23 = iVar8 == -1 && bVar22;
    }
    if ((iVar24 == -1) != bVar23) {
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
      local_c8 = L'\xffffffff';
      cVar6 = *(char *)(lVar25 + 0x20);
      goto LAB_00651410;
    }
    bVar23 = true;
    cVar6 = *(char *)(lVar25 + 0x20);
    iVar24 = 0;
    bVar22 = false;
    local_c8 = L'\xffffffff';
    if (uVar20 != 0x10) goto LAB_006514f4;
LAB_006513e8:
    local_98 = 0x16;
    uVar16 = 0x16;
  }
LAB_00651501:
  local_58 = 0;
  local_60 = 0;
  local_68 = &local_58;
  if (cVar6 != '\0') {
    __cxx11::string::reserve((string *)&local_68,0x20);
  }
  uVar19 = (ulong)(int)uVar20;
  uVar9 = (ulong)local_79 + 0x7fffffffffffffff;
  uVar10 = uVar9 / uVar19;
  bVar4 = *(byte *)(lVar25 + 0x148);
  if (bVar4 == 0) {
    bVar3 = 0;
    if (bVar23 == false) {
      uVar21 = 0;
LAB_0065159b:
      if (uVar16 < 0xb) {
        if ((__c < L'0') || ((int)local_98 + L'0' <= __c)) goto LAB_006519d0;
        uVar20 = __c + L'\xffffffd0';
LAB_006515bc:
        if (uVar10 < uVar21) goto LAB_006515c7;
LAB_006517f0:
        uVar17 = uVar19 * uVar21;
        uVar21 = (long)(int)uVar20 + uVar17;
        piVar11 = (int *)param_2[2];
        piVar13 = (int *)param_2[3];
        iVar24 = iVar24 + 1;
        bVar3 = bVar3 | uVar9 - (long)(int)uVar20 < uVar17;
        if (piVar13 <= piVar11) goto LAB_00651826;
LAB_006515dd:
        piVar11 = piVar11 + 1;
        param_2[2] = (long)piVar11;
LAB_006515e5:
        if (piVar11 < piVar13) {
          iVar8 = *piVar11;
        }
        else {
          iVar8 = (**(code **)(*param_2 + 0x48))(param_2);
        }
        if (iVar8 == -1) {
          param_2 = (long *)0x0;
        }
        bVar18 = local_d8 != (long *)0x0 && bVar27;
        bVar26 = bVar27;
        if (bVar18) {
          if ((int *)local_d8[2] < (int *)local_d8[3]) {
            iVar7 = *(int *)local_d8[2];
          }
          else {
            iVar7 = (**(code **)(*local_d8 + 0x48))();
          }
          plVar2 = (long *)0x0;
          if (iVar7 != -1) {
            plVar2 = local_d8;
          }
          local_d8 = plVar2;
          bVar26 = iVar7 == -1 && bVar18;
        }
        if ((iVar8 == -1) == bVar26) goto code_r0x00651626;
        if (param_2 == (long *)0x0) {
          __c = L'\xffffffff';
        }
        else {
          if ((wchar_t *)param_2[2] < (wchar_t *)param_2[3]) {
            __c = *(wchar_t *)param_2[2];
          }
          else {
                    /* try { // try from 00651e88 to 00651e9a has its CatchHandler @ 0065205e */
            __c = (**(code **)(*param_2 + 0x48))(param_2);
          }
          if (__c == L'\xffffffff') {
            param_2 = (long *)0x0;
          }
        }
        local_c8 = L'\xffffffff';
        goto LAB_0065159b;
      }
      uVar20 = __c + L'\xffffffd0';
      if (uVar20 < 10) goto LAB_006515bc;
      if ((uint)(__c + L'\xffffff9f') < 6) {
        uVar20 = __c + L'\xffffffa9';
        if (uVar21 <= uVar10) goto LAB_006517f0;
LAB_006515c7:
        piVar11 = (int *)param_2[2];
        piVar13 = (int *)param_2[3];
        bVar3 = 1;
        if (piVar11 < piVar13) goto LAB_006515dd;
LAB_00651826:
                    /* try { // try from 0065182c to 00651be6 has its CatchHandler @ 0065205e */
        (**(code **)(*param_2 + 0x50))(param_2);
        piVar11 = (int *)param_2[2];
        piVar13 = (int *)param_2[3];
        goto LAB_006515e5;
      }
      if ((uint)(__c + L'\xffffffbf') < 6) {
        uVar20 = __c + L'\xffffffc9';
        goto LAB_006515bc;
      }
LAB_006519d0:
      bVar4 = 0;
      bVar5 = bVar23;
    }
    else {
      uVar21 = 0;
      bVar4 = bVar23;
      bVar5 = 0;
    }
  }
  else {
    if (bVar23 == false) {
      bVar3 = 0;
      uVar21 = 0;
      do {
        uVar17 = local_60;
        bVar5 = *(byte *)(lVar25 + 0x20);
        if ((bVar5 == 0) || (*(wchar_t *)(lVar25 + 0x4c) != __c)) {
          if ((__c == *(wchar_t *)(lVar25 + 0x48)) ||
             (pwVar12 = wmemchr((wchar_t *)(lVar25 + 0xf0),__c,local_98), pwVar12 == (wchar_t *)0x0)
             ) goto LAB_006519d0;
          iVar8 = (int)((long)pwVar12 - (lVar25 + 0xf0) >> 2);
          if (0xf < iVar8) {
            iVar8 = iVar8 + -6;
          }
          if (uVar21 <= uVar10) {
            uVar17 = uVar19 * uVar21;
            uVar21 = (long)iVar8 + uVar17;
            bVar3 = bVar3 | uVar9 - (long)iVar8 < uVar17;
            iVar24 = iVar24 + 1;
            goto LAB_00651a81;
          }
          piVar11 = (int *)param_2[3];
          piVar13 = (int *)param_2[2];
          bVar3 = bVar4;
          if (piVar11 <= piVar13) goto LAB_00651b06;
LAB_00651a8e:
          piVar13 = piVar13 + 1;
          param_2[2] = (long)piVar13;
        }
        else {
          if (iVar24 == 0) {
            bVar4 = 0;
            goto LAB_00651643;
          }
          uVar1 = local_60 + 1;
          uVar14 = 0xf;
          if (local_68 != &local_58) {
            uVar14 = CONCAT71(uStack_57,local_58);
          }
          if (uVar14 < uVar1) {
                    /* try { // try from 00651de2 to 00651e66 has its CatchHandler @ 0065205e */
            __cxx11::string::_M_mutate((string *)&local_68,local_60,0,(char *)0x0,1);
          }
          local_68[uVar17] = (char)iVar24;
          local_68[uVar1] = 0;
          iVar24 = 0;
          local_60 = uVar1;
LAB_00651a81:
          piVar13 = (int *)param_2[2];
          piVar11 = (int *)param_2[3];
          if (piVar13 < piVar11) goto LAB_00651a8e;
LAB_00651b06:
          (**(code **)(*param_2 + 0x50))(param_2);
          piVar13 = (int *)param_2[2];
          piVar11 = (int *)param_2[3];
        }
        if (piVar13 < piVar11) {
          iVar8 = *piVar13;
        }
        else {
                    /* try { // try from 00651f30 to 00651f42 has its CatchHandler @ 0065205e */
          iVar8 = (**(code **)(*param_2 + 0x48))(param_2);
        }
        if (iVar8 == -1) {
          param_2 = (long *)0x0;
        }
        bVar18 = local_d8 != (long *)0x0 && bVar27;
        bVar26 = bVar27;
        if (bVar18) {
          if ((int *)local_d8[2] < (int *)local_d8[3]) {
            iVar7 = *(int *)local_d8[2];
          }
          else {
            iVar7 = (**(code **)(*local_d8 + 0x48))();
          }
          plVar2 = (long *)0x0;
          if (iVar7 != -1) {
            plVar2 = local_d8;
          }
          local_d8 = plVar2;
          bVar26 = iVar7 == -1 && bVar18;
        }
        if (bVar26 == (iVar8 == -1)) goto code_r0x00651ad3;
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
        local_c8 = L'\xffffffff';
      } while( true );
    }
    bVar3 = 0;
    uVar21 = 0;
    bVar5 = 0;
    bVar4 = bVar23;
  }
LAB_00651643:
  uVar9 = local_60;
  if (local_60 == 0) {
    if ((bVar22) || (iVar24 != 0)) {
LAB_0065192d:
      if (bVar5 == 0) {
        if (bVar3 == 0) {
          uVar9 = -uVar21;
          if (local_79 == false) {
            uVar9 = uVar21;
          }
          *param_8 = uVar9;
        }
        else {
          uVar9 = 0x8000000000000000;
          if (local_79 == false) {
            uVar9 = 0x7fffffffffffffff;
          }
          *param_8 = uVar9;
          *param_7 = 4;
        }
        goto LAB_00651678;
      }
    }
  }
  else {
    uVar10 = local_60 + 1;
    uVar19 = 0xf;
    if (local_68 != &local_58) {
      uVar19 = CONCAT71(uStack_57,local_58);
    }
    if (uVar19 < uVar10) {
      __cxx11::string::_M_mutate((string *)&local_68,local_60,0,(char *)0x0,1);
    }
    local_68[uVar9] = (char)iVar24;
    local_68[uVar9 + 1] = 0;
    local_60 = uVar10;
    cVar6 = __verify_grouping(*(char **)(lVar25 + 0x10),*(ulong *)(lVar25 + 0x18),
                              (string *)&local_68);
    if (cVar6 == '\0') {
      *param_7 = 4;
    }
    if (((iVar24 != 0) || (bVar22)) || (local_60 != 0)) goto LAB_0065192d;
  }
  *param_8 = 0;
  *param_7 = 4;
LAB_00651678:
  if (bVar4 != 0) {
    *param_7 = *param_7 | 2;
  }
  if (local_68 != &local_58) {
    operator_delete(local_68);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar28._8_8_ = param_3 & 0xffffffff00000000 | (ulong)(uint)local_c8;
    auVar28._0_8_ = param_2;
    return auVar28;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
code_r0x00651ad3:
  local_c8 = L'\xffffffff';
  bVar5 = bVar23;
  goto LAB_00651643;
code_r0x00651626:
  local_c8 = L'\xffffffff';
  bVar4 = 1;
  bVar5 = bVar23;
  goto LAB_00651643;
}


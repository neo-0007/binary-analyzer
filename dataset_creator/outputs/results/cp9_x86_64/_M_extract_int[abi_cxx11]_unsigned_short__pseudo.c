
/* std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > std::num_get<wchar_t,
   std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> >
   >::_M_extract_int[abi:cxx11]<unsigned short>(std::istreambuf_iterator<wchar_t,
   std::char_traits<wchar_t> >, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> >,
   std::ios_base&, std::_Ios_Iostate&, unsigned short&) const */

undefined1  [16]
std::num_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::
_M_extract_int_abi_cxx11_<unsigned_short>
          (undefined8 param_1,long *param_2,ulong param_3,long *param_4,int param_5,long param_6,
          uint *param_7,ushort *param_8)

{
  ulong uVar1;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  wchar_t wVar6;
  bool bVar7;
  char cVar8;
  ushort uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  wchar_t __c;
  ulong uVar13;
  int *piVar14;
  wchar_t *pwVar15;
  int *piVar16;
  ulong uVar17;
  __numpunct_cache<wchar_t> *this;
  undefined1 uVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  uint uVar24;
  long lVar25;
  long in_FS_OFFSET;
  bool bVar26;
  bool bVar27;
  undefined1 auVar28 [16];
  wchar_t local_cc;
  int local_c8;
  long *local_b8;
  ushort local_ac;
  size_t local_98;
  byte local_6a;
  undefined1 *local_68;
  ulong local_60;
  undefined1 local_58;
  undefined7 uStack_57;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_cc = (wchar_t)param_3;
  uVar13 = locale::id::_M_id((id *)&__cxx11::numpunct<wchar_t>::id);
  plVar2 = (long *)(*(long *)(*(long *)(param_6 + 0xd0) + 0x18) + uVar13 * 8);
  lVar25 = *plVar2;
  if (lVar25 == 0) {
                    /* try { // try from 00652b0d to 00652b11 has its CatchHandler @ 00652eed */
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
                    /* try { // try from 00652b7a to 00652b7e has its CatchHandler @ 00652ee4 */
    __numpunct_cache<wchar_t>::_M_cache(this,(locale *)(param_6 + 0xd0));
    locale::_Impl::_M_install_cache(*(_Impl **)(param_6 + 0xd0),(facet *)this,uVar13);
    lVar25 = *plVar2;
  }
  uVar24 = 8;
  uVar19 = *(uint *)(param_6 + 0x18) & 0x4a;
  if ((uVar19 != 0x40) && (uVar24 = 10, uVar19 == 8)) {
    uVar24 = 0x10;
  }
  bVar26 = local_cc == L'\xffffffff';
  bVar7 = param_2 != (long *)0x0 && bVar26;
  bVar21 = bVar26;
  if (bVar7) {
    if ((int *)param_2[2] < (int *)param_2[3]) {
      iVar12 = *(int *)param_2[2];
    }
    else {
      iVar12 = (**(code **)(*param_2 + 0x48))();
    }
    plVar2 = (long *)0x0;
    if (iVar12 != -1) {
      plVar2 = param_2;
    }
    param_2 = plVar2;
    bVar21 = iVar12 == -1 && bVar7;
  }
  bVar27 = param_5 == -1;
  bVar22 = param_4 != (long *)0x0 && bVar27;
  local_b8 = param_4;
  bVar7 = bVar27;
  if (bVar22) {
    if ((int *)param_4[2] < (int *)param_4[3]) {
      iVar12 = *(int *)param_4[2];
    }
    else {
      iVar12 = (**(code **)(*param_4 + 0x48))();
    }
    local_b8 = (long *)0x0;
    if (iVar12 != -1) {
      local_b8 = param_4;
    }
    bVar7 = iVar12 == -1 && bVar22;
  }
  if (bVar21 == bVar7) {
    bVar26 = false;
    cVar8 = *(char *)(lVar25 + 0x20);
    __c = L'\0';
    bVar7 = false;
    bVar21 = true;
    local_c8 = 0;
LAB_0065238c:
    if (uVar24 == 0x10) goto LAB_00652280;
LAB_00652396:
    local_98 = (size_t)(int)uVar24;
    uVar19 = uVar24;
  }
  else {
    __c = local_cc;
    if ((param_2 != (long *)0x0) && (bVar26)) {
      if ((wchar_t *)param_2[2] < (wchar_t *)param_2[3]) {
        __c = *(wchar_t *)param_2[2];
      }
      else {
        __c = (**(code **)(*param_2 + 0x48))();
      }
      if (__c == L'\xffffffff') {
        param_2 = (long *)0x0;
      }
    }
    bVar26 = *(wchar_t *)(lVar25 + 0xe0) == __c;
    cVar8 = *(char *)(lVar25 + 0x20);
    if ((((!bVar26) && (*(wchar_t *)(lVar25 + 0xe4) != __c)) ||
        ((cVar8 != '\0' && (*(wchar_t *)(lVar25 + 0x4c) == __c)))) ||
       (*(wchar_t *)(lVar25 + 0x48) == __c)) {
LAB_006522b0:
      local_c8 = 0;
      bVar7 = false;
      wVar6 = local_cc;
      do {
        local_cc = wVar6;
        if (((cVar8 != '\0') && (*(wchar_t *)(lVar25 + 0x4c) == __c)) ||
           (*(wchar_t *)(lVar25 + 0x48) == __c)) break;
        if (*(wchar_t *)(lVar25 + 0xf0) == __c) {
          bVar21 = (bool)(bVar7 ^ 1U | uVar24 == 10);
          if (!bVar21) goto LAB_006522ee;
          bVar7 = uVar19 == 0 || uVar24 == 8;
          if (uVar19 != 0 && uVar24 != 8) {
            local_c8 = local_c8 + 1;
            goto LAB_00652328;
          }
          piVar16 = (int *)param_2[2];
          piVar14 = (int *)param_2[3];
          local_c8 = 0;
          uVar24 = 8;
          if (piVar16 < piVar14) goto LAB_00652339;
LAB_006525b0:
          (**(code **)(*param_2 + 0x50))();
          piVar16 = (int *)param_2[2];
          if (piVar16 < (int *)param_2[3]) goto LAB_0065234a;
LAB_006525d8:
          iVar12 = (**(code **)(*param_2 + 0x48))();
        }
        else {
          if (!bVar7) break;
LAB_006522ee:
          if ((*(wchar_t *)(lVar25 + 0xe8) != __c) && (*(wchar_t *)(lVar25 + 0xec) != __c)) {
            bVar7 = true;
            bVar21 = false;
            goto LAB_0065238c;
          }
          bVar21 = uVar24 == 0x10 || uVar19 == 0;
          if (uVar24 != 0x10 && uVar19 != 0) {
            local_98 = (size_t)(int)uVar24;
            bVar7 = true;
            uVar19 = uVar24;
            goto LAB_006523a3;
          }
          local_c8 = 0;
          bVar21 = false;
          uVar24 = 0x10;
LAB_00652328:
          piVar16 = (int *)param_2[2];
          piVar14 = (int *)param_2[3];
          bVar7 = bVar21;
          if (piVar14 <= piVar16) goto LAB_006525b0;
LAB_00652339:
          piVar16 = piVar16 + 1;
          param_2[2] = (long)piVar16;
          if (piVar14 <= piVar16) goto LAB_006525d8;
LAB_0065234a:
          iVar12 = *piVar16;
        }
        if (iVar12 == -1) {
          param_2 = (long *)0x0;
        }
        bVar22 = local_b8 != (long *)0x0 && bVar27;
        bVar21 = bVar27;
        if (bVar22) {
          if ((int *)local_b8[2] < (int *)local_b8[3]) {
            iVar11 = *(int *)local_b8[2];
          }
          else {
            iVar11 = (**(code **)(*local_b8 + 0x48))();
          }
          plVar2 = (long *)0x0;
          if (iVar11 != -1) {
            plVar2 = local_b8;
          }
          local_b8 = plVar2;
          bVar21 = iVar11 == -1 && bVar22;
        }
        if ((iVar12 == -1) == bVar21) {
          local_cc = L'\xffffffff';
          cVar8 = *(char *)(lVar25 + 0x20);
          bVar21 = true;
          goto LAB_0065238c;
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
        cVar8 = *(char *)(lVar25 + 0x20);
        local_cc = L'\xffffffff';
        wVar6 = L'\xffffffff';
      } while (bVar7);
      bVar21 = false;
      goto LAB_0065238c;
    }
    piVar14 = (int *)param_2[3];
    if ((int *)param_2[2] < piVar14) {
      piVar16 = (int *)param_2[2] + 1;
      param_2[2] = (long)piVar16;
    }
    else {
      (**(code **)(*param_2 + 0x50))();
      piVar16 = (int *)param_2[2];
      piVar14 = (int *)param_2[3];
    }
    if (piVar16 < piVar14) {
      iVar12 = *piVar16;
    }
    else {
      iVar12 = (**(code **)(*param_2 + 0x48))();
    }
    if (iVar12 == -1) {
      param_2 = (long *)0x0;
    }
    bVar7 = local_b8 != (long *)0x0 && bVar27;
    bVar21 = bVar27;
    if (bVar7) {
      if ((int *)local_b8[2] < (int *)local_b8[3]) {
        iVar11 = *(int *)local_b8[2];
      }
      else {
        iVar11 = (**(code **)(*local_b8 + 0x48))();
      }
      plVar2 = (long *)0x0;
      if (iVar11 != -1) {
        plVar2 = local_b8;
      }
      local_b8 = plVar2;
      bVar21 = iVar11 == -1 && bVar7;
    }
    if (bVar21 != (iVar12 == -1)) {
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
      cVar8 = *(char *)(lVar25 + 0x20);
      goto LAB_006522b0;
    }
    local_cc = L'\xffffffff';
    cVar8 = *(char *)(lVar25 + 0x20);
    bVar7 = false;
    bVar21 = true;
    local_c8 = 0;
    if (uVar24 != 0x10) goto LAB_00652396;
LAB_00652280:
    local_98 = 0x16;
    uVar19 = 0x16;
  }
LAB_006523a3:
  local_58 = 0;
  local_60 = 0;
  local_68 = &local_58;
  if (cVar8 != '\0') {
    __cxx11::string::reserve((string *)&local_68,0x20);
  }
  bVar3 = *(byte *)(lVar25 + 0x148);
  local_ac = (ushort)(0xffff / (ulong)(long)(int)uVar24);
  if (bVar3 == 0) {
    local_6a = 0;
    if (bVar21 == false) {
      uVar9 = 0;
LAB_0065241e:
      if (uVar19 < 0xb) {
        if ((__c < L'0') || ((int)local_98 + L'0' <= __c)) goto LAB_00652830;
        uVar10 = __c + L'\xffffffd0';
LAB_0065243f:
        if (uVar9 <= local_ac) goto LAB_00652670;
LAB_0065244f:
        piVar14 = (int *)param_2[2];
        piVar16 = (int *)param_2[3];
        local_6a = 1;
        if (piVar16 <= piVar14) goto LAB_006526a9;
LAB_00652465:
        piVar14 = piVar14 + 1;
        param_2[2] = (long)piVar14;
LAB_0065246d:
        if (piVar14 < piVar16) {
          iVar12 = *piVar14;
        }
        else {
          iVar12 = (**(code **)(*param_2 + 0x48))(param_2);
        }
        if (iVar12 == -1) {
          param_2 = (long *)0x0;
        }
        bVar22 = local_b8 != (long *)0x0 && bVar27;
        bVar23 = bVar27;
        if (bVar22) {
          if ((int *)local_b8[2] < (int *)local_b8[3]) {
            iVar11 = *(int *)local_b8[2];
          }
          else {
            iVar11 = (**(code **)(*local_b8 + 0x48))();
          }
          plVar2 = (long *)0x0;
          if (iVar11 != -1) {
            plVar2 = local_b8;
          }
          local_b8 = plVar2;
          bVar23 = iVar11 == -1 && bVar22;
        }
        if ((iVar12 == -1) == bVar23) goto code_r0x006524aa;
        if (param_2 == (long *)0x0) {
          __c = L'\xffffffff';
        }
        else {
          if ((wchar_t *)param_2[2] < (wchar_t *)param_2[3]) {
            __c = *(wchar_t *)param_2[2];
          }
          else {
                    /* try { // try from 00652ce8 to 00652cfb has its CatchHandler @ 00652edb */
            __c = (**(code **)(*param_2 + 0x48))(param_2);
          }
          if (__c == L'\xffffffff') {
            param_2 = (long *)0x0;
          }
        }
        local_cc = L'\xffffffff';
        goto LAB_0065241e;
      }
      uVar10 = __c + L'\xffffffd0';
      if (uVar10 < 10) goto LAB_0065243f;
      if ((uint)(__c + L'\xffffff9f') < 6) {
        uVar10 = __c + L'\xffffffa9';
        if (local_ac < uVar9) goto LAB_0065244f;
LAB_00652670:
        uVar20 = (uint)uVar9;
        uVar9 = (short)uVar10 + (short)(uVar20 * uVar24);
        local_6a = local_6a | (int)(0xffff - uVar10) < (int)(uVar20 * uVar24 & 0xffff);
        piVar16 = (int *)param_2[3];
        piVar14 = (int *)param_2[2];
        local_c8 = local_c8 + 1;
        if (piVar14 < piVar16) goto LAB_00652465;
LAB_006526a9:
                    /* try { // try from 006526b0 to 00652a46 has its CatchHandler @ 00652edb */
        (**(code **)(*param_2 + 0x50))(param_2);
        piVar14 = (int *)param_2[2];
        piVar16 = (int *)param_2[3];
        goto LAB_0065246d;
      }
      if ((uint)(__c + L'\xffffffbf') < 6) {
        uVar10 = __c + L'\xffffffc9';
        goto LAB_0065243f;
      }
LAB_00652830:
      bVar3 = 0;
      bVar4 = bVar21;
    }
    else {
      uVar9 = 0;
      bVar3 = bVar21;
      bVar4 = 0;
    }
  }
  else {
    if (bVar21 == false) {
      local_6a = 0;
      uVar9 = 0;
      do {
        uVar13 = local_60;
        bVar4 = *(byte *)(lVar25 + 0x20);
        if ((bVar4 == 0) || (*(wchar_t *)(lVar25 + 0x4c) != __c)) {
          if ((__c == *(wchar_t *)(lVar25 + 0x48)) ||
             (pwVar15 = wmemchr((wchar_t *)(lVar25 + 0xf0),__c,local_98), pwVar15 == (wchar_t *)0x0)
             ) goto LAB_00652830;
          iVar12 = (int)((long)pwVar15 - (lVar25 + 0xf0) >> 2);
          if (0xf < iVar12) {
            iVar12 = iVar12 + -6;
          }
          if (uVar9 <= local_ac) {
            uVar19 = (uint)uVar9;
            uVar9 = (short)iVar12 + (short)(uVar19 * uVar24);
            local_6a = local_6a | 0xffff - iVar12 < (int)(uVar19 * uVar24 & 0xffff);
            local_c8 = local_c8 + 1;
            goto LAB_006528e2;
          }
          piVar14 = (int *)param_2[3];
          piVar16 = (int *)param_2[2];
          local_6a = bVar3;
          if (piVar16 < piVar14) goto LAB_006528ef;
LAB_00652966:
          (**(code **)(*param_2 + 0x50))(param_2);
          piVar16 = (int *)param_2[2];
          piVar14 = (int *)param_2[3];
        }
        else {
          if (local_c8 == 0) {
            bVar3 = 0;
            goto LAB_006524c1;
          }
          uVar1 = local_60 + 1;
          uVar18 = (undefined1)local_c8;
          uVar17 = 0xf;
          if (local_68 != &local_58) {
            uVar17 = CONCAT71(uStack_57,local_58);
          }
          if (uVar17 < uVar1) {
                    /* try { // try from 00652c42 to 00652cc4 has its CatchHandler @ 00652edb */
            __cxx11::string::_M_mutate((string *)&local_68,local_60,0,(char *)0x0,1);
          }
          local_c8 = 0;
          local_68[uVar13] = uVar18;
          local_68[uVar1] = 0;
          local_60 = uVar1;
LAB_006528e2:
          piVar16 = (int *)param_2[2];
          piVar14 = (int *)param_2[3];
          if (piVar14 <= piVar16) goto LAB_00652966;
LAB_006528ef:
          piVar16 = piVar16 + 1;
          param_2[2] = (long)piVar16;
        }
        if (piVar16 < piVar14) {
          iVar12 = *piVar16;
        }
        else {
                    /* try { // try from 00652d92 to 00652da4 has its CatchHandler @ 00652edb */
          iVar12 = (**(code **)(*param_2 + 0x48))(param_2);
        }
        if (iVar12 == -1) {
          param_2 = (long *)0x0;
        }
        bVar22 = local_b8 != (long *)0x0 && bVar27;
        bVar23 = bVar27;
        if (bVar22) {
          if ((int *)local_b8[2] < (int *)local_b8[3]) {
            iVar11 = *(int *)local_b8[2];
          }
          else {
            iVar11 = (**(code **)(*local_b8 + 0x48))();
          }
          plVar2 = (long *)0x0;
          if (iVar11 != -1) {
            plVar2 = local_b8;
          }
          local_b8 = plVar2;
          bVar23 = iVar11 == -1 && bVar22;
        }
        if (bVar23 == (iVar12 == -1)) goto code_r0x00652930;
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
    bVar3 = bVar21;
  }
LAB_006524c1:
  uVar13 = local_60;
  if (local_60 == 0) {
    if ((bVar7) || (local_c8 != 0)) {
LAB_006527a0:
      if (bVar4 == 0) {
        if (local_6a == 0) {
          uVar5 = -uVar9;
          if (!bVar26) {
            uVar5 = uVar9;
          }
          *param_8 = uVar5;
        }
        else {
          *param_8 = 0xffff;
          *param_7 = 4;
        }
        goto LAB_006524f7;
      }
    }
  }
  else {
    uVar1 = local_60 + 1;
    uVar17 = 0xf;
    if (local_68 != &local_58) {
      uVar17 = CONCAT71(uStack_57,local_58);
    }
    if (uVar17 < uVar1) {
      __cxx11::string::_M_mutate((string *)&local_68,local_60,0,(char *)0x0,1);
    }
    local_68[uVar13] = (undefined1)local_c8;
    local_68[uVar13 + 1] = 0;
    local_60 = uVar1;
    cVar8 = __verify_grouping(*(char **)(lVar25 + 0x10),*(ulong *)(lVar25 + 0x18),
                              (string *)&local_68);
    if (cVar8 == '\0') {
      *param_7 = 4;
    }
    if (((local_c8 != 0) || (bVar7)) || (local_60 != 0)) goto LAB_006527a0;
  }
  *param_8 = 0;
  *param_7 = 4;
LAB_006524f7:
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
  auVar28._8_8_ = param_3 & 0xffffffff00000000 | (ulong)(uint)local_cc;
  auVar28._0_8_ = param_2;
  return auVar28;
code_r0x00652930:
  local_cc = L'\xffffffff';
  bVar4 = bVar21;
  goto LAB_006524c1;
code_r0x006524aa:
  local_cc = L'\xffffffff';
  bVar3 = 1;
  bVar4 = bVar21;
  goto LAB_006524c1;
}



/* std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > std::num_get<wchar_t,
   std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >::_M_extract_int<long
   long>(std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> >,
   std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> >, std::ios_base&,
   std::_Ios_Iostate&, long long&) const */

undefined1  [16]
std::num_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::
_M_extract_int<long_long>
          (undefined8 param_1,wstreambuf *param_2,undefined8 param_3,long *param_4,
          undefined8 param_5,long param_6,uint *param_7,ulong *param_8)

{
  int *piVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  char cVar5;
  bool bVar6;
  char cVar7;
  wchar_t __c;
  uint uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  wchar_t *pwVar14;
  bool bVar15;
  ulong uVar16;
  ulong extraout_RDX;
  bool bVar17;
  bool bVar18;
  ulong uVar19;
  char cVar20;
  uint uVar21;
  ulong uVar22;
  long in_FS_OFFSET;
  istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *local_c0;
  long **local_a0;
  size_t local_98;
  int local_80;
  byte local_7b;
  bool local_7a;
  long *local_78;
  undefined8 local_70;
  wstreambuf *local_68;
  wchar_t local_60;
  undefined4 uStack_5c;
  __use_cache<std::__numpunct_cache<wchar_t>> local_4a [2];
  undefined1 *local_48;
  long local_40;
  
  local_60 = (wchar_t)param_3;
  uStack_5c = (undefined4)((ulong)param_3 >> 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = param_4;
  local_70 = param_5;
  local_68 = param_2;
  lVar10 = __use_cache<std::__numpunct_cache<wchar_t>>::operator()
                     (local_4a,(locale *)(param_6 + 0xd0));
  uVar21 = *(uint *)(param_6 + 0x18) & 0x4a;
  if (uVar21 == 0x40) {
    uVar8 = 8;
LAB_006a16f2:
    cVar5 = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::equal
                      ((istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)&local_68,
                       (istreambuf_iterator *)&local_78);
    if (cVar5 == '\0') {
LAB_006a1719:
      local_a0 = &local_78;
      local_c0 = (istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)&local_68;
      __c = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::_M_get(local_c0);
      local_7a = *(wchar_t *)(lVar10 + 0xe0) == __c;
      if ((local_7a) || (*(wchar_t *)(lVar10 + 0xe4) == __c)) {
        cVar7 = *(char *)(lVar10 + 0x20);
        if (((cVar7 != '\0') && (*(wchar_t *)(lVar10 + 0x4c) == __c)) ||
           (*(wchar_t *)(lVar10 + 0x48) == __c)) goto LAB_006a1829;
        wstreambuf::sbumpc(local_68);
        local_60 = L'\xffffffff';
        cVar5 = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::equal
                          (local_c0,(istreambuf_iterator *)local_a0);
        if (cVar5 == '\0') {
          __c = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::_M_get(local_c0);
          goto LAB_006a1825;
        }
        local_80 = 0;
        cVar7 = *(char *)(lVar10 + 0x20);
        bVar18 = false;
      }
      else {
LAB_006a1825:
        cVar7 = *(char *)(lVar10 + 0x20);
LAB_006a1829:
        local_80 = 0;
        bVar18 = false;
        do {
          if (((cVar7 != '\0') && (*(wchar_t *)(lVar10 + 0x4c) == __c)) ||
             (*(wchar_t *)(lVar10 + 0x48) == __c)) {
LAB_006a1db0:
            cVar5 = '\0';
            goto joined_r0x006a191a;
          }
          if (*(wchar_t *)(lVar10 + 0xf0) == __c) {
            bVar17 = (bool)(bVar18 ^ 1U | uVar8 == 10);
            if (!bVar17) goto LAB_006a186b;
            bVar18 = uVar21 == 0 || uVar8 == 8;
            if (uVar21 != 0 && uVar8 != 8) {
              local_80 = local_80 + 1;
              goto LAB_006a18a5;
            }
            local_80 = 0;
            uVar8 = 8;
            uVar16 = *(ulong *)(local_68 + 0x10);
            if (*(ulong *)(local_68 + 0x18) <= uVar16) goto LAB_006a1b30;
LAB_006a18b8:
            *(ulong *)(local_68 + 0x10) = uVar16 + 4;
LAB_006a18c8:
            local_60 = L'\xffffffff';
            if (*(int **)(local_68 + 0x10) < *(int **)(local_68 + 0x18)) {
              iVar9 = **(int **)(local_68 + 0x10);
            }
            else {
              iVar9 = (**(code **)(*(long *)local_68 + 0x48))();
            }
            bVar17 = false;
            if (iVar9 == -1) {
              local_68 = (wstreambuf *)0x0;
              bVar17 = true;
            }
          }
          else {
            if (!bVar18) goto LAB_006a1db0;
LAB_006a186b:
            if ((*(wchar_t *)(lVar10 + 0xe8) != __c) && (*(wchar_t *)(lVar10 + 0xec) != __c)) {
              cVar5 = '\0';
              bVar18 = true;
              goto joined_r0x006a191a;
            }
            cVar5 = uVar8 == 0x10 || uVar21 == 0;
            if (uVar8 != 0x10 && uVar21 != 0) {
              local_98 = (size_t)(int)uVar8;
              bVar18 = true;
              uVar21 = uVar8;
              goto LAB_006a192d;
            }
            local_80 = 0;
            bVar17 = false;
            uVar8 = 0x10;
LAB_006a18a5:
            uVar16 = *(ulong *)(local_68 + 0x10);
            bVar18 = bVar17;
            if (uVar16 < *(ulong *)(local_68 + 0x18)) goto LAB_006a18b8;
LAB_006a1b30:
            (**(code **)(*(long *)local_68 + 0x50))();
            local_60 = L'\xffffffff';
            if (local_68 != (wstreambuf *)0x0) goto LAB_006a18c8;
            bVar17 = true;
          }
          bVar6 = local_78 != (long *)0x0 && (int)local_70 == -1;
          bVar15 = (int)local_70 == -1;
          if (bVar6) {
            if ((int *)local_78[2] < (int *)local_78[3]) {
              iVar9 = *(int *)local_78[2];
            }
            else {
              iVar9 = (**(code **)(*local_78 + 0x48))();
            }
            bVar15 = false;
            if (iVar9 == -1) {
              local_78 = (long *)0x0;
              bVar15 = bVar6;
            }
          }
          if (bVar17 == bVar15) {
            cVar7 = *(char *)(lVar10 + 0x20);
            cVar5 = '\x01';
            goto joined_r0x006a191a;
          }
          __c = local_60;
          if ((local_60 == L'\xffffffff') && (local_68 != (wstreambuf *)0x0)) {
            if (*(wchar_t **)(local_68 + 0x10) < *(wchar_t **)(local_68 + 0x18)) {
              __c = **(wchar_t **)(local_68 + 0x10);
            }
            else {
              __c = (**(code **)(*(long *)local_68 + 0x48))();
            }
            if (__c == L'\xffffffff') {
              local_68 = (wstreambuf *)0x0;
            }
          }
          cVar7 = *(char *)(lVar10 + 0x20);
        } while (bVar18);
        cVar5 = '\0';
      }
joined_r0x006a191a:
      if (uVar8 == 0x10) {
        local_98 = 0x16;
        uVar21 = 0x16;
      }
      else {
        local_98 = (size_t)(int)uVar8;
        uVar21 = uVar8;
      }
    }
    else {
      local_98 = (size_t)(int)uVar8;
      cVar7 = *(char *)(lVar10 + 0x20);
      __c = L'\0';
      bVar18 = false;
      local_80 = 0;
      local_7a = false;
      uVar21 = uVar8;
    }
  }
  else {
    uVar8 = 10;
    if (uVar21 != 8) goto LAB_006a16f2;
    uVar8 = 0x10;
    cVar5 = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::equal
                      ((istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)&local_68,
                       (istreambuf_iterator *)&local_78);
    if (cVar5 == '\0') goto LAB_006a1719;
    local_7a = false;
    cVar7 = *(char *)(lVar10 + 0x20);
    __c = L'\0';
    bVar18 = false;
    local_98 = 0x16;
    local_80 = 0;
    uVar21 = 0x16;
  }
LAB_006a192d:
  local_a0 = &local_78;
  local_c0 = (istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)&local_68;
  local_48 = &DAT_00938278;
  if (cVar7 != '\0') {
    std::string::reserve((string *)&local_48,0x20);
  }
  uVar19 = (ulong)(int)uVar8;
  uVar11 = (ulong)local_7a + 0x7fffffffffffffff;
  uVar12 = uVar11 / uVar19;
  uVar16 = uVar11 % uVar19;
  bVar2 = *(byte *)(lVar10 + 0x148);
  cVar7 = cVar5;
  if (bVar2 == 0) {
    local_7b = 0;
    if (cVar5 == '\0') {
      uVar22 = 0;
LAB_006a19a0:
      if (uVar21 < 0xb) {
        if ((__c < L'0') || ((int)local_98 + L'0' <= __c)) goto LAB_006a1da0;
        uVar8 = __c + L'\xffffffd0';
LAB_006a19c1:
        if (uVar12 < uVar22) goto LAB_006a19cc;
LAB_006a1bc0:
        uVar16 = uVar19 * uVar22;
        uVar22 = (long)(int)uVar8 + uVar16;
        uVar13 = *(ulong *)(local_68 + 0x10);
        local_80 = local_80 + 1;
        local_7b = local_7b | uVar11 - (long)(int)uVar8 < uVar16;
        if (*(ulong *)(local_68 + 0x18) <= uVar13) goto LAB_006a1bf9;
LAB_006a19e4:
        *(ulong *)(local_68 + 0x10) = uVar13 + 4;
LAB_006a19f4:
        local_60 = L'\xffffffff';
        if (*(int **)(local_68 + 0x10) < *(int **)(local_68 + 0x18)) {
          iVar9 = **(int **)(local_68 + 0x10);
        }
        else {
                    /* try { // try from 006a2088 to 006a20a2 has its CatchHandler @ 006a210b */
          iVar9 = (**(code **)(*(long *)local_68 + 0x48))();
        }
        cVar7 = '\0';
        if (iVar9 == -1) {
          local_68 = (wstreambuf *)0x0;
          cVar7 = '\x01';
        }
      }
      else {
        uVar8 = __c + L'\xffffffd0';
        if (uVar8 < 10) goto LAB_006a19c1;
        if (5 < (uint)(__c + L'\xffffff9f')) {
          if ((uint)(__c + L'\xffffffbf') < 6) {
            uVar8 = __c + L'\xffffffc9';
            goto LAB_006a19c1;
          }
          goto LAB_006a1da0;
        }
        uVar8 = __c + L'\xffffffa9';
        if (uVar22 <= uVar12) goto LAB_006a1bc0;
LAB_006a19cc:
        local_7b = 1;
        uVar13 = *(ulong *)(local_68 + 0x10);
        if (uVar13 < *(ulong *)(local_68 + 0x18)) goto LAB_006a19e4;
LAB_006a1bf9:
                    /* try { // try from 006a1c09 to 006a1f79 has its CatchHandler @ 006a210b */
        (**(code **)(*(long *)local_68 + 0x50))(local_68,&local_48,uVar16);
        local_60 = L'\xffffffff';
        if (local_68 != (wstreambuf *)0x0) goto LAB_006a19f4;
        cVar7 = '\x01';
      }
      bVar17 = local_78 != (long *)0x0 && (int)local_70 == -1;
      uVar16 = (ulong)((int)local_70 == -1);
      if (bVar17) {
        if ((int *)local_78[2] < (int *)local_78[3]) {
          iVar9 = *(int *)local_78[2];
        }
        else {
          iVar9 = (**(code **)(*local_78 + 0x48))();
        }
        uVar16 = 0;
        if (iVar9 == -1) {
          local_78 = (long *)0x0;
          uVar16 = (ulong)bVar17;
        }
      }
      if ((char)uVar16 != cVar7) {
        __c = local_60;
        if ((local_60 == L'\xffffffff') && (local_68 != (wstreambuf *)0x0)) {
          if (*(wchar_t **)(local_68 + 0x10) < *(wchar_t **)(local_68 + 0x18)) {
            __c = **(wchar_t **)(local_68 + 0x10);
          }
          else {
                    /* try { // try from 006a20d1 to 006a20d3 has its CatchHandler @ 006a210b */
            __c = (**(code **)(*(long *)local_68 + 0x48))();
            uVar16 = extraout_RDX;
          }
          if (__c == L'\xffffffff') {
            local_68 = (wstreambuf *)0x0;
          }
        }
        goto LAB_006a19a0;
      }
      cVar7 = '\x01';
      cVar20 = cVar5;
    }
    else {
      uVar22 = 0;
      cVar20 = '\0';
    }
  }
  else if (cVar5 == '\0') {
    local_7b = 0;
    uVar22 = 0;
    cVar20 = *(char *)(lVar10 + 0x20);
    if ((cVar20 != '\0') && (*(wchar_t *)(lVar10 + 0x4c) == __c)) goto LAB_006a1ec1;
LAB_006a1df6:
    if ((__c != *(wchar_t *)(lVar10 + 0x48)) &&
       (pwVar14 = wmemchr((wchar_t *)(lVar10 + 0xf0),__c,local_98), pwVar14 != (wchar_t *)0x0)) {
      iVar9 = (int)((long)pwVar14 - (lVar10 + 0xf0) >> 2);
      if (0xf < iVar9) {
        iVar9 = iVar9 + -6;
      }
      bVar4 = bVar2;
      if (uVar22 <= uVar12) {
        uVar16 = uVar19 * uVar22;
        uVar22 = (long)iVar9 + uVar16;
        local_80 = local_80 + 1;
        bVar4 = local_7b | uVar11 - (long)iVar9 < uVar16;
      }
      local_7b = bVar4;
      uVar16 = *(ulong *)(local_68 + 0x10);
      if (*(ulong *)(local_68 + 0x18) <= uVar16) goto LAB_006a1efb;
      do {
        *(ulong *)(local_68 + 0x10) = uVar16 + 4;
        while( true ) {
          local_60 = L'\xffffffff';
          cVar7 = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::equal
                            (local_c0,(istreambuf_iterator *)local_a0);
          cVar20 = cVar5;
          if (cVar7 != '\0') goto LAB_006a1a3b;
          __c = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::_M_get(local_c0);
          cVar20 = *(char *)(lVar10 + 0x20);
          if ((cVar20 == '\0') || (*(wchar_t *)(lVar10 + 0x4c) != __c)) goto LAB_006a1df6;
LAB_006a1ec1:
          if (local_80 == 0) {
            cVar7 = '\0';
            goto LAB_006a1a3b;
          }
          std::string::push_back((string *)&local_48,(char)local_80);
          local_80 = 0;
          uVar16 = *(ulong *)(local_68 + 0x10);
          if (uVar16 < *(ulong *)(local_68 + 0x18)) break;
LAB_006a1efb:
          (**(code **)(*(long *)local_68 + 0x50))();
        }
      } while( true );
    }
LAB_006a1da0:
    cVar7 = '\0';
    cVar20 = cVar5;
  }
  else {
    local_7b = 0;
    uVar22 = 0;
    cVar20 = '\0';
  }
LAB_006a1a3b:
  if (*(long *)(local_48 + -0x18) == 0) {
    if ((bVar18) || (local_80 != 0)) {
LAB_006a1d02:
      if (cVar20 == '\0') {
        if (local_7b == 0) {
          uVar16 = -uVar22;
          if (local_7a == false) {
            uVar16 = uVar22;
          }
          *param_8 = uVar16;
        }
        else {
          uVar16 = 0x8000000000000000;
          if (local_7a == false) {
            uVar16 = 0x7fffffffffffffff;
          }
          *param_8 = uVar16;
          *param_7 = 4;
        }
        goto LAB_006a1a7b;
      }
    }
  }
  else {
    std::string::push_back((string *)&local_48,(char)local_80);
    cVar5 = __verify_grouping(*(char **)(lVar10 + 0x10),*(ulong *)(lVar10 + 0x18),
                              (string *)&local_48);
    if (cVar5 == '\0') {
      *param_7 = 4;
    }
    if (((local_80 != 0) || (bVar18)) || (*(long *)(local_48 + -0x18) != 0)) goto LAB_006a1d02;
  }
  *param_8 = 0;
  *param_7 = 4;
LAB_006a1a7b:
  if (cVar7 != '\0') {
    *param_7 = *param_7 | 2;
  }
  auVar3._8_4_ = local_60;
  auVar3._0_8_ = local_68;
  auVar3._12_4_ = uStack_5c;
  if ((allocator *)(local_48 + -0x18) != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      piVar1 = (int *)(local_48 + -8);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    else {
      iVar9 = *(int *)(local_48 + -8);
      *(int *)(local_48 + -8) = iVar9 + -1;
    }
    if (iVar9 < 1) {
      std::string::_Rep::_M_destroy((allocator *)(local_48 + -0x18));
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


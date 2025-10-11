
/* std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > std::num_get<wchar_t,
   std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >::_M_extract_int<unsigned long
   long>(std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> >,
   std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> >, std::ios_base&,
   std::_Ios_Iostate&, unsigned long long&) const */

undefined1  [16]
std::num_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::
_M_extract_int<unsigned_long_long>
          (undefined8 param_1,wstreambuf *param_2,undefined8 param_3,long *param_4,
          undefined8 param_5,long param_6,uint *param_7,ulong *param_8)

{
  int *piVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  byte bVar5;
  char cVar6;
  char cVar7;
  wchar_t __c;
  uint uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  wchar_t *pwVar13;
  ulong uVar14;
  bool bVar15;
  ulong uVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  char cVar20;
  uint uVar21;
  long in_FS_OFFSET;
  bool bVar22;
  istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *local_b8;
  long **local_a0;
  size_t local_98;
  int local_80;
  byte local_7b;
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
LAB_006a220f:
    cVar6 = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::equal
                      ((istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)&local_68,
                       (istreambuf_iterator *)&local_78);
    if (cVar6 == '\0') {
LAB_006a2236:
      local_a0 = &local_78;
      local_b8 = (istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)&local_68;
      __c = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::_M_get(local_b8);
      bVar22 = *(wchar_t *)(lVar10 + 0xe0) == __c;
      if ((bVar22) || (*(wchar_t *)(lVar10 + 0xe4) == __c)) {
        cVar7 = *(char *)(lVar10 + 0x20);
        if (((cVar7 != '\0') && (*(wchar_t *)(lVar10 + 0x4c) == __c)) ||
           (*(wchar_t *)(lVar10 + 0x48) == __c)) goto LAB_006a2349;
        wstreambuf::sbumpc(local_68);
        local_60 = L'\xffffffff';
        cVar6 = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::equal
                          (local_b8,(istreambuf_iterator *)local_a0);
        if (cVar6 == '\0') {
          __c = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::_M_get(local_b8);
          goto LAB_006a2345;
        }
        local_80 = 0;
        cVar7 = *(char *)(lVar10 + 0x20);
        bVar18 = false;
      }
      else {
LAB_006a2345:
        cVar7 = *(char *)(lVar10 + 0x20);
LAB_006a2349:
        local_80 = 0;
        bVar18 = false;
        do {
          if (((cVar7 != '\0') && (*(wchar_t *)(lVar10 + 0x4c) == __c)) ||
             (*(wchar_t *)(lVar10 + 0x48) == __c)) {
LAB_006a2890:
            cVar6 = '\0';
            goto joined_r0x006a243a;
          }
          if (*(wchar_t *)(lVar10 + 0xf0) == __c) {
            bVar19 = (bool)(bVar18 ^ 1U | uVar8 == 10);
            if (!bVar19) goto LAB_006a238b;
            bVar18 = uVar21 == 0 || uVar8 == 8;
            if (uVar21 != 0 && uVar8 != 8) {
              local_80 = local_80 + 1;
              goto LAB_006a23c5;
            }
            local_80 = 0;
            uVar8 = 8;
            uVar11 = *(ulong *)(local_68 + 0x10);
            if (*(ulong *)(local_68 + 0x18) <= uVar11) goto LAB_006a2630;
LAB_006a23d8:
            *(ulong *)(local_68 + 0x10) = uVar11 + 4;
LAB_006a23e8:
            local_60 = L'\xffffffff';
            if (*(int **)(local_68 + 0x10) < *(int **)(local_68 + 0x18)) {
              iVar9 = **(int **)(local_68 + 0x10);
            }
            else {
              iVar9 = (**(code **)(*(long *)local_68 + 0x48))();
            }
            bVar19 = false;
            if (iVar9 == -1) {
              local_68 = (wstreambuf *)0x0;
              bVar19 = true;
            }
          }
          else {
            if (!bVar18) goto LAB_006a2890;
LAB_006a238b:
            if ((*(wchar_t *)(lVar10 + 0xe8) != __c) && (*(wchar_t *)(lVar10 + 0xec) != __c)) {
              cVar6 = '\0';
              bVar18 = true;
              goto joined_r0x006a243a;
            }
            cVar6 = uVar8 == 0x10 || uVar21 == 0;
            if (uVar8 != 0x10 && uVar21 != 0) {
              local_98 = (size_t)(int)uVar8;
              bVar18 = true;
              uVar21 = uVar8;
              goto LAB_006a244d;
            }
            local_80 = 0;
            bVar19 = false;
            uVar8 = 0x10;
LAB_006a23c5:
            uVar11 = *(ulong *)(local_68 + 0x10);
            bVar18 = bVar19;
            if (uVar11 < *(ulong *)(local_68 + 0x18)) goto LAB_006a23d8;
LAB_006a2630:
            (**(code **)(*(long *)local_68 + 0x50))();
            local_60 = L'\xffffffff';
            if (local_68 != (wstreambuf *)0x0) goto LAB_006a23e8;
            bVar19 = true;
          }
          bVar17 = local_78 != (long *)0x0 && (int)local_70 == -1;
          bVar15 = (int)local_70 == -1;
          if (bVar17) {
            if ((int *)local_78[2] < (int *)local_78[3]) {
              iVar9 = *(int *)local_78[2];
            }
            else {
              iVar9 = (**(code **)(*local_78 + 0x48))();
            }
            bVar15 = false;
            if (iVar9 == -1) {
              local_78 = (long *)0x0;
              bVar15 = bVar17;
            }
          }
          if (bVar19 == bVar15) {
            cVar7 = *(char *)(lVar10 + 0x20);
            cVar6 = '\x01';
            goto joined_r0x006a243a;
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
        cVar6 = '\0';
      }
joined_r0x006a243a:
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
      bVar22 = false;
      uVar21 = uVar8;
    }
  }
  else {
    uVar8 = 10;
    if (uVar21 != 8) goto LAB_006a220f;
    uVar8 = 0x10;
    cVar6 = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::equal
                      ((istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)&local_68,
                       (istreambuf_iterator *)&local_78);
    if (cVar6 == '\0') goto LAB_006a2236;
    bVar22 = false;
    cVar7 = *(char *)(lVar10 + 0x20);
    __c = L'\0';
    bVar18 = false;
    local_98 = 0x16;
    local_80 = 0;
    uVar21 = 0x16;
  }
LAB_006a244d:
  local_a0 = &local_78;
  local_b8 = (istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)&local_68;
  local_48 = &DAT_00938278;
  if (cVar7 != '\0') {
    std::string::reserve((string *)&local_48,0x20);
  }
  uVar14 = (ulong)(int)uVar8;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar14;
  uVar11 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar3,0);
  bVar2 = *(byte *)(lVar10 + 0x148);
  cVar7 = cVar6;
  if (bVar2 == 0) {
    local_7b = 0;
    if (cVar6 == '\0') {
      uVar12 = 0;
LAB_006a24af:
      if (uVar21 < 0xb) {
        if ((__c < L'0') || ((int)local_98 + L'0' <= __c)) goto LAB_006a2880;
        uVar8 = __c + L'\xffffffd0';
LAB_006a24d0:
        if (uVar11 < uVar12) goto LAB_006a24da;
LAB_006a26b8:
        uVar16 = uVar14 * uVar12;
        uVar12 = (long)(int)uVar8 + uVar16;
        local_7b = local_7b | CARRY8((long)(int)uVar8,uVar16);
        uVar16 = *(ulong *)(local_68 + 0x10);
        local_80 = local_80 + 1;
        if (*(ulong *)(local_68 + 0x18) <= uVar16) goto LAB_006a26e8;
LAB_006a24f2:
        *(ulong *)(local_68 + 0x10) = uVar16 + 4;
LAB_006a2502:
        local_60 = L'\xffffffff';
        if (*(int **)(local_68 + 0x10) < *(int **)(local_68 + 0x18)) {
          iVar9 = **(int **)(local_68 + 0x10);
        }
        else {
                    /* try { // try from 006a2b65 to 006a2b7f has its CatchHandler @ 006a2be8 */
          iVar9 = (**(code **)(*(long *)local_68 + 0x48))();
        }
        bVar19 = false;
        if (iVar9 == -1) {
          local_68 = (wstreambuf *)0x0;
          bVar19 = true;
        }
      }
      else {
        uVar8 = __c + L'\xffffffd0';
        if (uVar8 < 10) goto LAB_006a24d0;
        if (5 < (uint)(__c + L'\xffffff9f')) {
          if ((uint)(__c + L'\xffffffbf') < 6) {
            uVar8 = __c + L'\xffffffc9';
            goto LAB_006a24d0;
          }
          goto LAB_006a2880;
        }
        uVar8 = __c + L'\xffffffa9';
        if (uVar12 <= uVar11) goto LAB_006a26b8;
LAB_006a24da:
        local_7b = 1;
        uVar16 = *(ulong *)(local_68 + 0x10);
        if (uVar16 < *(ulong *)(local_68 + 0x18)) goto LAB_006a24f2;
LAB_006a26e8:
                    /* try { // try from 006a26f8 to 006a2a59 has its CatchHandler @ 006a2be8 */
        (**(code **)(*(long *)local_68 + 0x50))();
        local_60 = L'\xffffffff';
        if (local_68 != (wstreambuf *)0x0) goto LAB_006a2502;
        bVar19 = true;
      }
      bVar17 = local_78 != (long *)0x0 && (int)local_70 == -1;
      bVar15 = (int)local_70 == -1;
      if (bVar17) {
        if ((int *)local_78[2] < (int *)local_78[3]) {
          iVar9 = *(int *)local_78[2];
        }
        else {
          iVar9 = (**(code **)(*local_78 + 0x48))();
        }
        bVar15 = false;
        if (iVar9 == -1) {
          local_78 = (long *)0x0;
          bVar15 = bVar17;
        }
      }
      if (bVar19 != bVar15) {
        __c = local_60;
        if ((local_60 == L'\xffffffff') && (local_68 != (wstreambuf *)0x0)) {
          if (*(wchar_t **)(local_68 + 0x10) < *(wchar_t **)(local_68 + 0x18)) {
            __c = **(wchar_t **)(local_68 + 0x10);
          }
          else {
                    /* try { // try from 006a2bae to 006a2bb0 has its CatchHandler @ 006a2be8 */
            __c = (**(code **)(*(long *)local_68 + 0x48))();
          }
          if (__c == L'\xffffffff') {
            local_68 = (wstreambuf *)0x0;
          }
        }
        goto LAB_006a24af;
      }
      cVar7 = '\x01';
      cVar20 = cVar6;
    }
    else {
      uVar12 = 0;
      cVar20 = '\0';
    }
  }
  else if (cVar6 == '\0') {
    local_7b = 0;
    uVar12 = 0;
    cVar20 = *(char *)(lVar10 + 0x20);
    if ((cVar20 != '\0') && (*(wchar_t *)(lVar10 + 0x4c) == __c)) goto LAB_006a2997;
LAB_006a28d6:
    if ((__c != *(wchar_t *)(lVar10 + 0x48)) &&
       (pwVar13 = wmemchr((wchar_t *)(lVar10 + 0xf0),__c,local_98), pwVar13 != (wchar_t *)0x0)) {
      iVar9 = (int)((long)pwVar13 - (lVar10 + 0xf0) >> 2);
      if (0xf < iVar9) {
        iVar9 = iVar9 + -6;
      }
      bVar5 = bVar2;
      if (uVar12 <= uVar11) {
        uVar16 = uVar14 * uVar12;
        uVar12 = (long)iVar9 + uVar16;
        local_80 = local_80 + 1;
        bVar5 = local_7b | CARRY8((long)iVar9,uVar16);
      }
      local_7b = bVar5;
      uVar16 = *(ulong *)(local_68 + 0x10);
      if (*(ulong *)(local_68 + 0x18) <= uVar16) goto LAB_006a29d1;
      do {
        *(ulong *)(local_68 + 0x10) = uVar16 + 4;
        while( true ) {
          local_60 = L'\xffffffff';
          cVar7 = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::equal
                            (local_b8,(istreambuf_iterator *)local_a0);
          cVar20 = cVar6;
          if (cVar7 != '\0') goto LAB_006a2549;
          __c = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::_M_get(local_b8);
          cVar20 = *(char *)(lVar10 + 0x20);
          if ((cVar20 == '\0') || (*(wchar_t *)(lVar10 + 0x4c) != __c)) goto LAB_006a28d6;
LAB_006a2997:
          if (local_80 == 0) {
            cVar7 = '\0';
            goto LAB_006a2549;
          }
          std::string::push_back((string *)&local_48,(char)local_80);
          local_80 = 0;
          uVar16 = *(ulong *)(local_68 + 0x10);
          if (uVar16 < *(ulong *)(local_68 + 0x18)) break;
LAB_006a29d1:
          (**(code **)(*(long *)local_68 + 0x50))();
        }
      } while( true );
    }
LAB_006a2880:
    cVar7 = '\0';
    cVar20 = cVar6;
  }
  else {
    local_7b = 0;
    uVar12 = 0;
    cVar20 = '\0';
  }
LAB_006a2549:
  if (*(long *)(local_48 + -0x18) == 0) {
    if ((local_80 != 0) || (bVar18)) {
LAB_006a27f2:
      if (cVar20 == '\0') {
        if (local_7b == 0) {
          if (bVar22) {
            uVar12 = -uVar12;
          }
          *param_8 = uVar12;
        }
        else {
          *param_8 = 0xffffffffffffffff;
          *param_7 = 4;
        }
        goto LAB_006a2589;
      }
    }
  }
  else {
    std::string::push_back((string *)&local_48,(char)local_80);
    cVar6 = __verify_grouping(*(char **)(lVar10 + 0x10),*(ulong *)(lVar10 + 0x18),
                              (string *)&local_48);
    if (cVar6 == '\0') {
      *param_7 = 4;
    }
    if (((local_80 != 0) || (bVar18)) || (*(long *)(local_48 + -0x18) != 0)) goto LAB_006a27f2;
  }
  *param_8 = 0;
  *param_7 = 4;
LAB_006a2589:
  if (cVar7 != '\0') {
    *param_7 = *param_7 | 2;
  }
  auVar4._8_4_ = local_60;
  auVar4._0_8_ = local_68;
  auVar4._12_4_ = uStack_5c;
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
    return auVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


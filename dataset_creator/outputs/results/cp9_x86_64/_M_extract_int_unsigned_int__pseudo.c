
/* std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > std::num_get<wchar_t,
   std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >::_M_extract_int<unsigned
   int>(std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> >,
   std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> >, std::ios_base&,
   std::_Ios_Iostate&, unsigned int&) const */

undefined1  [16]
std::num_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::
_M_extract_int<unsigned_int>
          (undefined8 param_1,wstreambuf *param_2,undefined8 param_3,long *param_4,
          undefined8 param_5,long param_6,uint *param_7,uint *param_8)

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
  uint uVar9;
  int iVar10;
  long lVar11;
  wchar_t *pwVar12;
  ulong uVar13;
  bool bVar14;
  uint uVar15;
  bool bVar16;
  uint uVar17;
  bool bVar18;
  char cVar19;
  uint uVar20;
  uint uVar21;
  long in_FS_OFFSET;
  bool bVar22;
  int local_c4;
  istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *local_c0;
  long **local_a8;
  size_t local_a0;
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
  lVar11 = __use_cache<std::__numpunct_cache<wchar_t>>::operator()
                     (local_4a,(locale *)(param_6 + 0xd0));
  uVar20 = *(uint *)(param_6 + 0x18) & 0x4a;
  if (uVar20 == 0x40) {
    uVar17 = 8;
LAB_006a006f:
    cVar5 = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::equal
                      ((istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)&local_68,
                       (istreambuf_iterator *)&local_78);
    if (cVar5 == '\0') {
LAB_006a0096:
      local_a8 = &local_78;
      local_c0 = (istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)&local_68;
      __c = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::_M_get(local_c0);
      bVar22 = *(wchar_t *)(lVar11 + 0xe0) == __c;
      if ((bVar22) || (*(wchar_t *)(lVar11 + 0xe4) == __c)) {
        cVar7 = *(char *)(lVar11 + 0x20);
        if (((cVar7 != '\0') && (*(wchar_t *)(lVar11 + 0x4c) == __c)) ||
           (*(wchar_t *)(lVar11 + 0x48) == __c)) goto LAB_006a01aa;
        wstreambuf::sbumpc(local_68);
        local_60 = L'\xffffffff';
        cVar5 = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::equal
                          (local_c0,(istreambuf_iterator *)local_a8);
        if (cVar5 == '\0') {
          __c = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::_M_get(local_c0);
          goto LAB_006a01a6;
        }
        local_c4 = 0;
        cVar7 = *(char *)(lVar11 + 0x20);
        bVar16 = false;
      }
      else {
LAB_006a01a6:
        cVar7 = *(char *)(lVar11 + 0x20);
LAB_006a01aa:
        local_c4 = 0;
        bVar16 = false;
        do {
          if (((cVar7 != '\0') && (*(wchar_t *)(lVar11 + 0x4c) == __c)) ||
             (*(wchar_t *)(lVar11 + 0x48) == __c)) {
LAB_006a0700:
            cVar5 = '\0';
            goto joined_r0x006a029e;
          }
          if (*(wchar_t *)(lVar11 + 0xf0) == __c) {
            bVar14 = (bool)(bVar16 ^ 1U | uVar17 == 10);
            if (!bVar14) goto LAB_006a01ee;
            bVar16 = uVar20 == 0 || uVar17 == 8;
            if (uVar20 != 0 && uVar17 != 8) {
              local_c4 = local_c4 + 1;
              goto LAB_006a0229;
            }
            local_c4 = 0;
            uVar17 = 8;
            uVar13 = *(ulong *)(local_68 + 0x10);
            if (*(ulong *)(local_68 + 0x18) <= uVar13) goto LAB_006a04a0;
LAB_006a023c:
            *(ulong *)(local_68 + 0x10) = uVar13 + 4;
LAB_006a024c:
            local_60 = L'\xffffffff';
            if (*(int **)(local_68 + 0x10) < *(int **)(local_68 + 0x18)) {
              iVar10 = **(int **)(local_68 + 0x10);
            }
            else {
              iVar10 = (**(code **)(*(long *)local_68 + 0x48))();
            }
            bVar14 = false;
            if (iVar10 == -1) {
              local_68 = (wstreambuf *)0x0;
              bVar14 = true;
            }
          }
          else {
            if (!bVar16) goto LAB_006a0700;
LAB_006a01ee:
            if ((*(wchar_t *)(lVar11 + 0xe8) != __c) && (*(wchar_t *)(lVar11 + 0xec) != __c)) {
              cVar5 = '\0';
              bVar16 = true;
              goto joined_r0x006a029e;
            }
            cVar5 = uVar17 == 0x10 || uVar20 == 0;
            if (uVar17 != 0x10 && uVar20 != 0) {
              local_a0 = (size_t)(int)uVar17;
              bVar16 = true;
              uVar20 = uVar17;
              goto LAB_006a02b1;
            }
            local_c4 = 0;
            bVar14 = false;
            uVar17 = 0x10;
LAB_006a0229:
            uVar13 = *(ulong *)(local_68 + 0x10);
            bVar16 = bVar14;
            if (uVar13 < *(ulong *)(local_68 + 0x18)) goto LAB_006a023c;
LAB_006a04a0:
            (**(code **)(*(long *)local_68 + 0x50))();
            local_60 = L'\xffffffff';
            if (local_68 != (wstreambuf *)0x0) goto LAB_006a024c;
            bVar14 = true;
          }
          bVar6 = local_78 != (long *)0x0 && (int)local_70 == -1;
          bVar18 = (int)local_70 == -1;
          if (bVar6) {
            if ((int *)local_78[2] < (int *)local_78[3]) {
              iVar10 = *(int *)local_78[2];
            }
            else {
              iVar10 = (**(code **)(*local_78 + 0x48))();
            }
            bVar18 = false;
            if (iVar10 == -1) {
              local_78 = (long *)0x0;
              bVar18 = bVar6;
            }
          }
          if (bVar14 == bVar18) {
            cVar7 = *(char *)(lVar11 + 0x20);
            cVar5 = '\x01';
            goto joined_r0x006a029e;
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
          cVar7 = *(char *)(lVar11 + 0x20);
        } while (bVar16);
        cVar5 = '\0';
      }
joined_r0x006a029e:
      if (uVar17 == 0x10) {
        local_a0 = 0x16;
        uVar20 = 0x16;
      }
      else {
        local_a0 = (size_t)(int)uVar17;
        uVar20 = uVar17;
      }
    }
    else {
      local_a0 = (size_t)(int)uVar17;
      cVar7 = *(char *)(lVar11 + 0x20);
      __c = L'\0';
      bVar16 = false;
      local_c4 = 0;
      bVar22 = false;
      uVar20 = uVar17;
    }
  }
  else {
    uVar17 = 10;
    if (uVar20 != 8) goto LAB_006a006f;
    uVar17 = 0x10;
    cVar5 = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::equal
                      ((istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)&local_68,
                       (istreambuf_iterator *)&local_78);
    if (cVar5 == '\0') goto LAB_006a0096;
    bVar22 = false;
    cVar7 = *(char *)(lVar11 + 0x20);
    __c = L'\0';
    bVar16 = false;
    local_a0 = 0x16;
    local_c4 = 0;
    uVar20 = 0x16;
  }
LAB_006a02b1:
  local_a8 = &local_78;
  local_c0 = (istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)&local_68;
  local_48 = &DAT_00938278;
  if (cVar7 != '\0') {
    std::string::reserve((string *)&local_48,0x20);
  }
  uVar8 = (uint)(0xffffffff / (ulong)uVar17);
  bVar2 = *(byte *)(lVar11 + 0x148);
  cVar7 = cVar5;
  if (bVar2 == 0) {
    local_7b = 0;
    if (cVar5 == '\0') {
      uVar21 = 0;
LAB_006a0309:
      if (uVar20 < 0xb) {
        if ((__c < L'0') || ((int)local_a0 + L'0' <= __c)) goto LAB_006a06f8;
        uVar9 = __c + L'\xffffffd0';
LAB_006a032d:
        if (uVar8 < uVar21) goto LAB_006a0338;
LAB_006a0530:
        uVar15 = uVar21 * uVar17;
        uVar21 = uVar9 + uVar15;
        local_7b = local_7b | CARRY4(uVar9,uVar15);
        uVar13 = *(ulong *)(local_68 + 0x10);
        local_c4 = local_c4 + 1;
        if (*(ulong *)(local_68 + 0x18) <= uVar13) goto LAB_006a055b;
LAB_006a0350:
        *(ulong *)(local_68 + 0x10) = uVar13 + 4;
LAB_006a0360:
        local_60 = L'\xffffffff';
        if (*(int **)(local_68 + 0x10) < *(int **)(local_68 + 0x18)) {
          iVar10 = **(int **)(local_68 + 0x10);
        }
        else {
                    /* try { // try from 006a09e3 to 006a09fd has its CatchHandler @ 006a0a69 */
          iVar10 = (**(code **)(*(long *)local_68 + 0x48))();
        }
        local_c0._0_1_ = false;
        if (iVar10 == -1) {
          local_68 = (wstreambuf *)0x0;
          local_c0._0_1_ = true;
        }
      }
      else {
        uVar9 = __c + L'\xffffffd0';
        if (uVar9 < 10) goto LAB_006a032d;
        if (5 < (uint)(__c + L'\xffffff9f')) {
          if ((uint)(__c + L'\xffffffbf') < 6) {
            uVar9 = __c + L'\xffffffc9';
            goto LAB_006a032d;
          }
          goto LAB_006a06f8;
        }
        uVar9 = __c + L'\xffffffa9';
        if (uVar21 <= uVar8) goto LAB_006a0530;
LAB_006a0338:
        local_7b = 1;
        uVar13 = *(ulong *)(local_68 + 0x10);
        if (uVar13 < *(ulong *)(local_68 + 0x18)) goto LAB_006a0350;
LAB_006a055b:
                    /* try { // try from 006a056b to 006a08d9 has its CatchHandler @ 006a0a69 */
        (**(code **)(*(long *)local_68 + 0x50))();
        local_60 = L'\xffffffff';
        if (local_68 != (wstreambuf *)0x0) goto LAB_006a0360;
        local_c0._0_1_ = true;
      }
      bVar18 = local_78 != (long *)0x0 && (int)local_70 == -1;
      bVar14 = (int)local_70 == -1;
      if (bVar18) {
        if ((int *)local_78[2] < (int *)local_78[3]) {
          iVar10 = *(int *)local_78[2];
        }
        else {
          iVar10 = (**(code **)(*local_78 + 0x48))();
        }
        bVar14 = false;
        if (iVar10 == -1) {
          local_78 = (long *)0x0;
          bVar14 = bVar18;
        }
      }
      if (local_c0._0_1_ != bVar14) {
        __c = local_60;
        if ((local_60 == L'\xffffffff') && (local_68 != (wstreambuf *)0x0)) {
          if (*(wchar_t **)(local_68 + 0x10) < *(wchar_t **)(local_68 + 0x18)) {
            __c = **(wchar_t **)(local_68 + 0x10);
          }
          else {
                    /* try { // try from 006a0a2d to 006a0a2f has its CatchHandler @ 006a0a69 */
            __c = (**(code **)(*(long *)local_68 + 0x48))();
          }
          if (__c == L'\xffffffff') {
            local_68 = (wstreambuf *)0x0;
          }
        }
        goto LAB_006a0309;
      }
      cVar7 = '\x01';
      cVar19 = cVar5;
    }
    else {
      uVar21 = 0;
      cVar19 = '\0';
    }
  }
  else if (cVar5 == '\0') {
    local_7b = 0;
    uVar21 = 0;
    cVar19 = *(char *)(lVar11 + 0x20);
    if ((cVar19 != '\0') && (*(wchar_t *)(lVar11 + 0x4c) == __c)) goto LAB_006a0813;
LAB_006a074c:
    if ((__c != *(wchar_t *)(lVar11 + 0x48)) &&
       (pwVar12 = wmemchr((wchar_t *)(lVar11 + 0xf0),__c,local_a0), pwVar12 != (wchar_t *)0x0)) {
      uVar20 = (uint)((long)pwVar12 - (lVar11 + 0xf0) >> 2);
      if (0xf < (int)uVar20) {
        uVar20 = uVar20 - 6;
      }
      bVar4 = bVar2;
      if (uVar21 <= uVar8) {
        uVar9 = uVar21 * uVar17;
        uVar21 = uVar20 + uVar9;
        local_c4 = local_c4 + 1;
        bVar4 = local_7b | CARRY4(uVar20,uVar9);
      }
      local_7b = bVar4;
      uVar13 = *(ulong *)(local_68 + 0x10);
      if (*(ulong *)(local_68 + 0x18) <= uVar13) goto LAB_006a084d;
      do {
        *(ulong *)(local_68 + 0x10) = uVar13 + 4;
        while( true ) {
          local_60 = L'\xffffffff';
          cVar7 = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::equal
                            (local_c0,(istreambuf_iterator *)local_a8);
          cVar19 = cVar5;
          if (cVar7 != '\0') goto LAB_006a03ab;
          __c = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::_M_get(local_c0);
          cVar19 = *(char *)(lVar11 + 0x20);
          if ((cVar19 == '\0') || (*(wchar_t *)(lVar11 + 0x4c) != __c)) goto LAB_006a074c;
LAB_006a0813:
          if (local_c4 == 0) {
            cVar7 = '\0';
            goto LAB_006a03ab;
          }
          std::string::push_back((string *)&local_48,(char)local_c4);
          local_c4 = 0;
          uVar13 = *(ulong *)(local_68 + 0x10);
          if (uVar13 < *(ulong *)(local_68 + 0x18)) break;
LAB_006a084d:
          (**(code **)(*(long *)local_68 + 0x50))();
        }
      } while( true );
    }
LAB_006a06f8:
    cVar7 = '\0';
    cVar19 = cVar5;
  }
  else {
    local_7b = 0;
    uVar21 = 0;
    cVar19 = '\0';
  }
LAB_006a03ab:
  if (*(long *)(local_48 + -0x18) == 0) {
    if ((local_c4 != 0) || (bVar16)) {
LAB_006a066a:
      if (cVar19 == '\0') {
        if (local_7b == 0) {
          if (bVar22) {
            uVar21 = -uVar21;
          }
          *param_8 = uVar21;
        }
        else {
          *param_8 = 0xffffffff;
          *param_7 = 4;
        }
        goto LAB_006a03ea;
      }
    }
  }
  else {
    std::string::push_back((string *)&local_48,(char)local_c4);
    cVar5 = __verify_grouping(*(char **)(lVar11 + 0x10),*(ulong *)(lVar11 + 0x18),
                              (string *)&local_48);
    if (cVar5 == '\0') {
      *param_7 = 4;
    }
    if (((local_c4 != 0) || (bVar16)) || (*(long *)(local_48 + -0x18) != 0)) goto LAB_006a066a;
  }
  *param_8 = 0;
  *param_7 = 4;
LAB_006a03ea:
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
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    else {
      iVar10 = *(int *)(local_48 + -8);
      *(int *)(local_48 + -8) = iVar10 + -1;
    }
    if (iVar10 < 1) {
      std::string::_Rep::_M_destroy((allocator *)(local_48 + -0x18));
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


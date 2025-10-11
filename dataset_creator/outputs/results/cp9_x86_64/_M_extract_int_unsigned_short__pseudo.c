
/* std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > std::num_get<wchar_t,
   std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >::_M_extract_int<unsigned
   short>(std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> >,
   std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> >, std::ios_base&,
   std::_Ios_Iostate&, unsigned short&) const */

undefined1  [16]
std::num_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::
_M_extract_int<unsigned_short>
          (undefined8 param_1,wstreambuf *param_2,undefined8 param_3,long *param_4,
          undefined8 param_5,long param_6,uint *param_7,ushort *param_8)

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
  wchar_t *pwVar12;
  ulong uVar13;
  uint uVar14;
  bool bVar15;
  ulong extraout_RDX;
  bool bVar16;
  uint uVar17;
  bool bVar18;
  char cVar19;
  ushort uVar20;
  uint uVar21;
  int iVar22;
  long in_FS_OFFSET;
  bool bVar23;
  int local_bc;
  istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *local_b8;
  long **local_a0;
  size_t local_98;
  ushort local_80;
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
    uVar17 = 8;
LAB_0069f56f:
    cVar5 = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::equal
                      ((istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)&local_68,
                       (istreambuf_iterator *)&local_78);
    if (cVar5 == '\0') {
LAB_0069f596:
      local_a0 = &local_78;
      local_b8 = (istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)&local_68;
      __c = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::_M_get(local_b8);
      bVar23 = *(wchar_t *)(lVar10 + 0xe0) == __c;
      if ((bVar23) || (*(wchar_t *)(lVar10 + 0xe4) == __c)) {
        cVar7 = *(char *)(lVar10 + 0x20);
        if (((cVar7 != '\0') && (*(wchar_t *)(lVar10 + 0x4c) == __c)) ||
           (*(wchar_t *)(lVar10 + 0x48) == __c)) goto LAB_0069f6aa;
        wstreambuf::sbumpc(local_68);
        local_60 = L'\xffffffff';
        cVar5 = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::equal
                          (local_b8,(istreambuf_iterator *)local_a0);
        if (cVar5 == '\0') {
          __c = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::_M_get(local_b8);
          goto LAB_0069f6a6;
        }
        local_bc = 0;
        cVar7 = *(char *)(lVar10 + 0x20);
        bVar16 = false;
      }
      else {
LAB_0069f6a6:
        cVar7 = *(char *)(lVar10 + 0x20);
LAB_0069f6aa:
        local_bc = 0;
        bVar16 = false;
        do {
          if (((cVar7 != '\0') && (*(wchar_t *)(lVar10 + 0x4c) == __c)) ||
             (*(wchar_t *)(lVar10 + 0x48) == __c)) {
LAB_0069fc00:
            cVar5 = '\0';
            goto joined_r0x0069f79e;
          }
          if (*(wchar_t *)(lVar10 + 0xf0) == __c) {
            bVar18 = (bool)(bVar16 ^ 1U | uVar17 == 10);
            if (!bVar18) goto LAB_0069f6ee;
            bVar16 = uVar21 == 0 || uVar17 == 8;
            if (uVar21 != 0 && uVar17 != 8) {
              local_bc = local_bc + 1;
              goto LAB_0069f729;
            }
            local_bc = 0;
            uVar17 = 8;
            uVar13 = *(ulong *)(local_68 + 0x10);
            if (*(ulong *)(local_68 + 0x18) <= uVar13) goto LAB_0069f990;
LAB_0069f73c:
            *(ulong *)(local_68 + 0x10) = uVar13 + 4;
LAB_0069f74c:
            local_60 = L'\xffffffff';
            if (*(int **)(local_68 + 0x10) < *(int **)(local_68 + 0x18)) {
              iVar22 = **(int **)(local_68 + 0x10);
            }
            else {
              iVar22 = (**(code **)(*(long *)local_68 + 0x48))();
            }
            bVar18 = false;
            if (iVar22 == -1) {
              local_68 = (wstreambuf *)0x0;
              bVar18 = true;
            }
          }
          else {
            if (!bVar16) goto LAB_0069fc00;
LAB_0069f6ee:
            if ((*(wchar_t *)(lVar10 + 0xe8) != __c) && (*(wchar_t *)(lVar10 + 0xec) != __c)) {
              cVar5 = '\0';
              bVar16 = true;
              goto joined_r0x0069f79e;
            }
            cVar5 = uVar17 == 0x10 || uVar21 == 0;
            if (uVar17 != 0x10 && uVar21 != 0) {
              local_98 = (size_t)(int)uVar17;
              bVar16 = true;
              uVar21 = uVar17;
              goto LAB_0069f7b1;
            }
            local_bc = 0;
            bVar18 = false;
            uVar17 = 0x10;
LAB_0069f729:
            uVar13 = *(ulong *)(local_68 + 0x10);
            bVar16 = bVar18;
            if (uVar13 < *(ulong *)(local_68 + 0x18)) goto LAB_0069f73c;
LAB_0069f990:
            (**(code **)(*(long *)local_68 + 0x50))();
            local_60 = L'\xffffffff';
            if (local_68 != (wstreambuf *)0x0) goto LAB_0069f74c;
            bVar18 = true;
          }
          bVar6 = local_78 != (long *)0x0 && (int)local_70 == -1;
          bVar15 = (int)local_70 == -1;
          if (bVar6) {
            if ((int *)local_78[2] < (int *)local_78[3]) {
              iVar22 = *(int *)local_78[2];
            }
            else {
              iVar22 = (**(code **)(*local_78 + 0x48))();
            }
            bVar15 = false;
            if (iVar22 == -1) {
              local_78 = (long *)0x0;
              bVar15 = bVar6;
            }
          }
          if (bVar18 == bVar15) {
            cVar7 = *(char *)(lVar10 + 0x20);
            cVar5 = '\x01';
            goto joined_r0x0069f79e;
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
        } while (bVar16);
        cVar5 = '\0';
      }
joined_r0x0069f79e:
      if (uVar17 == 0x10) {
        local_98 = 0x16;
        uVar21 = 0x16;
      }
      else {
        local_98 = (size_t)(int)uVar17;
        uVar21 = uVar17;
      }
    }
    else {
      local_98 = (size_t)(int)uVar17;
      cVar7 = *(char *)(lVar10 + 0x20);
      __c = L'\0';
      bVar16 = false;
      local_bc = 0;
      bVar23 = false;
      uVar21 = uVar17;
    }
  }
  else {
    uVar17 = 10;
    if (uVar21 != 8) goto LAB_0069f56f;
    uVar17 = 0x10;
    cVar5 = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::equal
                      ((istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)&local_68,
                       (istreambuf_iterator *)&local_78);
    if (cVar5 == '\0') goto LAB_0069f596;
    bVar23 = false;
    cVar7 = *(char *)(lVar10 + 0x20);
    __c = L'\0';
    bVar16 = false;
    local_98 = 0x16;
    local_bc = 0;
    uVar21 = 0x16;
  }
LAB_0069f7b1:
  local_a0 = &local_78;
  local_b8 = (istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)&local_68;
  local_48 = &DAT_00938278;
  if (cVar7 != '\0') {
    std::string::reserve((string *)&local_48,0x20);
  }
  uVar13 = 0xffff % (ulong)(long)(int)uVar17;
  bVar2 = *(byte *)(lVar10 + 0x148);
  local_80 = (ushort)(0xffff / (ulong)(long)(int)uVar17);
  cVar7 = cVar5;
  if (bVar2 == 0) {
    local_7b = 0;
    if (cVar5 == '\0') {
      iVar22 = 0;
LAB_0069f808:
      uVar20 = (ushort)iVar22;
      if (uVar21 < 0xb) {
        if ((__c < L'0') || ((int)local_98 + L'0' <= __c)) goto LAB_0069fbf8;
        uVar8 = __c + L'\xffffffd0';
LAB_0069f82c:
        if (local_80 < uVar20) goto LAB_0069f838;
LAB_0069fa20:
        uVar14 = iVar22 * uVar17;
        iVar22 = uVar14 + uVar8;
        uVar11 = *(ulong *)(local_68 + 0x10);
        bVar18 = (int)(0xffff - uVar8) < (int)(uVar14 & 0xffff);
        uVar13 = (ulong)bVar18;
        local_bc = local_bc + 1;
        local_7b = local_7b | bVar18;
        if (*(ulong *)(local_68 + 0x18) <= uVar11) goto LAB_0069fa56;
LAB_0069f850:
        *(ulong *)(local_68 + 0x10) = uVar11 + 4;
LAB_0069f860:
        local_60 = L'\xffffffff';
        if (*(int **)(local_68 + 0x10) < *(int **)(local_68 + 0x18)) {
          iVar9 = **(int **)(local_68 + 0x10);
        }
        else {
                    /* try { // try from 0069fee3 to 0069fefd has its CatchHandler @ 0069ff69 */
          iVar9 = (**(code **)(*(long *)local_68 + 0x48))();
        }
        local_b8._0_1_ = '\0';
        if (iVar9 == -1) {
          local_68 = (wstreambuf *)0x0;
          local_b8._0_1_ = '\x01';
        }
      }
      else {
        uVar8 = __c + L'\xffffffd0';
        if (uVar8 < 10) goto LAB_0069f82c;
        if (5 < (uint)(__c + L'\xffffff9f')) {
          if ((uint)(__c + L'\xffffffbf') < 6) {
            uVar8 = __c + L'\xffffffc9';
            goto LAB_0069f82c;
          }
          goto LAB_0069fbf8;
        }
        uVar8 = __c + L'\xffffffa9';
        if (uVar20 <= local_80) goto LAB_0069fa20;
LAB_0069f838:
        local_7b = 1;
        uVar11 = *(ulong *)(local_68 + 0x10);
        if (uVar11 < *(ulong *)(local_68 + 0x18)) goto LAB_0069f850;
LAB_0069fa56:
                    /* try { // try from 0069fa66 to 0069fdd9 has its CatchHandler @ 0069ff69 */
        (**(code **)(*(long *)local_68 + 0x50))(local_68,&local_48,uVar13);
        local_60 = L'\xffffffff';
        if (local_68 != (wstreambuf *)0x0) goto LAB_0069f860;
        local_b8._0_1_ = '\x01';
      }
      uVar20 = (ushort)iVar22;
      bVar18 = local_78 != (long *)0x0 && (int)local_70 == -1;
      uVar13 = (ulong)((int)local_70 == -1);
      if (bVar18) {
        if ((int *)local_78[2] < (int *)local_78[3]) {
          iVar9 = *(int *)local_78[2];
        }
        else {
          iVar9 = (**(code **)(*local_78 + 0x48))();
        }
        uVar13 = 0;
        if (iVar9 == -1) {
          local_78 = (long *)0x0;
          uVar13 = (ulong)bVar18;
        }
      }
      if ((char)local_b8 != (char)uVar13) {
        __c = local_60;
        if ((local_60 == L'\xffffffff') && (local_68 != (wstreambuf *)0x0)) {
          if (*(wchar_t **)(local_68 + 0x10) < *(wchar_t **)(local_68 + 0x18)) {
            __c = **(wchar_t **)(local_68 + 0x10);
          }
          else {
                    /* try { // try from 0069ff2d to 0069ff2f has its CatchHandler @ 0069ff69 */
            __c = (**(code **)(*(long *)local_68 + 0x48))();
            uVar13 = extraout_RDX;
          }
          if (__c == L'\xffffffff') {
            local_68 = (wstreambuf *)0x0;
          }
        }
        goto LAB_0069f808;
      }
      cVar7 = '\x01';
      cVar19 = cVar5;
    }
    else {
      uVar20 = 0;
      cVar19 = '\0';
    }
  }
  else if (cVar5 == '\0') {
    local_7b = 0;
    iVar22 = 0;
    cVar19 = *(char *)(lVar10 + 0x20);
    if ((cVar19 != '\0') && (*(wchar_t *)(lVar10 + 0x4c) == __c)) goto LAB_0069fd18;
LAB_0069fc3f:
    uVar20 = (ushort)iVar22;
    if ((__c != *(wchar_t *)(lVar10 + 0x48)) &&
       (pwVar12 = wmemchr((wchar_t *)(lVar10 + 0xf0),__c,local_98), pwVar12 != (wchar_t *)0x0)) {
      iVar9 = (int)((long)pwVar12 - (lVar10 + 0xf0) >> 2);
      if (0xf < iVar9) {
        iVar9 = iVar9 + -6;
      }
      bVar4 = bVar2;
      if (uVar20 <= local_80) {
        uVar21 = iVar22 * uVar17;
        iVar22 = uVar21 + iVar9;
        local_bc = local_bc + 1;
        bVar4 = local_7b | 0xffff - iVar9 < (int)(uVar21 & 0xffff);
      }
      local_7b = bVar4;
      uVar13 = *(ulong *)(local_68 + 0x10);
      if (*(ulong *)(local_68 + 0x18) <= uVar13) goto LAB_0069fd58;
      do {
        *(ulong *)(local_68 + 0x10) = uVar13 + 4;
        while( true ) {
          uVar20 = (ushort)iVar22;
          local_60 = L'\xffffffff';
          cVar7 = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::equal
                            (local_b8,(istreambuf_iterator *)local_a0);
          cVar19 = cVar5;
          if (cVar7 != '\0') goto LAB_0069f8ab;
          __c = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::_M_get(local_b8);
          cVar19 = *(char *)(lVar10 + 0x20);
          if ((cVar19 == '\0') || (*(wchar_t *)(lVar10 + 0x4c) != __c)) goto LAB_0069fc3f;
LAB_0069fd18:
          uVar20 = (ushort)iVar22;
          if (local_bc == 0) {
            cVar7 = '\0';
            goto LAB_0069f8ab;
          }
          std::string::push_back((string *)&local_48,(char)local_bc);
          local_bc = 0;
          uVar13 = *(ulong *)(local_68 + 0x10);
          if (uVar13 < *(ulong *)(local_68 + 0x18)) break;
LAB_0069fd58:
          (**(code **)(*(long *)local_68 + 0x50))();
        }
      } while( true );
    }
LAB_0069fbf8:
    cVar7 = '\0';
    cVar19 = cVar5;
  }
  else {
    local_7b = 0;
    uVar20 = 0;
    cVar19 = '\0';
  }
LAB_0069f8ab:
  if (*(long *)(local_48 + -0x18) == 0) {
    if ((local_bc != 0) || (bVar16)) {
LAB_0069fb6a:
      if (cVar19 == '\0') {
        if (local_7b == 0) {
          if (bVar23) {
            uVar20 = -uVar20;
          }
          *param_8 = uVar20;
        }
        else {
          *param_8 = 0xffff;
          *param_7 = 4;
        }
        goto LAB_0069f8e9;
      }
    }
  }
  else {
    std::string::push_back((string *)&local_48,(char)local_bc);
    cVar5 = __verify_grouping(*(char **)(lVar10 + 0x10),*(ulong *)(lVar10 + 0x18),
                              (string *)&local_48);
    if (cVar5 == '\0') {
      *param_7 = 4;
    }
    if (((local_bc != 0) || (bVar16)) || (*(long *)(local_48 + -0x18) != 0)) goto LAB_0069fb6a;
  }
  *param_8 = 0;
  *param_7 = 4;
LAB_0069f8e9:
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
      iVar22 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    else {
      iVar22 = *(int *)(local_48 + -8);
      *(int *)(local_48 + -8) = iVar22 + -1;
    }
    if (iVar22 < 1) {
      std::string::_Rep::_M_destroy((allocator *)(local_48 + -0x18));
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


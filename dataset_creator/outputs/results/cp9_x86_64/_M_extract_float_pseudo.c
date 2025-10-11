
/* std::num_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> >
   >::_M_extract_float(std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> >,
   std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> >, std::ios_base&,
   std::_Ios_Iostate&, std::string&) const */

wstreambuf *
std::num_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::_M_extract_float
          (undefined8 param_1,wstreambuf *param_2,undefined8 param_3,long *param_4,
          undefined8 param_5,long param_6,undefined4 *param_7,string *param_8)

{
  int *piVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  wstreambuf *pwVar5;
  char cVar6;
  bool bVar7;
  char cVar8;
  wchar_t __c;
  int iVar9;
  long lVar10;
  ulong uVar11;
  wchar_t *pwVar12;
  char cVar13;
  undefined1 *puVar14;
  bool bVar15;
  bool bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  long in_FS_OFFSET;
  string *local_b8;
  int local_98;
  byte local_93;
  byte local_92;
  long *local_78;
  undefined8 local_70;
  wstreambuf *local_68;
  undefined8 local_60;
  __use_cache<std::__numpunct_cache<wchar_t>> local_4a [2];
  undefined1 *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = param_4;
  local_70 = param_5;
  local_68 = param_2;
  local_60 = param_3;
  lVar10 = __use_cache<std::__numpunct_cache<wchar_t>>::operator()
                     (local_4a,(locale *)(param_6 + 0xd0));
  cVar6 = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::equal
                    ((istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)&local_68,
                     (istreambuf_iterator *)&local_78);
  if (cVar6 == '\0') {
    __c = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::_M_get
                    ((istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)&local_68);
    if ((*(wchar_t *)(lVar10 + 0xe4) == __c) || (*(wchar_t *)(lVar10 + 0xe0) == __c)) {
      cVar13 = *(char *)(lVar10 + 0x20);
      if (((cVar13 != '\0') && (*(wchar_t *)(lVar10 + 0x4c) == __c)) ||
         (*(wchar_t *)(lVar10 + 0x48) == __c)) goto LAB_0069d917;
      std::string::push_back(param_8,(*(wchar_t *)(lVar10 + 0xe4) != __c) * '\x02' + '+');
      wstreambuf::sbumpc(local_68);
      local_60 = CONCAT44(local_60._4_4_,0xffffffff);
      cVar8 = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::equal
                        ((istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)&local_68,
                         (istreambuf_iterator *)&local_78);
      if (cVar8 != '\0') {
        cVar13 = *(char *)(lVar10 + 0x20);
        bVar18 = 0;
        local_98 = 0;
        cVar6 = cVar8;
        goto LAB_0069d180;
      }
      __c = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::_M_get
                      ((istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)&local_68);
    }
    cVar13 = *(char *)(lVar10 + 0x20);
LAB_0069d917:
    bVar18 = 0;
    local_98 = 0;
    do {
      if ((cVar13 != '\0') && (*(wchar_t *)(lVar10 + 0x4c) == __c)) goto LAB_0069d8ca;
      if ((*(wchar_t *)(lVar10 + 0x48) == __c) || (*(wchar_t *)(lVar10 + 0xf0) != __c))
      goto LAB_0069d180;
      if (bVar18 == 0) {
        lVar3 = *(long *)param_8;
        lVar4 = *(long *)(lVar3 + -0x18);
        uVar11 = lVar4 + 1;
        if ((*(ulong *)(lVar3 + -0x10) < uVar11) || (0 < *(int *)(lVar3 + -8))) {
          std::string::reserve(param_8,uVar11);
        }
        *(undefined1 *)(*(long *)param_8 + *(long *)(*(long *)param_8 + -0x18)) = 0x30;
        puVar14 = *(undefined1 **)param_8;
        if (puVar14 != &DAT_00938278) {
          *(undefined4 *)(puVar14 + -8) = 0;
          *(ulong *)(puVar14 + -0x18) = uVar11;
          puVar14[lVar4 + 1] = 0;
        }
      }
      local_98 = local_98 + 1;
      if (*(ulong *)(local_68 + 0x10) < *(ulong *)(local_68 + 0x18)) {
        local_60 = CONCAT44(local_60._4_4_,0xffffffff);
        *(ulong *)(local_68 + 0x10) = *(ulong *)(local_68 + 0x10) + 4;
LAB_0069d985:
        if (*(int **)(local_68 + 0x10) < *(int **)(local_68 + 0x18)) {
          iVar9 = **(int **)(local_68 + 0x10);
        }
        else {
          iVar9 = (**(code **)(*(long *)local_68 + 0x48))();
        }
        bVar16 = false;
        if (iVar9 == -1) {
          local_68 = (wstreambuf *)0x0;
          bVar16 = true;
        }
      }
      else {
        (**(code **)(*(long *)local_68 + 0x50))();
        local_60 = CONCAT44(local_60._4_4_,0xffffffff);
        if (local_68 != (wstreambuf *)0x0) goto LAB_0069d985;
        bVar16 = true;
      }
      bVar15 = local_78 != (long *)0x0 && (int)local_70 == -1;
      bVar7 = (int)local_70 == -1;
      if (bVar15) {
        if ((int *)local_78[2] < (int *)local_78[3]) {
          iVar9 = *(int *)local_78[2];
        }
        else {
          iVar9 = (**(code **)(*local_78 + 0x48))();
        }
        bVar7 = false;
        if (iVar9 == -1) {
          local_78 = (long *)0x0;
          bVar7 = bVar15;
        }
      }
      if (bVar16 == bVar7) goto code_r0x0069d9c6;
      __c = (wchar_t)local_60;
      if (((wchar_t)local_60 == L'\xffffffff') && (local_68 != (wstreambuf *)0x0)) {
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
      cVar13 = *(char *)(lVar10 + 0x20);
      bVar18 = 1;
    } while( true );
  }
  cVar13 = *(char *)(lVar10 + 0x20);
  __c = L'\0';
  bVar18 = 0;
  local_98 = 0;
  goto LAB_0069d180;
code_r0x0069d6d7:
  __c = (wchar_t)local_60;
  if (((wchar_t)local_60 == L'\xffffffff') && (local_68 != (wstreambuf *)0x0)) {
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
  bVar17 = *(byte *)(lVar10 + 0x20);
  if ((((*(wchar_t *)(lVar10 + 0xe4) != __c) &&
       (bVar18 = bVar19, local_93 = bVar19, *(wchar_t *)(lVar10 + 0xe0) != __c)) ||
      ((bVar17 != 0 && (bVar18 = bVar17, local_93 = bVar17, *(wchar_t *)(lVar10 + 0x4c) == __c))))
     || (bVar18 = bVar19, local_93 = bVar19, *(wchar_t *)(lVar10 + 0x48) == __c)) goto LAB_0069d428;
  std::string::push_back(param_8,(*(wchar_t *)(lVar10 + 0xe4) != __c) * '\x02' + '+');
LAB_0069d47e:
  uVar11 = *(ulong *)(local_68 + 0x10);
  if (uVar11 < *(ulong *)(local_68 + 0x18)) {
LAB_0069d491:
    local_60 = CONCAT44(local_60._4_4_,0xffffffff);
    *(ulong *)(local_68 + 0x10) = uVar11 + 4;
  }
  else {
LAB_0069d5ec:
    (**(code **)(*(long *)local_68 + 0x50))();
    local_60 = CONCAT44(local_60._4_4_,0xffffffff);
    bVar17 = bVar2;
    if (local_68 == (wstreambuf *)0x0) goto LAB_0069d4bd;
  }
  if (*(int **)(local_68 + 0x10) < *(int **)(local_68 + 0x18)) {
    iVar9 = **(int **)(local_68 + 0x10);
  }
  else {
                    /* try { // try from 0069dcc8 to 0069dd50 has its CatchHandler @ 0069de2b */
    iVar9 = (**(code **)(*(long *)local_68 + 0x48))();
  }
  bVar17 = 0;
  if (iVar9 == -1) {
    local_68 = (wstreambuf *)0x0;
    bVar17 = bVar2;
  }
LAB_0069d4bd:
  bVar7 = local_78 != (long *)0x0 && (int)local_70 == -1;
  bVar16 = (int)local_70 == -1;
  if (bVar7) {
    if ((int *)local_78[2] < (int *)local_78[3]) {
      iVar9 = *(int *)local_78[2];
    }
    else {
      iVar9 = (**(code **)(*local_78 + 0x48))();
    }
    bVar16 = false;
    if (iVar9 == -1) {
      local_78 = (long *)0x0;
      bVar16 = bVar7;
    }
  }
  if (bVar16 == (bool)bVar17) goto LAB_0069d4ea;
  __c = (wchar_t)local_60;
  if (((wchar_t)local_60 == L'\xffffffff') && (local_68 != (wstreambuf *)0x0)) {
    if (*(wchar_t **)(local_68 + 0x10) < *(wchar_t **)(local_68 + 0x18)) {
      __c = **(wchar_t **)(local_68 + 0x10);
    }
    else {
                    /* try { // try from 0069dd8c to 0069dda0 has its CatchHandler @ 0069de2b */
      __c = (**(code **)(*(long *)local_68 + 0x48))();
    }
    if (__c == L'\xffffffff') {
      local_68 = (wstreambuf *)0x0;
    }
  }
  bVar17 = *(byte *)(lVar10 + 0x20);
  goto LAB_0069d428;
LAB_0069d4ea:
  puVar14 = local_48;
  if (*(long *)(local_48 + -0x18) == 0) goto LAB_0069d541;
  if ((local_92 == 0) && (local_93 == 0)) goto LAB_0069d506;
  goto LAB_0069d521;
code_r0x0069d9c6:
  cVar13 = *(char *)(lVar10 + 0x20);
  bVar18 = 1;
  cVar6 = '\x01';
LAB_0069d180:
  local_48 = &DAT_00938278;
  if (cVar13 != '\0') {
LAB_0069d8ca:
    local_48 = &DAT_00938278;
    std::string::reserve((string *)&local_48,0x20);
  }
  bVar2 = *(byte *)(lVar10 + 0x148);
  if (bVar2 == 0) {
    if (cVar6 == '\0') {
      local_93 = 0;
      local_92 = 0;
LAB_0069d1d0:
      if (9 < (uint)(__c + L'\xffffffd0')) goto LAB_0069d2f0;
      lVar3 = *(long *)param_8;
      lVar4 = *(long *)(lVar3 + -0x18);
      uVar11 = lVar4 + 1;
      if ((*(ulong *)(lVar3 + -0x10) < uVar11) || (0 < *(int *)(lVar3 + -8))) {
                    /* try { // try from 0069d208 to 0069d8df has its CatchHandler @ 0069de2b */
        std::string::reserve(param_8,uVar11);
      }
      bVar18 = 1;
      *(char *)(*(long *)param_8 + *(long *)(*(long *)param_8 + -0x18)) =
           (char)(__c + L'\xffffffd0') + '0';
      puVar14 = *(undefined1 **)param_8;
      if (puVar14 != &DAT_00938278) {
        *(undefined4 *)(puVar14 + -8) = 0;
        *(ulong *)(puVar14 + -0x18) = uVar11;
        puVar14[lVar4 + 1] = 0;
      }
LAB_0069d230:
      uVar11 = *(ulong *)(local_68 + 0x10);
      if (*(ulong *)(local_68 + 0x18) <= uVar11) goto LAB_0069d3c8;
LAB_0069d243:
      local_60 = CONCAT44(local_60._4_4_,0xffffffff);
      *(ulong *)(local_68 + 0x10) = uVar11 + 4;
      do {
        if (*(int **)(local_68 + 0x10) < *(int **)(local_68 + 0x18)) {
          iVar9 = **(int **)(local_68 + 0x10);
        }
        else {
          iVar9 = (**(code **)(*(long *)local_68 + 0x48))();
        }
        bVar16 = false;
        if (iVar9 == -1) {
          local_68 = (wstreambuf *)0x0;
          bVar16 = true;
        }
        while( true ) {
          bVar15 = local_78 != (long *)0x0 && (int)local_70 == -1;
          bVar7 = (int)local_70 == -1;
          if (bVar15) {
            if ((int *)local_78[2] < (int *)local_78[3]) {
              iVar9 = *(int *)local_78[2];
            }
            else {
              iVar9 = (**(code **)(*local_78 + 0x48))();
            }
            bVar7 = false;
            if (iVar9 == -1) {
              local_78 = (long *)0x0;
              bVar7 = bVar15;
            }
          }
          if (bVar16 == bVar7) goto LAB_0069d4ea;
          __c = (wchar_t)local_60;
          if ((local_68 == (wstreambuf *)0x0) || ((wchar_t)local_60 != L'\xffffffff'))
          goto LAB_0069d1d0;
          if (*(wchar_t **)(local_68 + 0x10) < *(wchar_t **)(local_68 + 0x18)) {
            __c = **(wchar_t **)(local_68 + 0x10);
          }
          else {
            __c = (**(code **)(*(long *)local_68 + 0x48))();
          }
          if (__c != L'\xffffffff') goto LAB_0069d1d0;
          local_68 = (wstreambuf *)0x0;
LAB_0069d2f0:
          if ((*(wchar_t *)(lVar10 + 0x48) == __c) && (local_92 == 0 && local_93 == 0)) {
            std::string::push_back(param_8,'.');
            local_93 = 0;
            local_92 = 1;
            goto LAB_0069d230;
          }
          if (((*(wchar_t *)(lVar10 + 0x128) != __c) && (*(wchar_t *)(lVar10 + 0x140) != __c)) ||
             (bVar18 = bVar18 & (local_93 ^ 1), bVar18 == 0)) goto LAB_0069d4ea;
          std::string::push_back(param_8,'e');
          wstreambuf::sbumpc(local_68);
          local_60 = CONCAT44(local_60._4_4_,0xffffffff);
          cVar6 = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::equal
                            ((istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)&local_68,
                             (istreambuf_iterator *)&local_78);
          if (cVar6 != '\0') goto LAB_0069dd59;
          __c = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::_M_get
                          ((istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)&local_68);
          local_93 = bVar18;
          if (*(wchar_t *)(lVar10 + 0xe4) == __c) {
            cVar6 = '+';
          }
          else {
            cVar6 = '-';
            if (*(wchar_t *)(lVar10 + 0xe0) != __c) goto LAB_0069d1d0;
          }
          std::string::push_back(param_8,cVar6);
          uVar11 = *(ulong *)(local_68 + 0x10);
          if (uVar11 < *(ulong *)(local_68 + 0x18)) goto LAB_0069d243;
LAB_0069d3c8:
          (**(code **)(*(long *)local_68 + 0x50))();
          local_60 = CONCAT44(local_60._4_4_,0xffffffff);
          if (local_68 != (wstreambuf *)0x0) break;
          bVar16 = true;
        }
      } while( true );
    }
LAB_0069db32:
    puVar14 = local_48;
    if (*(long *)(local_48 + -0x18) == 0) goto LAB_0069d541;
LAB_0069d506:
    std::string::push_back((string *)&local_48,(char)local_98);
  }
  else {
    if (cVar6 != '\0') goto LAB_0069db32;
    local_93 = 0;
    bVar17 = *(byte *)(lVar10 + 0x20);
    local_92 = 0;
LAB_0069d428:
    if ((bVar17 != 0) && (*(wchar_t *)(lVar10 + 0x4c) == __c)) {
      if (local_92 != 0 || local_93 != 0) {
LAB_0069dd26:
        lVar3 = *(long *)(local_48 + -0x18);
        goto joined_r0x0069dd37;
      }
      if (local_98 != 0) {
        std::string::push_back((string *)&local_48,(char)local_98);
        local_93 = 0;
        local_98 = 0;
        local_92 = 0;
        goto LAB_0069d47e;
      }
      puVar14 = *(undefined1 **)param_8;
      if (*(int *)(*(long *)param_8 + -8) < 1) {
        if (puVar14 != &DAT_00938278) {
          *(undefined4 *)(puVar14 + -8) = 0;
          *(undefined8 *)(puVar14 + -0x18) = 0;
          *puVar14 = 0;
        }
      }
      else {
        if ((allocator *)(puVar14 + -0x18) != (allocator *)&std::string::_Rep::_S_empty_rep_storage)
        {
          if (__libc_single_threaded == '\0') {
            LOCK();
            piVar1 = (int *)(puVar14 + -8);
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
          }
          else {
            iVar9 = *(int *)(puVar14 + -8);
            *(int *)(puVar14 + -8) = iVar9 + -1;
          }
          if (iVar9 < 1) {
            std::string::_Rep::_M_destroy((allocator *)(puVar14 + -0x18));
          }
        }
        *(undefined1 **)param_8 = &DAT_00938278;
      }
      goto LAB_0069db32;
    }
    if (*(wchar_t *)(lVar10 + 0x48) == __c) {
      if (local_93 != 0 || local_92 != 0) goto LAB_0069dd26;
      if (*(long *)(local_48 + -0x18) != 0) {
        std::string::push_back((string *)&local_48,(char)local_98);
      }
      std::string::push_back(param_8,'.');
      uVar11 = *(ulong *)(local_68 + 0x10);
      local_93 = 0;
      local_92 = bVar2;
      if (uVar11 < *(ulong *)(local_68 + 0x18)) goto LAB_0069d491;
      goto LAB_0069d5ec;
    }
    pwVar12 = wmemchr((wchar_t *)(lVar10 + 0xf0),__c,10);
    if (pwVar12 != (wchar_t *)0x0) {
      std::string::push_back(param_8,(char)((long)pwVar12 - (lVar10 + 0xf0) >> 2) + '0');
      local_98 = local_98 + 1;
      bVar18 = bVar2;
      goto LAB_0069d47e;
    }
    if ((*(wchar_t *)(lVar10 + 0x128) != __c) && (*(wchar_t *)(lVar10 + 0x140) != __c))
    goto LAB_0069d4ea;
    bVar19 = bVar18 & (local_93 ^ 1);
    if (bVar19 == 0) goto LAB_0069d4ea;
    if ((*(long *)(local_48 + -0x18) != 0) && (local_92 == 0)) {
      std::string::push_back((string *)&local_48,(char)local_98);
    }
    std::string::push_back(param_8,'e');
    if (*(ulong *)(local_68 + 0x10) < *(ulong *)(local_68 + 0x18)) {
      *(ulong *)(local_68 + 0x10) = *(ulong *)(local_68 + 0x10) + 4;
    }
    else {
                    /* try { // try from 0069d9ff to 0069da64 has its CatchHandler @ 0069de2b */
      (**(code **)(*(long *)local_68 + 0x50))();
    }
    local_60 = CONCAT44(local_60._4_4_,0xffffffff);
    cVar6 = istreambuf_iterator<wchar_t,std::char_traits<wchar_t>>::equal
                      ((istreambuf_iterator<wchar_t,std::char_traits<wchar_t>> *)&local_68,
                       (istreambuf_iterator *)&local_78);
    if (cVar6 == '\0') goto code_r0x0069d6d7;
LAB_0069dd59:
    lVar3 = *(long *)(local_48 + -0x18);
joined_r0x0069dd37:
    puVar14 = local_48;
    if (lVar3 == 0) goto LAB_0069d541;
  }
LAB_0069d521:
  puVar14 = local_48;
  local_b8 = (string *)&local_48;
  cVar6 = __verify_grouping(*(char **)(lVar10 + 0x10),*(ulong *)(lVar10 + 0x18),local_b8);
  if (cVar6 == '\0') {
    *param_7 = 4;
  }
LAB_0069d541:
  pwVar5 = local_68;
  if ((allocator *)(puVar14 + -0x18) != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      piVar1 = (int *)(puVar14 + -8);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    else {
      iVar9 = *(int *)(puVar14 + -8);
      *(int *)(puVar14 + -8) = iVar9 + -1;
    }
    if (iVar9 < 1) {
      std::string::_Rep::_M_destroy((allocator *)(puVar14 + -0x18));
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return pwVar5;
}


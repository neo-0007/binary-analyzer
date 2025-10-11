
/* WARNING: Removing unreachable block (ram,0x0069ca4d) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > std::num_put<wchar_t,
   std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >::_M_insert_float<long
   double>(std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> >, std::ios_base&, wchar_t,
   char, long double) const */

long * std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::
       _M_insert_float<long_double>
                 (num_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>
                  *param_1,long *param_2,undefined8 param_3,ios_base *param_4,wchar_t param_5,
                 char param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  wchar_t wVar2;
  code *pcVar3;
  char *pcVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  ctype *pcVar9;
  void *pvVar10;
  wchar_t *pwVar11;
  locale *plVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  wchar_t *pwVar19;
  locale *plVar20;
  wchar_t *pwVar21;
  long in_FS_OFFSET;
  bool bVar22;
  undefined1 auStack_e8 [8];
  wchar_t awStack_e0 [12];
  undefined8 local_b0;
  locale *local_a0;
  wchar_t local_94;
  locale *local_90;
  num_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>> *local_88;
  locale *local_80;
  undefined8 local_78;
  locale *local_70;
  __use_cache<std::__numpunct_cache<wchar_t>> local_65;
  int local_64;
  undefined8 local_60;
  char local_58 [24];
  long local_40;
  
  local_70 = (locale *)(param_4 + 0xd0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = 0x69ca13;
  local_94 = param_5;
  local_88 = param_1;
  local_78 = param_3;
  lVar7 = __use_cache<std::__numpunct_cache<wchar_t>>::operator()(&local_65,local_70);
  local_b0 = 0x69ca39;
  __num_base::_S_format_float(param_4,local_58,param_6);
  puVar13 = auStack_e8;
  puVar16 = auStack_e8;
  puVar17 = auStack_e8;
  puVar18 = auStack_e8;
  puVar14 = auStack_e8;
  local_90 = local_70;
  local_80 = (locale *)awStack_e0;
  local_70 = local_80;
  if ((*(uint *)(param_4 + 0x18) & 0x104) == 0x104) {
    local_60 = locale::facet::_S_get_c_locale();
    plVar20 = local_80;
    local_80 = (locale *)&local_60;
    local_64 = __convert_from_v((__locale_struct **)local_80,(char *)plVar20,0x36,local_58);
    plVar20 = local_80;
    plVar12 = local_90;
    if (0x35 < local_64) {
      uVar8 = (long)(local_64 + 1) + 0x17;
      puVar16 = auStack_e8;
      while (puVar17 != auStack_e8 + -(uVar8 & 0xfffffffffffff000)) {
        puVar18 = puVar16 + -0x1000;
        *(undefined8 *)(puVar16 + -8) = *(undefined8 *)(puVar16 + -8);
        puVar17 = puVar16 + -0x1000;
        puVar16 = puVar16 + -0x1000;
      }
      uVar8 = (ulong)((uint)uVar8 & 0xff0);
      lVar5 = -uVar8;
      puVar14 = puVar18 + lVar5;
      if (uVar8 != 0) {
        *(undefined8 *)(puVar18 + -8) = *(undefined8 *)(puVar18 + -8);
      }
      local_80 = local_90;
      local_a0 = plVar20;
      local_90 = (locale *)CONCAT44(local_90._4_4_,local_64 + 1);
      *(undefined8 *)(puVar18 + lVar5 + -8) = 0x69ce24;
      local_70 = (locale *)((ulong)(puVar18 + lVar5 + 0xf) & 0xfffffffffffffff0);
      local_60 = locale::facet::_S_get_c_locale();
      *(undefined8 *)(puVar18 + lVar5 + -8) = param_8;
      *(undefined8 *)(puVar18 + lVar5 + -0x10) = param_7;
      *(undefined8 *)(puVar18 + lVar5 + -0x18) = 0x69ce48;
      local_64 = __convert_from_v((__locale_struct **)local_a0,
                                  (char *)((ulong)(puVar18 + lVar5 + 0xf) & 0xfffffffffffffff0),
                                  (int)local_90,local_58);
      plVar12 = local_80;
    }
  }
  else {
    local_60 = locale::facet::_S_get_c_locale();
    plVar20 = local_80;
    local_80 = (locale *)&local_60;
    local_64 = __convert_from_v((__locale_struct **)local_80,(char *)plVar20,0x36,local_58);
    plVar20 = local_80;
    puVar14 = auStack_e8;
    plVar12 = local_90;
    if (0x35 < local_64) {
      uVar8 = (long)(local_64 + 1) + 0x17;
      puVar18 = auStack_e8;
      while (puVar13 != auStack_e8 + -(uVar8 & 0xfffffffffffff000)) {
        puVar16 = puVar18 + -0x1000;
        *(undefined8 *)(puVar18 + -8) = *(undefined8 *)(puVar18 + -8);
        puVar13 = puVar18 + -0x1000;
        puVar18 = puVar18 + -0x1000;
      }
      uVar8 = (ulong)((uint)uVar8 & 0xff0);
      lVar5 = -uVar8;
      puVar14 = puVar16 + lVar5;
      if (uVar8 != 0) {
        *(undefined8 *)(puVar16 + -8) = *(undefined8 *)(puVar16 + -8);
      }
      local_80 = local_90;
      local_70 = (locale *)((ulong)(puVar16 + lVar5 + 0xf) & 0xfffffffffffffff0);
      local_a0 = plVar20;
      local_90 = (locale *)CONCAT44(local_90._4_4_,local_64 + 1);
      *(undefined8 *)(puVar16 + lVar5 + -8) = 0x69cb41;
      local_60 = locale::facet::_S_get_c_locale();
      *(undefined8 *)(puVar16 + lVar5 + -8) = param_8;
      *(undefined8 *)(puVar16 + lVar5 + -0x10) = param_7;
      *(undefined8 *)(puVar16 + lVar5 + -0x18) = 0x69cb69;
      local_64 = __convert_from_v((__locale_struct **)local_a0,(char *)local_70,(int)local_90,
                                  local_58);
      plVar12 = local_80;
    }
  }
  *(undefined8 *)(puVar14 + -8) = 0x69cb80;
  pcVar9 = use_facet<std::ctype<wchar_t>>(plVar12);
  uVar8 = (long)local_64 * 4 + 0x17;
  puVar18 = puVar14 + -(uVar8 & 0xfffffffffffff000);
  for (; puVar14 != puVar18; puVar14 = puVar14 + -0x1000) {
    *(undefined8 *)(puVar14 + -8) = *(undefined8 *)(puVar14 + -8);
  }
  uVar8 = (ulong)((uint)uVar8 & 0xff0);
  lVar5 = -uVar8;
  puVar15 = puVar14 + lVar5;
  puVar18 = puVar14 + lVar5;
  puVar16 = puVar14 + lVar5;
  if (uVar8 != 0) {
    *(undefined8 *)(puVar14 + -8) = *(undefined8 *)(puVar14 + -8);
  }
  plVar20 = (locale *)((ulong)(puVar14 + lVar5 + 0xf) & 0xfffffffffffffff0);
  pcVar3 = *(code **)(*(long *)pcVar9 + 0x58);
  *(undefined8 *)(puVar14 + lVar5 + -8) = 0x69cbf1;
  local_90 = plVar20;
  (*pcVar3)(pcVar9,local_70,(char *)((long)local_64 + (long)local_70),plVar20);
  iVar6 = local_64;
  plVar12 = (locale *)(long)local_64;
  if (plVar12 == (locale *)0x0) {
    if (*(char *)(lVar7 + 0x20) == '\0') goto LAB_0069cd04;
    pwVar21 = (wchar_t *)0x0;
  }
  else {
    *(undefined8 *)(puVar14 + lVar5 + -8) = 0x69cc13;
    local_80 = plVar12;
    pvVar10 = memchr(local_70,0x2e,(size_t)plVar12);
    plVar12 = local_80;
    if (pvVar10 == (void *)0x0) {
      puVar16 = puVar14 + lVar5;
      if (*(char *)(lVar7 + 0x20) == '\0') goto LAB_0069cd04;
      pwVar21 = (wchar_t *)0x0;
      if (2 < iVar6) {
        puVar16 = puVar14 + lVar5;
        if ('9' < *(char *)((long)local_70 + 1)) goto LAB_0069cd04;
        local_80 = (locale *)CONCAT71(local_80._1_7_,*(char *)((long)local_70 + 2));
        puVar16 = puVar14 + lVar5;
        if ((9 < (byte)(*(char *)((long)local_70 + 2) - 0x30U)) ||
           (puVar16 = puVar14 + lVar5, *(char *)((long)local_70 + 1) < '0')) goto LAB_0069cd04;
      }
    }
    else {
      cVar1 = *(char *)(lVar7 + 0x20);
      pwVar21 = (wchar_t *)((long)local_90 + ((long)pvVar10 - (long)local_70) * 4);
      *pwVar21 = *(wchar_t *)(lVar7 + 0x48);
      puVar16 = puVar14 + lVar5;
      if (cVar1 == '\0') goto LAB_0069cd04;
    }
  }
  uVar8 = (long)plVar12 * 8 + 0x17;
  puVar16 = puVar14 + lVar5;
  while (puVar15 != puVar14 + (lVar5 - (uVar8 & 0xfffffffffffff000))) {
    puVar18 = puVar16 + -0x1000;
    *(undefined8 *)(puVar16 + -8) = *(undefined8 *)(puVar16 + -8);
    puVar15 = puVar16 + -0x1000;
    puVar16 = puVar16 + -0x1000;
  }
  uVar8 = (ulong)((uint)uVar8 & 0xff0);
  lVar5 = -uVar8;
  if (uVar8 != 0) {
    *(undefined8 *)(puVar18 + -8) = *(undefined8 *)(puVar18 + -8);
  }
  pwVar11 = (wchar_t *)((ulong)(puVar18 + lVar5 + 0xf) & 0xfffffffffffffff0);
  bVar22 = (*(char *)local_70 - 0x2bU & 0xfd) == 0;
  pwVar19 = pwVar11;
  if (bVar22) {
    local_64 = iVar6 + -1;
    plVar20 = (locale *)((long)local_90 + 4);
    *pwVar11 = *(wchar_t *)local_90;
    pwVar19 = pwVar11 + 1;
  }
  uVar8 = *(ulong *)(lVar7 + 0x18);
  wVar2 = *(wchar_t *)(lVar7 + 0x4c);
  pcVar4 = *(char **)(lVar7 + 0x10);
  *(int **)(puVar18 + lVar5 + -8) = &local_64;
  *(locale **)(puVar18 + lVar5 + -0x10) = plVar20;
  *(undefined8 *)(puVar18 + lVar5 + -0x18) = 0x69ccf1;
  local_70 = (locale *)pwVar11;
  _M_group_float(local_88,pcVar4,uVar8,wVar2,pwVar21,pwVar19,*(wchar_t **)(puVar18 + lVar5 + -0x10),
                 *(int **)(puVar18 + lVar5 + -8));
  local_64 = (uint)bVar22 + local_64;
  plVar12 = (locale *)(long)local_64;
  puVar16 = puVar18 + lVar5;
  plVar20 = local_70;
LAB_0069cd04:
  lVar7 = *(long *)(param_4 + 0x10);
  pwVar21 = (wchar_t *)plVar20;
  if ((long)plVar12 < lVar7) {
    uVar8 = lVar7 * 4 + 0x17;
    for (puVar18 = puVar16; puVar18 != puVar16 + -(uVar8 & 0xfffffffffffff000);
        puVar18 = puVar18 + -0x1000) {
      *(undefined8 *)(puVar18 + -8) = *(undefined8 *)(puVar18 + -8);
    }
    uVar8 = (ulong)((uint)uVar8 & 0xff0);
    lVar5 = -uVar8;
    puVar16 = puVar18 + lVar5;
    if (uVar8 != 0) {
      *(undefined8 *)(puVar18 + -8) = *(undefined8 *)(puVar18 + -8);
    }
    *(int **)(puVar18 + lVar5 + -0x10) = &local_64;
    pwVar21 = (wchar_t *)((ulong)(puVar18 + lVar5 + 0xf) & 0xfffffffffffffff0);
    *(undefined8 *)(puVar18 + lVar5 + -0x18) = 0x69ced7;
    _M_pad(local_88,local_94,lVar7,param_4,pwVar21,(wchar_t *)plVar20,
           *(int **)(puVar18 + lVar5 + -0x10));
    plVar12 = (locale *)(long)local_64;
  }
  *(undefined8 *)(param_4 + 0x10) = 0;
  if ((char)local_78 == '\0') {
    pcVar3 = *(code **)(*param_2 + 0x60);
    *(undefined8 *)(puVar16 + -8) = 0x69cd36;
    (*pcVar3)(param_2,pwVar21,plVar12);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar16 + -8) = &UNK_0069cf98;
  __stack_chk_fail_local();
}



/* WARNING: Removing unreachable block (ram,0x0069c442) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > std::num_put<wchar_t,
   std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> >
   >::_M_insert_float<double>(std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> >,
   std::ios_base&, wchar_t, char, double) const */

long * std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::
       _M_insert_float<double>
                 (size_t param_1,
                 num_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>
                 *param_2,long *param_3,undefined8 param_4,ios_base *param_5,wchar_t param_6,
                 char param_7)

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
  size_t __n;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  locale *plVar18;
  wchar_t *pwVar19;
  locale *plVar20;
  wchar_t *pwVar21;
  long in_FS_OFFSET;
  bool bVar22;
  undefined1 auStack_e8 [8];
  wchar_t awStack_e0 [12];
  undefined8 local_b0;
  locale *local_a8;
  wchar_t local_9c;
  locale *local_98;
  locale *local_90;
  num_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>> *local_88;
  undefined8 local_80;
  size_t local_78;
  locale *local_70;
  __use_cache<std::__numpunct_cache<wchar_t>> local_65;
  int local_64;
  undefined8 local_60;
  char local_58 [24];
  long local_40;
  
  local_70 = (locale *)(param_5 + 0xd0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = 0x69c408;
  local_9c = param_6;
  local_88 = param_2;
  local_80 = param_4;
  local_78 = param_1;
  lVar7 = __use_cache<std::__numpunct_cache<wchar_t>>::operator()(&local_65,local_70);
  local_b0 = 0x69c42e;
  __num_base::_S_format_float(param_5,local_58,param_7);
  puVar12 = auStack_e8;
  puVar15 = auStack_e8;
  puVar16 = auStack_e8;
  puVar17 = auStack_e8;
  puVar13 = auStack_e8;
  local_98 = local_70;
  local_90 = (locale *)awStack_e0;
  local_70 = local_90;
  if ((*(uint *)(param_5 + 0x18) & 0x104) == 0x104) {
    local_60 = locale::facet::_S_get_c_locale();
    plVar20 = local_90;
    local_90 = (locale *)&local_60;
    local_64 = __convert_from_v((__locale_struct **)local_90,(char *)plVar20,0x2d,local_58,local_78)
    ;
    plVar20 = local_90;
    plVar18 = local_98;
    if (0x2c < local_64) {
      uVar8 = (long)(local_64 + 1) + 0x17;
      puVar15 = auStack_e8;
      while (puVar16 != auStack_e8 + -(uVar8 & 0xfffffffffffff000)) {
        puVar17 = puVar15 + -0x1000;
        *(undefined8 *)(puVar15 + -8) = *(undefined8 *)(puVar15 + -8);
        puVar16 = puVar15 + -0x1000;
        puVar15 = puVar15 + -0x1000;
      }
      uVar8 = (ulong)((uint)uVar8 & 0xff0);
      lVar5 = -uVar8;
      puVar13 = puVar17 + lVar5;
      if (uVar8 != 0) {
        *(undefined8 *)(puVar17 + -8) = *(undefined8 *)(puVar17 + -8);
      }
      local_90 = local_98;
      local_a8 = plVar20;
      local_98 = (locale *)CONCAT44(local_98._4_4_,local_64 + 1);
      *(undefined8 *)(puVar17 + lVar5 + -8) = 0x69c82e;
      local_70 = (locale *)((ulong)(puVar17 + lVar5 + 0xf) & 0xfffffffffffffff0);
      local_60 = locale::facet::_S_get_c_locale();
      *(undefined8 *)(puVar17 + lVar5 + -8) = 0x69c854;
      local_64 = __convert_from_v((__locale_struct **)local_a8,
                                  (char *)((ulong)(puVar17 + lVar5 + 0xf) & 0xfffffffffffffff0),
                                  (int)local_98,local_58,local_78);
      plVar18 = local_90;
    }
  }
  else {
    local_60 = locale::facet::_S_get_c_locale();
    plVar20 = local_90;
    local_90 = (locale *)&local_60;
    local_64 = __convert_from_v((__locale_struct **)local_90,(char *)plVar20,0x2d,local_58,local_78)
    ;
    plVar20 = local_90;
    puVar13 = auStack_e8;
    plVar18 = local_98;
    if (0x2c < local_64) {
      uVar8 = (long)(local_64 + 1) + 0x17;
      puVar17 = auStack_e8;
      while (puVar12 != auStack_e8 + -(uVar8 & 0xfffffffffffff000)) {
        puVar15 = puVar17 + -0x1000;
        *(undefined8 *)(puVar17 + -8) = *(undefined8 *)(puVar17 + -8);
        puVar12 = puVar17 + -0x1000;
        puVar17 = puVar17 + -0x1000;
      }
      uVar8 = (ulong)((uint)uVar8 & 0xff0);
      lVar5 = -uVar8;
      puVar13 = puVar15 + lVar5;
      if (uVar8 != 0) {
        *(undefined8 *)(puVar15 + -8) = *(undefined8 *)(puVar15 + -8);
      }
      local_90 = local_98;
      local_70 = (locale *)((ulong)(puVar15 + lVar5 + 0xf) & 0xfffffffffffffff0);
      local_a8 = plVar20;
      local_98 = (locale *)CONCAT44(local_98._4_4_,local_64 + 1);
      *(undefined8 *)(puVar15 + lVar5 + -8) = 0x69c545;
      local_60 = locale::facet::_S_get_c_locale();
      *(undefined8 *)(puVar15 + lVar5 + -8) = 0x69c56f;
      local_64 = __convert_from_v((__locale_struct **)local_a8,(char *)local_70,(int)local_98,
                                  local_58,local_78);
      plVar18 = local_90;
    }
  }
  *(undefined8 *)(puVar13 + -8) = 0x69c588;
  pcVar9 = use_facet<std::ctype<wchar_t>>(plVar18);
  uVar8 = (long)local_64 * 4 + 0x17;
  puVar17 = puVar13 + -(uVar8 & 0xfffffffffffff000);
  for (; puVar13 != puVar17; puVar13 = puVar13 + -0x1000) {
    *(undefined8 *)(puVar13 + -8) = *(undefined8 *)(puVar13 + -8);
  }
  uVar8 = (ulong)((uint)uVar8 & 0xff0);
  lVar5 = -uVar8;
  puVar14 = puVar13 + lVar5;
  puVar17 = puVar13 + lVar5;
  puVar15 = puVar13 + lVar5;
  if (uVar8 != 0) {
    *(undefined8 *)(puVar13 + -8) = *(undefined8 *)(puVar13 + -8);
  }
  plVar20 = (locale *)((ulong)(puVar13 + lVar5 + 0xf) & 0xfffffffffffffff0);
  pcVar3 = *(code **)(*(long *)pcVar9 + 0x58);
  *(undefined8 *)(puVar13 + lVar5 + -8) = 0x69c5f9;
  local_90 = plVar20;
  (*pcVar3)(pcVar9,local_70,(char *)((long)local_64 + (long)local_70),plVar20);
  iVar6 = local_64;
  __n = (size_t)local_64;
  if (__n == 0) {
    if (*(char *)(lVar7 + 0x20) == '\0') goto LAB_0069c70a;
    pwVar21 = (wchar_t *)0x0;
  }
  else {
    *(undefined8 *)(puVar13 + lVar5 + -8) = 0x69c61b;
    local_78 = __n;
    pvVar10 = memchr(local_70,0x2e,__n);
    __n = local_78;
    if (pvVar10 == (void *)0x0) {
      puVar15 = puVar13 + lVar5;
      if (*(char *)(lVar7 + 0x20) == '\0') goto LAB_0069c70a;
      pwVar21 = (wchar_t *)0x0;
      if (2 < iVar6) {
        puVar15 = puVar13 + lVar5;
        if ('9' < *(char *)((long)local_70 + 1)) goto LAB_0069c70a;
        local_78 = CONCAT71(local_78._1_7_,*(char *)((long)local_70 + 2));
        puVar15 = puVar13 + lVar5;
        if ((9 < (byte)(*(char *)((long)local_70 + 2) - 0x30U)) ||
           (puVar15 = puVar13 + lVar5, *(char *)((long)local_70 + 1) < '0')) goto LAB_0069c70a;
      }
    }
    else {
      cVar1 = *(char *)(lVar7 + 0x20);
      pwVar21 = (wchar_t *)((long)local_90 + ((long)pvVar10 - (long)local_70) * 4);
      *pwVar21 = *(wchar_t *)(lVar7 + 0x48);
      puVar15 = puVar13 + lVar5;
      if (cVar1 == '\0') goto LAB_0069c70a;
    }
  }
  uVar8 = __n * 8 + 0x17;
  puVar15 = puVar13 + lVar5;
  while (puVar14 != puVar13 + (lVar5 - (uVar8 & 0xfffffffffffff000))) {
    puVar17 = puVar15 + -0x1000;
    *(undefined8 *)(puVar15 + -8) = *(undefined8 *)(puVar15 + -8);
    puVar14 = puVar15 + -0x1000;
    puVar15 = puVar15 + -0x1000;
  }
  uVar8 = (ulong)((uint)uVar8 & 0xff0);
  lVar5 = -uVar8;
  if (uVar8 != 0) {
    *(undefined8 *)(puVar17 + -8) = *(undefined8 *)(puVar17 + -8);
  }
  pwVar11 = (wchar_t *)((ulong)(puVar17 + lVar5 + 0xf) & 0xfffffffffffffff0);
  bVar22 = (*(char *)local_70 - 0x2bU & 0xfd) == 0;
  pwVar19 = pwVar11;
  if (bVar22) {
    local_64 = iVar6 + -1;
    plVar20 = (locale *)((long)local_90 + 4);
    *pwVar11 = *(wchar_t *)local_90;
    pwVar19 = pwVar11 + 1;
  }
  wVar2 = *(wchar_t *)(lVar7 + 0x4c);
  uVar8 = *(ulong *)(lVar7 + 0x18);
  pcVar4 = *(char **)(lVar7 + 0x10);
  *(int **)(puVar17 + lVar5 + -8) = &local_64;
  *(locale **)(puVar17 + lVar5 + -0x10) = plVar20;
  *(undefined8 *)(puVar17 + lVar5 + -0x18) = 0x69c6f9;
  local_70 = (locale *)pwVar11;
  _M_group_float(local_88,pcVar4,uVar8,wVar2,pwVar21,pwVar19,*(wchar_t **)(puVar17 + lVar5 + -0x10),
                 *(int **)(puVar17 + lVar5 + -8));
  local_64 = (uint)bVar22 + local_64;
  __n = (size_t)local_64;
  puVar15 = puVar17 + lVar5;
  plVar20 = local_70;
LAB_0069c70a:
  lVar7 = *(long *)(param_5 + 0x10);
  pwVar21 = (wchar_t *)plVar20;
  if ((long)__n < lVar7) {
    uVar8 = lVar7 * 4 + 0x17;
    for (puVar17 = puVar15; puVar17 != puVar15 + -(uVar8 & 0xfffffffffffff000);
        puVar17 = puVar17 + -0x1000) {
      *(undefined8 *)(puVar17 + -8) = *(undefined8 *)(puVar17 + -8);
    }
    uVar8 = (ulong)((uint)uVar8 & 0xff0);
    lVar5 = -uVar8;
    puVar15 = puVar17 + lVar5;
    if (uVar8 != 0) {
      *(undefined8 *)(puVar17 + -8) = *(undefined8 *)(puVar17 + -8);
    }
    *(int **)(puVar17 + lVar5 + -0x10) = &local_64;
    pwVar21 = (wchar_t *)((ulong)(puVar17 + lVar5 + 0xf) & 0xfffffffffffffff0);
    *(undefined8 *)(puVar17 + lVar5 + -0x18) = 0x69c8df;
    _M_pad(local_88,local_9c,lVar7,param_5,pwVar21,(wchar_t *)plVar20,
           *(int **)(puVar17 + lVar5 + -0x10));
    __n = (size_t)local_64;
  }
  *(undefined8 *)(param_5 + 0x10) = 0;
  if ((char)local_80 == '\0') {
    pcVar3 = *(code **)(*param_3 + 0x60);
    *(undefined8 *)(puVar15 + -8) = 0x69c73c;
    (*pcVar3)(param_3,pwVar21,__n);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar15 + -8) = &UNK_0069c9a8;
  __stack_chk_fail_local();
}


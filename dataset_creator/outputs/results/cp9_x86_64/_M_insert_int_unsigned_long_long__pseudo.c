
/* WARNING: Removing unreachable block (ram,0x0069c0cb) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > std::num_put<wchar_t,
   std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >::_M_insert_int<unsigned long
   long>(std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> >, std::ios_base&, wchar_t,
   unsigned long long) const */

long * std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::
       _M_insert_int<unsigned_long_long>
                 (num_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>
                  *param_1,long *param_2,char param_3,ios_base *param_4,wchar_t param_5,long param_6
                 )

{
  wchar_t wVar1;
  code *pcVar2;
  char *pcVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  wchar_t *pwVar10;
  uint uVar11;
  wchar_t *pwVar12;
  long lVar13;
  wchar_t *pwVar14;
  long in_FS_OFFSET;
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [160];
  undefined8 local_80;
  uint local_74;
  undefined1 *local_70;
  wchar_t *local_68;
  wchar_t *local_60;
  num_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>> *local_58;
  wchar_t local_50;
  char local_49;
  __use_cache<std::__numpunct_cache<wchar_t>> local_45;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0x69c0b8;
  local_58 = param_1;
  local_50 = param_5;
  lVar5 = __use_cache<std::__numpunct_cache<wchar_t>>::operator()
                    (&local_45,(locale *)(param_4 + 0xd0));
  uVar11 = *(uint *)(param_4 + 0x18);
  local_60 = (wchar_t *)(lVar5 + 0x50);
  puVar7 = auStack_128;
  puVar9 = auStack_128;
  puVar8 = auStack_128;
  local_74 = uVar11 & 0x4a;
  local_70 = auStack_120;
  local_68 = (wchar_t *)CONCAT44(local_68._4_4_,uVar11);
  local_49 = local_74 != 0x40 && local_74 != 8;
  local_44 = __int_to_char<wchar_t,unsigned_long_long>(&local_80,param_6,local_60,uVar11,local_49);
  pwVar14 = (wchar_t *)(local_70 + (long)(0x28 - local_44) * 4);
  pwVar12 = local_60;
  uVar11 = (uint)local_68;
  if (*(char *)(lVar5 + 0x20) != '\0') {
    uVar6 = (long)(local_44 + 1) * 8 + 0x17;
    puVar4 = auStack_128;
    while (puVar9 != auStack_128 + -(uVar6 & 0xfffffffffffff000)) {
      puVar8 = puVar4 + -0x1000;
      *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
      puVar9 = puVar4 + -0x1000;
      puVar4 = puVar4 + -0x1000;
    }
    uVar6 = (ulong)((uint)uVar6 & 0xff0);
    lVar13 = -uVar6;
    puVar7 = puVar8 + lVar13;
    if (uVar6 != 0) {
      *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + -8);
    }
    pcVar3 = *(char **)(lVar5 + 0x10);
    wVar1 = *(wchar_t *)(lVar5 + 0x4c);
    uVar6 = *(ulong *)(lVar5 + 0x18);
    *(int **)(puVar8 + lVar13 + -8) = &local_44;
    *(undefined1 **)(puVar8 + lVar13 + -0x10) = local_70 + (long)(0x28 - local_44) * 4;
    pwVar14 = (wchar_t *)(((ulong)(puVar8 + lVar13 + 0xf) & 0xfffffffffffffff0) + 8);
    local_70 = (undefined1 *)CONCAT44(local_70._4_4_,(uint)local_68);
    local_68 = local_60;
    local_60 = pwVar14;
    *(undefined8 *)(puVar8 + lVar13 + -0x18) = 0x69c2d6;
    _M_group_int(local_58,pcVar3,uVar6,wVar1,param_4,pwVar14,*(wchar_t **)(puVar8 + lVar13 + -0x10),
                 *(int **)(puVar8 + lVar13 + -8));
    pwVar14 = local_60;
    pwVar12 = local_68;
    uVar11 = (uint)local_70;
  }
  pwVar10 = pwVar14;
  if (((local_49 == '\0') && ((uVar11 & 0x200) != 0)) && (param_6 != 0)) {
    if (local_74 == 0x40) {
      pwVar10 = pwVar14 + -1;
      local_44 = local_44 + 1;
      *pwVar10 = *(wchar_t *)(lVar5 + 0x60);
    }
    else {
      pwVar10 = pwVar14 + -2;
      local_44 = local_44 + 2;
      pwVar14[-1] = pwVar12[(ulong)(uVar11 >> 0xe & 1) + 2];
      *pwVar10 = *(wchar_t *)(lVar5 + 0x60);
    }
  }
  lVar5 = *(long *)(param_4 + 0x10);
  lVar13 = (long)local_44;
  pwVar14 = pwVar10;
  if (lVar13 < lVar5) {
    uVar6 = lVar5 * 4 + 0x17;
    for (puVar8 = puVar7; puVar8 != puVar7 + -(uVar6 & 0xfffffffffffff000);
        puVar8 = puVar8 + -0x1000) {
      *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + -8);
    }
    uVar6 = (ulong)((uint)uVar6 & 0xff0);
    lVar13 = -uVar6;
    puVar7 = puVar8 + lVar13;
    if (uVar6 != 0) {
      *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + -8);
    }
    *(int **)(puVar8 + lVar13 + -0x10) = &local_44;
    pwVar14 = (wchar_t *)((ulong)(puVar8 + lVar13 + 0xf) & 0xfffffffffffffff0);
    *(undefined8 *)(puVar8 + lVar13 + -0x18) = 0x69c23e;
    _M_pad(local_58,local_50,lVar5,param_4,pwVar14,pwVar10,*(int **)(puVar8 + lVar13 + -0x10));
    lVar13 = (long)local_44;
  }
  *(undefined8 *)(param_4 + 0x10) = 0;
  if (param_3 == '\0') {
    pcVar2 = *(code **)(*param_2 + 0x60);
    *(undefined8 *)(puVar7 + -8) = 0x69c198;
    (*pcVar2)(param_2,pwVar14,lVar13);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar7 + -8) = &UNK_0069c36d;
    __stack_chk_fail_local();
  }
  return param_2;
}


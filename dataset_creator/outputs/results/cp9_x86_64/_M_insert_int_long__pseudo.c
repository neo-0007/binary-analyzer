
/* WARNING: Removing unreachable block (ram,0x0069b61b) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > std::num_put<wchar_t,
   std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> >
   >::_M_insert_int<long>(std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> >,
   std::ios_base&, wchar_t, long) const */

long * std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>::
       _M_insert_int<long>(num_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>>
                           *param_1,long *param_2,char param_3,ios_base *param_4,wchar_t param_5,
                          long param_6)

{
  wchar_t wVar1;
  code *pcVar2;
  char *pcVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  bool bVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  wchar_t *pwVar12;
  uint uVar13;
  wchar_t *pwVar14;
  long lVar15;
  wchar_t *pwVar16;
  long in_FS_OFFSET;
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [160];
  undefined8 local_80;
  uint local_74;
  num_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>>> *local_70;
  undefined1 *local_68;
  wchar_t *local_60;
  wchar_t *local_58;
  wchar_t local_50;
  undefined4 local_4c;
  __use_cache<std::__numpunct_cache<wchar_t>> local_45;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0x69b608;
  local_70 = param_1;
  local_50 = param_5;
  lVar5 = __use_cache<std::__numpunct_cache<wchar_t>>::operator()
                    (&local_45,(locale *)(param_4 + 0xd0));
  uVar13 = *(uint *)(param_4 + 0x18);
  local_58 = (wchar_t *)(lVar5 + 0x50);
  puVar9 = auStack_128;
  puVar11 = auStack_128;
  puVar10 = auStack_128;
  local_74 = uVar13 & 0x4a;
  local_68 = auStack_120;
  bVar7 = local_74 != 0x40 && local_74 != 8;
  local_4c = CONCAT31(local_4c._1_3_,bVar7);
  lVar8 = param_6;
  if ((param_6 < 1) && (lVar8 = -param_6, local_74 == 0x40 || local_74 == 8)) {
    lVar8 = param_6;
  }
  local_60 = (wchar_t *)CONCAT44(local_60._4_4_,uVar13);
  local_44 = __int_to_char<wchar_t,unsigned_long>(&local_80,lVar8,local_58,uVar13,bVar7);
  pwVar12 = (wchar_t *)(local_68 + (long)(0x28 - local_44) * 4);
  pwVar14 = local_58;
  uVar13 = (uint)local_60;
  if (*(char *)(lVar5 + 0x20) != '\0') {
    uVar6 = (long)(local_44 + 1) * 8 + 0x17;
    puVar4 = auStack_128;
    while (puVar11 != auStack_128 + -(uVar6 & 0xfffffffffffff000)) {
      puVar10 = puVar4 + -0x1000;
      *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
      puVar11 = puVar4 + -0x1000;
      puVar4 = puVar4 + -0x1000;
    }
    uVar6 = (ulong)((uint)uVar6 & 0xff0);
    lVar8 = -uVar6;
    puVar9 = puVar10 + lVar8;
    if (uVar6 != 0) {
      *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(puVar10 + -8);
    }
    pcVar3 = *(char **)(lVar5 + 0x10);
    local_68 = (undefined1 *)CONCAT44(local_68._4_4_,(uint)local_60);
    wVar1 = *(wchar_t *)(lVar5 + 0x4c);
    uVar6 = *(ulong *)(lVar5 + 0x18);
    *(int **)(puVar10 + lVar8 + -8) = &local_44;
    *(wchar_t **)(puVar10 + lVar8 + -0x10) = pwVar12;
    pwVar12 = (wchar_t *)(((ulong)(puVar10 + lVar8 + 0xf) & 0xfffffffffffffff0) + 8);
    local_60 = local_58;
    local_58 = pwVar12;
    *(undefined8 *)(puVar10 + lVar8 + -0x18) = 0x69b879;
    _M_group_int(local_70,pcVar3,uVar6,wVar1,param_4,pwVar12,*(wchar_t **)(puVar10 + lVar8 + -0x10),
                 *(int **)(puVar10 + lVar8 + -8));
    pwVar12 = local_58;
    pwVar14 = local_60;
    uVar13 = (uint)local_68;
  }
  pwVar16 = pwVar12;
  if ((char)local_4c == '\0') {
    if (((uVar13 & 0x200) != 0) && (param_6 != 0)) {
      if (local_74 == 0x40) {
        pwVar16 = pwVar12 + -1;
        local_44 = local_44 + 1;
        *pwVar16 = *(wchar_t *)(lVar5 + 0x60);
      }
      else {
        pwVar16 = pwVar12 + -2;
        local_44 = local_44 + 2;
        pwVar12[-1] = pwVar14[(ulong)(uVar13 >> 0xe & 1) + 2];
        *pwVar16 = *(wchar_t *)(lVar5 + 0x60);
      }
    }
LAB_0069b6ec:
    lVar8 = *(long *)(param_4 + 0x10);
    lVar15 = (long)local_44;
    pwVar12 = pwVar16;
    if (lVar8 <= lVar15) goto LAB_0069b6f8;
  }
  else {
    if (-1 < param_6) {
      if ((uVar13 & 0x800) != 0) {
        local_44 = local_44 + 1;
        pwVar12[-1] = *(wchar_t *)(lVar5 + 0x54);
        pwVar16 = pwVar12 + -1;
      }
      goto LAB_0069b6ec;
    }
    pwVar16 = pwVar12 + -1;
    lVar15 = (long)(local_44 + 1);
    local_44 = local_44 + 1;
    *pwVar16 = *(wchar_t *)(lVar5 + 0x50);
    lVar8 = *(long *)(param_4 + 0x10);
    pwVar12 = pwVar16;
    if (lVar8 <= lVar15) goto LAB_0069b6f8;
  }
  uVar6 = lVar8 * 4 + 0x17;
  for (puVar10 = puVar9; puVar10 != puVar9 + -(uVar6 & 0xfffffffffffff000);
      puVar10 = puVar10 + -0x1000) {
    *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(puVar10 + -8);
  }
  uVar6 = (ulong)((uint)uVar6 & 0xff0);
  lVar5 = -uVar6;
  puVar9 = puVar10 + lVar5;
  if (uVar6 != 0) {
    *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(puVar10 + -8);
  }
  *(int **)(puVar10 + lVar5 + -0x10) = &local_44;
  pwVar16 = (wchar_t *)((ulong)(puVar10 + lVar5 + 0xf) & 0xfffffffffffffff0);
  *(undefined8 *)(puVar10 + lVar5 + -0x18) = 0x69b7db;
  _M_pad(local_70,local_50,lVar8,param_4,pwVar16,pwVar12,*(int **)(puVar10 + lVar5 + -0x10));
  lVar15 = (long)local_44;
LAB_0069b6f8:
  *(undefined8 *)(param_4 + 0x10) = 0;
  if (param_3 == '\0') {
    pcVar2 = *(code **)(*param_2 + 0x60);
    *(undefined8 *)(puVar9 + -8) = 0x69b715;
    (*pcVar2)(param_2,pwVar16,lVar15);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar9 + -8) = &UNK_0069b90e;
    __stack_chk_fail_local();
  }
  return param_2;
}


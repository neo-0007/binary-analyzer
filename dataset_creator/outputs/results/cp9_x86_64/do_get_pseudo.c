
/* std::messages<wchar_t>::do_get(int, int, int, std::wstring const&) const */

long * std::messages<wchar_t>::do_get(int param_1,int param_2,int param_3,wstring *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined1 *puVar6;
  int iVar7;
  wchar_t *pwVar8;
  Catalogs *this;
  long lVar9;
  codecvt *pcVar10;
  long lVar11;
  __locale_t p_Var12;
  char *__s;
  size_t sVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar17;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  _Rep *this_00;
  long *in_R9;
  ulong uVar19;
  long in_FS_OFFSET;
  undefined1 auStack_98 [8];
  undefined8 *local_90;
  undefined1 **local_88;
  undefined1 *local_80;
  undefined8 local_78;
  char *local_70;
  allocator local_59;
  undefined1 local_58 [8];
  undefined1 *local_50;
  undefined8 local_48;
  long local_40;
  undefined1 *puVar16;
  undefined1 *puVar18;
  
  puVar16 = auStack_98;
  puVar15 = auStack_98;
  puVar14 = auStack_98;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pwVar8 = (wchar_t *)*in_R9;
  if ((param_3 < 0) || (*(long *)(pwVar8 + -6) == 0)) {
LAB_006b16d3:
    this_00 = (_Rep *)(pwVar8 + -6);
    puVar18 = auStack_98;
    if (pwVar8[-2] < L'\0') {
      pwVar8 = (wchar_t *)std::wstring::_Rep::_M_clone(this_00,(allocator *)&local_50,0);
      goto LAB_006b16ef;
    }
  }
  else {
    this = (Catalogs *)get_catalogs();
    lVar9 = Catalogs::_M_get(this,param_3);
    if (lVar9 == 0) {
      pwVar8 = (wchar_t *)*in_R9;
      goto LAB_006b16d3;
    }
    pcVar10 = use_facet<std::codecvt<wchar_t,char,__mbstate_t>>((locale *)(lVar9 + 0x10));
    local_48 = 0;
    local_70 = *(char **)(*in_R9 + -0x18);
    iVar7 = (**(code **)(*(long *)pcVar10 + 0x40))(pcVar10);
    lVar11 = (long)iVar7 * (long)local_70;
    uVar19 = lVar11 + 0x18;
    puVar18 = auStack_98;
    while (puVar16 != auStack_98 + -(uVar19 & 0xfffffffffffff000)) {
      puVar15 = puVar18 + -0x1000;
      *(undefined8 *)(puVar18 + -8) = *(undefined8 *)(puVar18 + -8);
      puVar16 = puVar18 + -0x1000;
      puVar18 = puVar18 + -0x1000;
    }
    uVar19 = (ulong)((uint)uVar19 & 0xff0);
    lVar5 = -uVar19;
    puVar17 = puVar15 + lVar5;
    puVar18 = puVar15 + lVar5;
    puVar14 = puVar15 + lVar5;
    if (uVar19 != 0) {
      *(undefined8 *)(puVar15 + -8) = *(undefined8 *)(puVar15 + -8);
    }
    lVar1 = *in_R9;
    lVar2 = *(long *)pcVar10;
    local_90 = &local_48;
    local_70 = (char *)((ulong)(puVar15 + lVar5 + 0xf) & 0xfffffffffffffff0);
    local_80 = local_58;
    local_88 = &local_50;
    lVar3 = *(long *)(lVar1 + -0x18);
    *(undefined1 ***)(puVar15 + lVar5 + -8) = local_88;
    *(char **)(puVar15 + lVar5 + -0x10) = local_70 + lVar11;
    pcVar4 = *(code **)(lVar2 + 0x10);
    *(undefined8 *)(puVar15 + lVar5 + -0x18) = 0x6b180a;
    (*pcVar4)(pcVar10,local_90,lVar1,lVar1 + lVar3 * 4);
    *local_50 = 0;
    local_78 = *(undefined8 *)(lVar9 + 8);
    p_Var12 = *(__locale_t *)(CONCAT44(in_register_00000034,param_2) + 0x10);
    *(undefined8 *)(puVar15 + lVar5 + -0x18) = 0x6b1822;
    p_Var12 = uselocale(p_Var12);
    *(undefined8 *)(puVar15 + lVar5 + -0x18) = 0x6b1832;
    __s = (char *)dgettext(local_78,local_70);
    *(undefined8 *)(puVar15 + lVar5 + -0x18) = 0x6b183d;
    uselocale(p_Var12);
    if (local_70 != __s) {
      local_48 = 0;
      *(undefined8 *)(puVar15 + lVar5 + -8) = 0x6b185c;
      sVar13 = strlen(__s);
      uVar19 = sVar13 * 4 + 0x1b;
      puVar6 = puVar15 + lVar5;
      while (puVar17 != puVar15 + (lVar5 - (uVar19 & 0xfffffffffffff000))) {
        puVar18 = puVar6 + -0x1000;
        *(undefined8 *)(puVar6 + -8) = *(undefined8 *)(puVar6 + -8);
        puVar17 = puVar6 + -0x1000;
        puVar6 = puVar6 + -0x1000;
      }
      uVar19 = (ulong)((uint)uVar19 & 0xff0);
      lVar9 = -uVar19;
      puVar14 = puVar18 + lVar9;
      if (uVar19 != 0) {
        *(undefined8 *)(puVar18 + -8) = *(undefined8 *)(puVar18 + -8);
      }
      lVar11 = *(long *)pcVar10;
      *(undefined1 ***)(puVar18 + lVar9 + -8) = local_88;
      uVar19 = (ulong)(puVar18 + lVar9 + 0xf) & 0xfffffffffffffff0;
      *(ulong *)(puVar18 + lVar9 + -0x10) = uVar19 + sVar13 * 4;
      pcVar4 = *(code **)(lVar11 + 0x20);
      *(undefined8 *)(puVar18 + lVar9 + -0x18) = 0x6b18db;
      (*pcVar4)(pcVar10,local_90,__s,__s + sVar13,local_80,uVar19);
      *(undefined8 *)(puVar18 + lVar9 + -8) = 0x6b18ed;
      pwVar8 = std::wstring::_S_construct<wchar_t*>(uVar19,local_50,&local_59);
      goto LAB_006b16ef;
    }
    pwVar8 = (wchar_t *)*in_R9;
    this_00 = (_Rep *)(pwVar8 + -6);
    puVar18 = puVar15 + lVar5;
    if (pwVar8[-2] < L'\0') {
      *(undefined8 *)(puVar15 + lVar5 + -8) = 0x6b1939;
      pwVar8 = (wchar_t *)std::wstring::_Rep::_M_clone(this_00,&local_59,0);
      goto LAB_006b16ef;
    }
  }
  puVar14 = puVar18;
  if (this_00 != (_Rep *)&std::wstring::_Rep::_S_empty_rep_storage) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      pwVar8[-2] = pwVar8[-2] + L'\x01';
      UNLOCK();
    }
    else {
      pwVar8[-2] = pwVar8[-2] + L'\x01';
    }
  }
LAB_006b16ef:
  *(long *)CONCAT44(in_register_0000003c,param_1) = (long)pwVar8;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar14 + -8) = &UNK_006b195e;
    __stack_chk_fail_local();
  }
  return (long *)CONCAT44(in_register_0000003c,param_1);
}


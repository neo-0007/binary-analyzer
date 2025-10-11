
/* std::codecvt<wchar_t, char, __mbstate_t>::do_length(__mbstate_t&, char const*, char const*,
   unsigned long) const */

int __thiscall
std::codecvt<wchar_t,char,__mbstate_t>::do_length
          (codecvt<wchar_t,char,__mbstate_t> *this,__mbstate_t *param_1,char *param_2,char *param_3,
          ulong param_4)

{
  long lVar1;
  undefined1 *puVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  size_t sVar9;
  long in_FS_OFFSET;
  undefined1 auStack_78 [8];
  __locale_t local_70;
  ulong local_68;
  char *local_60;
  int local_54;
  char *local_50;
  __mbstate_t local_48;
  long local_40;
  undefined1 *puVar8;
  
  puVar7 = auStack_78;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = *param_1;
  local_50 = param_2;
  local_70 = uselocale(*(__locale_t *)(this + 0x10));
  uVar6 = param_4 * 4 + 0x17;
  puVar8 = auStack_78;
  puVar2 = auStack_78;
  while (puVar8 != auStack_78 + -(uVar6 & 0xfffffffffffff000)) {
    puVar7 = puVar2 + -0x1000;
    *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
    puVar8 = puVar2 + -0x1000;
    puVar2 = puVar2 + -0x1000;
  }
  uVar6 = (ulong)((uint)uVar6 & 0xff0);
  lVar1 = -uVar6;
  if (uVar6 != 0) {
    *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
  }
  local_54 = 0;
  local_68 = (ulong)(puVar7 + lVar1 + 0xf) & 0xfffffffffffffff0;
  while( true ) {
    pcVar3 = local_50;
    if ((param_4 == 0) || (param_3 <= local_50)) goto LAB_006af6eb;
    sVar9 = (long)param_3 - (long)local_50;
    *(undefined8 *)(puVar7 + lVar1 + -8) = 0x6af67d;
    pcVar4 = (char *)memchr(local_50,0,sVar9);
    local_60 = param_3;
    if (pcVar4 != (char *)0x0) {
      sVar9 = (long)pcVar4 - (long)pcVar3;
      local_60 = pcVar4;
    }
    *(undefined8 *)(puVar7 + lVar1 + -8) = 0x6af6b3;
    lVar5 = __mbsnrtowcs_chk(local_68,&local_50,sVar9,param_4,param_1,0x3fffffffffffffff);
    if (lVar5 == -1) break;
    pcVar4 = local_60;
    if (local_50 != (char *)0x0) {
      sVar9 = (long)local_50 - (long)pcVar3;
      pcVar4 = local_50;
    }
    local_50 = pcVar4;
    local_54 = local_54 + (int)sVar9;
    param_4 = param_4 - lVar5;
    if (local_50 < param_3) {
      if (param_4 == 0) goto LAB_006af6eb;
      local_48 = *param_1;
      local_50 = local_50 + 1;
      local_54 = local_54 + 1;
      param_4 = param_4 - 1;
    }
  }
  local_50 = pcVar3;
  while( true ) {
    *(undefined8 *)(puVar7 + lVar1 + -8) = 0x6af788;
    sVar9 = mbrtowc((wchar_t *)0x0,local_50,(long)param_3 - (long)local_50,&local_48);
    if (0xfffffffffffffffd < sVar9) break;
    local_50 = local_50 + sVar9;
  }
  local_54 = (local_54 + (int)local_50) - (int)pcVar3;
  *param_1 = local_48;
LAB_006af6eb:
  *(undefined8 *)(puVar7 + lVar1 + -8) = 0x6af6f4;
  uselocale(local_70);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_54;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(puVar7 + lVar1 + -8) = __cxx11::collate<char>::_M_compare;
  __stack_chk_fail_local();
}


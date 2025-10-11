
size_t mbsnrtowcs(wchar_t *__dst,char **__src,size_t __nmc,size_t __len,mbstate_t *__ps)

{
  char *pcVar1;
  undefined1 *puVar2;
  long *plVar3;
  size_t sVar4;
  ulong uVar5;
  undefined **ppuVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  undefined1 local_190 [8];
  char *local_188;
  mbstate_t local_180;
  wchar_t *local_178;
  wchar_t *pwStack_170;
  undefined8 local_168;
  undefined4 local_160;
  mbstate_t *local_158;
  wchar_t local_148 [64];
  wchar_t local_48 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_160 = 1;
  local_168 = DAT_0081efa0;
  if (__ps == (mbstate_t *)0x0) {
    __ps = (mbstate_t *)&state;
  }
  local_158 = __ps;
  if (__nmc == 0) {
    sVar4 = 0;
    goto LAB_0079fd9c;
  }
  pcVar1 = *__src;
  sVar4 = strnlen(pcVar1,__nmc - 1);
  pcVar1 = pcVar1 + sVar4 + 1;
  puVar2 = (undefined1 *)**(long **)(in_FS_OFFSET + -0xd8);
  ppuVar6 = *(undefined ***)(puVar2 + 0x28);
  if ((ppuVar6 == (undefined **)0x0) && (ppuVar6 = &__wcsmbs_gconv_fcts_c, puVar2 != _nl_C_LC_CTYPE)
     ) {
    __wcsmbs_load_conv(puVar2);
    ppuVar6 = *(undefined ***)(puVar2 + 0x28);
  }
  plVar3 = (long *)*ppuVar6;
  pcVar7 = (code *)plVar3[5];
  if (*plVar3 != 0) {
    pcVar7 = (code *)(((ulong)pcVar7 >> 0x11 | (long)pcVar7 << 0x2f) ^
                     *(ulong *)(in_FS_OFFSET + 0x30));
  }
  if (__dst == (wchar_t *)0x0) {
    local_188 = *__src;
    sVar4 = 0;
    local_180 = *local_158;
    local_158 = &local_180;
    pwStack_170 = local_48;
    do {
      local_178 = local_148;
      _dl_mcount_wrapper_check(pcVar7);
      uVar5 = (*pcVar7)(plVar3,&local_178,&local_188,pcVar1,0,local_190,0,1);
      sVar4 = sVar4 + ((long)local_178 - (long)local_148 >> 2);
    } while ((int)uVar5 == 5);
    if ((uVar5 & 0xfffffffb) != 0) goto LAB_0079fd83;
    sVar4 = sVar4 - (local_178[-1] == L'\0');
  }
  else {
    pwStack_170 = __dst + __len;
    local_178 = __dst;
    _dl_mcount_wrapper_check(pcVar7);
    uVar5 = (*pcVar7)(plVar3,&local_178,__src,pcVar1,0,local_190,0,1);
    sVar4 = (long)local_178 - (long)__dst >> 2;
    if ((uVar5 & 0xfffffffb) == 0) {
      if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("result > 0","mbsnrtowcs.c",0x75,__PRETTY_FUNCTION___0);
      }
      if (local_178[-1] == L'\0') {
        if (local_158->__count != 0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("__mbsinit (data.__statep)","mbsnrtowcs.c",0x78,__PRETTY_FUNCTION___0);
        }
        *__src = (char *)0x0;
        sVar4 = sVar4 - 1;
      }
    }
    else {
LAB_0079fd83:
      if (2 < (int)uVar5 - 5U) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("status == __GCONV_OK || status == __GCONV_EMPTY_INPUT || status == __GCONV_ILLEGAL_INPUT || status == __GCONV_INCOMPLETE_INPUT || status == __GCONV_FULL_OUTPUT"
                      ,"mbsnrtowcs.c",0x80,__PRETTY_FUNCTION___0);
      }
    }
  }
  if ((0xffffffffffffff4eU >> (uVar5 & 0x3f) & 1) != 0) {
    sVar4 = 0xffffffffffffffff;
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x54;
  }
LAB_0079fd9c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return sVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


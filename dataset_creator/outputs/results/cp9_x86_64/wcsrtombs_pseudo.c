
size_t wcsrtombs(char *__dst,wchar_t **__src,size_t __len,mbstate_t *__ps)

{
  undefined1 *puVar1;
  long *plVar2;
  wchar_t *__s;
  uint uVar3;
  size_t sVar4;
  undefined **ppuVar5;
  code *pcVar6;
  char *pcVar7;
  long in_FS_OFFSET;
  wchar_t *local_190;
  undefined1 local_188 [8];
  mbstate_t local_180;
  char *local_178;
  char *pcStack_170;
  undefined8 local_168;
  undefined4 local_160;
  mbstate_t *local_158;
  char local_148 [256];
  char local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_160 = 1;
  local_168 = DAT_0081efa0;
  if (__ps == (mbstate_t *)0x0) {
    __ps = (mbstate_t *)&state;
  }
  puVar1 = (undefined1 *)**(long **)(in_FS_OFFSET + -0xd8);
  ppuVar5 = *(undefined ***)(puVar1 + 0x28);
  local_158 = __ps;
  if ((ppuVar5 == (undefined **)0x0) && (ppuVar5 = &__wcsmbs_gconv_fcts_c, puVar1 != _nl_C_LC_CTYPE)
     ) {
    __wcsmbs_load_conv(puVar1);
    ppuVar5 = *(undefined ***)(puVar1 + 0x28);
  }
  plVar2 = (long *)ppuVar5[2];
  pcVar6 = (code *)plVar2[5];
  if (*plVar2 != 0) {
    pcVar6 = (code *)(((ulong)pcVar6 >> 0x11 | (long)pcVar6 << 0x2f) ^
                     *(ulong *)(in_FS_OFFSET + 0x30));
  }
  __s = *__src;
  if (__dst == (char *)0x0) {
    pcVar7 = (char *)0x0;
    sVar4 = wcslen(__s);
    local_180 = *local_158;
    local_158 = &local_180;
    pcStack_170 = local_48;
    local_190 = __s;
    do {
      local_178 = local_148;
      _dl_mcount_wrapper_check(pcVar6);
      uVar3 = (*pcVar6)(plVar2,&local_178,&local_190,__s + sVar4 + 1,0,local_188,0,1);
      pcVar7 = local_178 + ((long)pcVar7 - (long)local_148);
    } while (uVar3 == 5);
    if ((uVar3 & 0xfffffffb) != 0) goto LAB_0079f9a2;
    if (local_178[-1] != '\0') {
                    /* WARNING: Subroutine does not return */
      __assert_fail("data.__outbuf[-1] == \'\\0\'","wcsrtombs.c",0x5d,"__wcsrtombs");
    }
  }
  else {
    sVar4 = wcsnlen(__s,__len);
    local_178 = __dst;
    pcStack_170 = __dst + __len;
    _dl_mcount_wrapper_check(pcVar6);
    uVar3 = (*pcVar6)(plVar2,&local_178,__src,__s + sVar4 + 1,0,local_188,0,1);
    pcVar7 = local_178 + -(long)__dst;
    if (((uVar3 & 0xfffffffb) != 0) || (local_178[-1] != '\0')) goto LAB_0079f9a2;
    if (local_178 == __dst) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("data.__outbuf != (unsigned char *) dst","wcsrtombs.c",0x79,"__wcsrtombs");
    }
    if (local_158->__count != 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("__mbsinit (data.__statep)","wcsrtombs.c",0x7a,"__wcsrtombs");
    }
    *__src = (wchar_t *)0x0;
  }
  pcVar7 = pcVar7 + -1;
LAB_0079f9a2:
  if (uVar3 != 0) {
    if (3 < uVar3 - 4) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("status == __GCONV_OK || status == __GCONV_EMPTY_INPUT || status == __GCONV_ILLEGAL_INPUT || status == __GCONV_INCOMPLETE_INPUT || status == __GCONV_FULL_OUTPUT"
                    ,"wcsrtombs.c",0x82,"__wcsrtombs");
    }
    if ((uVar3 != 0) && (1 < uVar3 - 4)) {
      pcVar7 = (char *)0xffffffffffffffff;
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x54;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (size_t)pcVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


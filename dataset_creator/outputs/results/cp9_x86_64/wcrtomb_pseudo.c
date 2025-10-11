
size_t wcrtomb(char *__s,wchar_t __wc,mbstate_t *__ps)

{
  undefined1 *puVar1;
  uint uVar2;
  size_t sVar3;
  code *pcVar4;
  undefined **ppuVar5;
  long in_FS_OFFSET;
  wchar_t local_7c;
  undefined1 local_78 [8];
  wchar_t *local_70;
  char *local_68;
  char *pcStack_60;
  undefined8 local_58;
  undefined4 local_50;
  mbstate_t *local_48;
  char local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 1;
  local_58 = DAT_0081efa0;
  if (__ps == (mbstate_t *)0x0) {
    __ps = (mbstate_t *)&state;
  }
  local_7c = __wc;
  if (__s == (char *)0x0) {
    local_7c = L'\0';
    __s = local_38;
  }
  puVar1 = (undefined1 *)**(long **)(in_FS_OFFSET + -0xd8);
  ppuVar5 = *(undefined ***)(puVar1 + 0x28);
  pcStack_60 = __s + *(uint *)(puVar1 + 0xa8);
  local_68 = __s;
  local_48 = __ps;
  if ((ppuVar5 == (undefined **)0x0) && (ppuVar5 = &__wcsmbs_gconv_fcts_c, puVar1 != _nl_C_LC_CTYPE)
     ) {
    __wcsmbs_load_conv(puVar1);
    ppuVar5 = *(undefined ***)(puVar1 + 0x28);
  }
  pcVar4 = *(code **)((long)ppuVar5[2] + 0x28);
  if (*(long *)ppuVar5[2] != 0) {
    pcVar4 = (code *)(((ulong)pcVar4 >> 0x11 | (long)pcVar4 << 0x2f) ^
                     *(ulong *)(in_FS_OFFSET + 0x30));
  }
  if (local_7c == L'\0') {
    _dl_mcount_wrapper_check(pcVar4);
    uVar2 = (*pcVar4)(ppuVar5[2],&local_68,0,0,0,local_78,1,1);
    if ((uVar2 & 0xfffffffb) == 0) {
      *local_68 = '\0';
      local_68 = local_68 + 1;
    }
    else {
LAB_0074d379:
      if (2 < uVar2 - 5) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("status == __GCONV_OK || status == __GCONV_EMPTY_INPUT || status == __GCONV_ILLEGAL_INPUT || status == __GCONV_INCOMPLETE_INPUT || status == __GCONV_FULL_OUTPUT"
                      ,"wcrtomb.c",0x61,"__wcrtomb");
      }
      if (uVar2 != 5) {
        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x54;
        sVar3 = 0xffffffffffffffff;
        goto LAB_0074d316;
      }
    }
  }
  else {
    local_70 = &local_7c;
    _dl_mcount_wrapper_check(pcVar4);
    uVar2 = (*pcVar4)(ppuVar5[2],&local_68,&local_70,local_70 + 1,0,local_78,0,1);
    if ((uVar2 & 0xfffffffb) != 0) goto LAB_0074d379;
  }
  sVar3 = (long)local_68 - (long)__s;
LAB_0074d316:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return sVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



size_t mbrtowc(wchar_t *__pwc,char *__s,size_t __n,mbstate_t *__p)

{
  undefined1 *puVar1;
  uint uVar2;
  size_t sVar3;
  wchar_t *pwVar4;
  char *pcVar5;
  code *pcVar6;
  undefined **ppuVar7;
  long in_FS_OFFSET;
  undefined1 local_80 [8];
  char *local_78;
  wchar_t local_6c;
  wchar_t *local_68;
  wchar_t *pwStack_60;
  undefined8 local_58;
  undefined4 local_50;
  mbstate_t *local_48;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pwVar4 = &local_6c;
  local_50 = 1;
  local_58 = DAT_0081efa0;
  if (__pwc == (wchar_t *)0x0) {
    __pwc = pwVar4;
  }
  if (__p == (mbstate_t *)0x0) {
    __p = (mbstate_t *)&state;
  }
  local_48 = __p;
  if (__s != (char *)0x0) {
    pwVar4 = __pwc;
    if (__n != 0) goto LAB_0074d05e;
LAB_0074d140:
    sVar3 = 0xfffffffffffffffe;
    goto LAB_0074d147;
  }
  __n = 1;
  __s = "";
LAB_0074d05e:
  pwStack_60 = pwVar4 + 1;
  puVar1 = (undefined1 *)**(long **)(in_FS_OFFSET + -0xd8);
  ppuVar7 = *(undefined ***)(puVar1 + 0x28);
  local_68 = pwVar4;
  if ((ppuVar7 == (undefined **)0x0) && (ppuVar7 = &__wcsmbs_gconv_fcts_c, puVar1 != _nl_C_LC_CTYPE)
     ) {
    __wcsmbs_load_conv(puVar1);
    ppuVar7 = *(undefined ***)(puVar1 + 0x28);
  }
  pcVar5 = __s + __n;
  local_78 = __s;
  if ((CARRY8(__n,(ulong)__s)) &&
     (pcVar5 = (char *)0xffffffffffffffff, __s == (char *)0xffffffffffffffff)) {
LAB_0074d0fe:
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x54;
    sVar3 = 0xffffffffffffffff;
  }
  else {
    pcVar6 = *(code **)((long)*ppuVar7 + 0x28);
    if (*(long *)*ppuVar7 != 0) {
      pcVar6 = (code *)(((ulong)pcVar6 >> 0x11 | (long)pcVar6 << 0x2f) ^
                       *(ulong *)(in_FS_OFFSET + 0x30));
    }
    _dl_mcount_wrapper_check(pcVar6);
    uVar2 = (*pcVar6)(*ppuVar7,&local_68,&local_78,pcVar5,0,local_80,0,1);
    if ((uVar2 & 0xfffffffb) != 0) {
      if (2 < uVar2 - 5) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("status == __GCONV_OK || status == __GCONV_EMPTY_INPUT || status == __GCONV_ILLEGAL_INPUT || status == __GCONV_INCOMPLETE_INPUT || status == __GCONV_FULL_OUTPUT"
                      ,"mbrtowc.c",0x5c,__PRETTY_FUNCTION___0);
      }
      if (uVar2 != 5) {
        if (uVar2 == 7) goto LAB_0074d140;
        goto LAB_0074d0fe;
      }
    }
    if ((local_68 == pwVar4) || (*pwVar4 != L'\0')) {
      sVar3 = (long)local_78 - (long)__s;
    }
    else {
      if (local_48->__count != 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("__mbsinit (data.__statep)","mbrtowc.c",0x68,__PRETTY_FUNCTION___0);
      }
      sVar3 = 0;
    }
  }
LAB_0074d147:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return sVar3;
}


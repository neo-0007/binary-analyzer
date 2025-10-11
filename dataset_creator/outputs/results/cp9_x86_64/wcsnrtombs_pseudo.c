
size_t wcsnrtombs(char *__dst,wchar_t **__src,size_t __nwc,size_t __len,mbstate_t *__ps)

{
  wchar_t *pwVar1;
  undefined1 *puVar2;
  long *plVar3;
  uint uVar4;
  size_t sVar5;
  undefined **ppuVar6;
  code *pcVar7;
  char *pcVar8;
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
  local_158 = __ps;
  if (__nwc == 0) {
    pcVar8 = (char *)0x0;
  }
  else {
    pwVar1 = *__src;
    sVar5 = wcsnlen(pwVar1,__nwc - 1);
    pwVar1 = pwVar1 + sVar5 + 1;
    puVar2 = (undefined1 *)**(long **)(in_FS_OFFSET + -0xd8);
    ppuVar6 = *(undefined ***)(puVar2 + 0x28);
    if ((ppuVar6 == (undefined **)0x0) &&
       (ppuVar6 = &__wcsmbs_gconv_fcts_c, puVar2 != _nl_C_LC_CTYPE)) {
      __wcsmbs_load_conv(puVar2);
      ppuVar6 = *(undefined ***)(puVar2 + 0x28);
    }
    plVar3 = (long *)ppuVar6[2];
    pcVar7 = (code *)plVar3[5];
    if (*plVar3 != 0) {
      pcVar7 = (code *)(((ulong)pcVar7 >> 0x11 | (long)pcVar7 << 0x2f) ^
                       *(ulong *)(in_FS_OFFSET + 0x30));
    }
    if (__dst == (char *)0x0) {
      local_190 = *__src;
      pcVar8 = (char *)0x0;
      local_180 = *local_158;
      local_158 = &local_180;
      pcStack_170 = local_48;
      do {
        local_178 = local_148;
        _dl_mcount_wrapper_check(pcVar7);
        uVar4 = (*pcVar7)(plVar3,&local_178,&local_190,pwVar1,0,local_188,0,1);
        pcVar8 = local_178 + ((long)pcVar8 - (long)local_148);
      } while (uVar4 == 5);
      if ((uVar4 & 0xfffffffb) == 0) {
        pcVar8 = pcVar8 + -(ulong)(local_178[-1] == '\0');
      }
    }
    else {
      pcStack_170 = __dst + __len;
      local_178 = __dst;
      _dl_mcount_wrapper_check(pcVar7);
      uVar4 = (*pcVar7)(plVar3,&local_178,__src,pwVar1,0,local_188,0,1);
      pcVar8 = local_178 + -(long)__dst;
      if (((uVar4 & 0xfffffffb) == 0) && (local_178[-1] == '\0')) {
        if (local_178 == __dst) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("data.__outbuf != (unsigned char *) dst","wcsnrtombs.c",0x7c,"__wcsnrtombs")
          ;
        }
        if (local_158->__count != 0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("__mbsinit (data.__statep)","wcsnrtombs.c",0x7d,"__wcsnrtombs");
        }
        *__src = (wchar_t *)0x0;
        pcVar8 = pcVar8 + -1;
      }
    }
    if (uVar4 != 0) {
      if (3 < uVar4 - 4) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("status == __GCONV_OK || status == __GCONV_EMPTY_INPUT || status == __GCONV_ILLEGAL_INPUT || status == __GCONV_INCOMPLETE_INPUT || status == __GCONV_FULL_OUTPUT"
                      ,"wcsnrtombs.c",0x85,"__wcsnrtombs");
      }
      if ((uVar4 != 0) && (1 < uVar4 - 4)) {
        pcVar8 = (char *)0xffffffffffffffff;
        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x54;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (size_t)pcVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



long __mbsrtowcs_l(undefined1 *param_1,undefined8 *param_2,size_t param_3,int *param_4,long *param_5
                  )

{
  undefined1 *puVar1;
  long *plVar2;
  char *pcVar3;
  uint uVar4;
  size_t sVar5;
  long lVar6;
  undefined **ppuVar7;
  ulong uVar8;
  code *pcVar9;
  long in_FS_OFFSET;
  undefined1 **local_1b0;
  undefined1 local_190 [8];
  char *local_188;
  undefined8 local_180;
  undefined1 *local_178;
  undefined1 *puStack_170;
  undefined8 local_168;
  undefined4 local_160;
  int *local_158;
  undefined1 local_148 [256];
  undefined1 local_48 [8];
  long local_40;
  
  puVar1 = (undefined1 *)*param_5;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_160 = 1;
  local_168 = DAT_0081efa0;
  ppuVar7 = *(undefined ***)(puVar1 + 0x28);
  local_158 = param_4;
  if ((ppuVar7 == (undefined **)0x0) && (ppuVar7 = &__wcsmbs_gconv_fcts_c, puVar1 != _nl_C_LC_CTYPE)
     ) {
    __wcsmbs_load_conv(puVar1);
    ppuVar7 = *(undefined ***)(puVar1 + 0x28);
  }
  plVar2 = (long *)*ppuVar7;
  pcVar9 = (code *)plVar2[5];
  if (*plVar2 != 0) {
    pcVar9 = (code *)(((ulong)pcVar9 >> 0x11 | (long)pcVar9 << 0x2f) ^
                     *(ulong *)(in_FS_OFFSET + 0x30));
  }
  pcVar3 = (char *)*param_2;
  local_188 = pcVar3;
  if (param_1 == (undefined1 *)0x0) {
    sVar5 = strlen(pcVar3);
    lVar6 = 0;
    local_180 = *(undefined8 *)local_158;
    local_158 = (int *)&local_180;
    puStack_170 = local_48;
    do {
      local_1b0 = &local_178;
      local_178 = local_148;
      _dl_mcount_wrapper_check(pcVar9);
      uVar4 = (*pcVar9)(plVar2,local_1b0,&local_188,pcVar3 + sVar5 + 1,0,local_190,0,1);
      uVar8 = (ulong)uVar4;
      lVar6 = lVar6 + ((long)local_178 - (long)local_148 >> 2);
    } while (uVar4 == 5);
    if ((uVar4 & 0xfffffffb) == 0) {
      if (*(int *)(local_178 + -4) != 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("((wchar_t *) data.__outbuf)[-1] == L\'\\0\'","mbsrtowcs_l.c",0x5d,
                      "__mbsrtowcs_l");
      }
LAB_00751083:
      lVar6 = lVar6 + -1;
    }
LAB_00751087:
    if (3 < (int)uVar8 - 4U && (int)uVar8 != 0) {
LAB_007510f5:
                    /* WARNING: Subroutine does not return */
      __assert_fail("status == __GCONV_OK || status == __GCONV_EMPTY_INPUT || status == __GCONV_ILLEGAL_INPUT || status == __GCONV_INCOMPLETE_INPUT || status == __GCONV_FULL_OUTPUT"
                    ,"mbsrtowcs_l.c",0x95,"__mbsrtowcs_l");
    }
  }
  else {
    puStack_170 = param_1 + param_3 * 4;
    local_178 = param_1;
    if (param_3 == 0) {
      lVar6 = 0;
      goto LAB_007510b5;
    }
    while( true ) {
      pcVar3 = local_188;
      sVar5 = strnlen(local_188,param_3);
      pcVar3 = pcVar3 + sVar5 + 1;
      _dl_mcount_wrapper_check(pcVar9);
      uVar4 = (*pcVar9)(plVar2,&local_178,&local_188,pcVar3,0,local_190,0,1);
      uVar8 = (ulong)uVar4;
      if (((uVar4 != 4) && (uVar4 != 7)) || (local_188 != pcVar3)) break;
      if ((pcVar3[-1] == '\0') || (param_3 = (long)puStack_170 - (long)local_178 >> 2, param_3 == 0)
         ) break;
    }
    *param_2 = local_188;
    lVar6 = (long)local_178 - (long)param_1 >> 2;
    if ((uVar4 & 0xfffffffb) == 0) {
      if (*(int *)(local_178 + -4) == 0) {
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("result > 0","mbsrtowcs_l.c",0x8c,"__mbsrtowcs_l");
        }
        if (*local_158 != 0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("__mbsinit (data.__statep)","mbsrtowcs_l.c",0x8d,"__mbsrtowcs_l");
        }
        *param_2 = 0;
        goto LAB_00751083;
      }
      goto LAB_00751087;
    }
    if (3 < uVar4 - 4) goto LAB_007510f5;
  }
  if ((7 < (uint)uVar8) || ((0xffffffffffffff4eU >> (uVar8 & 0x3f) & 1) != 0)) {
    lVar6 = -1;
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x54;
  }
LAB_007510b5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return lVar6;
}


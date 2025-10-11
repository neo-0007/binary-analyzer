
long FUN_0075a900(undefined1 *param_1,long *param_2,long param_3,int *param_4,long *param_5)

{
  undefined **ppuVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined **ppuVar7;
  ulong uVar8;
  code *pcVar9;
  long in_FS_OFFSET;
  undefined8 uVar10;
  undefined1 **local_1b0;
  undefined1 local_190 [8];
  long local_188;
  undefined8 local_180;
  undefined1 *local_178;
  undefined1 *puStack_170;
  undefined8 local_168;
  undefined4 local_160;
  int *local_158;
  undefined1 local_148 [256];
  undefined1 local_48 [8];
  long local_40;
  
  ppuVar1 = (undefined **)*param_5;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_160 = 1;
  local_168 = DAT_008291c0;
  ppuVar7 = (undefined **)ppuVar1[5];
  local_158 = param_4;
  if ((ppuVar7 == (undefined **)0x0) && (ppuVar7 = &PTR_DAT_00919180, ppuVar1 != &PTR_s_C_009191a0))
  {
    FUN_0075a340(ppuVar1);
    ppuVar7 = (undefined **)ppuVar1[5];
  }
  plVar2 = (long *)*ppuVar7;
  pcVar9 = (code *)plVar2[5];
  if (*plVar2 != 0) {
    pcVar9 = (code *)(((ulong)pcVar9 >> 0x11 | (long)pcVar9 << 0x2f) ^
                     *(ulong *)(in_FS_OFFSET + 0x30));
  }
  lVar4 = *param_2;
  local_188 = lVar4;
  if (param_1 == (undefined1 *)0x0) {
    lVar6 = thunk_FUN_007129d0(lVar4);
    lVar5 = 0;
    local_180 = *(undefined8 *)local_158;
    local_158 = (int *)&local_180;
    puStack_170 = local_48;
    do {
      local_1b0 = &local_178;
      local_178 = local_148;
      FUN_0078e430(pcVar9);
      uVar10 = 0;
      uVar3 = (*pcVar9)(plVar2,local_1b0,&local_188,lVar4 + 1 + lVar6,0,local_190,0,1);
      uVar8 = (ulong)uVar3;
      lVar5 = lVar5 + ((long)local_178 - (long)local_148 >> 2);
    } while (uVar3 == 5);
    if ((uVar3 & 0xfffffffb) == 0) {
      if (*(int *)(local_178 + -4) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006e2220("((wchar_t *) data.__outbuf)[-1] == L\'\\0\'","mbsrtowcs_l.c",0x5d,
                     "__mbsrtowcs_l",*(int *)(local_178 + -4),uVar10);
      }
LAB_0075aa83:
      lVar5 = lVar5 + -1;
    }
LAB_0075aa87:
    if (3 < (int)uVar8 - 4U && (int)uVar8 != 0) {
LAB_0075aaf5:
                    /* WARNING: Subroutine does not return */
      FUN_006e2220("status == __GCONV_OK || status == __GCONV_EMPTY_INPUT || status == __GCONV_ILLEGAL_INPUT || status == __GCONV_INCOMPLETE_INPUT || status == __GCONV_FULL_OUTPUT"
                   ,"mbsrtowcs_l.c",0x95,"__mbsrtowcs_l");
    }
  }
  else {
    puStack_170 = param_1 + param_3 * 4;
    local_178 = param_1;
    if (param_3 == 0) {
      lVar5 = 0;
      goto LAB_0075aab5;
    }
    while( true ) {
      lVar5 = local_188;
      lVar4 = thunk_FUN_00712a40(local_188,param_3);
      lVar4 = lVar5 + 1 + lVar4;
      FUN_0078e430(pcVar9);
      uVar3 = (*pcVar9)(plVar2,&local_178,&local_188,lVar4,0,local_190,0,1);
      uVar8 = (ulong)uVar3;
      if (((uVar3 != 4) && (uVar3 != 7)) || (local_188 != lVar4)) break;
      if ((*(char *)(lVar4 + -1) == '\0') ||
         (param_3 = (long)puStack_170 - (long)local_178 >> 2, param_3 == 0)) break;
    }
    *param_2 = local_188;
    lVar5 = (long)local_178 - (long)param_1 >> 2;
    if ((uVar3 & 0xfffffffb) == 0) {
      if (*(int *)(local_178 + -4) == 0) {
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006e2220("result > 0","mbsrtowcs_l.c",0x8c,"__mbsrtowcs_l");
        }
        if (*local_158 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006e2220("__mbsinit (data.__statep)","mbsrtowcs_l.c",0x8d,"__mbsrtowcs_l");
        }
        *param_2 = 0;
        goto LAB_0075aa83;
      }
      goto LAB_0075aa87;
    }
    if (3 < uVar3 - 4) goto LAB_0075aaf5;
  }
  if ((7 < (uint)uVar8) || ((0xffffffffffffff4eU >> (uVar8 & 0x3f) & 1) != 0)) {
    lVar5 = -1;
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x54;
  }
LAB_0075aab5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return lVar5;
}


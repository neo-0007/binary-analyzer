
long FUN_007a94d0(undefined1 *param_1,long *param_2,long param_3,long param_4,int *param_5)

{
  undefined **ppuVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined **ppuVar5;
  long lVar6;
  code *pcVar7;
  long in_FS_OFFSET;
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_160 = 1;
  local_168 = DAT_008291c0;
  if (param_5 == (int *)0x0) {
    param_5 = (int *)&DAT_0094b1a0;
  }
  local_158 = param_5;
  if (param_3 == 0) {
    lVar6 = 0;
    goto LAB_007a96cc;
  }
  lVar6 = *param_2;
  lVar3 = thunk_FUN_00712a40(lVar6,param_3 + -1);
  lVar3 = lVar6 + 1 + lVar3;
  ppuVar1 = (undefined **)**(long **)(in_FS_OFFSET + -0xd8);
  ppuVar5 = (undefined **)ppuVar1[5];
  if (ppuVar5 == (undefined **)0x0) {
    ppuVar5 = &PTR_DAT_00919180;
    if (ppuVar1 != &PTR_s_C_009191a0) {
      FUN_0075a340(ppuVar1);
      ppuVar5 = (undefined **)ppuVar1[5];
    }
  }
  plVar2 = (long *)*ppuVar5;
  pcVar7 = (code *)plVar2[5];
  if (*plVar2 != 0) {
    pcVar7 = (code *)(((ulong)pcVar7 >> 0x11 | (long)pcVar7 << 0x2f) ^
                     *(ulong *)(in_FS_OFFSET + 0x30));
  }
  if (param_1 == (undefined1 *)0x0) {
    local_188 = *param_2;
    lVar6 = 0;
    local_180 = *(undefined8 *)local_158;
    local_158 = (int *)&local_180;
    puStack_170 = local_48;
    do {
      local_178 = local_148;
      FUN_0078e430(pcVar7);
      uVar4 = (*pcVar7)(plVar2,&local_178,&local_188,lVar3,0,local_190,0,1);
      lVar6 = lVar6 + ((long)local_178 - (long)local_148 >> 2);
    } while ((int)uVar4 == 5);
    if ((uVar4 & 0xfffffffb) != 0) goto LAB_007a96b3;
    lVar6 = lVar6 - (ulong)(*(int *)(local_178 + -4) == 0);
  }
  else {
    puStack_170 = param_1 + param_4 * 4;
    local_178 = param_1;
    FUN_0078e430(pcVar7);
    uVar4 = (*pcVar7)(plVar2,&local_178,param_2,lVar3,0,local_190,0,1);
    lVar6 = (long)local_178 - (long)param_1 >> 2;
    if ((uVar4 & 0xfffffffb) == 0) {
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006e2220("result > 0","mbsnrtowcs.c",0x75,"__mbsnrtowcs");
      }
      if (*(int *)(local_178 + -4) == 0) {
        if (*local_158 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006e2220("__mbsinit (data.__statep)","mbsnrtowcs.c",0x78,"__mbsnrtowcs");
        }
        *param_2 = 0;
        lVar6 = lVar6 + -1;
      }
    }
    else {
LAB_007a96b3:
      if (2 < (int)uVar4 - 5U) {
                    /* WARNING: Subroutine does not return */
        FUN_006e2220("status == __GCONV_OK || status == __GCONV_EMPTY_INPUT || status == __GCONV_ILLEGAL_INPUT || status == __GCONV_INCOMPLETE_INPUT || status == __GCONV_FULL_OUTPUT"
                     ,"mbsnrtowcs.c",0x80,"__mbsnrtowcs");
      }
    }
  }
  if ((0xffffffffffffff4eU >> (uVar4 & 0x3f) & 1) != 0) {
    lVar6 = -1;
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x54;
  }
LAB_007a96cc:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


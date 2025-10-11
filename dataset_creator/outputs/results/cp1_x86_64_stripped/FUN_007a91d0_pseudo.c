
undefined1 * FUN_007a91d0(undefined1 *param_1,long *param_2,long param_3,int *param_4)

{
  undefined **ppuVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  undefined **ppuVar6;
  code *pcVar7;
  undefined1 *puVar8;
  long in_FS_OFFSET;
  long local_190;
  undefined1 local_188 [8];
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
  if (param_4 == (int *)0x0) {
    param_4 = (int *)&DAT_0094b198;
  }
  ppuVar1 = (undefined **)**(long **)(in_FS_OFFSET + -0xd8);
  ppuVar6 = (undefined **)ppuVar1[5];
  local_158 = param_4;
  if ((ppuVar6 == (undefined **)0x0) && (ppuVar6 = &PTR_DAT_00919180, ppuVar1 != &PTR_s_C_009191a0))
  {
    FUN_0075a340(ppuVar1);
    ppuVar6 = (undefined **)ppuVar1[5];
  }
  plVar2 = (long *)ppuVar6[2];
  pcVar7 = (code *)plVar2[5];
  if (*plVar2 != 0) {
    pcVar7 = (code *)(((ulong)pcVar7 >> 0x11 | (long)pcVar7 << 0x2f) ^
                     *(ulong *)(in_FS_OFFSET + 0x30));
  }
  lVar3 = *param_2;
  if (param_1 == (undefined1 *)0x0) {
    puVar8 = (undefined1 *)0x0;
    lVar5 = thunk_FUN_007564d0(lVar3);
    local_180 = *(undefined8 *)local_158;
    local_158 = (int *)&local_180;
    puStack_170 = local_48;
    local_190 = lVar3;
    do {
      local_178 = local_148;
      FUN_0078e430(pcVar7);
      uVar4 = (*pcVar7)(plVar2,&local_178,&local_190,lVar3 + 4 + lVar5 * 4,0,local_188,0,1);
      puVar8 = local_178 + ((long)puVar8 - (long)local_148);
    } while (uVar4 == 5);
    if ((uVar4 & 0xfffffffb) != 0) goto LAB_007a92d2;
    if (local_178[-1] != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_006e2220("data.__outbuf[-1] == \'\\0\'","wcsrtombs.c",0x5d,"__wcsrtombs");
    }
  }
  else {
    lVar5 = FUN_00401110(lVar3,param_3);
    local_178 = param_1;
    puStack_170 = param_1 + param_3;
    FUN_0078e430(pcVar7);
    uVar4 = (*pcVar7)(plVar2,&local_178,param_2,lVar3 + 4 + lVar5 * 4,0,local_188,0,1);
    puVar8 = local_178 + -(long)param_1;
    if (((uVar4 & 0xfffffffb) != 0) || (local_178[-1] != '\0')) goto LAB_007a92d2;
    if (local_178 == param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_006e2220("data.__outbuf != (unsigned char *) dst","wcsrtombs.c",0x79,"__wcsrtombs");
    }
    if (*local_158 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006e2220("__mbsinit (data.__statep)","wcsrtombs.c",0x7a,"__wcsrtombs");
    }
    *param_2 = 0;
  }
  puVar8 = puVar8 + -1;
LAB_007a92d2:
  if (uVar4 != 0) {
    if (3 < uVar4 - 4) {
                    /* WARNING: Subroutine does not return */
      FUN_006e2220("status == __GCONV_OK || status == __GCONV_EMPTY_INPUT || status == __GCONV_ILLEGAL_INPUT || status == __GCONV_INCOMPLETE_INPUT || status == __GCONV_FULL_OUTPUT"
                   ,"wcsrtombs.c",0x82,"__wcsrtombs");
    }
    if ((uVar4 != 0) && (1 < uVar4 - 4)) {
      puVar8 = (undefined1 *)0xffffffffffffffff;
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x54;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}



undefined1 * FUN_00756e40(undefined1 *param_1,long *param_2,long param_3,long param_4,int *param_5)

{
  long lVar1;
  undefined **ppuVar2;
  long *plVar3;
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
  if (param_5 == (int *)0x0) {
    param_5 = (int *)&DAT_0094a9f8;
  }
  local_158 = param_5;
  if (param_3 == 0) {
    puVar8 = (undefined1 *)0x0;
  }
  else {
    lVar1 = *param_2;
    lVar5 = FUN_00401110(lVar1,param_3 + -1);
    lVar1 = lVar1 + 4 + lVar5 * 4;
    ppuVar2 = (undefined **)**(long **)(in_FS_OFFSET + -0xd8);
    ppuVar6 = (undefined **)ppuVar2[5];
    if ((ppuVar6 == (undefined **)0x0) &&
       (ppuVar6 = &PTR_DAT_00919180, ppuVar2 != &PTR_s_C_009191a0)) {
      FUN_0075a340(ppuVar2);
      ppuVar6 = (undefined **)ppuVar2[5];
    }
    plVar3 = (long *)ppuVar6[2];
    pcVar7 = (code *)plVar3[5];
    if (*plVar3 != 0) {
      pcVar7 = (code *)(((ulong)pcVar7 >> 0x11 | (long)pcVar7 << 0x2f) ^
                       *(ulong *)(in_FS_OFFSET + 0x30));
    }
    if (param_1 == (undefined1 *)0x0) {
      local_190 = *param_2;
      puVar8 = (undefined1 *)0x0;
      local_180 = *(undefined8 *)local_158;
      local_158 = (int *)&local_180;
      puStack_170 = local_48;
      do {
        local_178 = local_148;
        FUN_0078e430(pcVar7);
        uVar4 = (*pcVar7)(plVar3,&local_178,&local_190,lVar1,0,local_188,0,1);
        puVar8 = local_178 + ((long)puVar8 - (long)local_148);
      } while (uVar4 == 5);
      if ((uVar4 & 0xfffffffb) == 0) {
        puVar8 = puVar8 + -(ulong)(local_178[-1] == '\0');
      }
    }
    else {
      puStack_170 = param_1 + param_4;
      local_178 = param_1;
      FUN_0078e430(pcVar7);
      uVar4 = (*pcVar7)(plVar3,&local_178,param_2,lVar1,0,local_188,0,1);
      puVar8 = local_178 + -(long)param_1;
      if (((uVar4 & 0xfffffffb) == 0) && (local_178[-1] == '\0')) {
        if (local_178 == param_1) {
                    /* WARNING: Subroutine does not return */
          FUN_006e2220("data.__outbuf != (unsigned char *) dst","wcsnrtombs.c",0x7c,"__wcsnrtombs");
        }
        if (*local_158 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006e2220("__mbsinit (data.__statep)","wcsnrtombs.c",0x7d,"__wcsnrtombs");
        }
        *param_2 = 0;
        puVar8 = puVar8 + -1;
      }
    }
    if (uVar4 != 0) {
      if (3 < uVar4 - 4) {
                    /* WARNING: Subroutine does not return */
        FUN_006e2220("status == __GCONV_OK || status == __GCONV_EMPTY_INPUT || status == __GCONV_ILLEGAL_INPUT || status == __GCONV_INCOMPLETE_INPUT || status == __GCONV_FULL_OUTPUT"
                     ,"wcsnrtombs.c",0x85,"__wcsnrtombs");
      }
      if ((uVar4 != 0) && (1 < uVar4 - 4)) {
        puVar8 = (undefined1 *)0xffffffffffffffff;
        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x54;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


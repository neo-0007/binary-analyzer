
long FUN_00756c20(undefined1 *param_1,int param_2,undefined *param_3)

{
  undefined **ppuVar1;
  uint uVar2;
  long lVar3;
  code *pcVar4;
  undefined **ppuVar5;
  long in_FS_OFFSET;
  int local_7c;
  undefined1 local_78 [8];
  int *local_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined *local_48;
  undefined1 local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 1;
  local_58 = DAT_008291c0;
  if (param_3 == (undefined *)0x0) {
    param_3 = &DAT_0094a9e8;
  }
  local_7c = param_2;
  if (param_1 == (undefined1 *)0x0) {
    local_7c = 0;
    param_1 = local_38;
  }
  ppuVar1 = (undefined **)**(long **)(in_FS_OFFSET + -0xd8);
  ppuVar5 = (undefined **)ppuVar1[5];
  puStack_60 = param_1 + *(uint *)(ppuVar1 + 0x15);
  local_68 = param_1;
  local_48 = param_3;
  if ((ppuVar5 == (undefined **)0x0) && (ppuVar5 = &PTR_DAT_00919180, ppuVar1 != &PTR_s_C_009191a0))
  {
    FUN_0075a340(ppuVar1);
    ppuVar5 = (undefined **)ppuVar1[5];
  }
  pcVar4 = *(code **)((long)ppuVar5[2] + 0x28);
  if (*(long *)ppuVar5[2] != 0) {
    pcVar4 = (code *)(((ulong)pcVar4 >> 0x11 | (long)pcVar4 << 0x2f) ^
                     *(ulong *)(in_FS_OFFSET + 0x30));
  }
  if (local_7c == 0) {
    FUN_0078e430(pcVar4);
    uVar2 = (*pcVar4)(ppuVar5[2],&local_68,0,0,0,local_78,1,1);
    if ((uVar2 & 0xfffffffb) == 0) {
      *local_68 = 0;
      local_68 = local_68 + 1;
    }
    else {
LAB_00756d79:
      if (2 < uVar2 - 5) {
                    /* WARNING: Subroutine does not return */
        FUN_006e2220("status == __GCONV_OK || status == __GCONV_EMPTY_INPUT || status == __GCONV_ILLEGAL_INPUT || status == __GCONV_INCOMPLETE_INPUT || status == __GCONV_FULL_OUTPUT"
                     ,"wcrtomb.c",0x61,"__wcrtomb");
      }
      if (uVar2 != 5) {
        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x54;
        lVar3 = -1;
        goto LAB_00756d16;
      }
    }
  }
  else {
    local_70 = &local_7c;
    FUN_0078e430(pcVar4);
    uVar2 = (*pcVar4)(ppuVar5[2],&local_68,&local_70,local_70 + 1,0,local_78,0,1);
    if ((uVar2 & 0xfffffffb) != 0) goto LAB_00756d79;
  }
  lVar3 = (long)local_68 - (long)param_1;
LAB_00756d16:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


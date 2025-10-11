
long FUN_007569f0(int *param_1,undefined1 *param_2,ulong param_3,int *param_4)

{
  undefined **ppuVar1;
  uint uVar2;
  long lVar3;
  int *piVar4;
  undefined1 *puVar5;
  code *pcVar6;
  undefined **ppuVar7;
  long in_FS_OFFSET;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_6c;
  int *local_68;
  int *piStack_60;
  undefined8 local_58;
  undefined4 local_50;
  int *local_48;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  piVar4 = &local_6c;
  local_50 = 1;
  local_58 = DAT_008291c0;
  if (param_1 == (int *)0x0) {
    param_1 = piVar4;
  }
  if (param_4 == (int *)0x0) {
    param_4 = &DAT_0094a9e0;
  }
  local_48 = param_4;
  if (param_2 != (undefined1 *)0x0) {
    piVar4 = param_1;
    if (param_3 != 0) goto LAB_00756a5e;
LAB_00756b40:
    lVar3 = -2;
    goto LAB_00756b47;
  }
  param_3 = 1;
  param_2 = &DAT_0083e5c2;
LAB_00756a5e:
  piStack_60 = piVar4 + 1;
  ppuVar1 = (undefined **)**(long **)(in_FS_OFFSET + -0xd8);
  ppuVar7 = (undefined **)ppuVar1[5];
  local_68 = piVar4;
  if ((ppuVar7 == (undefined **)0x0) && (ppuVar7 = &PTR_DAT_00919180, ppuVar1 != &PTR_s_C_009191a0))
  {
    FUN_0075a340(ppuVar1);
    ppuVar7 = (undefined **)ppuVar1[5];
  }
  puVar5 = param_2 + param_3;
  local_78 = param_2;
  if ((CARRY8(param_3,(ulong)param_2)) &&
     (puVar5 = (undefined1 *)0xffffffffffffffff, param_2 == (undefined1 *)0xffffffffffffffff)) {
LAB_00756afe:
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x54;
    lVar3 = -1;
  }
  else {
    pcVar6 = *(code **)((long)*ppuVar7 + 0x28);
    if (*(long *)*ppuVar7 != 0) {
      pcVar6 = (code *)(((ulong)pcVar6 >> 0x11 | (long)pcVar6 << 0x2f) ^
                       *(ulong *)(in_FS_OFFSET + 0x30));
    }
    FUN_0078e430(pcVar6);
    uVar2 = (*pcVar6)(*ppuVar7,&local_68,&local_78,puVar5,0,local_80,0,1);
    if ((uVar2 & 0xfffffffb) != 0) {
      if (2 < uVar2 - 5) {
                    /* WARNING: Subroutine does not return */
        FUN_006e2220("status == __GCONV_OK || status == __GCONV_EMPTY_INPUT || status == __GCONV_ILLEGAL_INPUT || status == __GCONV_INCOMPLETE_INPUT || status == __GCONV_FULL_OUTPUT"
                     ,"mbrtowc.c",0x5c,"__mbrtowc");
      }
      if (uVar2 != 5) {
        if (uVar2 == 7) goto LAB_00756b40;
        goto LAB_00756afe;
      }
    }
    if ((local_68 == piVar4) || (*piVar4 != 0)) {
      lVar3 = (long)local_78 - (long)param_2;
    }
    else {
      if (*local_48 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006e2220("__mbsinit (data.__statep)","mbrtowc.c",0x68,"__mbrtowc");
      }
      lVar3 = 0;
    }
  }
LAB_00756b47:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return lVar3;
}


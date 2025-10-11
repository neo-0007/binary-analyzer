
ulong FUN_00756690(uint param_1)

{
  undefined **ppuVar1;
  int iVar2;
  ulong uVar3;
  code *pcVar4;
  undefined **ppuVar5;
  long in_FS_OFFSET;
  uint local_7c;
  undefined1 *local_78;
  undefined1 local_70 [8];
  uint *local_68;
  undefined1 **ppuStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined1 local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 + 0x80 < 0x180) && (param_1 != 0xffffffff)) {
    uVar3 = (ulong)param_1;
    if ((param_1 & 0xffffff80) != 0) {
      ppuVar1 = (undefined **)**(long **)(in_FS_OFFSET + -0xd8);
      ppuVar5 = (undefined **)ppuVar1[5];
      if ((ppuVar5 == (undefined **)0x0) &&
         (ppuVar5 = &PTR_DAT_00919180, ppuVar1 != &PTR_s_C_009191a0)) {
        FUN_0075a340(ppuVar1);
        ppuVar5 = (undefined **)ppuVar1[5];
      }
      pcVar4 = *(code **)((long)*ppuVar5 + 0x30);
      if (*(long *)*ppuVar5 != 0) {
        pcVar4 = (code *)(((ulong)pcVar4 >> 0x11 | (long)pcVar4 << 0x2f) ^
                         *(ulong *)(in_FS_OFFSET + 0x30));
      }
      if ((ppuVar5[1] == (undefined *)0x1) && (pcVar4 != (code *)0x0)) {
        FUN_0078e430(pcVar4);
        uVar3 = (*pcVar4)(*ppuVar5,param_1 & 0xff);
      }
      else {
        local_78 = &local_31;
        local_40 = 0;
        local_58 = DAT_008291c0;
        local_48 = &local_40;
        local_50 = 1;
        pcVar4 = *(code **)((long)*ppuVar5 + 0x28);
        if (*(long *)*ppuVar5 != 0) {
          pcVar4 = (code *)(((ulong)pcVar4 >> 0x11 | (long)pcVar4 << 0x2f) ^
                           *(ulong *)(in_FS_OFFSET + 0x30));
        }
        local_68 = &local_7c;
        ppuStack_60 = &local_78;
        local_31 = (char)param_1;
        FUN_0078e430(pcVar4);
        iVar2 = (*pcVar4)(*ppuVar5,&local_68,&local_78,local_78 + 1,0,local_70,0,1);
        if ((iVar2 - 4U < 2) || (uVar3 = 0xffffffff, iVar2 == 0)) {
          uVar3 = (ulong)local_7c;
        }
      }
    }
  }
  else {
    uVar3 = 0xffffffff;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


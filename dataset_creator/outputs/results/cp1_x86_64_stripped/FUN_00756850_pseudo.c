
uint FUN_00756850(uint param_1)

{
  undefined **ppuVar1;
  int iVar2;
  code *pcVar3;
  undefined **ppuVar4;
  long in_FS_OFFSET;
  undefined1 local_80 [8];
  uint *local_78;
  uint local_6c;
  byte *local_68;
  undefined1 *puStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 *local_48;
  undefined8 local_40;
  byte local_38;
  byte local_37 [15];
  undefined1 local_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0xffffffff) {
    if (param_1 < 0x80) goto LAB_00756896;
    local_50 = 1;
    local_40 = 0;
    local_58 = DAT_008291c0;
    local_48 = &local_40;
    ppuVar1 = (undefined **)**(long **)(in_FS_OFFSET + -0xd8);
    ppuVar4 = (undefined **)ppuVar1[5];
    local_68 = &local_38;
    puStack_60 = local_28;
    if ((ppuVar4 == (undefined **)0x0) &&
       (ppuVar4 = &PTR_DAT_00919180, ppuVar1 != &PTR_s_C_009191a0)) {
      FUN_0075a340(ppuVar1);
      ppuVar4 = (undefined **)ppuVar1[5];
    }
    local_78 = &local_6c;
    pcVar3 = *(code **)((long)ppuVar4[2] + 0x28);
    if (*(long *)ppuVar4[2] != 0) {
      pcVar3 = (code *)(((ulong)pcVar3 >> 0x11 | (long)pcVar3 << 0x2f) ^
                       *(ulong *)(in_FS_OFFSET + 0x30));
    }
    local_6c = param_1;
    FUN_0078e430(pcVar3);
    iVar2 = (*pcVar3)(ppuVar4[2],&local_68,&local_78,local_78 + 1,0,local_80);
    if (((iVar2 - 4U < 2) || (iVar2 == 0)) && (local_68 == local_37)) {
      param_1 = (uint)local_38;
      goto LAB_00756896;
    }
  }
  param_1 = 0xffffffff;
LAB_00756896:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


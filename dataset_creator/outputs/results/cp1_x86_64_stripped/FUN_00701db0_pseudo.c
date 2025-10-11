
char FUN_00701db0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  undefined1 local_50 [8];
  undefined8 local_48;
  long local_40;
  
  plVar1 = *(long **)(param_1 + 0x38);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(param_1 + 0x60) = param_2;
  lVar2 = *plVar1;
  pcVar5 = (code *)plVar1[5];
  *(undefined8 *)(param_1 + 0x40) = param_6;
  *(undefined8 *)(param_1 + 0x48) = param_7;
  if (lVar2 != 0) {
    pcVar5 = (code *)(((ulong)pcVar5 >> 0x11 | (long)pcVar5 << 0x2f) ^
                     *(ulong *)(in_FS_OFFSET + 0x30));
  }
  local_48 = param_3;
  FUN_0078e430(pcVar5);
  uVar4 = (*pcVar5)(plVar1,param_1 + 0x40,&local_48,param_4,0,local_50,0);
  *param_5 = local_48;
  *param_8 = *(undefined8 *)(param_1 + 0x40);
  if (uVar4 == 5) {
    cVar3 = '\x01';
  }
  else if ((int)uVar4 < 6) {
    cVar3 = ((uVar4 & 0xfffffffb) != 0) * '\x02';
  }
  else {
    cVar3 = (uVar4 != 7) + '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return cVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


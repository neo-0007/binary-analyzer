
undefined8
FUN_00487b30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 0x88) == 0) {
    iVar1 = FUN_0054cc70(param_1 + 0x50);
  }
  else {
    iVar1 = FUN_0054d290();
  }
  if (((iVar1 == 0) && (lVar2 = FUN_0054d5c0(param_1 + 0x50,auStack_58,param_6), lVar2 != 0)) &&
     (iVar1 = FUN_00422820(auStack_58,param_5,param_6), iVar1 == 0)) {
    uVar3 = 1;
  }
  else {
    FUN_004227b0(param_3,param_4);
    uVar3 = 0;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar3;
}



bool FUN_0043af60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = FUN_004098f0();
  iVar1 = FUN_004098f0(param_1);
  iVar2 = FUN_00409fd0(param_1);
  if (-1 < iVar2) {
    local_44 = iVar2;
    uVar4 = FUN_00409fc0(param_1);
    uVar5 = FUN_00409d90(param_1);
    FUN_0054dd60(param_3,param_2,param_4,lVar3 + (ulong)(-iVar1 & 0xf),uVar5,uVar4,&local_44);
    FUN_0040a0a0(param_1,local_44);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return -1 < iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


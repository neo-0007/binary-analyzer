
bool FUN_00534780(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_00409fd0();
  uVar2 = FUN_004098f0(param_1);
  if (-1 < iVar1) {
    local_44 = iVar1;
    uVar3 = FUN_00409fc0(param_1);
    FUN_0054dbb0(param_3,param_2,param_4,uVar2,param_1 + 0x28,uVar3,&local_44,PTR_FUN_0093af98);
    FUN_0040a0a0(param_1,local_44);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return -1 < iVar1;
}


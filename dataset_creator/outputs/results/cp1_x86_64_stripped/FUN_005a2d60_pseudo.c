
ulong FUN_005a2d60(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(byte *)(*(long *)(param_1 + 0x20) + 0x18) & 0x10) == 0) &&
     ((*(byte *)(param_2 + 0x85) & 2) != 0)) {
    *(undefined4 *)(param_1 + 0xb0) = 0x24;
    uVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
    if ((int)uVar2 == 0) goto LAB_005a2dc7;
  }
  iVar1 = FUN_005ac070(param_2,&local_28,param_3);
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else if (*(int *)(local_28 + 0x30) == 8) {
    uVar2 = 2;
  }
  else {
    *(undefined4 *)(param_1 + 0xb0) = 0x17;
    iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
    uVar2 = (ulong)(iVar1 != 0);
  }
LAB_005a2dc7:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


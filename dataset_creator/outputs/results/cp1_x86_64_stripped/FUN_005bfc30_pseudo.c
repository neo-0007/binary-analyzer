
undefined8 FUN_005bfc30(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  iVar1 = FUN_004aec60();
  if ((iVar1 != 1) ||
     (iVar1 = FUN_005bf920(param_1,param_2,0,&local_28), uVar2 = local_28, iVar1 == 0)) {
    uVar2 = 0;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar2;
}


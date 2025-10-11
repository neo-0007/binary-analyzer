
undefined8 FUN_0049fa00(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = 0;
  if ((param_1 != 0) && (iVar1 = FUN_0049f870(&local_18,param_1), uVar2 = local_18, iVar1 == 0)) {
    uVar2 = 0xffffffffffffffff;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar2;
}


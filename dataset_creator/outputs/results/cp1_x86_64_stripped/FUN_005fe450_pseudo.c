
undefined8 FUN_005fe450(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = 0;
  if (*(long *)(param_1 + 0x60) == 0) {
    lVar2 = FUN_004a1790();
    uVar1 = local_18;
    if (lVar2 != 0) {
      FUN_004a1730(0,0,0,0,&local_18,lVar2);
      uVar1 = local_18;
    }
  }
  else {
    uVar1 = FUN_0053e710(*(long *)(param_1 + 0x60));
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar1;
}



ulong FUN_0059adc0(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_005a2b00();
  uVar2 = FUN_00423da0(uVar1);
  local_14 = (int)uVar2;
  if (local_14 != 0) {
    lVar3 = FUN_00423d90(&local_14,&DAT_0080b4e0,0xf,4,FUN_0059a280);
    uVar2 = (ulong)(lVar3 != 0);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


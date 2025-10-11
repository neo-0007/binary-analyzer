
undefined4 FUN_004079d0(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 in_RCX;
  undefined8 in_R8;
  undefined8 in_R9;
  long in_FS_OFFSET;
  ulong *in_stack_00000008;
  uint local_44;
  long local_40;
  
  uVar1 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = FUN_004069d0();
  local_44 = 0;
  if (lVar2 != 0) {
    uVar1 = FUN_00407440(in_RCX,in_R8,in_R9,&local_44,lVar2,0);
    FUN_00406a50(lVar2);
  }
  if (in_stack_00000008 != (ulong *)0x0) {
    *in_stack_00000008 = (ulong)local_44;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


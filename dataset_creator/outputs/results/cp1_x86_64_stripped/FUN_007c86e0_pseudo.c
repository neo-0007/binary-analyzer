
int FUN_007c86e0(void)

{
  int iVar1;
  int iVar2;
  undefined8 in_RCX;
  undefined8 in_R8;
  long in_FS_OFFSET;
  undefined1 auStack_138 [264];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_007c3dd0();
  if (-1 < iVar1) {
    iVar2 = FUN_007c3c60(auStack_138,in_RCX,in_R8);
    if (-1 < iVar2) goto LAB_007c8735;
  }
  iVar1 = -1;
LAB_007c8735:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


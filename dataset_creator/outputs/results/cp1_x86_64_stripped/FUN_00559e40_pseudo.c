
int FUN_00559e40(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  iVar1 = FUN_005597d0(&local_28);
  if (-1 < iVar1) {
    iVar2 = FUN_004ab7e0(param_1,local_28,iVar1);
    FUN_0041ad60(local_28,"../crypto/pem/pvkfmt.c",0x26a);
    if (iVar1 == iVar2) goto LAB_00559e9b;
  }
  iVar2 = -1;
LAB_00559e9b:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


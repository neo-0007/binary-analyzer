
undefined4 FUN_00608a00(void)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 in_RCX;
  undefined4 in_R8D;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = FUN_006084b0();
  if (lVar3 != 0) {
    iVar1 = FUN_00607ea0(&local_28,in_RCX,in_R8D);
    if (iVar1 != 0) {
      iVar1 = FUN_00435f80(lVar3,local_28);
      if (iVar1 == 0) {
        FUN_00607e80(local_28);
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
      goto LAB_00608a46;
    }
  }
  uVar2 = 0;
LAB_00608a46:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


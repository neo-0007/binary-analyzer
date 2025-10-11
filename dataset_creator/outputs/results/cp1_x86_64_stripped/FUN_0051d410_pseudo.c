
undefined4 FUN_0051d410(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  uVar2 = 1;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(param_1 + 0x48) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x48))(param_1,0,&local_28,0);
    if (0 < iVar1) {
      uVar2 = FUN_005fb2d0(&DAT_009410b0,FUN_0051d310,param_1,local_28,iVar1,1);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


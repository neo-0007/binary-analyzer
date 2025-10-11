
undefined4
FUN_00608aa0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  iVar4 = 4;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = FUN_006084b0();
  if (param_2 != 1) {
    iVar4 = (uint)(param_2 == 2) << 4;
  }
  if (lVar3 != 0) {
    iVar1 = FUN_00607ab0(param_4,param_5,iVar4);
    if (iVar1 < 0) {
      iVar4 = FUN_00607fa0(&local_38,param_4,param_5,iVar4);
    }
    else {
      iVar4 = FUN_00607ea0(&local_38,param_4,iVar1);
    }
    if (iVar4 != 0) {
      iVar4 = FUN_00435f80(lVar3,local_38);
      if (iVar4 == 0) {
        FUN_00607e80(local_38);
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
      goto LAB_00608b42;
    }
  }
  uVar2 = 0;
LAB_00608b42:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


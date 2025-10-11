
undefined8 FUN_004d7c40(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  local_28 = 0;
  if (param_1 == 0) {
    uVar3 = 0;
    goto LAB_004d7ce7;
  }
  lVar4 = 0;
  if (param_3 != 0) {
    lVar4 = thunk_FUN_0041cdd0(param_2,&DAT_007ce5df);
  }
  lVar2 = thunk_FUN_0041cdd0(param_2,&DAT_007ce5e4);
  if (lVar4 == 0 && lVar2 == 0) {
LAB_004d7ce2:
    uVar3 = 1;
  }
  else {
    if (lVar2 == 0) {
LAB_004d7cb6:
      if (lVar4 != 0) {
        iVar1 = FUN_0041dc20(lVar4,&local_30);
        if (iVar1 == 0) goto LAB_004d7d08;
      }
      iVar1 = FUN_004d8da0(param_1,local_28,local_30);
      if (iVar1 != 0) goto LAB_004d7ce2;
    }
    else {
      iVar1 = FUN_0041dc20(lVar2,&local_28);
      if (iVar1 != 0) goto LAB_004d7cb6;
    }
LAB_004d7d08:
    FUN_004b7f20(local_30);
    FUN_004b7fa0(local_28);
    uVar3 = 0;
  }
LAB_004d7ce7:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


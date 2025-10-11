
bool FUN_0046f9b0(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  local_28 = 0;
  if (param_1 == 0) {
LAB_0046fa68:
    bVar2 = false;
  }
  else {
    FUN_004d8d80(param_1,&local_28,&local_30);
    if ((param_4 != 0) && (local_30 != 0)) {
      iVar1 = FUN_00548c90(param_2,param_3,&DAT_007ce5df);
      if (iVar1 == 0) goto LAB_0046fa68;
    }
    bVar2 = true;
    if (local_28 != 0) {
      iVar1 = FUN_00548c90(param_2,param_3,&DAT_007ce5e4);
      bVar2 = iVar1 != 0;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


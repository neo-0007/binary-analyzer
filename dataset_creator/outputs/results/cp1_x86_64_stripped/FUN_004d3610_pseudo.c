
bool FUN_004d3610(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

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
  if ((param_1 == 0) ||
     (((FUN_004d6040(param_1,&local_28,&local_30), local_30 != 0 && (param_4 != 0)) &&
      (iVar1 = FUN_00548c90(param_2,param_3,&DAT_007ce5df), iVar1 == 0)))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    if (local_28 != 0) {
      iVar1 = FUN_00548c90(param_2,param_3,&DAT_007ce5e4);
      bVar2 = iVar1 != 0;
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return bVar2;
}


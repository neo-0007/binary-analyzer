
void FUN_004db700(long param_1,long param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined1 auStack_78 [72];
  long local_30;
  
  lVar1 = param_1 + 0x40;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_004df1e0(auStack_78,param_2 + 0x40,param_2);
  FUN_004df0f0(lVar1,param_2 + 0x40,param_2);
  param_2 = param_2 + 0xc0;
  FUN_005cd6f0(param_1 + 0xc0,lVar1,auStack_78);
  FUN_005cd6f0(param_1,param_2,lVar1);
  FUN_005cd6f0(lVar1,param_2,auStack_78);
  FUN_005cda50(param_1 + 0x80,param_2);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


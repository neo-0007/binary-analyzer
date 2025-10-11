
long FUN_00412250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  lVar2 = FUN_00413660();
  if (lVar2 != 0) {
    iVar1 = FUN_00411e50(lVar2);
    if (0 < iVar1) {
      iVar1 = FUN_00414df0(lVar2,param_3,param_4);
      if (0 < iVar1) {
        FUN_00412190(lVar2,&local_28);
      }
    }
    FUN_00412f00(lVar2);
    lVar2 = local_28;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


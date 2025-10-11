
long FUN_0059e130(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined1 auStack_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_0059def0(auStack_38,param_1);
  if (iVar1 != 0) {
    lVar2 = FUN_004a7670();
    if (lVar2 != 0) {
      iVar1 = thunk_FUN_004a1fa0(lVar2,auStack_38,iVar1);
      if (iVar1 != 0) goto LAB_0059e181;
      thunk_FUN_004a2270(lVar2);
    }
  }
  lVar2 = 0;
LAB_0059e181:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


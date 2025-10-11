
long FUN_00553300(undefined8 param_1,undefined *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined1 auStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = FUN_00552fe0(param_1,auStack_38);
  lVar3 = lVar2;
  if (lVar2 != 0) {
    if (param_2 == (undefined *)0x0) {
      param_2 = &DAT_00806748;
    }
    iVar1 = FUN_00422820(auStack_38,param_2,8);
    if (iVar1 != 0) {
      lVar3 = 0;
      FUN_004227b0(param_3,lVar2);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


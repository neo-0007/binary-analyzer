
ulong FUN_004d33f0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    lVar2 = FUN_004d6140();
    if (lVar2 != 0) {
      iVar1 = FUN_00541530(lVar2,param_2);
      if (iVar1 != 0) {
        FUN_004d4a80(param_1);
        lVar2 = thunk_FUN_0041cdd0(param_2,"priv_len");
        uVar3 = 1;
        if (lVar2 != 0) {
          uVar3 = thunk_FUN_0041d520(lVar2,&local_28);
          if ((int)uVar3 != 0) {
            iVar1 = FUN_004d6020(param_1,local_28);
            uVar3 = (ulong)(iVar1 != 0);
          }
        }
        goto LAB_004d3431;
      }
    }
  }
  uVar3 = 0;
LAB_004d3431:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


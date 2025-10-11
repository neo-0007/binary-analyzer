
undefined8 FUN_0042a3b0(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_3 != 0) {
    param_3 = param_3 + 1;
    do {
      lVar2 = thunk_FUN_0041cdd0(param_2);
      if (lVar2 != 0) {
        local_38 = 0;
        iVar1 = FUN_0041dc20(lVar2,&local_38);
        if (iVar1 != 0) {
          iVar1 = FUN_00435f80(param_1,local_38);
          if (iVar1 != 0) goto LAB_0042a414;
        }
        uVar3 = 0;
        goto LAB_0042a432;
      }
LAB_0042a414:
      lVar2 = *param_3;
      param_3 = param_3 + 1;
    } while (lVar2 != 0);
  }
  uVar3 = 1;
LAB_0042a432:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


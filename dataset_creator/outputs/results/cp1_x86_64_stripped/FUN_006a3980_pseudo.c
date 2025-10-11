
undefined8 * FUN_006a3980(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined1 local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*param_2 + 0x20) == FUN_006a1890) {
    lVar3 = -1;
    lVar1 = *(long *)(param_2[2] + 0x10);
    if (lVar1 != 0) {
      lVar3 = thunk_FUN_007129d0(lVar1,0xffffffffffffffff);
      lVar3 = lVar1 + lVar3;
    }
    uVar2 = FUN_006a1740(lVar1,lVar3,&local_21);
    *param_1 = uVar2;
  }
  else {
    (**(code **)(*param_2 + 0x20))();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


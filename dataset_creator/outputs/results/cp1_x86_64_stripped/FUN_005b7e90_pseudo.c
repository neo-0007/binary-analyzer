
ulong FUN_005b7e90(long param_1,undefined1 (*param_2) [16])

{
  ulong uVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined1 auStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    FUN_007607a0(auStack_28);
    *(undefined8 *)param_2[3] = 0;
    *param_2 = (undefined1  [16])0x0;
    param_2[1] = (undefined1  [16])0x0;
    param_2[2] = (undefined1  [16])0x0;
    lVar2 = FUN_00602a60(auStack_28,param_2);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return (ulong)(lVar2 != 0);
    }
  }
  else if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar1 = FUN_005b73c0(param_2,param_1);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}



ulong FUN_005b7230(undefined8 *param_1,undefined4 *param_2)

{
  char cVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  uint *local_30;
  uint local_28 [2];
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = local_28;
  if ((param_2 == (undefined4 *)0x0) || (0x1e < (uint)param_2[1])) {
    uVar2 = 0xffffffff;
  }
  else {
    cVar1 = (&DAT_0080e790)[(int)param_2[1]];
    uVar2 = (ulong)(uint)(int)cVar1;
    if ((int)cVar1 != 0xffffffff) {
      local_20 = 0;
      local_28[0] = 0;
      local_18 = 0;
      uVar2 = FUN_005b5400(&local_30,*(undefined8 *)(param_2 + 2),*param_2,
                           CONCAT22(cVar1 >> 7,(short)cVar1) | 0x1000,0x2000);
      if (-1 < (int)uVar2) {
        *param_1 = local_20;
        uVar2 = (ulong)local_28[0];
      }
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


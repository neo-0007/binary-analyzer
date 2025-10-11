
undefined8 FUN_0059c970(undefined1 *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_006f4d00(param_2,"%d.%d.%d.%d%n",&local_34,&local_30,&local_2c,&local_28,&local_24);
  if (((iVar1 == 4) && ((local_34 | local_30 | local_2c | local_28) < 0x100)) &&
     ((*(char *)(param_2 + local_24) == '\0' ||
      (iVar1 = FUN_005466b0((int)*(char *)(param_2 + local_24),8), iVar1 != 0)))) {
    *param_1 = (char)local_34;
    uVar2 = 1;
    param_1[1] = (char)local_30;
    param_1[2] = (char)local_2c;
    param_1[3] = (char)local_28;
  }
  else {
    uVar2 = 0;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar2;
}


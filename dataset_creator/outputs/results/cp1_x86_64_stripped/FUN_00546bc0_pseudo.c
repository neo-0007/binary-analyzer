
void FUN_00546bc0(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined1 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  if (param_3 != 0) {
    puVar1 = (undefined1 *)((long)&local_14 + 3);
    do {
      *puVar1 = (char)param_3;
      param_3 = param_3 >> 8;
      puVar1 = puVar1 + -1;
    } while (param_3 != 0);
  }
  FUN_00546b20(param_1,param_2,&local_14,4);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


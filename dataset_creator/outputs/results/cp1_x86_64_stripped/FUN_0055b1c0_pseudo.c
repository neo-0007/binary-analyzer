
void FUN_0055b1c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = -1;
  uVar1 = FUN_0055ac00(*param_1,param_2,&local_14,param_3);
  uVar2 = 6;
  if ((local_14 != 0) && (uVar2 = 0x74, local_14 != 1)) {
    uVar2 = 0;
  }
  FUN_00559290(uVar1,uVar2);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}



undefined8 FUN_00512960(undefined8 param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_00512830(param_1,&local_30,&local_28);
  if (iVar1 == 0) {
LAB_005129d8:
    uVar2 = 0;
  }
  else {
    if (param_2 != 0) {
      iVar1 = FUN_004de450(param_2,local_30,local_28);
      if (iVar1 == 0) goto LAB_005129d8;
    }
    *param_3 = 0x38;
    uVar2 = 1;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


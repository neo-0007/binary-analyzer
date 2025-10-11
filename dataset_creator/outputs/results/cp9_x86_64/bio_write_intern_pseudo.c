
undefined8 bio_write_intern(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 uVar2;
  long lVar3;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 != (long *)0x0) {
    *param_4 = 0;
  }
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else if ((*(long *)(param_1 + 8) == 0) || (*(long *)(*(long *)(param_1 + 8) + 0x10) == 0)) {
    ERR_new();
    ERR_set_debug("../crypto/bio/bio_lib.c",0x15c,"bio_write_intern");
    ERR_set_error(0x20,0x79,0);
    uVar1 = 0xfffffffe;
  }
  else {
    if ((*(long *)(param_1 + 0x10) != 0) ||
       (uVar2 = param_2, lVar3 = param_1, *(long *)(param_1 + 0x18) != 0)) {
      lVar3 = 0;
      uVar2 = 1;
      uVar1 = bio_call_callback(param_1,3,param_2,param_3,0,0);
      if ((int)uVar1 < 1) goto LAB_004a8245;
    }
    if (*(int *)(param_1 + 0x28) == 0) {
      ERR_new(lVar3,uVar2);
      ERR_set_debug("../crypto/bio/bio_lib.c",0x166,"bio_write_intern");
      ERR_set_error(0x20,0x78,0);
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = (**(code **)(*(long *)(param_1 + 8) + 0x10))(param_1,param_2,param_3,&local_38);
      if (0 < (int)uVar1) {
        *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + local_38;
      }
      if ((*(long *)(param_1 + 0x10) != 0) || (*(long *)(param_1 + 0x18) != 0)) {
        uVar1 = bio_call_callback(param_1,0x83,param_2,param_3,0,0,(long)(int)uVar1,&local_38);
      }
      if (param_4 != (long *)0x0) {
        *param_4 = local_38;
      }
    }
  }
LAB_004a8245:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar1;
}


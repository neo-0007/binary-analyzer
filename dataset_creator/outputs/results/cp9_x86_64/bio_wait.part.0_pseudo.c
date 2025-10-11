
undefined8 bio_wait_part_0(BIO *param_1,long param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  time_t tVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = BIO_ctrl(param_1,0x69,0,&local_24);
  if ((lVar2 < 1) || (0x3ff < local_24)) {
    tVar3 = time((time_t *)0x0);
    uVar4 = 0;
    param_2 = param_2 - tVar3;
    if (-1 < param_2) {
      if (param_2 == 0) {
        if (1000 < param_3) {
          param_3 = 1000;
        }
      }
      else if ((ulong)(param_2 * 1000) < (ulong)param_3) {
        param_3 = (int)param_2 * 1000;
      }
      usleep(param_3 * 1000);
      uVar4 = 1;
    }
  }
  else {
    iVar1 = BIO_test_flags(param_1,1);
    uVar4 = BIO_socket_wait(local_24,iVar1,param_2);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


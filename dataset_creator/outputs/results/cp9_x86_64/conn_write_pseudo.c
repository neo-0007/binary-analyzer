
ulong conn_write(BIO *param_1,void *param_2,ulong param_3)

{
  bio_st *pbVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  ulong uVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  iovec local_98;
  undefined1 local_88 [16];
  iovec *local_78;
  size_t local_70;
  undefined8 *local_68;
  size_t local_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  long local_30;
  
  pbVar1 = param_1->prev_bio;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)&pbVar1->method != 5) {
    uVar2 = conn_state(param_1,pbVar1);
    uVar6 = (ulong)uVar2;
    if ((int)uVar2 < 1) goto LAB_00615f70;
  }
  piVar4 = __errno_location();
  *piVar4 = 0;
  iVar3 = BIO_test_flags(param_1,0x1000);
  if (iVar3 == 0) {
    uVar6 = write(*(int *)&param_1->next_bio,param_2,(long)(int)param_3);
    uVar6 = uVar6 & 0xffffffff;
LAB_00615f9e:
    BIO_clear_flags(param_1,0xf);
    if (0 < (int)uVar6) goto LAB_00615f70;
  }
  else {
    local_38 = (undefined1)pbVar1->shutdown;
    local_68 = &local_48;
    local_58._0_4_ = 0;
    local_58._4_4_ = 0;
    local_48 = 0x11;
    local_40 = 0x10000011a;
    local_60 = 0x11;
    local_70 = 1;
    local_88 = (undefined1  [16])0x0;
    local_98.iov_base = param_2;
    local_98.iov_len = (long)(int)param_3;
    local_78 = &local_98;
    uVar5 = sendmsg(*(int *)&param_1->next_bio,(msghdr *)local_88,0);
    uVar6 = uVar5 & 0xffffffff;
    if (-1 < (int)uVar5) {
      uVar6 = param_3 & 0xffffffff;
      BIO_clear_flags(param_1,0x1000);
      goto LAB_00615f9e;
    }
    BIO_clear_flags(param_1,0xf);
  }
  iVar3 = BIO_sock_should_retry((int)uVar6);
  if (iVar3 != 0) {
    BIO_set_flags(param_1,10);
  }
LAB_00615f70:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar6;
}


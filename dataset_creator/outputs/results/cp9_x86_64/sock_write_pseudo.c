
ulong sock_write(BIO *param_1,void *param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  iovec local_88;
  undefined1 local_78 [16];
  iovec *local_68;
  size_t local_60;
  undefined8 *local_58;
  size_t local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  piVar2 = __errno_location();
  *piVar2 = 0;
  iVar1 = BIO_test_flags(param_1,0x1000);
  if (iVar1 == 0) {
    uVar4 = write(*(int *)&param_1->next_bio,param_2,(long)(int)param_3);
    uVar4 = uVar4 & 0xffffffff;
LAB_004ae296:
    BIO_clear_flags(param_1,0xf);
    if (0 < (int)uVar4) goto LAB_004ae2a8;
  }
  else {
    local_58 = &local_38;
    local_28 = SUB81(param_1->prev_bio,0);
    local_48._0_4_ = 0;
    local_48._4_4_ = 0;
    local_38 = 0x11;
    local_30 = 0x10000011a;
    local_50 = 0x11;
    local_60 = 1;
    local_78 = (undefined1  [16])0x0;
    local_88.iov_base = param_2;
    local_88.iov_len = (long)(int)param_3;
    local_68 = &local_88;
    uVar3 = sendmsg(*(int *)&param_1->next_bio,(msghdr *)local_78,0);
    uVar4 = uVar3 & 0xffffffff;
    if (-1 < (int)uVar3) {
      uVar4 = (ulong)param_3;
      BIO_clear_flags(param_1,0x1000);
      goto LAB_004ae296;
    }
    BIO_clear_flags(param_1,0xf);
  }
  iVar1 = BIO_sock_should_retry((int)uVar4);
  if (iVar1 != 0) {
    BIO_set_flags(param_1,10);
  }
LAB_004ae2a8:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


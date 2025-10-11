
ulong sock_read(BIO *param_1,undefined1 *param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  size_t __nbytes;
  long in_FS_OFFSET;
  iovec local_98;
  undefined1 local_88 [16];
  iovec *local_78;
  size_t local_70;
  undefined1 *local_68;
  ulong local_60;
  undefined8 local_58;
  undefined1 local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (undefined1 *)0x0) {
    uVar6 = 0;
    goto LAB_004ae046;
  }
  piVar4 = __errno_location();
  *piVar4 = 0;
  lVar5 = BIO_ctrl(param_1,0x4c,0,(void *)0x0);
  __nbytes = (size_t)param_3;
  if (lVar5 == 0) {
    uVar6 = read(*(int *)&param_1->next_bio,param_2,__nbytes);
    uVar6 = uVar6 & 0xffffffff;
LAB_004ae030:
    BIO_clear_flags(param_1,0xf);
    iVar3 = (int)uVar6;
    if (0 < iVar3) goto LAB_004ae046;
    iVar2 = BIO_sock_should_retry(iVar3);
    if (iVar2 == 0) {
      if (iVar3 == 0) {
        *(uint *)&param_1->ptr = *(uint *)&param_1->ptr | 0x800;
      }
      goto LAB_004ae046;
    }
  }
  else {
    if (0x14 < __nbytes) {
      local_68 = local_48;
      local_98.iov_len = __nbytes - 0x15;
      local_58._0_4_ = 0;
      local_58._4_4_ = 0;
      local_98.iov_base = param_2 + 5;
      local_60 = 0x18;
      local_70 = 1;
      local_88 = (undefined1  [16])0x0;
      local_78 = &local_98;
      uVar7 = recvmsg(*(int *)&param_1->next_bio,(msghdr *)local_88,0);
      uVar6 = uVar7 & 0xffffffff;
      if ((-1 < (int)uVar7) && (local_60 != 0)) {
        if (local_60 < 0x10) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if (*(int *)(local_68 + 0xc) == 2) {
          uVar6 = (ulong)((int)uVar7 + 5);
          *param_2 = local_68[0x10];
          *(undefined2 *)(param_2 + 1) = 0x303;
          *(ushort *)(param_2 + 3) = (ushort)uVar7 << 8 | (ushort)uVar7 >> 8;
        }
      }
      goto LAB_004ae030;
    }
    *piVar4 = 0x16;
    uVar6 = 0xffffffff;
    BIO_clear_flags(param_1,0xf);
    iVar3 = BIO_sock_should_retry(-1);
    if (iVar3 == 0) goto LAB_004ae046;
  }
  BIO_set_flags(param_1,9);
LAB_004ae046:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


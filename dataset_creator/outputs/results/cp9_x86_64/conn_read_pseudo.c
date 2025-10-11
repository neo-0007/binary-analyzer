
ulong conn_read(BIO *param_1,undefined1 *param_2,int param_3)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
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
  
  uVar7 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)&param_1->prev_bio->method != 5) {
    uVar2 = conn_state();
    uVar7 = (ulong)uVar2;
    if ((int)uVar2 < 1) goto LAB_0061609e;
  }
  if (param_2 == (undefined1 *)0x0) goto LAB_0061609e;
  piVar5 = __errno_location();
  *piVar5 = 0;
  lVar6 = BIO_ctrl(param_1,0x4c,0,(void *)0x0);
  __nbytes = (size_t)param_3;
  if (lVar6 == 0) {
    uVar7 = read(*(int *)&param_1->next_bio,param_2,__nbytes);
    uVar7 = uVar7 & 0xffffffff;
LAB_0061608c:
    BIO_clear_flags(param_1,0xf);
    iVar4 = (int)uVar7;
    if (0 < iVar4) goto LAB_0061609e;
    iVar3 = BIO_sock_should_retry(iVar4);
    if (iVar3 == 0) {
      if (iVar4 == 0) {
        *(uint *)&param_1->ptr = *(uint *)&param_1->ptr | 0x800;
      }
      goto LAB_0061609e;
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
      uVar8 = recvmsg(*(int *)&param_1->next_bio,(msghdr *)local_88,0);
      uVar7 = uVar8 & 0xffffffff;
      if ((-1 < (int)uVar8) && (local_60 != 0)) {
        if (local_60 < 0x10) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if (*(int *)(local_68 + 0xc) == 2) {
          uVar7 = (ulong)((int)uVar8 + 5);
          *param_2 = local_68[0x10];
          *(undefined2 *)(param_2 + 1) = 0x303;
          *(ushort *)(param_2 + 3) = (ushort)uVar8 << 8 | (ushort)uVar8 >> 8;
        }
      }
      goto LAB_0061608c;
    }
    *piVar5 = 0x16;
    uVar7 = 0xffffffff;
    BIO_clear_flags(param_1,0xf);
    iVar4 = BIO_sock_should_retry(-1);
    if (iVar4 == 0) goto LAB_0061609e;
  }
  BIO_set_flags(param_1,9);
LAB_0061609e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar7;
}


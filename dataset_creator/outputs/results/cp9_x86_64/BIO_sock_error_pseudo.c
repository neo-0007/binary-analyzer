
int BIO_sock_error(int sock)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long in_FS_OFFSET;
  int local_18 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18[0] = 0;
  local_18[1] = 4;
  iVar1 = getsockopt(sock,1,4,local_18,(socklen_t *)(local_18 + 1));
  iVar2 = local_18[0];
  if (iVar1 < 0) {
    piVar3 = __errno_location();
    iVar2 = *piVar3;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


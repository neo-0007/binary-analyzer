
int BIO_accept_ex(int param_1,undefined1 *param_2,ulong param_3)

{
  int fd;
  int iVar1;
  sockaddr *__addr;
  int *piVar2;
  long in_FS_OFFSET;
  socklen_t local_ac;
  undefined1 local_a8 [120];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_ac = 0x70;
  if (param_2 == (undefined1 *)0x0) {
    param_2 = local_a8;
  }
  __addr = (sockaddr *)BIO_ADDR_sockaddr_noconst(param_2);
  fd = accept(param_1,__addr,&local_ac);
  if (fd == -1) {
    iVar1 = BIO_sock_should_retry(-1);
    if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("../crypto/bio/bio_sock2.c",0x13d,"BIO_accept_ex");
      piVar2 = __errno_location();
      ERR_set_error(2,*piVar2,"calling accept()");
      ERR_new();
      ERR_set_debug("../crypto/bio/bio_sock2.c",0x13f,"BIO_accept_ex");
      ERR_set_error(0x20,100,0);
    }
  }
  else {
    iVar1 = BIO_socket_nbio(fd,(uint)(param_3 >> 3) & 1);
    if (iVar1 == 0) {
      close(fd);
      fd = -1;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return fd;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


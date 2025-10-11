
undefined4 BIO_connect(int param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  socklen_t __len;
  sockaddr *__addr;
  int *piVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  undefined4 local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = 1;
  if (param_1 == -1) {
    ERR_new();
    uVar3 = 0;
    ERR_set_debug("../crypto/bio/bio_sock2.c",0x5f,"BIO_connect");
    ERR_set_error(0x20,0x87,0);
    goto LAB_004ac6fc;
  }
  iVar1 = BIO_socket_nbio(param_1,(uint)(param_3 >> 3) & 1);
  if (iVar1 != 0) {
    if ((param_3 & 4) != 0) {
      iVar1 = setsockopt(param_1,1,9,&local_34,4);
      if (iVar1 != 0) {
        ERR_new();
        ERR_set_debug("../crypto/bio/bio_sock2.c",0x69,"BIO_connect");
        piVar2 = __errno_location();
        ERR_set_error(2,*piVar2,"calling setsockopt()");
        ERR_new();
        ERR_set_debug("../crypto/bio/bio_sock2.c",0x6b,"BIO_connect");
        ERR_set_error(0x20,0x89,0);
        goto LAB_004ac7b0;
      }
    }
    if ((param_3 & 0x10) != 0) {
      iVar1 = setsockopt(param_1,6,1,&local_34,4);
      if (iVar1 != 0) {
        ERR_new();
        ERR_set_debug("../crypto/bio/bio_sock2.c",0x73,"BIO_connect");
        piVar2 = __errno_location();
        ERR_set_error(2,*piVar2,"calling setsockopt()");
        ERR_new();
        ERR_set_debug("../crypto/bio/bio_sock2.c",0x75,"BIO_connect");
        uVar3 = 0;
        ERR_set_error(0x20,0x8a,0);
        goto LAB_004ac6fc;
      }
    }
    __len = BIO_ADDR_sockaddr_size(param_2);
    uVar3 = 1;
    __addr = (sockaddr *)BIO_ADDR_sockaddr(param_2);
    iVar1 = connect(param_1,__addr,__len);
    if (iVar1 != -1) goto LAB_004ac6fc;
    iVar1 = BIO_sock_should_retry(-1);
    if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("../crypto/bio/bio_sock2.c",0x7d,"BIO_connect");
      piVar2 = __errno_location();
      ERR_set_error(2,*piVar2,"calling connect()");
      ERR_new();
      ERR_set_debug("../crypto/bio/bio_sock2.c",0x7f,"BIO_connect");
      ERR_set_error(0x20,0x67,0);
      uVar3 = 0;
      goto LAB_004ac6fc;
    }
  }
LAB_004ac7b0:
  uVar3 = 0;
LAB_004ac6fc:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


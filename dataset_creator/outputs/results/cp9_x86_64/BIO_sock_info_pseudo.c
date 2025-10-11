
undefined8 BIO_sock_info(int param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  sockaddr *__addr;
  undefined8 uVar2;
  int *piVar3;
  long in_FS_OFFSET;
  socklen_t local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
    local_24 = 0x70;
    __addr = (sockaddr *)BIO_ADDR_sockaddr_noconst(*param_3);
    iVar1 = getsockname(param_1,__addr,&local_24);
    if (iVar1 == -1) {
      ERR_new();
      ERR_set_debug("../crypto/bio/bio_sock.c",0x170,"BIO_sock_info");
      piVar3 = __errno_location();
      ERR_set_error(2,*piVar3,"calling getsockname()");
      ERR_new();
      ERR_set_debug("../crypto/bio/bio_sock.c",0x172,"BIO_sock_info");
      ERR_set_error(0x20,0x84,0);
    }
    else {
      uVar2 = 1;
      if (local_24 < 0x71) goto LAB_004ac3a2;
      ERR_new();
      ERR_set_debug("../crypto/bio/bio_sock.c",0x176,"BIO_sock_info");
      ERR_set_error(0x20,0x85,0);
    }
  }
  else {
    ERR_new();
    ERR_set_debug("../crypto/bio/bio_sock.c",0x17c,"BIO_sock_info");
    ERR_set_error(0x20,0x8c,0);
  }
  uVar2 = 0;
LAB_004ac3a2:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


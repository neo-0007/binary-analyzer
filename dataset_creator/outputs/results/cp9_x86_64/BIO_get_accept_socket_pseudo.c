
int BIO_get_accept_socket(char *host_port,int mode)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  void *local_38;
  void *local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (void *)0x0;
  local_30 = (void *)0x0;
  local_28 = 0;
  iVar1 = BIO_parse_hostserv(host_port,&local_38,&local_30,1);
  if (iVar1 != 0) {
    iVar1 = BIO_sock_init();
    if (iVar1 == 1) {
      iVar1 = BIO_lookup(local_38,local_30,1,0,1,&local_28);
      if (iVar1 == 0) {
        uVar2 = BIO_ADDRINFO_protocol(local_28);
        uVar3 = BIO_ADDRINFO_socktype(local_28);
        uVar4 = BIO_ADDRINFO_family(local_28);
        iVar1 = BIO_socket(uVar4,uVar3,uVar2,0);
        if (iVar1 == -1) goto LAB_004abfa4;
        uVar6 = BIO_ADDRINFO_address(local_28);
        iVar5 = BIO_listen(iVar1,uVar6,mode != 0);
        if (iVar5 == 0) {
          BIO_closesocket(iVar1);
          goto LAB_004abfa4;
        }
      }
      else {
LAB_004abfa4:
        iVar1 = -1;
      }
      BIO_ADDRINFO_free(local_28);
      CRYPTO_free(local_38);
      CRYPTO_free(local_30);
      goto LAB_004abfde;
    }
  }
  iVar1 = -1;
LAB_004abfde:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


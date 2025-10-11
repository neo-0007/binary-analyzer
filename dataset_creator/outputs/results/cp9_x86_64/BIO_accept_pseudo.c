
int BIO_accept(int sock,char **ip_port)

{
  int iVar1;
  int iVar2;
  char *__s;
  char *__s_00;
  size_t sVar3;
  size_t sVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  undefined1 auStack_b8 [120];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = BIO_accept_ex(CONCAT44(in_register_0000003c,sock),auStack_b8,0);
  if (iVar1 == -1) {
    iVar2 = BIO_sock_should_retry(-1);
    if (iVar2 == 0) {
      ERR_new();
      ERR_set_debug("../crypto/bio/bio_sock.c",0x103,"BIO_accept");
      piVar6 = __errno_location();
      ERR_set_error(2,*piVar6,"calling accept()");
      ERR_new();
      ERR_set_debug("../crypto/bio/bio_sock.c",0x105,"BIO_accept");
      ERR_set_error(0x20,100,0);
    }
    else {
      iVar1 = -2;
    }
    goto LAB_004ac1bf;
  }
  if (ip_port == (char **)0x0) goto LAB_004ac1bf;
  __s = (char *)BIO_ADDR_hostname_string(auStack_b8,1);
  __s_00 = (char *)BIO_ADDR_service_string(auStack_b8,1);
  if ((__s == (char *)0x0) || (__s_00 == (char *)0x0)) {
    *ip_port = (char *)0x0;
LAB_004ac102:
    ERR_new();
    ERR_set_debug("../crypto/bio/bio_sock.c",0x112,"BIO_accept");
    ERR_set_error(0x20,0xc0100,0);
    BIO_closesocket(iVar1);
    iVar1 = -1;
  }
  else {
    sVar3 = strlen(__s);
    sVar4 = strlen(__s_00);
    pcVar5 = (char *)CRYPTO_zalloc(sVar3 + 2 + sVar4,"../crypto/bio/bio_sock.c",0x10d);
    *ip_port = pcVar5;
    if (pcVar5 == (char *)0x0) goto LAB_004ac102;
    strcpy(pcVar5,__s);
    pcVar5 = *ip_port;
    sVar3 = strlen(pcVar5);
    pcVar5 = pcVar5 + sVar3;
    pcVar5[0] = ':';
    pcVar5[1] = '\0';
    strcat(*ip_port,__s_00);
  }
  CRYPTO_free(__s);
  CRYPTO_free(__s_00);
LAB_004ac1bf:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



int BIO_get_host_ip(char *str,uchar *ip)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_30;
  long local_28;
  long local_20;
  
  iVar2 = 0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  iVar1 = BIO_sock_init();
  if (iVar1 == 1) {
    iVar2 = BIO_lookup(str,0,0,2,1,&local_30);
    if (iVar2 == 0) {
      ERR_add_error_data(2,"host=",str);
      iVar2 = 0;
    }
    else {
      iVar2 = BIO_ADDRINFO_family(local_30);
      if (iVar2 == 2) {
        uVar3 = BIO_ADDRINFO_address(local_30);
        iVar2 = BIO_ADDR_rawaddress(uVar3,0,&local_28);
        if ((iVar2 != 0) && (iVar2 = 0, local_28 == 4)) {
          uVar3 = BIO_ADDRINFO_address(local_30);
          iVar2 = BIO_ADDR_rawaddress(uVar3,ip,&local_28);
        }
      }
      else {
        ERR_new();
        iVar2 = 0;
        ERR_set_debug("../crypto/bio/bio_sock.c",0x38,"BIO_get_host_ip");
        ERR_set_error(0x20,0x6b,0);
      }
      BIO_ADDRINFO_free(local_30);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


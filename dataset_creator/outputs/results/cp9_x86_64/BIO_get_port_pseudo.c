
int BIO_get_port(char *str,ushort *port_ptr)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  if (str == (char *)0x0) {
    ERR_new();
    uVar4 = 0;
    ERR_set_debug("../crypto/bio/bio_sock.c",0x4f,"BIO_get_port");
    ERR_set_error(0x20,0x71,0);
  }
  else {
    uVar4 = 0;
    iVar2 = BIO_sock_init();
    if (iVar2 == 1) {
      iVar2 = BIO_lookup(0,str,0,2,1,&local_28);
      if (iVar2 == 0) {
        ERR_add_error_data(2,"host=",str);
        uVar4 = 0;
      }
      else {
        iVar2 = BIO_ADDRINFO_family(local_28);
        if (iVar2 == 2) {
          uVar3 = BIO_ADDRINFO_address(local_28);
          uVar1 = BIO_ADDR_rawport(uVar3);
          *port_ptr = uVar1 << 8 | uVar1 >> 8;
        }
        else {
          ERR_new();
          ERR_set_debug("../crypto/bio/bio_sock.c",0x58,"BIO_get_port");
          ERR_set_error(0x20,0x8d,0);
        }
        uVar4 = (uint)(iVar2 == 2);
        BIO_ADDRINFO_free(local_28);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


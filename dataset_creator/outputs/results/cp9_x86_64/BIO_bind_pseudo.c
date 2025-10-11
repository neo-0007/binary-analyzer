
undefined8 BIO_bind(int param_1,undefined8 param_2,ulong param_3)

{
  socklen_t __len;
  int iVar1;
  sockaddr *__addr;
  undefined8 uVar2;
  int *piVar3;
  long in_FS_OFFSET;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 1;
  if (param_1 == -1) {
    ERR_new();
    ERR_set_debug("../crypto/bio/bio_sock2.c",0x9d,"BIO_bind");
    ERR_set_error(0x20,0x87,0);
    uVar2 = 0;
  }
  else {
    if ((param_3 & 1) != 0) {
      iVar1 = setsockopt(param_1,1,2,&local_24,4);
      if (iVar1 != 0) {
        ERR_new();
        ERR_set_debug("../crypto/bio/bio_sock2.c",0xa9,"BIO_bind");
        piVar3 = __errno_location();
        ERR_set_error(2,*piVar3,"calling setsockopt()");
        ERR_new();
        ERR_set_debug("../crypto/bio/bio_sock2.c",0xab,"BIO_bind");
        ERR_set_error(0x20,0x8b,0);
        uVar2 = 0;
        goto LAB_004ac969;
      }
    }
    __len = BIO_ADDR_sockaddr_size(param_2);
    __addr = (sockaddr *)BIO_ADDR_sockaddr(param_2);
    iVar1 = bind(param_1,__addr,__len);
    uVar2 = 1;
    if (iVar1 != 0) {
      ERR_new();
      ERR_set_debug("../crypto/bio/bio_sock2.c",0xb2,"BIO_bind");
      piVar3 = __errno_location();
      ERR_set_error(2,*piVar3,"calling bind()");
      ERR_new();
      ERR_set_debug("../crypto/bio/bio_sock2.c",0xb4,"BIO_bind");
      ERR_set_error(0x20,0x75,0);
      uVar2 = 0;
    }
  }
LAB_004ac969:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


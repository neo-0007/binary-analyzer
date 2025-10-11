
undefined4 BIO_listen(int param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  uint local_3c;
  int local_38;
  socklen_t local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_3c = 1;
  local_34 = 4;
  if (param_1 == -1) {
    ERR_new();
    uVar3 = 0;
    ERR_set_debug("../crypto/bio/bio_sock2.c",0xe7,"BIO_listen");
    ERR_set_error(0x20,0x87,0);
  }
  else {
    iVar1 = getsockopt(param_1,1,3,&local_38,&local_34);
    if ((iVar1 == 0) && (local_34 == 4)) {
      iVar1 = BIO_socket_nbio(param_1,(uint)((param_3 & 0xffffffff) >> 3) & 1);
      uVar3 = 0;
      if (iVar1 != 0) {
        if ((param_3 & 4) != 0) {
          iVar1 = setsockopt(param_1,1,9,&local_3c,4);
          if (iVar1 != 0) {
            ERR_new();
            ERR_set_debug("../crypto/bio/bio_sock2.c",0xfa,"BIO_listen");
            piVar2 = __errno_location();
            ERR_set_error(2,*piVar2,"calling setsockopt()");
            ERR_new();
            ERR_set_debug("../crypto/bio/bio_sock2.c",0xfc,"BIO_listen");
            ERR_set_error(0x20,0x89,0);
            goto LAB_004acba3;
          }
        }
        if ((param_3 & 0x10) != 0) {
          iVar1 = setsockopt(param_1,6,1,&local_3c,4);
          if (iVar1 != 0) {
            ERR_new();
            ERR_set_debug("../crypto/bio/bio_sock2.c",0x104,"BIO_listen");
            piVar2 = __errno_location();
            ERR_set_error(2,*piVar2,"calling setsockopt()");
            ERR_new();
            ERR_set_debug("../crypto/bio/bio_sock2.c",0x106,"BIO_listen");
            ERR_set_error(0x20,0x8a,0);
            goto LAB_004acba3;
          }
        }
        iVar1 = BIO_ADDR_family(param_2);
        if (iVar1 == 10) {
          local_3c = (int)param_3 >> 1 & 1;
          iVar1 = setsockopt(param_1,0x29,0x1a,&local_3c,4);
          if (iVar1 != 0) {
            ERR_new();
            ERR_set_debug("../crypto/bio/bio_sock2.c",0x115,"BIO_listen");
            piVar2 = __errno_location();
            ERR_set_error(2,*piVar2,"calling setsockopt()");
            ERR_new();
            ERR_set_debug("../crypto/bio/bio_sock2.c",0x117,"BIO_listen");
            ERR_set_error(0x20,0x88,0);
            goto LAB_004acba3;
          }
        }
        iVar1 = BIO_bind(param_1,param_2,param_3 & 0xffffffff);
        if (iVar1 != 0) {
          if (local_38 != 2) {
            iVar1 = listen(param_1,0x1000);
            if (iVar1 == -1) {
              ERR_new();
              ERR_set_debug("../crypto/bio/bio_sock2.c",0x121,"BIO_listen");
              piVar2 = __errno_location();
              ERR_set_error(2,*piVar2,"calling listen()");
              ERR_new();
              ERR_set_debug("../crypto/bio/bio_sock2.c",0x123,"BIO_listen");
              ERR_set_error(0x20,0x77,0);
              goto LAB_004acba3;
            }
          }
          uVar3 = 1;
        }
      }
    }
    else {
      ERR_new();
      ERR_set_debug("../crypto/bio/bio_sock2.c",0xee,"BIO_listen");
      piVar2 = __errno_location();
      ERR_set_error(2,*piVar2,"calling getsockopt()");
      ERR_new();
      ERR_set_debug("../crypto/bio/bio_sock2.c",0xf0,"BIO_listen");
      uVar3 = 0;
      ERR_set_error(0x20,0x86,0);
    }
  }
LAB_004acba3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


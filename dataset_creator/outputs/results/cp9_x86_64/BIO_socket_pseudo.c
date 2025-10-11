
int BIO_socket(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = BIO_sock_init();
  if (iVar1 == 1) {
    iVar1 = socket(param_1,param_2,param_3);
    if (iVar1 == -1) {
      ERR_new();
      ERR_set_debug("../crypto/bio/bio_sock2.c",0x32,"BIO_socket");
      piVar2 = __errno_location();
      ERR_set_error(2,*piVar2,"calling socket()");
      ERR_new();
      ERR_set_debug("../crypto/bio/bio_sock2.c",0x34,"BIO_socket");
      ERR_set_error(0x20,0x76,0);
    }
    else {
      setsockopt(iVar1,6,0x1f,"tls",4);
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}


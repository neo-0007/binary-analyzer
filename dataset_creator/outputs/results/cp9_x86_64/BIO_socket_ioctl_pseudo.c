
int BIO_socket_ioctl(int fd,long type,void *arg)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = ioctl(fd,type);
  if (-1 < iVar1) {
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("../crypto/bio/bio_sock.c",0xcf,"BIO_socket_ioctl");
  piVar2 = __errno_location();
  ERR_set_error(2,*piVar2,"calling ioctlsocket()");
  return iVar1;
}


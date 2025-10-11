
int FUN_004aef40(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_0076ebb0();
  if (-1 < iVar1) {
    return iVar1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/bio/bio_sock.c",0xcf,"BIO_socket_ioctl");
  puVar2 = (undefined4 *)FUN_006d2700();
  FUN_0051f8f0(2,*puVar2,"calling ioctlsocket()");
  return iVar1;
}


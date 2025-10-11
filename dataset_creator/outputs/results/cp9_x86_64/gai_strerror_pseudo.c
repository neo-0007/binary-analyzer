
char * gai_strerror(int __ecode)

{
  long lVar1;
  char *pcVar2;
  
  if (__ecode == -9) {
    lVar1 = 0;
  }
  else if (__ecode == -3) {
    lVar1 = 1;
  }
  else if (__ecode == -1) {
    lVar1 = 2;
  }
  else if (__ecode == -4) {
    lVar1 = 3;
  }
  else if (__ecode == -6) {
    lVar1 = 4;
  }
  else if (__ecode == -10) {
    lVar1 = 5;
  }
  else if (__ecode == -5) {
    lVar1 = 6;
  }
  else if (__ecode == -2) {
    lVar1 = 7;
  }
  else if (__ecode == -8) {
    lVar1 = 8;
  }
  else if (__ecode == -7) {
    lVar1 = 9;
  }
  else if (__ecode == -0xb) {
    lVar1 = 10;
  }
  else if (__ecode == -100) {
    lVar1 = 0xb;
  }
  else if (__ecode == -0x65) {
    lVar1 = 0xc;
  }
  else if (__ecode == -0x66) {
    lVar1 = 0xd;
  }
  else if (__ecode == -0x67) {
    lVar1 = 0xe;
  }
  else if (__ecode == -0x68) {
    lVar1 = 0xf;
  }
  else {
    pcVar2 = "Unknown error";
    lVar1 = 0x10;
    if (__ecode != -0x69) goto LAB_00763cd1;
  }
  pcVar2 = "Address family for hostname not supported" + *(ushort *)(msgidx + lVar1 * 4 + 2);
LAB_00763cd1:
  pcVar2 = (char *)dcgettext(&_libc_intl_domainname,pcVar2,5);
  return pcVar2;
}



int BIO_ADDRINFO_protocol(long param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0xc), iVar1 == 0)) &&
     (*(int *)(param_1 + 4) != 1)) {
    if (*(int *)(param_1 + 8) != 1) {
      iVar1 = 0;
      if (*(int *)(param_1 + 8) == 2) {
        iVar1 = 0x11;
      }
      return iVar1;
    }
    iVar1 = 6;
  }
  return iVar1;
}


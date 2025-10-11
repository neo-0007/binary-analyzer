
int OPENSSL_hexchar2int(char param_1)

{
  int iVar1;
  
  iVar1 = -1;
  if ((byte)(param_1 - 0x30U) < 0x37) {
    iVar1 = (int)(char)CSWTCH_28[(byte)(param_1 - 0x30U)];
  }
  return iVar1;
}


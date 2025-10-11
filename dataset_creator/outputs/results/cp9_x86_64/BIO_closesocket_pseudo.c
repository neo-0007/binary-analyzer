
uint BIO_closesocket(int param_1)

{
  uint uVar1;
  
  if (-1 < param_1) {
    uVar1 = close(param_1);
    return ~uVar1 >> 0x1f;
  }
  return 0;
}


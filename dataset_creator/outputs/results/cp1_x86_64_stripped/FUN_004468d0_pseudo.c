
long FUN_004468d0(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  iVar1 = FUN_0043b840();
  if (iVar1 != 0) {
    lVar2 = FUN_0041aec0(0x1c0,"../providers/implementations/ciphers/cipher_aes_wrp.c",0x3b);
    if (lVar2 != 0) {
      FUN_00486970(lVar2,0xc0,0x40,0x20,0x10002,0x202,0,0);
      *(byte *)(lVar2 + 0x3c) = *(byte *)(lVar2 + 0x3c) & 0xfe | *(long *)(lVar2 + 0x20) == 4;
    }
  }
  return lVar2;
}


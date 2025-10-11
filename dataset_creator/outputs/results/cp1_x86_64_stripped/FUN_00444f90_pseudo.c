
long FUN_00444f90(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = FUN_0043b840();
  if (iVar1 != 0) {
    lVar2 = FUN_0041aec0(0x3b0,"../providers/implementations/ciphers/cipher_aes_ocb.c",0x13a);
    if (lVar2 != 0) {
      uVar3 = FUN_00445370(0xc0);
      FUN_00486970(lVar2,0xc0,0x80,0x60,0x10003,3,uVar3,0);
      *(undefined8 *)(lVar2 + 0x368) = 0x10;
    }
  }
  return lVar2;
}


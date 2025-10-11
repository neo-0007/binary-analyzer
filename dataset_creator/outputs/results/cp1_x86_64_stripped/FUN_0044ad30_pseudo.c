
long FUN_0044ad30(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = FUN_0043b840();
  if (iVar1 != 0) {
    lVar2 = FUN_0041aec0(0x358,"../providers/implementations/ciphers/cipher_chacha20_poly1305.c",
                         0x2e);
    if (lVar2 != 0) {
      uVar3 = FUN_0044b850(0x100);
      FUN_00486970(lVar2,0x100,8,0x60,0,3,uVar3,0);
      *(undefined8 *)(lVar2 + 0x340) = 0xc;
      *(undefined8 *)(lVar2 + 0x348) = 0xffffffffffffffff;
      FUN_0044a0c0(lVar2 + 0xc0);
    }
  }
  return lVar2;
}


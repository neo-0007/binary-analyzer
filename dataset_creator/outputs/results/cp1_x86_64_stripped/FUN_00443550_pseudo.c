
long FUN_00443550(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = FUN_0043b840();
  if (iVar1 != 0) {
    lVar2 = FUN_0041aec0(0x1a0,"../providers/implementations/ciphers/cipher_aes_ccm.c",0x1e);
    if (lVar2 != 0) {
      uVar3 = FUN_004436f0(0x100);
      FUN_00487a20(lVar2,0x100,uVar3);
    }
  }
  return lVar2;
}


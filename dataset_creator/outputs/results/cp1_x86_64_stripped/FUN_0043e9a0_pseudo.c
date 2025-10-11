
long FUN_0043e9a0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = FUN_0043b840();
  if (iVar1 != 0) {
    lVar2 = FUN_0041aec0(0x1c0,"../providers/implementations/ciphers/cipher_aes.c",0x45);
    if (lVar2 != 0) {
      uVar3 = FUN_00443f50(0x80);
      FUN_00486970(lVar2,0x80,8,0x80,4,0,uVar3,param_1);
    }
  }
  return lVar2;
}


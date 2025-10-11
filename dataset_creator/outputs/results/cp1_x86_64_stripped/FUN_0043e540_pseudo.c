
long FUN_0043e540(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  iVar1 = FUN_0043b840();
  if (iVar1 != 0) {
    lVar2 = FUN_0041ad90(0x1c0,"../providers/implementations/ciphers/cipher_aes.c",0x2a);
    if (lVar2 == 0) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/ciphers/cipher_aes.c",0x2c,"aes_dupctx");
      FUN_0051f8f0(0x39,0xc0100,0);
    }
    else {
      (**(code **)(*(long *)(param_1 + 0xa8) + 0x10))(lVar2,param_1);
    }
  }
  return lVar2;
}



long FUN_00445780(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  iVar1 = FUN_0043b840();
  if (iVar1 != 0) {
    lVar2 = FUN_0041ad90(0x78,"../providers/implementations/ciphers/cipher_aes_siv.c",0x43);
    if (lVar2 == 0) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/ciphers/cipher_aes_siv.c",0x45,"siv_dupctx");
      FUN_0051f8f0(0x39,0xc0100,0);
    }
    else {
      iVar1 = (**(code **)(*(long *)(param_1 + 0x68) + 0x28))(param_1,lVar2);
      if (iVar1 == 0) {
        FUN_0041ad60(lVar2,"../providers/implementations/ciphers/cipher_aes_siv.c",0x49);
        return 0;
      }
    }
  }
  return lVar2;
}


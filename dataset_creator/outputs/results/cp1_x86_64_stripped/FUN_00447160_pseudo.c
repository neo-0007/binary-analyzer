
long FUN_00447160(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_0043b840();
  if (iVar1 != 0) {
    if (((*(long *)(param_1 + 0x2b0) == 0) ||
        (lVar2 = 0, *(long *)(param_1 + 0x2b0) == param_1 + 0xc0)) &&
       ((*(long *)(param_1 + 0x2b8) == 0 ||
        (lVar2 = 0, *(long *)(param_1 + 0x2b8) == param_1 + 0x1b8)))) {
      lVar2 = FUN_0041ad90(0x2d8,"../providers/implementations/ciphers/cipher_aes_xts.c",0x94);
      if (lVar2 == 0) {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/ciphers/cipher_aes_xts.c",0x96,"aes_xts_dupctx");
        FUN_0051f8f0(0x39,0xc0100,0);
      }
      else {
        (**(code **)(*(long *)(param_1 + 0xa8) + 0x10))(lVar2,param_1);
      }
    }
    return lVar2;
  }
  return 0;
}


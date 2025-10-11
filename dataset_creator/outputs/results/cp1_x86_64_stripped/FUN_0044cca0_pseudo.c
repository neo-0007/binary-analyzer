
undefined8 FUN_0044cca0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar3 = FUN_00486180();
  if ((int)uVar3 != 0) {
    lVar4 = FUN_0041cdd0(param_2,"randkey");
    uVar3 = 1;
    if (lVar4 != 0) {
      uVar1 = *(ulong *)(param_1 + 0x18);
      lVar4 = *(long *)(lVar4 + 0x10);
      if ((uVar1 != 0) &&
         (iVar2 = FUN_00429760(*(undefined8 *)(param_1 + 0xb8),lVar4,uVar1,0), 0 < iVar2)) {
        FUN_004d1de0(lVar4);
        if (0xf < uVar1) {
          FUN_004d1de0(lVar4 + 8);
        }
        if (0x17 < uVar1) {
          FUN_004d1de0(lVar4 + 0x10);
          return 1;
        }
      }
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/ciphers/cipher_tdes_common.c",0x91,
                   "ossl_tdes_get_ctx_params");
      FUN_0051f8f0(0x39,0x79,0);
      return 0;
    }
  }
  return uVar3;
}


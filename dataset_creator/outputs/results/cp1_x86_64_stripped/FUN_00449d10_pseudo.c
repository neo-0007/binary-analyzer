
undefined4 FUN_00449d10(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_0041cdd0(param_2,"ivlen");
  if (lVar2 != 0) {
    iVar1 = thunk_FUN_0041d9c0(lVar2,0x10);
    if (iVar1 == 0) {
      FUN_0051f420();
      uVar3 = 0x51;
      goto LAB_00449d91;
    }
  }
  lVar2 = FUN_0041cdd0(param_2,"keylen");
  if (lVar2 != 0) {
    iVar1 = thunk_FUN_0041d9c0(lVar2,0x20);
    if (iVar1 == 0) {
      FUN_0051f420();
      uVar3 = 0x56;
LAB_00449d91:
      FUN_0051f540("../providers/implementations/ciphers/cipher_chacha20.c",uVar3,
                   "chacha20_get_ctx_params");
      FUN_0051f8f0(0x39,0x68,0);
      return 0;
    }
  }
  return 1;
}


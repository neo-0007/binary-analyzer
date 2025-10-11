
undefined4 FUN_0044c0a0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_0041cdd0(param_2,"ivlen");
  if (lVar2 != 0) {
    iVar1 = thunk_FUN_0041d9c0(lVar2,0);
    if (iVar1 == 0) {
      FUN_0051f420();
      uVar3 = 0x82;
      goto LAB_0044c149;
    }
  }
  lVar2 = FUN_0041cdd0(param_2,"keylen");
  if (lVar2 != 0) {
    iVar1 = thunk_FUN_0041d9c0(lVar2,0);
    if (iVar1 == 0) {
      FUN_0051f420();
      uVar3 = 0x87;
      goto LAB_0044c149;
    }
  }
  lVar2 = FUN_0041cdd0(param_2,"tls-mac");
  if (lVar2 != 0) {
    iVar1 = FUN_0041e3e0(lVar2,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
    if (iVar1 == 0) {
      FUN_0051f420();
      uVar3 = 0x8d;
LAB_0044c149:
      FUN_0051f540("../providers/implementations/ciphers/cipher_null.c",uVar3,"null_get_ctx_params")
      ;
      FUN_0051f8f0(0x39,0x68,0);
      return 0;
    }
  }
  return 1;
}


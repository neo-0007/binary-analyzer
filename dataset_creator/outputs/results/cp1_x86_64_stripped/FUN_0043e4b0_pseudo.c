
undefined8 FUN_0043e4b0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_0041cdd0(param_2,"cts_mode");
  if (lVar2 != 0) {
    lVar3 = FUN_0044bc50(*(undefined4 *)(param_1 + 0x38));
    if (lVar3 != 0) {
      iVar1 = FUN_0041e1a0(lVar2,lVar3);
      if (iVar1 != 0) goto LAB_0043e4f3;
    }
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/ciphers/cipher_aes_cts.inc",0x38,
                 "aes_cbc_cts_get_ctx_params");
    FUN_0051f8f0(0x39,0x68,0);
    return 0;
  }
LAB_0043e4f3:
  uVar4 = FUN_00486180(param_1,param_2);
  return uVar4;
}


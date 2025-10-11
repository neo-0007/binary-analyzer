
undefined8 FUN_00449950(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = thunk_FUN_0041cdd0(param_2,"cts_mode");
  if (lVar2 == 0) {
LAB_004499ca:
    uVar3 = FUN_004863f0(param_1,param_2);
    return uVar3;
  }
  if (*(int *)(lVar2 + 8) == 4) {
    iVar1 = FUN_0044bc80(*(undefined8 *)(lVar2 + 0x10));
    if (-1 < iVar1) {
      *(int *)(param_1 + 0x38) = iVar1;
      goto LAB_004499ca;
    }
  }
  FUN_0051f420();
  FUN_0051f540("../providers/implementations/ciphers/cipher_camellia_cts.inc",0x55,
               "camellia_cbc_cts_set_ctx_params");
  FUN_0051f8f0(0x39,0x68,0);
  return 0;
}


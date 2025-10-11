
undefined4 FUN_0044c280(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = thunk_FUN_0041cdd0(param_2,"tls-mac-size");
  if (lVar2 != 0) {
    iVar1 = thunk_FUN_0041d830(lVar2,param_1 + 8);
    if (iVar1 == 0) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/ciphers/cipher_null.c",0xa9,"null_set_ctx_params");
      FUN_0051f8f0(0x39,0x67,0);
      return 0;
    }
  }
  return 1;
}


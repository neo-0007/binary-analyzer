
undefined8 aes_dinit(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 in_R9;
  
  iVar1 = ossl_cipher_generic_dinit();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = aes_set_ctx_params(param_1,in_R9);
  return uVar2;
}


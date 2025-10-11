
undefined1  [16] ossl_chacha20_initctx(undefined8 param_1)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  
  uVar2 = ossl_prov_cipher_hw_chacha20(0x100);
  ossl_cipher_generic_initkey(param_1,0x100,8,0x80,0,2);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  return auVar1;
}


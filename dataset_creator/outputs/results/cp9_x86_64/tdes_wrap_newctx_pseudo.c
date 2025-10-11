
void tdes_wrap_newctx(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_cipher_hw_tdes_wrap_cbc();
  ossl_tdes_newctx(param_1,0x10002,0xc0,0x40,0,0x12,uVar1);
  return;
}


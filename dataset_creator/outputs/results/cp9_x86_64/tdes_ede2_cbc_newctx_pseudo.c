
void tdes_ede2_cbc_newctx(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_cipher_hw_tdes_ede2_cbc();
  ossl_tdes_newctx(param_1,2,0x80,0x40,0x40,0x10,uVar1);
  return;
}


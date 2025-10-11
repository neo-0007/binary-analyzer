
void tdes_ede2_ecb_newctx(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_cipher_hw_tdes_ede2_ecb();
  ossl_tdes_newctx(param_1,1,0x80,0x40,0,0x10,uVar1);
  return;
}


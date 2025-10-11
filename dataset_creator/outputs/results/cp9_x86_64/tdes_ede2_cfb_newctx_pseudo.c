
void tdes_ede2_cfb_newctx(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_cipher_hw_tdes_ede2_cfb();
  ossl_tdes_newctx(param_1,3,0x80,8,0x40,0x10,uVar1);
  return;
}


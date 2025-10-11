
void tdes_ede3_cfb_newctx(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_cipher_hw_tdes_ede3_cfb();
  ossl_tdes_newctx(param_1,3,0xc0,8,0x40,0x10,uVar1);
  return;
}


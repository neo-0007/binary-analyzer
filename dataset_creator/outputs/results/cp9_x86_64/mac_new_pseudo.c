
void mac_new(void)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_ctx_get0_libctx();
  ossl_mac_key_new(uVar1,0);
  return;
}



long blake2_mac_new(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0xc0,"../providers/implementations/macs/blake2_mac_impl.c",0x31);
    if (lVar2 != 0) {
      ossl_blake2s_param_init(lVar2 + 0x80);
    }
  }
  return lVar2;
}


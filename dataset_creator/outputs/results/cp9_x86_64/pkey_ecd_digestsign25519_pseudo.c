
undefined8
pkey_ecd_digestsign25519
          (undefined8 param_1,long param_2,ulong *param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = EVP_MD_CTX_get_pkey_ctx();
  lVar1 = evp_pkey_get_legacy(*(undefined8 *)(lVar1 + 0x88));
  if (param_2 != 0) {
    if (*param_3 < 0x40) {
      ERR_new();
      ERR_set_debug("../crypto/ec/ecx_meth.c",0x330,"pkey_ecd_digestsign25519");
      ERR_set_error(0x10,100,0);
      return 0;
    }
    uVar2 = ossl_ed25519_sign(param_2,param_4,param_5,lVar1 + 0x11,*(undefined8 *)(lVar1 + 0x50),0,0
                             );
    if ((int)uVar2 == 0) {
      return uVar2;
    }
  }
  *param_3 = 0x40;
  return 1;
}


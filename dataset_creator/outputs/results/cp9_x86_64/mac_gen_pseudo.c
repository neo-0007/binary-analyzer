
long mac_gen(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = ossl_prov_is_running();
  if ((iVar1 != 0) && (param_1 != (undefined8 *)0x0)) {
    lVar2 = ossl_mac_key_new(*param_1,0);
    if (lVar2 == 0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x1e9,"mac_gen");
      ERR_set_error(0x39,0xc0100,0);
    }
    else if ((*(byte *)(param_1 + 1) & 3) != 0) {
      if (param_1[2] == 0) {
        ERR_new();
        ERR_set_debug("../providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x1f2,"mac_gen");
        ERR_set_error(0x39,0x9e,0);
        ossl_mac_key_free(lVar2);
        lVar2 = 0;
      }
      else {
        iVar1 = ossl_prov_cipher_copy(lVar2 + 0x28,param_1 + 4);
        if (iVar1 == 0) {
          ossl_mac_key_free(lVar2);
          ERR_new();
          ERR_set_debug("../providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x1ff,"mac_gen");
          ERR_set_error(0x39,0xc0103,0);
          lVar2 = 0;
        }
        else {
          ossl_prov_cipher_reset(param_1 + 4);
          *(undefined8 *)(lVar2 + 0x18) = param_1[2];
          *(undefined8 *)(lVar2 + 0x20) = param_1[3];
          param_1[3] = 0;
          param_1[2] = 0;
        }
      }
    }
    return lVar2;
  }
  return 0;
}


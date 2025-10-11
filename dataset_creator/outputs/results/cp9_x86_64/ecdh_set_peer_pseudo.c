
undefined8 ecdh_set_peer(undefined8 *param_1,EC_KEY *param_2)

{
  EC_KEY *key;
  int iVar1;
  EC_GROUP *a;
  EC_GROUP *b;
  undefined8 uVar2;
  BN_CTX *ctx;
  
  iVar1 = ossl_prov_is_running();
  if (((iVar1 != 0) && (param_1 != (undefined8 *)0x0)) && (param_2 != (EC_KEY *)0x0)) {
    key = (EC_KEY *)param_1[1];
    a = EC_KEY_get0_group(key);
    b = EC_KEY_get0_group(param_2);
    uVar2 = ossl_ec_key_get_libctx(key);
    ctx = (BN_CTX *)BN_CTX_new_ex(uVar2);
    if (ctx == (BN_CTX *)0x0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/exchange/ecdh_exch.c",0x81,"ecdh_match_params");
      ERR_set_error(0x39,0xc0100,0);
    }
    else {
      if (((a == (EC_GROUP *)0x0) || (b == (EC_GROUP *)0x0)) ||
         (iVar1 = EC_GROUP_cmp(a,b,ctx), iVar1 != 0)) {
        ERR_new();
        ERR_set_debug("../providers/implementations/exchange/ecdh_exch.c",0x88,"ecdh_match_params");
        ERR_set_error(0x39,0xcb,0);
        BN_CTX_free(ctx);
        return 0;
      }
      BN_CTX_free(ctx);
      iVar1 = ossl_ec_check_key(*param_1,param_2,1);
      if ((iVar1 != 0) && (iVar1 = EC_KEY_up_ref(param_2), iVar1 != 0)) {
        EC_KEY_free((EC_KEY *)param_1[2]);
        param_1[2] = param_2;
        return 1;
      }
    }
  }
  return 0;
}


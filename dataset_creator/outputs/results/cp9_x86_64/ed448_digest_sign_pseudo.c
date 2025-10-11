
undefined4
ed448_digest_sign(undefined8 *param_1,long param_2,undefined8 *param_3,ulong param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  int iVar2;
  
  lVar1 = param_1[1];
  iVar2 = ossl_prov_is_running();
  if (iVar2 == 0) {
    return 0;
  }
  if (param_2 != 0) {
    if (param_4 < 0x72) {
      ERR_new();
      ERR_set_debug("../providers/implementations/signature/eddsa_sig.c",0xc3,"ed448_digest_sign");
      ERR_set_error(0x39,0x6a,0);
      return 0;
    }
    iVar2 = ossl_ed448_sign(*param_1,param_2,param_5,param_6,lVar1 + 0x11,
                            *(undefined8 *)(lVar1 + 0x50),0,0,*(undefined8 *)(lVar1 + 8));
    if (iVar2 == 0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/signature/eddsa_sig.c",0xcc,"ed448_digest_sign");
      ERR_set_error(0x39,0xaf,0);
      return 0;
    }
  }
  *param_3 = 0x72;
  return 1;
}


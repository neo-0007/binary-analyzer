
undefined8 dh_gen_set_params(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if (((param_2 == 0) || (iVar1 = dh_gen_common_set_params_part_0(), iVar1 != 0)) &&
     ((lVar2 = OSSL_PARAM_locate_const(param_2,"safeprime-generator"), lVar2 == 0 ||
      (iVar1 = OSSL_PARAM_get_int(lVar2,param_1 + 0x40), iVar1 != 0)))) {
    lVar2 = OSSL_PARAM_locate_const(param_2,"gindex");
    if (((((lVar2 == 0) && (lVar2 = OSSL_PARAM_locate_const(param_2,"pcounter"), lVar2 == 0)) &&
         (lVar2 = OSSL_PARAM_locate_const(param_2,"hindex"), lVar2 == 0)) &&
        ((lVar2 = OSSL_PARAM_locate_const(param_2,"seed"), lVar2 == 0 &&
         (lVar2 = OSSL_PARAM_locate_const(param_2,"qbits"), lVar2 == 0)))) &&
       ((lVar2 = OSSL_PARAM_locate_const(param_2,"digest"), lVar2 == 0 &&
        (lVar2 = OSSL_PARAM_locate_const(param_2,"properties"), lVar2 == 0)))) {
      return 1;
    }
    ERR_new();
    ERR_set_debug("../providers/implementations/keymgmt/dh_kmgmt.c",0x29e,"dh_gen_set_params");
    ERR_set_error(0x39,0x80106,0);
  }
  return 0;
}


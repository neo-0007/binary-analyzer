
undefined4 shake_set_ctx_params(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if (((param_2 != 0) && (lVar2 = OSSL_PARAM_locate_const(param_2,"xoflen"), lVar2 != 0)) &&
     (iVar1 = OSSL_PARAM_get_size_t(lVar2,param_1 + 0xd0), iVar1 == 0)) {
    ERR_new();
    ERR_set_debug("../providers/implementations/digests/sha3_prov.c",0x126,"shake_set_ctx_params");
    ERR_set_error(0x39,0x67,0);
    return 0;
  }
  return 1;
}


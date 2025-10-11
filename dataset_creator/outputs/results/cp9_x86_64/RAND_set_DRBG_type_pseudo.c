
bool RAND_set_DRBG_type(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  int iVar1;
  long lVar2;
  
  lVar2 = ossl_lib_ctx_get_data(param_1,5,rand_drbg_ossl_ctx_method);
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 0x10) == 0) {
      iVar1 = random_set_string(lVar2 + 0x20,param_2);
      if (((iVar1 != 0) && (iVar1 = random_set_string(lVar2 + 0x38,param_3), iVar1 != 0)) &&
         (iVar1 = random_set_string(lVar2 + 0x28,param_4), iVar1 != 0)) {
        iVar1 = random_set_string(lVar2 + 0x30,param_5);
        return iVar1 != 0;
      }
    }
    else {
      ERR_new();
      ERR_set_debug("../crypto/rand/rand_lib.c",0x334,"RAND_set_DRBG_type");
      ERR_set_error(0xf,0x67,0);
    }
  }
  return false;
}


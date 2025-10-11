
undefined8
ossl_rand_get_nonce(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                   long param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = ossl_rand_pool_new(0,0);
  if (lVar2 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/rand/prov_seed.c",0x38,"ossl_rand_get_nonce");
    ERR_set_error(0x24,0xc0100,0);
    return 0;
  }
  iVar1 = ossl_pool_add_nonce_data(lVar2);
  if (iVar1 == 0) {
LAB_0042e910:
    uVar3 = 0;
  }
  else {
    if (param_5 != 0) {
      iVar1 = ossl_rand_pool_add(lVar2,param_5,param_6,0);
      if (iVar1 == 0) goto LAB_0042e910;
    }
    uVar3 = ossl_rand_pool_length(lVar2);
    uVar4 = ossl_rand_pool_detach(lVar2);
    *param_2 = uVar4;
  }
  ossl_rand_pool_free(lVar2);
  return uVar3;
}


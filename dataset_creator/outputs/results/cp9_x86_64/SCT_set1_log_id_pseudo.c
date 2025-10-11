
undefined8 SCT_set1_log_id(int *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((*param_1 == 0) && (param_3 != 0x20)) {
    ERR_new();
    ERR_set_debug("../crypto/ct/ct_sct.c",0x61,"SCT_set1_log_id");
    ERR_set_error(0x32,100,0);
    return 0;
  }
  CRYPTO_free(*(void **)(param_1 + 6));
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0x18] = 0;
  if ((param_2 == 0) || (param_3 == 0)) {
    uVar1 = 1;
  }
  else {
    lVar2 = CRYPTO_memdup(param_2,param_3,"../crypto/ct/ct_sct.c",0x6b);
    *(long *)(param_1 + 6) = lVar2;
    if (lVar2 != 0) {
      *(long *)(param_1 + 8) = param_3;
      return 1;
    }
    ERR_new();
    ERR_set_debug("../crypto/ct/ct_sct.c",0x6d,"SCT_set1_log_id");
    ERR_set_error(0x32,0xc0100,0);
    uVar1 = 0;
  }
  return uVar1;
}


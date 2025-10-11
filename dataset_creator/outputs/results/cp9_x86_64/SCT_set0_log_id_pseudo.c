
undefined8 SCT_set0_log_id(int *param_1,undefined8 param_2,long param_3)

{
  if ((*param_1 == 0) && (param_3 != 0x20)) {
    ERR_new();
    ERR_set_debug("../crypto/ct/ct_sct.c",0x53,"SCT_set0_log_id");
    ERR_set_error(0x32,100,0);
    return 0;
  }
  CRYPTO_free(*(void **)(param_1 + 6));
  *(undefined8 *)(param_1 + 6) = param_2;
  *(long *)(param_1 + 8) = param_3;
  param_1[0x18] = 0;
  return 1;
}


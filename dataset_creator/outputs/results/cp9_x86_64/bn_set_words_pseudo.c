
undefined8 bn_set_words(undefined8 *param_1,void *param_2,int param_3)

{
  long lVar1;
  
  lVar1 = bn_wexpand(param_1,param_3);
  if (lVar1 != 0) {
    memcpy((void *)*param_1,param_2,(long)param_3 << 3);
    *(int *)(param_1 + 1) = param_3;
    bn_correct_top(param_1);
    return 1;
  }
  ERR_new();
  ERR_set_debug("../crypto/bn/bn_intern.c",0xbf,"bn_set_words");
  ERR_set_error(3,0xc0100,0);
  return 0;
}


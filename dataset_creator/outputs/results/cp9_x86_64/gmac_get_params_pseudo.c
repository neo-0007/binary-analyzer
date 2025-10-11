
undefined8 gmac_get_params(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = OSSL_PARAM_locate(param_1,"size");
  if (lVar1 == 0) {
    return 1;
  }
  uVar2 = OSSL_PARAM_set_size_t(lVar1,0x10);
  return uVar2;
}



undefined8
drbg_hmac_instantiate
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6)

{
  long *plVar1;
  size_t __n;
  undefined8 uVar2;
  
  plVar1 = *(long **)(param_1 + 0xf8);
  if (*plVar1 != 0) {
    __n = plVar1[4];
    memset(plVar1 + 5,0,__n);
    memset(plVar1 + 0xd,1,__n);
    uVar2 = drbg_hmac_update_isra_0
                      (*(undefined8 *)(param_1 + 0xf8),param_2,param_3,param_4,param_5,param_6);
    return uVar2;
  }
  ERR_new();
  ERR_set_debug("../providers/implementations/rands/drbg_hmac.c",0x82,"drbg_hmac_instantiate");
  ERR_set_error(0x39,0x96,0);
  return 0;
}


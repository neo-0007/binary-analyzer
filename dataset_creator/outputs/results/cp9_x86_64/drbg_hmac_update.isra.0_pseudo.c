
undefined8
drbg_hmac_update_isra_0
          (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
          undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  
  uVar1 = do_hmac(param_1,0,param_2,param_3,param_4,param_5,param_6,param_7);
  if (((int)uVar1 != 0) && (uVar1 = 1, (param_7 != 0 || param_5 != 0) || param_3 != 0)) {
    uVar1 = do_hmac(param_1,1,param_2,param_3,param_4,param_5,param_6,param_7);
    return uVar1;
  }
  return uVar1;
}


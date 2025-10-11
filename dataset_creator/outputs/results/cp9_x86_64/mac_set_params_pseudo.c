
undefined8 mac_set_params(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = OSSL_PARAM_locate_const(param_2,&DAT_007c4ad5);
  if (lVar1 == 0) {
    return 1;
  }
  uVar2 = mac_key_fromdata(param_1,param_2);
  return uVar2;
}



undefined8 get_raw_key_details(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((int)param_2[2] == 1) {
    lVar2 = OSSL_PARAM_locate_const(param_1,&DAT_007c4ad5);
  }
  else {
    if ((int)param_2[2] != 2) {
      return 0;
    }
    lVar2 = OSSL_PARAM_locate_const(param_1,&DAT_007da6af);
  }
  if (lVar2 == 0) {
    return 0;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = *(undefined8 *)param_2[1];
  }
  uVar1 = OSSL_PARAM_get_octet_string(lVar2,*param_2,uVar1);
  return uVar1;
}


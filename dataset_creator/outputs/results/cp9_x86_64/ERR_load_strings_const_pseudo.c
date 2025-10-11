
undefined8 ERR_load_strings_const(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = ossl_err_load_ERR_strings();
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  err_load_strings_isra_0(param_1);
  return 1;
}


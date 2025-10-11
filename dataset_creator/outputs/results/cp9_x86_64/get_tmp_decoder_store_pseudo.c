
void get_tmp_decoder_store(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1[4] != 0) {
    return;
  }
  uVar1 = ossl_method_store_new(*param_1);
  param_1[4] = uVar1;
  return;
}


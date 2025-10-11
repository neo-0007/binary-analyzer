
void OSSL_SELF_TEST_set_callback(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)ossl_lib_ctx_get_data(param_1,0xc,self_test_set_callback_method);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
  }
  return;
}


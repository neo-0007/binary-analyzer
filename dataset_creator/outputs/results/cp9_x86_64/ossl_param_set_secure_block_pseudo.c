
void ossl_param_set_secure_block(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[3] = param_3;
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 1) = 0x7f;
  return;
}


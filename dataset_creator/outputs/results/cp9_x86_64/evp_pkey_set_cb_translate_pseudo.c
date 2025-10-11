
void evp_pkey_set_cb_translate(undefined8 param_1,undefined8 param_2)

{
  BN_GENCB_set(param_1,trans_cb,param_2);
  return;
}


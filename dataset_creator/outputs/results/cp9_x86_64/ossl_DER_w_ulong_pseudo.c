
void ossl_DER_w_ulong(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_10 [2];
  
  local_10[0] = param_3;
  int_der_w_integer(param_1,param_2,int_put_bytes_ulong,local_10);
  return;
}



void ossl_i2c_ASN1_INTEGER(int *param_1,undefined8 param_2)

{
  i2c_ibuf(*(undefined8 *)(param_1 + 2),(long)*param_1,param_1[1] & 0x100,param_2);
  return;
}


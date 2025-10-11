
void dh_type_specific_params_to_der(DH *param_1,uchar **param_2)

{
  int iVar1;
  
  iVar1 = DH_test_flags(param_1,0x1000);
  if (iVar1 == 0) {
    i2d_DHparams(param_1,param_2);
    return;
  }
  i2d_DHxparams();
  return;
}


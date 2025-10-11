
undefined1  [16]
ossl_ffc_params_FIPS186_2_generate
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 extraout_RDX;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1._0_8_ = ossl_ffc_params_FIPS186_2_gen_verify(param_1,param_2,1,param_3,param_4,param_5);
  if ((int)auVar1._0_8_ == 0) {
    auVar1._8_8_ = param_6;
    return auVar1;
  }
  ossl_ffc_params_enable_flags(param_2,4,1,param_7);
  auVar2._8_8_ = extraout_RDX;
  auVar2._0_8_ = 1;
  return auVar2;
}



bool ossl_ed448ph_sign(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  
  iVar1 = ossl_c448_ed448_sign_prehash
                    (param_1,param_2,param_5,param_4,param_3,param_6,param_7,param_8);
  return iVar1 == -1;
}


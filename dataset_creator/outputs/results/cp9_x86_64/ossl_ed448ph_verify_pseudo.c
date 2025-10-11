
bool ossl_ed448ph_verify(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  int iVar1;
  
  iVar1 = ossl_c448_ed448_verify_prehash(param_1,param_3,param_4,param_2,param_5,param_6,param_7);
  return iVar1 == -1;
}


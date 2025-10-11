
bool ossl_x448(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = ossl_x448_int(param_1,param_3,param_2);
  return iVar1 == -1;
}


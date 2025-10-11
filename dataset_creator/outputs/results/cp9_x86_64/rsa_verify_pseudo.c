
undefined8
rsa_verify(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = rsa_verify_part_0(param_1,param_2,param_3,param_4,param_5);
    return uVar2;
  }
  return 0;
}


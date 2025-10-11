
undefined8 rsapss_load(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = ossl_prov_is_running();
  if ((iVar2 != 0) && (param_2 == 8)) {
    uVar1 = *param_1;
    iVar2 = RSA_test_flags(uVar1,0xf000);
    if (iVar2 == 0x1000) {
      *param_1 = 0;
      return uVar1;
    }
  }
  return 0;
}


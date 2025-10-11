
undefined8 rsa_sign_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    iVar1 = ossl_prov_is_running();
    if ((iVar1 != 0) && (param_1 != 0)) {
      uVar2 = rsa_signverify_init_part_0(param_1,param_2,param_3,0x10);
      return uVar2;
    }
  }
  return 0;
}



undefined8
rsa_digest_sign_init(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = rsa_digest_signverify_init(param_1,param_2,param_3,param_4,0x10);
  return uVar2;
}



undefined8 ed25519_gen(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = ecx_gen(param_1);
    return uVar2;
  }
  return 0;
}


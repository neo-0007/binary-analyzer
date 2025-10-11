
ulong sha512_256_internal_init(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = ossl_prov_is_running();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  iVar1 = sha512_256_init(param_1);
  return (ulong)(iVar1 != 0);
}


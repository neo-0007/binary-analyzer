
ulong sha384_internal_init(SHA512_CTX *param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = ossl_prov_is_running();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  iVar1 = SHA384_Init(param_1);
  return (ulong)(iVar1 != 0);
}


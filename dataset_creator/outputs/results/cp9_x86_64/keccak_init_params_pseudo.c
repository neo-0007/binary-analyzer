
ulong keccak_init_params(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = ossl_prov_is_running();
  if ((int)uVar2 != 0) {
    ossl_sha3_reset(param_1);
    iVar1 = shake_set_ctx_params(param_1,param_2);
    uVar2 = (ulong)(iVar1 != 0);
  }
  return uVar2;
}


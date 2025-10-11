
void rand_drbg_restart_isra_0(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xf0);
  if (iVar1 == 2) {
    (**(code **)(param_1 + 0x18))();
    iVar1 = *(int *)(param_1 + 0xf0);
  }
  if (iVar1 != 0) {
    return;
  }
  ossl_prov_drbg_instantiate(param_1,*(undefined4 *)(param_1 + 0x80),0,0,0);
  return;
}


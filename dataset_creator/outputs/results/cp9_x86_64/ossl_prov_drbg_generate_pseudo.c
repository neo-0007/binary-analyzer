
bool ossl_prov_drbg_generate
               (long param_1,undefined8 param_2,ulong param_3,uint param_4,int param_5,
               undefined8 param_6,ulong param_7)

{
  int iVar1;
  __pid_t _Var2;
  time_t tVar3;
  bool bVar4;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return false;
  }
  if (*(int *)(param_1 + 0xf0) != 1) {
    rand_drbg_restart_isra_0();
    if (*(int *)(param_1 + 0xf0) == 2) {
      ERR_new();
      ERR_set_debug("../providers/implementations/rands/drbg.c",0x276,"ossl_prov_drbg_generate");
      ERR_set_error(0x39,0xc0,0);
      return false;
    }
    if (*(int *)(param_1 + 0xf0) == 0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/rands/drbg.c",0x27a,"ossl_prov_drbg_generate");
      ERR_set_error(0x39,0xc1,0);
      return false;
    }
  }
  if (*(uint *)(param_1 + 0x80) < param_4) {
    ERR_new();
    ERR_set_debug("../providers/implementations/rands/drbg.c",0x27f,"ossl_prov_drbg_generate");
    ERR_set_error(0x39,0xb5,0);
    return false;
  }
  if (*(ulong *)(param_1 + 0x88) < param_3) {
    ERR_new();
    ERR_set_debug("../providers/implementations/rands/drbg.c",0x284,"ossl_prov_drbg_generate");
    ERR_set_error(0x39,0xc4,0);
    return false;
  }
  if (*(ulong *)(param_1 + 0xb8) < param_7) {
    ERR_new();
    ERR_set_debug("../providers/implementations/rands/drbg.c",0x288,"ossl_prov_drbg_generate");
    ERR_set_error(0x39,0xb8,0);
    return false;
  }
  _Var2 = openssl_get_fork_id();
  bVar4 = _Var2 != *(int *)(param_1 + 0x78);
  if (bVar4) {
    *(__pid_t *)(param_1 + 0x78) = _Var2;
  }
  if ((*(uint *)(param_1 + 0xc4) != 0) && (*(uint *)(param_1 + 0xc4) <= *(uint *)(param_1 + 0xc0)))
  {
    bVar4 = true;
  }
  if (*(long *)(param_1 + 0xd0) < 1) {
LAB_005a0185:
    if (*(long *)(param_1 + 0x30) != 0) {
LAB_005a0293:
      iVar1 = get_parent_reseed_count(param_1);
      if (iVar1 != *(int *)(param_1 + 0xe0)) goto LAB_005a02a7;
    }
    if (!bVar4 && param_5 == 0) goto LAB_005a0199;
  }
  else {
    tVar3 = time((time_t *)0x0);
    if ((*(long *)(param_1 + 200) <= tVar3) &&
       (tVar3 - *(long *)(param_1 + 200) < *(long *)(param_1 + 0xd0))) goto LAB_005a0185;
    if (*(long *)(param_1 + 0x30) != 0) {
      bVar4 = true;
      goto LAB_005a0293;
    }
  }
LAB_005a02a7:
  iVar1 = ossl_prov_drbg_reseed(param_1,param_5,0,0,param_6,param_7);
  if (iVar1 == 0) {
    ERR_new();
    ERR_set_debug("../providers/implementations/rands/drbg.c",0x2a4,"ossl_prov_drbg_generate");
    ERR_set_error(0x39,0xc5,0);
    return false;
  }
  param_7 = 0;
  param_6 = 0;
LAB_005a0199:
  iVar1 = (**(code **)(param_1 + 0x28))(param_1,param_2,param_3,param_6,param_7);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xf0) = 2;
    ERR_new();
    ERR_set_debug("../providers/implementations/rands/drbg.c",0x2ad,"ossl_prov_drbg_generate");
    ERR_set_error(0x39,0xbf,0);
  }
  else {
    *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
  }
  return iVar1 != 0;
}



bool rsa_gen_set_params_part_0(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  lVar2 = OSSL_PARAM_locate_const(param_2,"bits");
  if (lVar2 == 0) {
LAB_00472ecf:
    lVar2 = OSSL_PARAM_locate_const(param_2,"primes");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_size_t(lVar2,param_1 + 5);
      if (iVar1 == 0) goto LAB_00472f60;
    }
    lVar2 = OSSL_PARAM_locate_const(param_2,&DAT_007cb14e);
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_BN(lVar2,param_1 + 4);
      if (iVar1 == 0) goto LAB_00472f60;
    }
    if (*(int *)(param_1 + 2) != 0x1000) {
      return true;
    }
    iVar1 = ossl_rsa_pss_params_30_fromdata(param_1 + 6,(long)param_1 + 0x44,param_2,*param_1);
    bVar3 = iVar1 != 0;
  }
  else {
    iVar1 = OSSL_PARAM_get_size_t(lVar2,param_1 + 3);
    if (iVar1 != 0) {
      if (0x1ff < (ulong)param_1[3]) goto LAB_00472ecf;
      ERR_new();
      ERR_set_debug("../providers/implementations/keymgmt/rsa_kmgmt.c",0x202,"rsa_gen_set_params");
      ERR_set_error(0x39,0xab,0);
    }
LAB_00472f60:
    bVar3 = false;
  }
  return bVar3;
}


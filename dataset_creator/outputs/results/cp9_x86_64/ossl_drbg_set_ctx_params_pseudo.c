
ulong ossl_drbg_set_ctx_params(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
    return 1;
  }
  lVar2 = OSSL_PARAM_locate_const(param_2,"reseed_requests");
  if ((lVar2 != 0) && (uVar3 = OSSL_PARAM_get_uint(lVar2,param_1 + 0xc4), (int)uVar3 == 0)) {
    return uVar3;
  }
  lVar2 = OSSL_PARAM_locate_const(param_2,"reseed_time_interval");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_get_time_t(lVar2,param_1 + 0xd0);
    return (ulong)(iVar1 != 0);
  }
  return 1;
}


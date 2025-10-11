
bool OSSL_PARAM_BLD_push_BN_pad(undefined8 param_1,undefined8 param_2,BIGNUM *param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  
  if (param_3 == (BIGNUM *)0x0) {
    bVar4 = false;
  }
  else {
    iVar1 = BN_is_negative(param_3);
    if (iVar1 != 0) {
      ERR_new();
      ERR_set_debug("../crypto/param_build.c",0xd0,"OSSL_PARAM_BLD_push_BN_pad");
      ERR_set_error(0xf,0x8010c,"Negative big numbers are unsupported for OSSL_PARAM");
      return false;
    }
    iVar2 = BN_num_bits(param_3);
    iVar1 = iVar2 + 0xe;
    if (-1 < iVar2 + 7) {
      iVar1 = iVar2 + 7;
    }
    if (iVar2 < -0xe) {
      ERR_new();
      ERR_set_debug("../crypto/param_build.c",0xd7,"OSSL_PARAM_BLD_push_BN_pad");
      ERR_set_error(0xf,0x73,0);
      return false;
    }
    if (param_4 < (ulong)(long)(iVar1 >> 3)) {
      ERR_new();
      ERR_set_debug("../crypto/param_build.c",0xdb,"OSSL_PARAM_BLD_push_BN_pad");
      ERR_set_error(0xf,0x74,0);
      return false;
    }
    iVar1 = BN_get_flags(param_3,8);
    bVar4 = iVar1 == 8;
  }
  lVar3 = param_push(param_1,param_2,param_4 & 0xffffffff,param_4,2,bVar4);
  if (lVar3 != 0) {
    *(BIGNUM **)(lVar3 + 0x20) = param_3;
  }
  return lVar3 != 0;
}


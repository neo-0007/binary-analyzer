
bool ossl_ec_GFp_simple_field_inv(long *param_1,BIGNUM *param_2,undefined8 param_3,BN_CTX *param_4)

{
  int iVar1;
  BIGNUM *pBVar2;
  BIGNUM *pBVar3;
  BN_CTX *c;
  bool bVar4;
  
  c = (BN_CTX *)0x0;
  if ((param_4 == (BN_CTX *)0x0) &&
     (c = (BN_CTX *)BN_CTX_secure_new_ex(param_1[0x15]), param_4 = c, c == (BN_CTX *)0x0)) {
    return false;
  }
  BN_CTX_start(param_4);
  pBVar2 = BN_CTX_get(param_4);
  if (pBVar2 != (BIGNUM *)0x0) {
    do {
      iVar1 = BN_priv_rand_range_ex(pBVar2,param_1[8],0,param_4);
      if (iVar1 == 0) goto LAB_0050292c;
      iVar1 = BN_is_zero(pBVar2);
    } while (iVar1 != 0);
    iVar1 = (**(code **)(*param_1 + 0xf8))(param_1,param_2,param_3,pBVar2,param_4);
    if (iVar1 != 0) {
      pBVar3 = BN_mod_inverse(param_2,param_2,(BIGNUM *)param_1[8],param_4);
      if (pBVar3 == (BIGNUM *)0x0) {
        ERR_new();
        ERR_set_debug("../crypto/ec/ecp_smpl.c",0x580,"ossl_ec_GFp_simple_field_inv");
        ERR_set_error(0x10,0xa5,0);
        bVar4 = false;
      }
      else {
        iVar1 = (**(code **)(*param_1 + 0xf8))(param_1,param_2,param_2,pBVar2,param_4);
        bVar4 = iVar1 != 0;
      }
      goto LAB_0050292f;
    }
  }
LAB_0050292c:
  bVar4 = false;
LAB_0050292f:
  BN_CTX_end(param_4);
  BN_CTX_free(c);
  return bVar4;
}



uint ossl_ec_GF2m_simple_group_check_discriminant(long param_1,BN_CTX *param_2)

{
  uint uVar1;
  int iVar2;
  BIGNUM *pBVar3;
  BN_CTX *c;
  
  c = (BN_CTX *)0x0;
  if (param_2 == (BN_CTX *)0x0) {
    param_2 = BN_CTX_new();
    c = param_2;
    if (param_2 == (BN_CTX *)0x0) {
      ERR_new();
      uVar1 = 0;
      ERR_set_debug("../crypto/ec/ec2_smpl.c",0xbf,"ossl_ec_GF2m_simple_group_check_discriminant");
      ERR_set_error(0x10,0xc0100,0);
      goto LAB_005c346c;
    }
  }
  uVar1 = 0;
  BN_CTX_start(param_2);
  pBVar3 = BN_CTX_get(param_2);
  if (pBVar3 != (BIGNUM *)0x0) {
    uVar1 = BN_GF2m_mod_arr(pBVar3,*(undefined8 *)(param_1 + 0x68),param_1 + 0x48);
    if (uVar1 != 0) {
      iVar2 = BN_is_zero(pBVar3);
      uVar1 = (uint)(iVar2 == 0);
    }
  }
LAB_005c346c:
  BN_CTX_end(param_2);
  BN_CTX_free(c);
  return uVar1;
}


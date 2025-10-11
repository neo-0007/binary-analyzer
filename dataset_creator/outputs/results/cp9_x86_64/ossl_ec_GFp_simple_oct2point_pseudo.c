
uint ossl_ec_GFp_simple_oct2point
               (EC_GROUP *param_1,EC_POINT *param_2,byte *param_3,long param_4,BN_CTX *param_5)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  BIGNUM *ret;
  BIGNUM *ret_00;
  BIGNUM *pBVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  byte bVar9;
  BN_CTX *local_60;
  
  if (param_4 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ecp_oct.c",0x11e,"ossl_ec_GFp_simple_oct2point");
    ERR_set_error(0x10,100,0);
    return 0;
  }
  local_60._0_1_ = *param_3;
  bVar9 = (byte)local_60 & 0xfe;
  if (((byte)local_60 & 0xfc) == 0) {
    if ((((byte)local_60 & 0xfa) == 0) && (((byte)local_60 & 1) != 0)) {
LAB_00500850:
      ERR_new();
      uVar8 = 299;
      goto LAB_005007c8;
    }
    if (((byte)local_60 & 0xfe) == 0) {
      if (param_4 == 1) {
        uVar4 = EC_POINT_set_to_infinity(param_1,param_2);
        return uVar4;
      }
      ERR_new();
      uVar8 = 0x131;
      goto LAB_005007c8;
    }
  }
  else {
    if (((byte)local_60 & 0xfc) != 4) {
      ERR_new();
      uVar8 = 0x127;
      goto LAB_005007c8;
    }
    if ((((byte)local_60 & 0xfa) == 0) && (((byte)local_60 & 1) != 0)) goto LAB_00500850;
  }
  local_60._0_1_ = (byte)local_60 & 1;
  bVar2 = (byte)local_60;
  iVar3 = BN_num_bits(*(BIGNUM **)(param_1 + 0x40));
  iVar6 = iVar3 + 0xe;
  if (-1 < iVar3 + 7) {
    iVar6 = iVar3 + 7;
  }
  iVar6 = iVar6 >> 3;
  lVar7 = (long)iVar6;
  lVar1 = lVar7 * 2;
  if (bVar9 == 2) {
    lVar1 = lVar7;
  }
  if (lVar1 + 1 != param_4) {
    ERR_new();
    uVar8 = 0x13e;
LAB_005007c8:
    ERR_set_debug("../crypto/ec/ecp_oct.c",uVar8,"ossl_ec_GFp_simple_oct2point");
    ERR_set_error(0x10,0x66,0);
    return 0;
  }
  local_60 = (BN_CTX *)0x0;
  if ((param_5 == (BN_CTX *)0x0) &&
     (param_5 = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_1 + 0xa8)), local_60 = param_5,
     param_5 == (BN_CTX *)0x0)) {
    return 0;
  }
  BN_CTX_start(param_5);
  ret = BN_CTX_get(param_5);
  ret_00 = BN_CTX_get(param_5);
  if ((ret_00 != (BIGNUM *)0x0) &&
     (pBVar5 = BN_bin2bn(param_3 + 1,iVar6,ret), pBVar5 != (BIGNUM *)0x0)) {
    iVar3 = BN_ucmp(ret,*(BIGNUM **)(param_1 + 0x40));
    if (iVar3 < 0) {
      if (bVar9 == 2) {
        iVar6 = EC_POINT_set_compressed_coordinates(param_1,param_2,ret,bVar2,param_5);
        uVar4 = (uint)(iVar6 != 0);
        goto LAB_005008e2;
      }
      pBVar5 = BN_bin2bn(param_3 + lVar7 + 1,iVar6,ret_00);
      if (pBVar5 == (BIGNUM *)0x0) goto LAB_005008e0;
      iVar6 = BN_ucmp(ret_00,*(BIGNUM **)(param_1 + 0x40));
      if (iVar6 < 0) {
        if ((bVar9 != 6) || (uVar4 = BN_is_odd(ret_00), uVar4 == bVar2)) {
          iVar6 = EC_POINT_set_affine_coordinates(param_1,param_2,ret,ret_00,param_5);
          uVar4 = (uint)(iVar6 != 0);
          goto LAB_005008e2;
        }
        ERR_new();
        uVar8 = 0x161;
      }
      else {
        ERR_new();
        uVar8 = 0x15c;
      }
    }
    else {
      ERR_new();
      uVar8 = 0x151;
    }
    ERR_set_debug("../crypto/ec/ecp_oct.c",uVar8,"ossl_ec_GFp_simple_oct2point");
    ERR_set_error(0x10,0x66,0);
  }
LAB_005008e0:
  uVar4 = 0;
LAB_005008e2:
  BN_CTX_end(param_5);
  BN_CTX_free(local_60);
  return uVar4;
}



uint ossl_ec_GF2m_simple_oct2point
               (EC_GROUP *param_1,EC_POINT *param_2,byte *param_3,long param_4,BN_CTX *param_5)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  BIGNUM *ret;
  BIGNUM *ret_00;
  BIGNUM *pBVar6;
  BIGNUM *pBVar7;
  byte bVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  byte bVar12;
  BN_CTX *local_60;
  
  if (param_4 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec2_oct.c",0x10e,"ossl_ec_GF2m_simple_oct2point");
    ERR_set_error(0x10,100,0);
    return 0;
  }
  bVar1 = *param_3;
  bVar8 = bVar1 & 1;
  bVar12 = bVar1 & 0xfe;
  if ((bVar1 & 0xfc) == 0) {
    if (((bVar1 & 0xfa) == 0) && (bVar8 != 0)) {
LAB_005c2f80:
      ERR_new();
      uVar9 = 0x127;
      goto LAB_005c2f00;
    }
    if ((bVar1 & 0xfe) == 0) {
      if (param_4 == 1) {
        uVar5 = EC_POINT_set_to_infinity(param_1,param_2);
        return uVar5;
      }
      ERR_new();
      uVar9 = 0x12e;
      goto LAB_005c2f00;
    }
  }
  else {
    if ((bVar1 & 0xfc) != 4) {
      ERR_new();
      uVar9 = 0x123;
      goto LAB_005c2f00;
    }
    if (((bVar1 & 0xfa) == 0) && (bVar8 != 0)) goto LAB_005c2f80;
  }
  iVar3 = EC_GROUP_get_degree(param_1);
  iVar10 = iVar3 + 0xe;
  if (-1 < iVar3 + 7) {
    iVar10 = iVar3 + 7;
  }
  iVar10 = iVar10 >> 3;
  lVar11 = (long)iVar10;
  lVar2 = lVar11 * 2;
  if (bVar12 == 2) {
    lVar2 = lVar11;
  }
  if (lVar2 + 1 != param_4) {
    ERR_new();
    uVar9 = 0x13c;
LAB_005c2f00:
    ERR_set_debug("../crypto/ec/ec2_oct.c",uVar9,"ossl_ec_GF2m_simple_oct2point");
    ERR_set_error(0x10,0x66,0);
    return 0;
  }
  local_60 = (BN_CTX *)0x0;
  if ((param_5 == (BN_CTX *)0x0) &&
     (param_5 = BN_CTX_new(), local_60 = param_5, param_5 == (BN_CTX *)0x0)) {
    return 0;
  }
  BN_CTX_start(param_5);
  ret = BN_CTX_get(param_5);
  ret_00 = BN_CTX_get(param_5);
  pBVar6 = BN_CTX_get(param_5);
  if ((pBVar6 != (BIGNUM *)0x0) &&
     (pBVar7 = BN_bin2bn(param_3 + 1,iVar10,ret), pBVar7 != (BIGNUM *)0x0)) {
    iVar4 = BN_num_bits(ret);
    if (iVar3 < iVar4) {
      ERR_new();
      uVar9 = 0x152;
    }
    else {
      if (bVar12 == 2) {
        iVar10 = EC_POINT_set_compressed_coordinates(param_1,param_2,ret,(uint)bVar8,param_5);
        uVar5 = (uint)(iVar10 != 0);
        goto LAB_005c3013;
      }
      pBVar7 = BN_bin2bn(param_3 + lVar11 + 1,iVar10,ret_00);
      if (pBVar7 == (BIGNUM *)0x0) goto LAB_005c3010;
      iVar10 = BN_num_bits(ret_00);
      if (iVar10 <= iVar3) {
        if (bVar12 == 6) {
          iVar10 = BN_is_zero(ret);
          if (iVar10 == 0) {
            iVar10 = (**(code **)(*(long *)param_1 + 0x108))(param_1,pBVar6,ret_00,ret,param_5);
            if (iVar10 == 0) goto LAB_005c3010;
            uVar5 = BN_is_odd(pBVar6);
            if (uVar5 != bVar8) {
              ERR_new();
              ERR_set_debug("../crypto/ec/ec2_oct.c",0x16f,"ossl_ec_GF2m_simple_oct2point");
              ERR_set_error(0x10,0x66,0);
              uVar5 = 0;
              goto LAB_005c3013;
            }
          }
          else if (bVar8 != 0) {
            ERR_new();
            uVar9 = 0x168;
            goto LAB_005c2ff1;
          }
        }
        iVar10 = EC_POINT_set_affine_coordinates(param_1,param_2,ret,ret_00,param_5);
        uVar5 = (uint)(iVar10 != 0);
        goto LAB_005c3013;
      }
      ERR_new();
      uVar9 = 0x15d;
    }
LAB_005c2ff1:
    ERR_set_debug("../crypto/ec/ec2_oct.c",uVar9,"ossl_ec_GF2m_simple_oct2point");
    ERR_set_error(0x10,0x66,0);
  }
LAB_005c3010:
  uVar5 = 0;
LAB_005c3013:
  BN_CTX_end(param_5);
  BN_CTX_free(local_60);
  return uVar5;
}



ulong ossl_ec_GF2m_simple_point2oct
                (EC_GROUP *param_1,EC_POINT *param_2,uint param_3,BN_CTX *param_4,ulong param_5,
                BN_CTX *param_6)

{
  BN_CTX *__s;
  int iVar1;
  int iVar2;
  ulong uVar3;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *pBVar4;
  size_t sVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  BN_CTX *local_60;
  
  if (((param_3 & 0xfffffffb) != 2) && (param_3 != 4)) {
    ERR_new();
    local_60 = (BN_CTX *)0x0;
    ERR_set_debug("../crypto/ec/ec2_oct.c",0x8d,"ossl_ec_GF2m_simple_point2oct");
    ERR_set_error(0x10,0x68,0);
    goto LAB_005c29a3;
  }
  iVar1 = EC_POINT_is_at_infinity(param_1,param_2);
  if (iVar1 != 0) {
    if (param_4 == (BN_CTX *)0x0) {
      return 1;
    }
    if (param_5 != 0) {
      *param_4 = (BN_CTX)0x0;
      return 1;
    }
    ERR_new();
    ERR_set_debug("../crypto/ec/ec2_oct.c",0x95,"ossl_ec_GF2m_simple_point2oct");
    ERR_set_error(0x10,100,0);
    return 0;
  }
  iVar2 = EC_GROUP_get_degree(param_1);
  iVar1 = iVar2 + 0xe;
  if (-1 < iVar2 + 7) {
    iVar1 = iVar2 + 7;
  }
  uVar9 = (ulong)(iVar1 >> 3);
  uVar3 = uVar9;
  if (param_3 != 2) {
    uVar3 = uVar9 * 2;
  }
  uVar3 = uVar3 + 1;
  local_60 = param_4;
  if (param_4 == (BN_CTX *)0x0) goto LAB_005c2b72;
  if (param_5 < uVar3) {
    ERR_new();
    local_60 = (BN_CTX *)0x0;
    ERR_set_debug("../crypto/ec/ec2_oct.c",0xa6,"ossl_ec_GF2m_simple_point2oct");
    ERR_set_error(0x10,100,0);
    goto LAB_005c29a3;
  }
  local_60 = (BN_CTX *)0x0;
  if ((param_6 == (BN_CTX *)0x0) &&
     (param_6 = BN_CTX_new(), local_60 = param_6, param_6 == (BN_CTX *)0x0)) {
    return 0;
  }
  BN_CTX_start(param_6);
  a = BN_CTX_get(param_6);
  a_00 = BN_CTX_get(param_6);
  pBVar4 = BN_CTX_get(param_6);
  if ((pBVar4 != (BIGNUM *)0x0) &&
     (iVar1 = EC_POINT_get_affine_coordinates(param_1,param_2,a,a_00,param_6), iVar1 != 0)) {
    *param_4 = SUB41(param_3,0);
    if ((param_3 != 4) && (iVar1 = BN_is_zero(a), iVar1 == 0)) {
      iVar1 = (**(code **)(*(long *)param_1 + 0x108))(param_1,pBVar4,a_00,a,param_6);
      if (iVar1 == 0) goto LAB_005c2c00;
      iVar1 = BN_is_odd(pBVar4);
      if (iVar1 != 0) {
        *param_4 = (BN_CTX)((char)*param_4 + '\x01');
      }
    }
    iVar2 = BN_num_bits(a);
    iVar1 = iVar2 + 0xe;
    if (-1 < iVar2 + 7) {
      iVar1 = iVar2 + 7;
    }
    sVar5 = uVar9 - (long)(iVar1 >> 3);
    if (uVar9 < (ulong)(long)(iVar1 >> 3)) {
      ERR_new();
      uVar8 = 0xc9;
    }
    else {
      if (sVar5 == 0) {
        lVar6 = 1;
      }
      else {
        memset(param_4 + 1,0,sVar5);
        lVar6 = sVar5 + 1;
      }
      iVar1 = BN_bn2bin(a,(uchar *)(param_4 + lVar6));
      uVar7 = iVar1 + lVar6;
      if (uVar9 + 1 == uVar7) {
        if ((param_3 & 0xfffffffd) == 4) {
          iVar2 = BN_num_bits(a_00);
          iVar1 = iVar2 + 7;
          if (iVar2 + 7 < 0) {
            iVar1 = iVar2 + 0xe;
          }
          sVar5 = uVar9 - (long)(iVar1 >> 3);
          if (uVar9 < (ulong)(long)(iVar1 >> 3)) {
            ERR_new();
            uVar8 = 0xdb;
            goto LAB_005c2be1;
          }
          if (sVar5 != 0) {
            __s = param_4 + uVar7;
            uVar7 = uVar7 + sVar5;
            memset(__s,0,sVar5);
          }
          iVar1 = BN_bn2bin(a_00,(uchar *)(param_4 + uVar7));
          uVar7 = uVar7 + (long)iVar1;
        }
        if (uVar7 == uVar3) {
          BN_CTX_end(param_6);
LAB_005c2b72:
          BN_CTX_free(local_60);
          return uVar3;
        }
        ERR_new();
        uVar8 = 0xe7;
      }
      else {
        ERR_new();
        uVar8 = 0xd3;
      }
    }
LAB_005c2be1:
    ERR_set_debug("../crypto/ec/ec2_oct.c",uVar8,"ossl_ec_GF2m_simple_point2oct");
    ERR_set_error(0x10,0xc0103,0);
  }
LAB_005c2c00:
  BN_CTX_end(param_6);
LAB_005c29a3:
  BN_CTX_free(local_60);
  return 0;
}


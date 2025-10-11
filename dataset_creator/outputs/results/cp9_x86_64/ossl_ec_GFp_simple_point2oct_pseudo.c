
ulong ossl_ec_GFp_simple_point2oct
                (EC_GROUP *param_1,EC_POINT *param_2,uint param_3,BN_CTX *param_4,ulong param_5,
                BN_CTX *param_6)

{
  BN_CTX *__s;
  int iVar1;
  int iVar2;
  ulong uVar3;
  BIGNUM *a;
  BIGNUM *a_00;
  BN_CTX *c;
  BN_CTX BVar4;
  ulong uVar5;
  undefined8 uVar6;
  size_t sVar7;
  long lVar8;
  ulong uVar9;
  BN_CTX *local_60;
  
  if ((param_3 != 4) && ((param_3 & 0xfffffffb) != 2)) {
    ERR_new();
    c = (BN_CTX *)0x0;
    ERR_set_debug("../crypto/ec/ecp_oct.c",0xac,"ossl_ec_GFp_simple_point2oct");
    ERR_set_error(0x10,0x68,0);
    goto LAB_005002a3;
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
    ERR_set_debug("../crypto/ec/ecp_oct.c",0xb4,"ossl_ec_GFp_simple_point2oct");
    ERR_set_error(0x10,100,0);
    return 0;
  }
  iVar2 = BN_num_bits(*(BIGNUM **)(param_1 + 0x40));
  iVar1 = iVar2 + 0xe;
  if (-1 < iVar2 + 7) {
    iVar1 = iVar2 + 7;
  }
  uVar5 = (ulong)(iVar1 >> 3);
  uVar3 = uVar5;
  if (param_3 != 2) {
    uVar3 = uVar5 * 2;
  }
  uVar3 = uVar3 + 1;
  c = param_4;
  if (param_4 == (BN_CTX *)0x0) goto LAB_005003f8;
  if (param_5 < uVar3) {
    ERR_new();
    c = (BN_CTX *)0x0;
    ERR_set_debug("../crypto/ec/ecp_oct.c",0xc5,"ossl_ec_GFp_simple_point2oct");
    ERR_set_error(0x10,100,0);
    goto LAB_005002a3;
  }
  c = (BN_CTX *)0x0;
  local_60 = param_6;
  if ((param_6 == (BN_CTX *)0x0) &&
     (c = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_1 + 0xa8)), local_60 = c, c == (BN_CTX *)0x0
     )) {
    return 0;
  }
  BN_CTX_start(local_60);
  a = BN_CTX_get(local_60);
  a_00 = BN_CTX_get(local_60);
  if ((a_00 != (BIGNUM *)0x0) &&
     (iVar1 = EC_POINT_get_affine_coordinates(param_1,param_2,a,a_00,local_60), iVar1 != 0)) {
    BVar4 = SUB41(param_3,0);
    if ((param_3 & 0xfffffffb) == 2) {
      iVar1 = BN_is_odd(a_00);
      if (iVar1 != 0) {
        BVar4 = (BN_CTX)((char)BVar4 + '\x01');
      }
    }
    *param_4 = BVar4;
    iVar2 = BN_num_bits(a);
    iVar1 = iVar2 + 7;
    if (iVar2 + 7 < 0) {
      iVar1 = iVar2 + 0xe;
    }
    sVar7 = uVar5 - (long)(iVar1 >> 3);
    if (uVar5 < (ulong)(long)(iVar1 >> 3)) {
      ERR_new();
      uVar6 = 0xe3;
    }
    else {
      if (sVar7 == 0) {
        lVar8 = 1;
      }
      else {
        lVar8 = sVar7 + 1;
        memset(param_4 + 1,0,sVar7);
      }
      iVar1 = BN_bn2bin(a,(uchar *)(param_4 + lVar8));
      uVar9 = lVar8 + iVar1;
      if (uVar5 + 1 == uVar9) {
        if ((param_3 & 0xfffffffd) == 4) {
          iVar2 = BN_num_bits(a_00);
          iVar1 = iVar2 + 7;
          if (iVar2 + 7 < 0) {
            iVar1 = iVar2 + 0xe;
          }
          sVar7 = uVar5 - (long)(iVar1 >> 3);
          if (uVar5 < (ulong)(long)(iVar1 >> 3)) {
            ERR_new();
            uVar6 = 0xf5;
            goto LAB_00500461;
          }
          if (sVar7 != 0) {
            __s = param_4 + uVar9;
            uVar9 = uVar9 + sVar7;
            memset(__s,0,sVar7);
          }
          iVar1 = BN_bn2bin(a_00,(uchar *)(param_4 + uVar9));
          uVar9 = uVar9 + (long)iVar1;
        }
        if (uVar9 == uVar3) {
          BN_CTX_end(local_60);
LAB_005003f8:
          BN_CTX_free(c);
          return uVar3;
        }
        ERR_new();
        uVar6 = 0x101;
      }
      else {
        ERR_new();
        uVar6 = 0xed;
      }
    }
LAB_00500461:
    ERR_set_debug("../crypto/ec/ecp_oct.c",uVar6,"ossl_ec_GFp_simple_point2oct");
    ERR_set_error(0x10,0xc0103,0);
  }
  BN_CTX_end(local_60);
LAB_005002a3:
  BN_CTX_free(c);
  return 0;
}


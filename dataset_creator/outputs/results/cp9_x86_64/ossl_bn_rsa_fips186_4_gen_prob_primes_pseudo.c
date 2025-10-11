
bool ossl_bn_rsa_fips186_4_gen_prob_primes
               (long param_1,long param_2,BIGNUM *param_3,BIGNUM *param_4,undefined8 param_5,
               BIGNUM *param_6,BIGNUM *param_7,int param_8,undefined8 param_9,BN_CTX *param_10,
               undefined8 param_11)

{
  int iVar1;
  int iVar2;
  int iVar3;
  BIGNUM *a;
  BIGNUM *a_00;
  undefined4 uVar4;
  bool bVar5;
  BIGNUM *local_68;
  BIGNUM *local_58;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return false;
  }
  BN_CTX_start(param_10);
  a_00 = param_3;
  if (param_3 == (BIGNUM *)0x0) {
    a_00 = BN_CTX_get(param_10);
  }
  local_68 = param_4;
  if (param_4 == (BIGNUM *)0x0) {
    local_68 = BN_CTX_get(param_10);
  }
  a = param_6;
  if (param_6 == (BIGNUM *)0x0) {
    a = BN_CTX_get(param_10);
  }
  local_58 = param_7;
  if (param_7 == (BIGNUM *)0x0) {
    local_58 = BN_CTX_get(param_10);
  }
  if ((((a_00 != (BIGNUM *)0x0) && (local_68 != (BIGNUM *)0x0)) && (a != (BIGNUM *)0x0)) &&
     (local_58 != (BIGNUM *)0x0)) {
    if (param_8 < 0x1000) {
      if (param_8 < 0xc00) {
        uVar4 = 0x8d;
        if (param_8 < 0x800) goto LAB_005b7a10;
      }
      else {
        uVar4 = 0xab;
      }
    }
    else {
      uVar4 = 0xc9;
    }
    if ((((param_6 != (BIGNUM *)0x0) ||
         (iVar1 = BN_priv_rand_ex(a,uVar4,0,1,0,param_10), iVar1 != 0)) &&
        ((param_7 != (BIGNUM *)0x0 ||
         (iVar1 = BN_priv_rand_ex(local_58,uVar4,0,1,0,param_10), iVar1 != 0)))) &&
       ((iVar1 = bn_rsa_fips186_4_find_aux_prob_prime(a,a_00,param_10,param_11), iVar1 != 0 &&
        (iVar1 = bn_rsa_fips186_4_find_aux_prob_prime(local_58,local_68,param_10,param_11),
        iVar1 != 0)))) {
      iVar1 = BN_num_bits(a_00);
      iVar2 = BN_num_bits(local_68);
      iVar3 = 0x7ee;
      if ((param_8 < 0x1000) && (iVar3 = 0x5ee, param_8 < 0xc00)) {
        iVar3 = 0x3ef;
      }
      if (iVar1 + iVar2 < iVar3) {
        iVar1 = ossl_bn_rsa_fips186_4_derive_prime
                          (param_1,param_2,param_5,a_00,local_68,param_8,param_9,param_10,param_11);
        bVar5 = iVar1 != 0;
        goto LAB_005b7a13;
      }
    }
  }
LAB_005b7a10:
  bVar5 = false;
LAB_005b7a13:
  if (param_3 == (BIGNUM *)0x0) {
    BN_clear(a_00);
  }
  if (param_4 == (BIGNUM *)0x0) {
    BN_clear(local_68);
  }
  if (param_6 == (BIGNUM *)0x0) {
    BN_clear(a);
  }
  if (param_7 == (BIGNUM *)0x0) {
    BN_clear(local_58);
  }
  BN_CTX_end(param_10);
  return bVar5;
}


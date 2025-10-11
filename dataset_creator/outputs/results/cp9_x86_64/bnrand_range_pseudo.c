
undefined4
bnrand_range(undefined4 param_1,BIGNUM *param_2,BIGNUM *param_3,undefined4 param_4,
            undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_40;
  int local_3c;
  
  if ((param_3->neg == 0) && (iVar1 = BN_is_zero(param_3), iVar1 == 0)) {
    iVar1 = BN_num_bits(param_3);
    if (iVar1 == 1) {
      uVar3 = 1;
      BN_zero_ex(param_2);
    }
    else {
      iVar2 = BN_is_bit_set(param_3,iVar1 + -2);
      if ((iVar2 == 0) && (iVar2 = BN_is_bit_set(param_3,iVar1 + -3), iVar2 == 0)) {
        local_3c = 100;
        do {
          iVar2 = bnrand(param_1,param_2,iVar1 + 1,0xffffffff,0,param_4,param_5);
          if (iVar2 == 0) {
            return 0;
          }
          iVar2 = BN_cmp(param_2,param_3);
          if (-1 < iVar2) {
            iVar2 = BN_sub(param_2,param_2,param_3);
            if (iVar2 == 0) {
              return 0;
            }
            iVar2 = BN_cmp(param_2,param_3);
            if ((-1 < iVar2) && (iVar2 = BN_sub(param_2,param_2,param_3), iVar2 == 0)) {
              return 0;
            }
          }
          local_3c = local_3c + -1;
          if (local_3c == 0) {
            ERR_new();
            ERR_set_debug("../crypto/bn/bn_rand.c",0xaf,"bnrand_range");
            ERR_set_error(3,0x71,0);
            return 0;
          }
          iVar2 = BN_cmp(param_2,param_3);
        } while (-1 < iVar2);
      }
      else {
        local_40 = 100;
        do {
          iVar2 = bnrand(param_1,param_2,iVar1,0xffffffff,0,0);
          if (iVar2 == 0) {
            return 0;
          }
          local_40 = local_40 + -1;
          if (local_40 == 0) {
            ERR_new();
            ERR_set_debug("../crypto/bn/bn_rand.c",0xbd,"bnrand_range");
            ERR_set_error(3,0x71,0);
            return 0;
          }
          iVar2 = BN_cmp(param_2,param_3);
        } while (-1 < iVar2);
      }
      uVar3 = 1;
    }
  }
  else {
    ERR_new();
    uVar3 = 0;
    ERR_set_debug("../crypto/bn/bn_rand.c",0x8c,"bnrand_range");
    ERR_set_error(3,0x73,0);
  }
  return uVar3;
}


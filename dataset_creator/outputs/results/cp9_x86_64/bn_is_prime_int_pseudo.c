
ulong bn_is_prime_int(BIGNUM *param_1,undefined4 param_2,BN_CTX *param_3,int param_4,
                     BN_GENCB *param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  BIGNUM *b;
  ulong uVar4;
  ushort *puVar5;
  ulong uVar6;
  BN_CTX *c;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  b = BN_value_one();
  iVar1 = BN_cmp(param_1,b);
  if (iVar1 < 1) {
    uVar6 = 0;
  }
  else {
    iVar1 = BN_is_odd(param_1);
    if (iVar1 == 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = 2;
LAB_005b62e9:
        uVar6 = BN_is_word(param_1,uVar6);
        return uVar6;
      }
      goto LAB_005b6400;
    }
    iVar1 = BN_is_word(param_1,3);
    if (iVar1 == 0) {
      if (param_4 == 0) {
LAB_005b625d:
        c = (BN_CTX *)0x0;
        if ((param_3 == (BN_CTX *)0x0) &&
           (param_3 = BN_CTX_new(), c = param_3, param_3 == (BN_CTX *)0x0)) {
          c = (BN_CTX *)0x0;
          uVar2 = 0xffffffff;
        }
        else {
          uVar2 = ossl_bn_miller_rabin_is_prime(param_1,param_2,param_3,param_5,0,&local_44);
          if (uVar2 != 0) {
            uVar2 = (uint)(local_44 == 3);
          }
        }
        BN_CTX_free(c);
        uVar6 = (ulong)uVar2;
      }
      else {
        iVar3 = BN_num_bits(param_1);
        iVar1 = 0x40;
        if (((0x200 < iVar3) && (iVar1 = 0x80, 0x400 < iVar3)) && (iVar1 = 0x180, 0x800 < iVar3)) {
          iVar1 = 0x800;
          if (iVar3 < 0x1001) {
            iVar1 = 0x400;
          }
        }
        puVar5 = (ushort *)(primes + 4);
        uVar6 = 3;
        while (uVar4 = BN_mod_word(param_1,uVar6), uVar4 != 0xffffffffffffffff) {
          if (uVar4 == 0) {
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_005b62e9;
            goto LAB_005b6400;
          }
          if (puVar5 == (ushort *)(primes + (ulong)(iVar1 - 2) * 2 + 4)) {
            iVar1 = BN_GENCB_call(param_5,1,-1);
            if (iVar1 != 0) goto LAB_005b625d;
            break;
          }
          uVar6 = (ulong)*puVar5;
          puVar5 = puVar5 + 1;
        }
        uVar6 = 0xffffffff;
      }
    }
    else {
      uVar6 = 1;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
LAB_005b6400:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


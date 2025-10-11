
undefined8
BN_generate_prime_ex2
          (BIGNUM *param_1,int param_2,int param_3,BIGNUM *param_4,BIGNUM *param_5,BN_GENCB *param_6
          ,BN_CTX *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *ptr;
  BIGNUM *r;
  BIGNUM *rem;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ushort *puVar7;
  ushort uVar8;
  undefined8 uVar9;
  ushort *puVar10;
  ushort *puVar11;
  int local_a0;
  ulong local_90;
  ulong local_78;
  int local_58;
  
  if (param_2 < 0x801) {
    local_a0 = 0x40;
    if (param_2 < 2) {
      ERR_new();
      uVar9 = 0x87;
      goto LAB_005b6bea;
    }
  }
  else {
    local_a0 = 0x80;
  }
  if ((((param_4 != (BIGNUM *)0x0) || (param_3 == 0)) || (5 < param_2)) || (param_2 == 3)) {
    ptr = (void *)CRYPTO_zalloc(0x1000,"../crypto/bn/bn_prime.c",0x93);
    if (ptr == (void *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/bn/bn_prime.c",0x95,"BN_generate_prime_ex2");
      ERR_set_error(3,0xc0100,0);
      return 0;
    }
    BN_CTX_start(param_7);
    r = BN_CTX_get(param_7);
    if (r == (BIGNUM *)0x0) {
LAB_005b6798:
      uVar9 = 0;
LAB_005b679b:
      CRYPTO_free(ptr);
      BN_CTX_end(param_7);
      return uVar9;
    }
    local_58 = 0;
    do {
      iVar3 = local_58;
      if (param_4 == (BIGNUM *)0x0) {
        if (param_2 < 0x201) {
          local_78 = 0xfffffffffffffec8;
          iVar2 = 0x40;
        }
        else if (param_2 < 0x401) {
          local_78 = 0xfffffffffffffd30;
          iVar2 = 0x80;
        }
        else if (param_2 < 0x801) {
          local_78 = 0xfffffffffffff59e;
          iVar2 = 0x180;
        }
        else {
          local_78 = 0xffffffffffffe01e;
          if (0x1000 < param_2) {
            local_78 = 0xffffffffffffba38;
          }
          iVar2 = 0x800;
          if (param_2 < 0x1001) {
            iVar2 = 0x400;
          }
        }
LAB_005b6a45:
        iVar1 = BN_priv_rand_ex(param_1,param_2,1,1,0,param_7);
        if ((iVar1 != 0) && ((param_3 == 0 || (iVar1 = BN_set_bit(param_1,1), iVar1 != 0)))) {
          puVar10 = (ushort *)(primes + 4);
          uVar4 = 3;
          puVar7 = (ushort *)((long)ptr + 2);
          while( true ) {
            uVar4 = BN_mod_word(param_1,uVar4);
            if (uVar4 == 0xffffffffffffffff) goto LAB_005b6798;
            *puVar7 = (ushort)uVar4;
            puVar7 = puVar7 + 1;
            if (puVar10 == (ushort *)(primes + (ulong)(iVar2 - 2) * 2 + 4)) break;
            uVar4 = (ulong)*puVar10;
            puVar10 = puVar10 + 1;
          }
          uVar4 = 0;
LAB_005b6ad8:
          puVar10 = (ushort *)(primes + 4);
          uVar8 = 3;
          puVar7 = (ushort *)((long)ptr + 2);
          do {
            uVar6 = (ulong)uVar8;
            if ((uVar4 < 0x80000000 && param_2 < 0x20) &&
               (uVar5 = BN_get_word(param_1), uVar5 + uVar4 < uVar6 * uVar6)) {
LAB_005b6b9d:
              iVar1 = BN_add_word(param_1,uVar4);
              if (iVar1 == 0) break;
              iVar1 = BN_num_bits(param_1);
              if (param_2 == iVar1) goto LAB_005b6829;
              goto LAB_005b6a45;
            }
            uVar6 = (*puVar7 + uVar4) % uVar6;
            if (param_3 == 0) {
              if (uVar6 == 0) goto LAB_005b6b46;
            }
            else if (uVar6 < 2) goto LAB_005b6b46;
            puVar7 = puVar7 + 1;
            if ((ushort *)(primes + (ulong)(iVar2 - 2) * 2 + 4) == puVar10) goto LAB_005b6b9d;
            uVar8 = *puVar10;
            puVar10 = puVar10 + 1;
          } while( true );
        }
        goto LAB_005b6798;
      }
      if (param_2 < 0x201) {
        local_90 = 0xfffffffffffffec8;
        iVar2 = 0x40;
      }
      else if (param_2 < 0x401) {
        local_90 = 0xfffffffffffffd30;
        iVar2 = 0x80;
      }
      else if (param_2 < 0x801) {
        local_90 = 0xfffffffffffff59e;
        iVar2 = 0x180;
      }
      else {
        local_90 = 0xffffffffffffe01e;
        if (0x1000 < param_2) {
          local_90 = 0xffffffffffffba38;
        }
        iVar2 = 0x800;
        if (param_2 < 0x1001) {
          iVar2 = 0x400;
        }
      }
      BN_CTX_start(param_7);
      rem = BN_CTX_get(param_7);
      if (rem == (BIGNUM *)0x0) {
LAB_005b6908:
        BN_CTX_end(param_7);
        goto LAB_005b6798;
      }
      uVar4 = BN_get_word(param_4);
      if (CARRY8(uVar4,local_90)) {
        local_90 = BN_get_word(param_4);
        local_90 = ~local_90;
      }
LAB_005b65c5:
      iVar1 = BN_rand_ex(param_1,param_2,0,1,0,param_7);
      if (((iVar1 == 0) || (iVar1 = BN_div((BIGNUM *)0x0,rem,param_1,param_4,param_7), iVar1 == 0))
         || (iVar1 = BN_sub(param_1,param_1,rem), iVar1 == 0)) goto LAB_005b6908;
      if (param_5 == (BIGNUM *)0x0) {
        iVar1 = BN_add_word(param_1,(-(ulong)(param_3 == 0) & 0xfffffffffffffffe) + 3);
      }
      else {
        iVar1 = BN_add(param_1,param_1,param_5);
      }
      if ((iVar1 == 0) ||
         (((iVar1 = BN_num_bits(param_1), iVar1 < param_2 ||
           (uVar4 = BN_get_word(param_1), uVar4 < (-(ulong)(param_3 == 0) & 0xfffffffffffffffe) + 5)
           ) && (iVar1 = BN_add(param_1,param_1,param_4), iVar1 == 0)))) goto LAB_005b6908;
      uVar4 = 3;
      puVar10 = (ushort *)(primes + 4);
      puVar7 = (ushort *)((long)ptr + 2);
      while( true ) {
        uVar4 = BN_mod_word(param_1,uVar4);
        if (uVar4 == 0xffffffffffffffff) goto LAB_005b6908;
        *puVar7 = (ushort)uVar4;
        puVar7 = puVar7 + 1;
        if ((ushort *)(primes + (ulong)(iVar2 - 2) * 2 + 4) == puVar10) break;
        uVar4 = (ulong)*puVar10;
        puVar10 = puVar10 + 1;
      }
      uVar4 = 0;
LAB_005b66dc:
      uVar8 = 3;
      puVar7 = (ushort *)(primes + 4);
      puVar11 = (ushort *)((long)ptr + 2);
      while ((uVar6 = (ulong)uVar8, 0x7fffffff < uVar4 || 0x1f < param_2 ||
             (uVar5 = BN_get_word(param_1), uVar6 * uVar6 <= uVar5 + uVar4))) {
        uVar6 = (*puVar11 + uVar4) % uVar6;
        if (param_3 == 0) {
          if (uVar6 == 0) goto LAB_005b674d;
        }
        else if (uVar6 < 2) goto LAB_005b674d;
        puVar11 = puVar11 + 1;
        if (puVar7 == puVar10) break;
        uVar8 = *puVar7;
        puVar7 = puVar7 + 1;
      }
      iVar2 = BN_add_word(param_1,uVar4);
      if (iVar2 == 0) goto LAB_005b6908;
      BN_CTX_end(param_7);
LAB_005b6829:
      local_58 = iVar3 + 1;
      iVar2 = BN_GENCB_call(param_6,0,iVar3);
      if (iVar2 == 0) goto LAB_005b6798;
      if (param_3 == 0) {
        iVar3 = bn_is_prime_int(param_1,local_a0,param_7,0);
        if (iVar3 == -1) goto LAB_005b6798;
        if (iVar3 != 0) {
LAB_005b69ad:
          uVar9 = 1;
          goto LAB_005b679b;
        }
      }
      else {
        iVar2 = BN_rshift1(r,param_1);
        if (iVar2 == 0) goto LAB_005b6798;
        iVar2 = 0;
        while( true ) {
          iVar1 = bn_is_prime_int(param_1,1,param_7,0);
          if (iVar1 == -1) goto LAB_005b6798;
          if (iVar1 == 0) break;
          iVar1 = bn_is_prime_int(r,1,param_7,0);
          if (iVar1 == -1) goto LAB_005b6798;
          if (iVar1 == 0) break;
          iVar1 = BN_GENCB_call(param_6,2,iVar3);
          if (iVar1 == 0) goto LAB_005b6798;
          iVar2 = iVar2 + 1;
          if (iVar2 == local_a0) goto LAB_005b69ad;
        }
      }
    } while( true );
  }
  ERR_new();
  uVar9 = 0x8f;
LAB_005b6bea:
  ERR_set_debug("../crypto/bn/bn_prime.c",uVar9,"BN_generate_prime_ex2");
  ERR_set_error(3,0x76,0);
  return 0;
LAB_005b6b46:
  uVar4 = uVar4 + (-(ulong)(param_3 == 0) & 0xfffffffffffffffe) + 4;
  if (local_78 < uVar4) goto LAB_005b6a45;
  goto LAB_005b6ad8;
LAB_005b674d:
  uVar6 = BN_get_word(param_4);
  uVar4 = uVar4 + uVar6;
  if (local_90 < uVar4) goto LAB_005b65c5;
  goto LAB_005b66dc;
}


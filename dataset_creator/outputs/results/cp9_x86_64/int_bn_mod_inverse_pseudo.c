
BIGNUM * int_bn_mod_inverse(BIGNUM *param_1,BIGNUM *param_2,BIGNUM *param_3,BN_CTX *param_4,
                           undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  BIGNUM *pBVar3;
  BIGNUM *pBVar4;
  BIGNUM *pBVar5;
  BIGNUM *pBVar6;
  BIGNUM *pBVar7;
  BIGNUM *pBVar8;
  BIGNUM *pBVar9;
  BIGNUM *a;
  long in_FS_OFFSET;
  BIGNUM *local_98;
  BIGNUM *local_88;
  int local_64;
  BIGNUM local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = BN_abs_is_word(param_3,1);
  if ((iVar1 != 0) || (iVar1 = BN_is_zero(param_3), iVar1 != 0)) {
    local_88 = (BIGNUM *)0x0;
    *param_5 = 1;
    goto LAB_005b3174;
  }
  *param_5 = 0;
  iVar1 = BN_get_flags(param_2,4);
  if ((iVar1 == 0) && (iVar1 = BN_get_flags(param_3,4), iVar1 == 0)) {
    BN_CTX_start(param_4);
    pBVar5 = BN_CTX_get(param_4);
    pBVar4 = BN_CTX_get(param_4);
    pBVar3 = BN_CTX_get(param_4);
    pBVar6 = BN_CTX_get(param_4);
    pBVar7 = BN_CTX_get(param_4);
    local_98 = BN_CTX_get(param_4);
    pBVar8 = BN_CTX_get(param_4);
    if (pBVar8 == (BIGNUM *)0x0) {
      local_88 = (BIGNUM *)0x0;
      goto LAB_005b31b0;
    }
    if (param_1 == (BIGNUM *)0x0) {
      local_88 = BN_new();
      if (local_88 != (BIGNUM *)0x0) {
        BN_set_word(pBVar3,1);
        BN_zero_ex(local_98);
        pBVar9 = BN_copy(pBVar4,param_2);
        if ((pBVar9 != (BIGNUM *)0x0) && (pBVar9 = BN_copy(pBVar5,param_3), pBVar9 != (BIGNUM *)0x0)
           ) goto LAB_005b3289;
      }
      goto LAB_005b33df;
    }
    BN_set_word(pBVar3,1);
    BN_zero_ex(local_98);
    pBVar9 = BN_copy(pBVar4,param_2);
    if ((pBVar9 == (BIGNUM *)0x0) ||
       (pBVar9 = BN_copy(pBVar5,param_3), local_88 = param_1, pBVar9 == (BIGNUM *)0x0))
    goto LAB_005b31bc;
LAB_005b3289:
    pBVar5->neg = 0;
    if (((pBVar4->neg != 0) || (iVar1 = BN_ucmp(pBVar4,pBVar5), -1 < iVar1)) &&
       (iVar1 = BN_nnmod(pBVar4,pBVar4,pBVar5,param_4), iVar1 == 0)) goto LAB_005b31b0;
    iVar1 = BN_is_odd(param_3);
    if ((iVar1 != 0) && (iVar1 = BN_num_bits(param_3), iVar1 < 0x801)) {
      do {
        iVar1 = BN_is_zero(pBVar4);
        if (iVar1 != 0) goto LAB_005b3811;
        iVar1 = 0;
        while (iVar2 = BN_is_bit_set(pBVar4,iVar1), iVar2 == 0) {
          iVar1 = iVar1 + 1;
          iVar2 = BN_is_odd(pBVar3);
          if (((iVar2 != 0) && (iVar2 = BN_uadd(pBVar3,pBVar3,param_3), iVar2 == 0)) ||
             (iVar2 = BN_rshift1(pBVar3,pBVar3), iVar2 == 0)) goto LAB_005b31b0;
        }
        iVar2 = 0;
        if (iVar1 != 0) {
          iVar1 = BN_rshift(pBVar4,pBVar4,iVar1);
          goto joined_r0x005b383b;
        }
        while (iVar1 = BN_is_bit_set(pBVar5,iVar2), iVar1 == 0) {
          iVar2 = iVar2 + 1;
          iVar1 = BN_is_odd(local_98);
          if ((iVar1 != 0) && (iVar1 = BN_uadd(local_98,local_98,param_3), iVar1 == 0))
          goto LAB_005b31b0;
          iVar1 = BN_rshift1(local_98,local_98);
joined_r0x005b383b:
          if (iVar1 == 0) goto LAB_005b31b0;
        }
        if ((iVar2 != 0) && (iVar1 = BN_rshift(pBVar5,pBVar5,iVar2), iVar1 == 0)) break;
        iVar1 = BN_ucmp(pBVar4,pBVar5);
        if (iVar1 < 0) {
          iVar1 = BN_uadd(local_98,local_98,pBVar3);
          if (iVar1 == 0) break;
          iVar1 = BN_usub(pBVar5,pBVar5,pBVar4);
        }
        else {
          iVar1 = BN_uadd(pBVar3,pBVar3,local_98);
          if (iVar1 == 0) break;
          iVar1 = BN_usub(pBVar4,pBVar4,pBVar5);
        }
      } while (iVar1 != 0);
      goto LAB_005b31b0;
    }
    local_64 = -1;
    pBVar9 = pBVar5;
    a = local_98;
    while (local_98 = a, a = pBVar3, pBVar5 = pBVar9, pBVar9 = pBVar4, iVar1 = BN_is_zero(pBVar9),
          iVar1 == 0) {
      iVar1 = BN_num_bits(pBVar5);
      iVar2 = BN_num_bits(pBVar9);
      if (iVar1 == iVar2) {
LAB_005b3448:
        iVar1 = BN_set_word(pBVar6,1);
        if (iVar1 == 0) goto LAB_005b31b0;
        iVar1 = BN_sub(pBVar7,pBVar5,pBVar9);
      }
      else {
        iVar1 = BN_num_bits(pBVar5);
        iVar2 = BN_num_bits(pBVar9);
        if (iVar1 == iVar2 + 1) {
          iVar1 = BN_lshift1(pBVar8,pBVar9);
          if (iVar1 == 0) goto LAB_005b31b0;
          iVar1 = BN_ucmp(pBVar5,pBVar8);
          if (iVar1 < 0) goto LAB_005b3448;
          iVar1 = BN_sub(pBVar7,pBVar5,pBVar8);
          if ((iVar1 == 0) || (iVar1 = BN_add(pBVar6,pBVar8,pBVar9), iVar1 == 0)) goto LAB_005b31b0;
          iVar1 = BN_ucmp(pBVar5,pBVar6);
          if (iVar1 < 0) {
            iVar1 = BN_set_word(pBVar6,2);
          }
          else {
            iVar1 = BN_set_word(pBVar6,3);
            if (iVar1 == 0) goto LAB_005b31b0;
            iVar1 = BN_sub(pBVar7,pBVar7,pBVar9);
          }
        }
        else {
          iVar1 = BN_div(pBVar6,pBVar7,pBVar5,pBVar9,param_4);
        }
      }
      if (iVar1 == 0) goto LAB_005b31b0;
      iVar1 = BN_is_one(pBVar6);
      if (iVar1 == 0) {
        iVar1 = BN_is_word(pBVar6,2);
        if (iVar1 == 0) {
          iVar1 = BN_is_word(pBVar6,4);
          if (iVar1 == 0) {
            if (pBVar6->top == 1) {
              pBVar4 = BN_copy(pBVar5,a);
              if (pBVar4 == (BIGNUM *)0x0) goto LAB_005b31b0;
              iVar1 = BN_mul_word(pBVar5,*pBVar6->d);
            }
            else {
              iVar1 = BN_mul(pBVar5,pBVar6,a,param_4);
            }
          }
          else {
            iVar1 = BN_lshift(pBVar5,a,2);
          }
        }
        else {
          iVar1 = BN_lshift1(pBVar5,a);
        }
        if (iVar1 == 0) goto LAB_005b31b0;
        iVar1 = BN_add(pBVar5,pBVar5,local_98);
      }
      else {
        iVar1 = BN_add(pBVar5,a,local_98);
      }
      if (iVar1 == 0) goto LAB_005b31b0;
      local_64 = -local_64;
      pBVar4 = pBVar7;
      pBVar3 = pBVar5;
      pBVar7 = local_98;
    }
    if (local_64 == -1) {
LAB_005b3811:
      iVar1 = BN_sub(local_98,param_3,local_98);
      if (iVar1 == 0) goto LAB_005b31b0;
    }
    iVar1 = BN_is_one(pBVar5);
    if (iVar1 == 0) goto LAB_005b3786;
    if ((local_98->neg == 0) && (iVar1 = BN_ucmp(local_98,param_3), iVar1 < 0)) {
      pBVar4 = BN_copy(local_88,local_98);
      if (pBVar4 == (BIGNUM *)0x0) goto LAB_005b31b0;
    }
    else {
      iVar1 = BN_nnmod(local_88,local_98,param_3,param_4);
      if (iVar1 == 0) goto LAB_005b31b0;
    }
  }
  else {
    BN_CTX_start(param_4);
    pBVar3 = BN_CTX_get(param_4);
    pBVar4 = BN_CTX_get(param_4);
    pBVar5 = BN_CTX_get(param_4);
    pBVar6 = BN_CTX_get(param_4);
    local_98 = BN_CTX_get(param_4);
    pBVar7 = BN_CTX_get(param_4);
    local_88 = BN_CTX_get(param_4);
    if (local_88 == (BIGNUM *)0x0) {
LAB_005b31b0:
      if (param_1 == (BIGNUM *)0x0) goto LAB_005b33df;
    }
    else {
      if (param_1 != (BIGNUM *)0x0) {
        BN_set_word(pBVar5,1);
        BN_zero_ex(pBVar7);
        pBVar8 = BN_copy(pBVar4,param_2);
        if ((pBVar8 == (BIGNUM *)0x0) ||
           (pBVar8 = BN_copy(pBVar3,param_3), local_88 = param_1, pBVar8 == (BIGNUM *)0x0))
        goto LAB_005b31bc;
LAB_005b3009:
        pBVar3->neg = 0;
        if ((pBVar4->neg != 0) || (iVar1 = BN_ucmp(pBVar4,pBVar3), -1 < iVar1)) {
          bn_init(&local_58);
          BN_with_flags(&local_58,pBVar4,4);
          iVar1 = BN_nnmod(pBVar4,&local_58,pBVar3,param_4);
          if (iVar1 == 0) goto LAB_005b31b0;
        }
        local_64 = -1;
        while (pBVar9 = pBVar7, pBVar8 = pBVar3, pBVar3 = pBVar4, iVar1 = BN_is_zero(pBVar3),
              iVar1 == 0) {
          bn_init(&local_58);
          BN_with_flags(&local_58,pBVar8,4);
          iVar1 = BN_div(pBVar6,local_98,&local_58,pBVar3,param_4);
          if (((iVar1 == 0) || (iVar1 = BN_mul(pBVar8,pBVar6,pBVar5,param_4), iVar1 == 0)) ||
             (iVar1 = BN_add(pBVar8,pBVar8,pBVar9), iVar1 == 0)) goto LAB_005b31b0;
          local_64 = -local_64;
          pBVar4 = local_98;
          pBVar7 = pBVar5;
          pBVar5 = pBVar8;
          local_98 = pBVar9;
        }
        if ((local_64 != -1) || (iVar1 = BN_sub(pBVar9,param_3,pBVar9), iVar1 != 0)) {
          iVar1 = BN_is_one(pBVar8);
          if (iVar1 == 0) {
LAB_005b3786:
            *param_5 = 1;
          }
          else if ((pBVar9->neg == 0) && (iVar1 = BN_ucmp(pBVar9,param_3), iVar1 < 0)) {
            pBVar4 = BN_copy(local_88,pBVar9);
            if (pBVar4 != (BIGNUM *)0x0) {
LAB_005b3152:
              *param_5 = 0;
              goto LAB_005b31c5;
            }
          }
          else {
            iVar1 = BN_nnmod(local_88,pBVar9,param_3,param_4);
            if (iVar1 != 0) goto LAB_005b3152;
          }
        }
        goto LAB_005b31b0;
      }
      local_88 = BN_new();
      if (local_88 != (BIGNUM *)0x0) {
        BN_set_word(pBVar5,1);
        BN_zero_ex(pBVar7);
        pBVar8 = BN_copy(pBVar4,param_2);
        if ((pBVar8 != (BIGNUM *)0x0) && (pBVar8 = BN_copy(pBVar3,param_3), pBVar8 != (BIGNUM *)0x0)
           ) goto LAB_005b3009;
      }
LAB_005b33df:
      BN_free(local_88);
    }
LAB_005b31bc:
    local_88 = (BIGNUM *)0x0;
  }
LAB_005b31c5:
  BN_CTX_end(param_4);
LAB_005b3174:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return local_88;
}


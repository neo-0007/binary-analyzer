
undefined8 generate_key(long param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  BN_CTX *c;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  undefined8 uVar4;
  
  iVar2 = BN_num_bits(*(BIGNUM **)(param_1 + 8));
  if (10000 < iVar2) {
    ERR_new();
    ERR_set_debug("../crypto/dh/dh_key.c",0x111,"generate_key");
    ERR_set_error(5,0x67,0);
    return 0;
  }
  if ((*(BIGNUM **)(param_1 + 0x10) != (BIGNUM *)0x0) &&
     (iVar2 = BN_num_bits(*(BIGNUM **)(param_1 + 0x10)), 10000 < iVar2)) {
    ERR_new();
    ERR_set_debug("../crypto/dh/dh_key.c",0x117,"generate_key");
    ERR_set_error(5,0x82,0);
    return 0;
  }
  iVar2 = BN_num_bits(*(BIGNUM **)(param_1 + 8));
  if (iVar2 < 0x200) {
    ERR_new();
    ERR_set_debug("../crypto/dh/dh_key.c",0x11c,"generate_key");
    ERR_set_error(5,0x7e,0);
    return 0;
  }
  c = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_1 + 0xb0));
  if (c == (BN_CTX *)0x0) {
LAB_004c8d10:
    a_00 = (BIGNUM *)0x0;
    a = (BIGNUM *)0x0;
  }
  else {
    a_00 = *(BIGNUM **)(param_1 + 0x78);
    if (a_00 == (BIGNUM *)0x0) {
      a_00 = (BIGNUM *)BN_secure_new();
      if (a_00 == (BIGNUM *)0x0) goto LAB_004c8d10;
      a = *(BIGNUM **)(param_1 + 0x70);
      if ((a != (BIGNUM *)0x0) || (a = BN_new(), a != (BIGNUM *)0x0)) {
        iVar2 = DH_get_nid(param_1);
        if (iVar2 == 0) {
          if (*(long *)(param_1 + 0x10) == 0) {
            iVar2 = *(int *)(param_1 + 0x68);
            a_01 = *(BIGNUM **)(param_1 + 8);
            if (iVar2 == 0) {
LAB_004c8f15:
              iVar2 = BN_num_bits(a_01);
              iVar2 = iVar2 + -1;
            }
            else {
              iVar3 = BN_num_bits(a_01);
              if (iVar3 <= iVar2) goto LAB_004c8d16;
              iVar2 = *(int *)(param_1 + 0x68);
              if (iVar2 == 0) {
                a_01 = *(BIGNUM **)(param_1 + 8);
                goto LAB_004c8f15;
              }
            }
            iVar2 = BN_priv_rand_ex(a_00,iVar2,0,0,0,c);
            if (iVar2 != 0) {
              iVar2 = BN_is_word(*(undefined8 *)(param_1 + 0x18),2);
              if ((iVar2 == 0) || (iVar2 = BN_is_bit_set(*(BIGNUM **)(param_1 + 8),2), iVar2 != 0))
              goto LAB_004c8c94;
              iVar2 = BN_clear_bit(a_00,0);
              goto joined_r0x004c8e97;
            }
          }
          else {
            iVar2 = ossl_ffc_params_simple_validate(*(undefined8 *)(param_1 + 0xb0),param_1 + 8,1,0)
            ;
            if (iVar2 != 0) {
              iVar2 = BN_num_bits(*(BIGNUM **)(param_1 + 0x10));
              iVar2 = ossl_ffc_generate_private_key(c,param_1 + 8,iVar2,0x50,a_00);
              goto joined_r0x004c8e97;
            }
          }
        }
        else {
          iVar2 = BN_num_bits(*(BIGNUM **)(param_1 + 8));
          uVar1 = ossl_ifc_ffc_compute_security_bits(iVar2);
          if ((*(BIGNUM **)(param_1 + 0x10) != (BIGNUM *)0x0) &&
             (iVar2 = *(int *)(param_1 + 0x68), iVar3 = BN_num_bits(*(BIGNUM **)(param_1 + 0x10)),
             iVar2 <= iVar3)) {
            iVar2 = ossl_ffc_generate_private_key
                              (c,param_1 + 8,*(undefined4 *)(param_1 + 0x68),uVar1,a_00);
joined_r0x004c8e97:
            if (iVar2 != 0) goto LAB_004c8c94;
          }
        }
      }
    }
    else {
      a = *(BIGNUM **)(param_1 + 0x70);
      if ((a == (BIGNUM *)0x0) && (a = BN_new(), a == (BIGNUM *)0x0)) goto LAB_004c8d16;
LAB_004c8c94:
      iVar2 = ossl_dh_generate_public_key(c,param_1,a_00,a);
      if (iVar2 != 0) {
        *(BIGNUM **)(param_1 + 0x78) = a_00;
        uVar4 = 1;
        *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + 1;
        *(BIGNUM **)(param_1 + 0x70) = a;
        goto LAB_004c8d6c;
      }
    }
  }
LAB_004c8d16:
  ERR_new();
  ERR_set_debug("../crypto/dh/dh_key.c",0x177,"generate_key");
  ERR_set_error(5,0x80003,0);
  if (*(BIGNUM **)(param_1 + 0x70) != a) {
    BN_free(a);
  }
  if (*(BIGNUM **)(param_1 + 0x78) == a_00) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    BN_free(a_00);
  }
LAB_004c8d6c:
  BN_CTX_free(c);
  return uVar4;
}


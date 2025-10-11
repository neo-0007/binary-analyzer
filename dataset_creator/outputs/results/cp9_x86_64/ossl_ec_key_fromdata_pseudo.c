
uint ossl_ec_key_fromdata(EC_KEY *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  EC_GROUP *group;
  EC_POINT *p;
  undefined8 uVar3;
  BN_CTX *ctx;
  long lVar4;
  long in_FS_OFFSET;
  long local_60;
  BIGNUM *local_58;
  uchar *local_50;
  size_t local_48;
  long local_40;
  
  uVar2 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (BIGNUM *)0x0;
  local_50 = (uchar *)0x0;
  group = EC_KEY_get0_group(param_1);
  if (group == (EC_GROUP *)0x0) goto LAB_004df2a1;
  p = (EC_POINT *)OSSL_PARAM_locate_const(param_2,&DAT_007da6af);
  local_60 = 0;
  if (param_3 != 0) {
    local_60 = OSSL_PARAM_locate_const(param_2,&DAT_007c4ad5);
  }
  uVar3 = ossl_ec_key_get_libctx(param_1);
  ctx = (BN_CTX *)BN_CTX_new_ex(uVar3);
  if (ctx == (BN_CTX *)0x0) {
LAB_004df26c:
    uVar2 = 0;
    p = (EC_POINT *)0x0;
  }
  else {
    if (p != (EC_POINT *)0x0) {
      iVar1 = OSSL_PARAM_get_octet_string(p,&local_50,0,&local_48);
      if (iVar1 != 0) {
        p = EC_POINT_new(group);
        if (p != (EC_POINT *)0x0) {
          uVar2 = EC_POINT_oct2point(group,p,local_50,local_48,ctx);
          if (uVar2 != 0) goto LAB_004df303;
          goto LAB_004df271;
        }
      }
      goto LAB_004df26c;
    }
LAB_004df303:
    if ((local_60 == 0) || (param_3 == 0)) {
LAB_004df30f:
      if (local_58 != (BIGNUM *)0x0) {
        uVar2 = EC_KEY_set_private_key(param_1,local_58);
        if (uVar2 == 0) goto LAB_004df271;
      }
      uVar2 = 1;
      if (p != (EC_POINT *)0x0) {
        iVar1 = EC_KEY_set_public_key(param_1,p);
        uVar2 = (uint)(iVar1 != 0);
      }
    }
    else {
      uVar2 = 0;
      lVar4 = EC_GROUP_get0_order(group);
      if (lVar4 != 0) {
        iVar1 = BN_is_zero(lVar4);
        if (iVar1 == 0) {
          iVar1 = bn_get_top(lVar4);
          local_58 = (BIGNUM *)BN_secure_new();
          uVar2 = 0;
          if (local_58 != (BIGNUM *)0x0) {
            lVar4 = bn_wexpand(local_58,iVar1 + 2);
            if (lVar4 != 0) {
              BN_set_flags(local_58,4);
              iVar1 = OSSL_PARAM_get_BN(local_60,&local_58);
              if (iVar1 != 0) goto LAB_004df30f;
              uVar2 = 0;
            }
          }
        }
        else {
          uVar2 = 0;
        }
      }
    }
  }
LAB_004df271:
  BN_CTX_free(ctx);
  BN_clear_free(local_58);
  CRYPTO_free(local_50);
  EC_POINT_free(p);
LAB_004df2a1:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


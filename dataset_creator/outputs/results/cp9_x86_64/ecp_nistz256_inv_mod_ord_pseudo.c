
bool ecp_nistz256_inv_mod_ord(long param_1,undefined8 param_2,BIGNUM *param_3,BN_CTX *param_4)

{
  int iVar1;
  long lVar2;
  BIGNUM *r;
  byte bVar3;
  undefined8 uVar4;
  byte *pbVar5;
  long in_FS_OFFSET;
  bool bVar6;
  undefined1 auStack_268 [32];
  undefined1 local_248 [32];
  undefined1 local_228 [32];
  undefined1 local_208 [32];
  undefined1 local_1e8 [32];
  undefined1 local_1c8 [32];
  undefined1 local_1a8 [32];
  undefined1 local_188 [32];
  undefined1 local_168 [32];
  undefined1 local_148 [32];
  undefined1 local_128 [32];
  undefined1 local_108 [32];
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = bn_wexpand(param_2,4);
  if (lVar2 == 0) {
    ERR_new();
    uVar4 = 0x530;
  }
  else {
    iVar1 = BN_num_bits(param_3);
    if (((iVar1 < 0x101) && (iVar1 = BN_is_negative(param_3), iVar1 == 0)) ||
       ((r = BN_CTX_get(param_4), r != (BIGNUM *)0x0 &&
        (iVar1 = BN_nnmod(r,param_3,*(BIGNUM **)(param_1 + 0x10),param_4), param_3 = r, iVar1 != 0))
       )) {
      iVar1 = bn_copy_words(local_248,param_3,4);
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("../crypto/ec/ecp_nistz256.c",0x540,"ecp_nistz256_inv_mod_ord");
        ERR_set_error(0x10,0x92,0);
        bVar6 = false;
      }
      else {
        ecp_nistz256_ord_mul_mont(local_228,local_248,&RR_7);
        ecp_nistz256_ord_sqr_mont(local_208,local_228,1);
        ecp_nistz256_ord_mul_mont(local_1e8,local_228,local_208);
        ecp_nistz256_ord_mul_mont(local_1c8,local_1e8,local_208);
        ecp_nistz256_ord_mul_mont(local_1a8,local_1c8,local_208);
        ecp_nistz256_ord_sqr_mont(local_188,local_1c8,1);
        ecp_nistz256_ord_mul_mont(local_168,local_188,local_1c8);
        ecp_nistz256_ord_sqr_mont(local_148,local_188,1);
        ecp_nistz256_ord_mul_mont(local_148,local_148,local_228);
        ecp_nistz256_ord_sqr_mont(local_128,local_148,1);
        ecp_nistz256_ord_mul_mont(local_108,local_128,local_1c8);
        ecp_nistz256_ord_mul_mont(local_e8,local_128,local_148);
        ecp_nistz256_ord_sqr_mont(local_c8,local_e8,2);
        ecp_nistz256_ord_mul_mont(local_c8,local_c8,local_1e8);
        ecp_nistz256_ord_sqr_mont(local_a8,local_c8,8);
        ecp_nistz256_ord_mul_mont(local_a8,local_a8,local_c8);
        ecp_nistz256_ord_sqr_mont(local_88,local_a8,0x10);
        ecp_nistz256_ord_mul_mont(local_88,local_88,local_a8);
        ecp_nistz256_ord_sqr_mont(auStack_268,local_88,0x40);
        ecp_nistz256_ord_mul_mont(auStack_268,auStack_268,local_88);
        bVar3 = 0x20;
        pbVar5 = chain_6 + 1;
        while( true ) {
          ecp_nistz256_ord_sqr_mont(auStack_268,auStack_268,bVar3);
          ecp_nistz256_ord_mul_mont(auStack_268,auStack_268,local_228 + (ulong)*pbVar5 * 0x20);
          if (pbVar5 + 2 == &DAT_007f6b17) break;
          bVar3 = pbVar5[1];
          pbVar5 = pbVar5 + 2;
        }
        ecp_nistz256_ord_mul_mont(auStack_268,auStack_268,one_5);
        iVar1 = bn_set_words(param_2,auStack_268,4);
        bVar6 = iVar1 != 0;
      }
      goto LAB_004fdc2b;
    }
    ERR_new();
    uVar4 = 0x539;
  }
  bVar6 = false;
  ERR_set_debug("../crypto/ec/ecp_nistz256.c",uVar4,"ecp_nistz256_inv_mod_ord");
  ERR_set_error(0x10,0x80003,0);
LAB_004fdc2b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return bVar6;
}


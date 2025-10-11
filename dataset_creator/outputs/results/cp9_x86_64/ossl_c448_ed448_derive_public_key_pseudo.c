
undefined8
ossl_c448_ed448_derive_public_key
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined1 auStack_1b8 [64];
  undefined1 local_178 [256];
  byte local_78 [55];
  byte local_41;
  undefined1 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = oneshot_hash_constprop_0(param_1,local_78,0x39,param_3,param_4);
  if ((int)uVar1 != 0) {
    local_78[0] = local_78[0] & 0xfc;
    local_41 = local_41 | 0x80;
    local_40 = 0;
    ossl_curve448_scalar_decode_long(auStack_1b8,local_78,0x39);
    ossl_curve448_scalar_halve(auStack_1b8,auStack_1b8);
    ossl_curve448_scalar_halve(auStack_1b8,auStack_1b8);
    ossl_curve448_precomputed_scalarmul(local_178,ossl_curve448_precomputed_base,auStack_1b8);
    ossl_curve448_point_mul_by_ratio_and_encode_like_eddsa(param_2,local_178);
    ossl_curve448_scalar_destroy(auStack_1b8);
    ossl_curve448_point_destroy(local_178);
    OPENSSL_cleanse(local_78,0x39);
    uVar1 = 0xffffffff;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


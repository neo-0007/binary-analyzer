
void ossl_x448_derive_public_key(undefined8 param_1,ulong *param_2)

{
  long in_FS_OFFSET;
  undefined1 auStack_198 [64];
  undefined1 local_158 [256];
  ulong local_58;
  ulong uStack_50;
  ulong local_48;
  ulong uStack_40;
  ulong local_38;
  ulong uStack_30;
  ulong local_28;
  long local_20;
  
  uStack_50 = param_2[1];
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_2[2];
  uStack_40 = param_2[3];
  local_38 = param_2[4];
  uStack_30 = param_2[5];
  local_28 = param_2[6] | 0x8000000000000000;
  local_58 = *param_2 & 0xfffffffffffffffc;
  ossl_curve448_scalar_decode_long(auStack_198,&local_58,0x38);
  ossl_curve448_scalar_halve(auStack_198,auStack_198);
  ossl_curve448_precomputed_scalarmul(local_158,ossl_curve448_precomputed_base,auStack_198);
  ossl_curve448_point_mul_by_ratio_and_encode_like_x448(param_1,local_158);
  ossl_curve448_point_destroy(local_158);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



undefined8
ossl_c448_ed448_verify
          (undefined8 param_1,void *param_2,void *param_3,void *param_4,size_t param_5,
          undefined1 param_6,undefined8 param_7,undefined1 param_8,undefined8 param_9)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  EVP_MD_CTX *ctx;
  byte bVar5;
  long in_FS_OFFSET;
  undefined1 local_338 [64];
  undefined1 local_2f8 [64];
  undefined1 local_2b8 [256];
  undefined1 local_1b8 [256];
  undefined1 local_b8 [120];
  long local_40;
  
  bVar5 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar3 = 0x37; bVar1 = *(byte *)((long)param_2 + lVar3 + 0x3a), bVar1 <= bVar5;
      lVar3 = lVar3 + -1) {
    if (bVar1 < bVar5) {
      uVar4 = ossl_curve448_point_decode_like_eddsa_and_mul_by_ratio(local_2b8,param_3);
      if ((int)uVar4 != -1) goto LAB_004d2368;
      uVar4 = ossl_curve448_point_decode_like_eddsa_and_mul_by_ratio(local_1b8,param_2);
      if ((int)uVar4 != -1) goto LAB_004d2368;
      ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
      if (ctx != (EVP_MD_CTX *)0x0) {
        iVar2 = hash_init_with_dom_constprop_0(param_1,ctx,param_6,param_7,param_8,param_9);
        if (iVar2 != 0) {
          iVar2 = EVP_DigestUpdate(ctx,param_2,0x39);
          if (iVar2 != 0) {
            iVar2 = EVP_DigestUpdate(ctx,param_3,0x39);
            if (iVar2 != 0) {
              iVar2 = EVP_DigestUpdate(ctx,param_4,param_5);
              if (iVar2 != 0) {
                iVar2 = EVP_DigestFinalXOF(ctx,local_b8,0x72);
                if (iVar2 != 0) {
                  EVP_MD_CTX_free(ctx);
                  ossl_curve448_scalar_decode_long(local_338,local_b8,0x72);
                  OPENSSL_cleanse(local_b8,0x72);
                  ossl_curve448_scalar_sub(local_338,ossl_curve448_scalar_zero,local_338);
                  ossl_curve448_scalar_decode_long(local_2f8,(long)param_2 + 0x39,0x39);
                  ossl_curve448_base_double_scalarmul_non_secret
                            (local_2b8,local_2f8,local_2b8,local_338);
                  uVar4 = ossl_curve448_point_eq(local_2b8,local_1b8);
                  goto LAB_004d2368;
                }
              }
            }
          }
        }
      }
      EVP_MD_CTX_free(ctx);
      uVar4 = 0;
      goto LAB_004d2368;
    }
    if (lVar3 == -1) break;
    bVar5 = order_0[lVar3];
  }
  uVar4 = 0;
LAB_004d2368:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



int ossl_c448_ed448_sign
              (undefined8 param_1,undefined1 *param_2,undefined8 param_3,void *param_4,void *param_5
              ,size_t param_6,undefined1 param_7,undefined8 param_8,undefined8 param_9,
              undefined8 param_10)

{
  int iVar1;
  EVP_MD_CTX *ctx;
  long lVar2;
  undefined1 *puVar3;
  long in_FS_OFFSET;
  byte bVar4;
  undefined1 local_2b8 [64];
  undefined1 local_278 [64];
  undefined1 local_238 [64];
  undefined1 local_1f8 [256];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined1 local_c0;
  byte local_b8 [55];
  byte local_81;
  undefined1 local_80;
  undefined1 local_7f [63];
  long local_40;
  
  bVar4 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  local_c8 = 0;
  local_c0 = 0;
  iVar1 = 0;
  local_f8 = (undefined1  [16])0x0;
  local_e8 = (undefined1  [16])0x0;
  local_d8 = (undefined1  [16])0x0;
  if (ctx == (EVP_MD_CTX *)0x0) goto LAB_004d1ff0;
  iVar1 = oneshot_hash_constprop_0(param_1,local_b8,0x72,param_3,param_10);
  if (iVar1 == 0) {
LAB_004d1fde:
    iVar1 = 0;
  }
  else {
    local_b8[0] = local_b8[0] & 0xfc;
    local_81 = local_81 | 0x80;
    local_80 = 0;
    ossl_curve448_scalar_decode_long(local_2b8,local_b8,0x39);
    iVar1 = hash_init_with_dom_constprop_0(param_1,ctx,param_7,param_8,param_9,param_10);
    if (iVar1 == 0) {
LAB_004d208e:
      OPENSSL_cleanse(local_b8,0x72);
      goto LAB_004d1fde;
    }
    iVar1 = EVP_DigestUpdate(ctx,local_7f,0x39);
    if (iVar1 == 0) goto LAB_004d208e;
    iVar1 = EVP_DigestUpdate(ctx,param_5,param_6);
    if (iVar1 == 0) goto LAB_004d208e;
    OPENSSL_cleanse(local_b8,0x72);
    iVar1 = EVP_DigestFinalXOF(ctx,local_b8,0x72);
    if (iVar1 != 0) {
      ossl_curve448_scalar_decode_long(local_278,local_b8,0x72);
      OPENSSL_cleanse(local_b8,0x72);
      ossl_curve448_scalar_halve(local_238,local_278);
      ossl_curve448_scalar_halve(local_238,local_238);
      ossl_curve448_precomputed_scalarmul(local_1f8,ossl_curve448_precomputed_base,local_238);
      ossl_curve448_point_mul_by_ratio_and_encode_like_eddsa(local_f8,local_1f8);
      ossl_curve448_point_destroy(local_1f8);
      ossl_curve448_scalar_destroy(local_238);
      iVar1 = hash_init_with_dom_constprop_0(param_1,ctx,param_7,param_8,param_9,param_10);
      if (iVar1 != 0) {
        iVar1 = EVP_DigestUpdate(ctx,local_f8,0x39);
        if (iVar1 != 0) {
          iVar1 = EVP_DigestUpdate(ctx,param_4,0x39);
          if (iVar1 != 0) {
            iVar1 = EVP_DigestUpdate(ctx,param_5,param_6);
            if (iVar1 != 0) {
              iVar1 = EVP_DigestFinalXOF(ctx,local_b8,0x72);
              if (iVar1 != 0) {
                ossl_curve448_scalar_decode_long(local_1f8,local_b8,0x72);
                OPENSSL_cleanse(local_b8,0x72);
                ossl_curve448_scalar_mul(local_1f8,local_1f8,local_2b8);
                ossl_curve448_scalar_add(local_1f8,local_1f8,local_278);
                OPENSSL_cleanse(param_2,0x72);
                puVar3 = local_f8;
                for (lVar2 = 0x39; lVar2 != 0; lVar2 = lVar2 + -1) {
                  *param_2 = *puVar3;
                  puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
                  param_2 = param_2 + (ulong)bVar4 * -2 + 1;
                }
                ossl_curve448_scalar_encode(param_2,local_1f8);
                ossl_curve448_scalar_destroy(local_2b8);
                ossl_curve448_scalar_destroy(local_278);
                ossl_curve448_scalar_destroy(local_1f8);
                iVar1 = -1;
                goto LAB_004d1fe0;
              }
            }
          }
        }
      }
      goto LAB_004d1fde;
    }
  }
LAB_004d1fe0:
  EVP_MD_CTX_free(ctx);
LAB_004d1ff0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


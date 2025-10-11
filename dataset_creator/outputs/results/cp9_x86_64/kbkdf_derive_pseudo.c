
undefined4 kbkdf_derive(long param_1,void *param_2,ulong param_3,undefined8 param_4)

{
  void *__dest;
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  ulong uVar10;
  void *__dest_00;
  long lVar11;
  ulong __n;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  long in_FS_OFFSET;
  size_t local_b8;
  uint local_ac;
  undefined1 local_49;
  uint local_48;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar7 = ossl_prov_is_running();
  if ((iVar7 != 0) && (iVar7 = kbkdf_set_ctx_params(param_1,param_4), iVar7 != 0)) {
    if (*(long *)(param_1 + 0x10) == 0) {
      if ((*(long *)(param_1 + 0x20) == 0) || (*(long *)(param_1 + 0x18) == 0)) {
        ERR_new();
        ERR_set_debug("../providers/implementations/kdfs/kbkdf.c",0xe4,"kbkdf_derive");
        ERR_set_error(0x39,0x72,0);
        uVar9 = 0;
      }
      else {
        ERR_new();
        ERR_set_debug("../providers/implementations/kdfs/kbkdf.c",0xe9,"kbkdf_derive");
        ERR_set_error(0x39,0x96,0);
        uVar9 = 0;
      }
      goto LAB_00465a8c;
    }
    if (param_3 != 0) {
      uVar10 = EVP_MAC_CTX_get_mac_size();
      if (uVar10 == 0) {
LAB_00465dcc:
        __dest_00 = (void *)0x0;
      }
      else if ((*(ulong *)(param_1 + 0x50) == 0) || (uVar10 == *(ulong *)(param_1 + 0x50))) {
        local_ac = 0;
        if (*(int *)(param_1 + 0x58) != 0) {
          uVar14 = (int)param_3 * 8;
          local_ac = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                     (int)param_3 << 0x1b;
        }
        __dest_00 = (void *)CRYPTO_zalloc(uVar10,"../providers/implementations/kdfs/kbkdf.c",0xfe);
        if (__dest_00 == (void *)0x0) goto LAB_00465dcc;
        iVar7 = *(int *)(param_1 + 0x5c);
        iVar1 = *(int *)(param_1 + 8);
        local_49 = 0;
        uVar2 = *(undefined8 *)(param_1 + 0x40);
        uVar3 = *(undefined8 *)(param_1 + 0x10);
        uVar4 = *(undefined8 *)(param_1 + 0x38);
        uVar5 = *(undefined8 *)(param_1 + 0x30);
        local_48 = local_ac;
        uVar6 = *(undefined8 *)(param_1 + 0x28);
        local_b8 = *(size_t *)(param_1 + 0x50);
        if (local_b8 != 0) {
          memcpy(__dest_00,*(void **)(param_1 + 0x48),local_b8);
        }
        uVar12 = 0;
        local_44 = 0x1000000;
        uVar14 = 1;
        uVar13 = param_3;
        while ((((lVar11 = EVP_MAC_CTX_dup(uVar3), lVar11 != 0 &&
                 ((((iVar1 != 1 || (iVar8 = EVP_MAC_update(lVar11,__dest_00,local_b8), iVar8 != 0))
                   && (iVar8 = EVP_MAC_update(lVar11,&local_44,4), iVar8 != 0)) &&
                  (iVar8 = EVP_MAC_update(lVar11,uVar6,uVar5), iVar8 != 0)))) &&
                ((((iVar7 == 0 || (iVar8 = EVP_MAC_update(lVar11,&local_49,1), iVar8 != 0)) &&
                  (iVar8 = EVP_MAC_update(lVar11,uVar4,uVar2), iVar8 != 0)) &&
                 ((local_ac == 0 || (iVar8 = EVP_MAC_update(lVar11,&local_48,4), iVar8 != 0)))))) &&
               (iVar8 = EVP_MAC_final(lVar11,__dest_00,0,uVar10), iVar8 != 0))) {
          __n = uVar13;
          if (uVar10 <= uVar13) {
            __n = uVar10;
          }
          uVar14 = uVar14 + 1;
          uVar13 = uVar13 - uVar10;
          __dest = (void *)((long)param_2 + uVar12);
          uVar12 = uVar12 + uVar10;
          memcpy(__dest,__dest_00,__n);
          EVP_MAC_CTX_free(lVar11);
          if (param_3 <= uVar12) {
            EVP_MAC_CTX_free(0);
            uVar9 = 1;
            goto LAB_00465ddc;
          }
          local_44 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                     uVar14 * 0x1000000;
          local_b8 = uVar10;
        }
        EVP_MAC_CTX_free(lVar11);
      }
      else {
        ERR_new();
        __dest_00 = (void *)0x0;
        ERR_set_debug("../providers/implementations/kdfs/kbkdf.c",0xf7,"kbkdf_derive");
        ERR_set_error(0x39,0x9a,0);
      }
      OPENSSL_cleanse(param_2,param_3);
      uVar9 = 0;
LAB_00465ddc:
      CRYPTO_clear_free(__dest_00,uVar10,"../providers/implementations/kdfs/kbkdf.c",0x108);
      goto LAB_00465a8c;
    }
    ERR_new();
    ERR_set_debug("../providers/implementations/kdfs/kbkdf.c",0xef,"kbkdf_derive");
    ERR_set_error(0x39,0x69,0);
  }
  uVar9 = 0;
LAB_00465a8c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar9;
}



int evp_pkey_asym_cipher_init(int *param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  code *pcVar12;
  uint uVar13;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  if (param_1 == (int *)0x0) {
    ERR_new();
    uVar10 = 0x20;
LAB_00512807:
    iVar5 = -2;
    ERR_set_debug("../crypto/evp/asymcipher.c",uVar10,"evp_pkey_asym_cipher_init");
    ERR_set_error(6,0x96,0);
  }
  else {
    evp_pkey_ctx_free_old_ops();
    *param_1 = param_2;
    ERR_set_mark();
    lVar6 = *(long *)(param_1 + 8);
    if (lVar6 == 0) {
LAB_005124d9:
      ERR_pop_to_mark();
      EVP_KEYMGMT_free(local_48);
      lVar6 = *(long *)(param_1 + 0x1e);
      local_48 = 0;
      if ((lVar6 == 0) || (*(long *)(lVar6 + 0x98) == 0)) {
        ERR_new();
        uVar10 = 0xbd;
        goto LAB_00512807;
      }
      if (*param_1 == 0x200) {
        pcVar12 = *(code **)(lVar6 + 0x90);
      }
      else {
        if (*param_1 != 0x400) {
          ERR_new();
          ERR_set_debug("../crypto/evp/asymcipher.c",0xcc,"evp_pkey_asym_cipher_init");
          iVar5 = -1;
          ERR_set_error(6,0x86,0);
          goto LAB_00512648;
        }
        pcVar12 = *(code **)(lVar6 + 0xa0);
      }
      if (pcVar12 == (code *)0x0) {
        iVar5 = 1;
        goto LAB_00512660;
      }
      iVar5 = (*pcVar12)(param_1);
      if (iVar5 < 1) goto LAB_00512648;
    }
    else {
      if (*(long *)(param_1 + 0x22) == 0) {
        ERR_clear_last_mark();
        iVar5 = 0;
        ERR_new();
        ERR_set_debug("../crypto/evp/asymcipher.c",0x2e,"evp_pkey_asym_cipher_init");
        ERR_set_error(6,0x9a,0);
      }
      else {
        lVar11 = *(long *)(*(long *)(param_1 + 0x22) + 0x60);
        bVar3 = lVar6 == lVar11 || lVar11 == 0;
        if (lVar6 == lVar11 || lVar11 == 0) {
          lVar11 = 0;
          lVar6 = evp_keymgmt_util_query_operation_name(lVar6,0xd);
          uVar13 = 1;
          if (lVar6 == 0) {
            ERR_clear_last_mark();
            ERR_new();
            ERR_set_debug("../crypto/evp/asymcipher.c",0x40,"evp_pkey_asym_cipher_init");
            ERR_set_error(6,0x86,0);
            iVar5 = 0;
          }
          else {
            do {
              while( true ) {
                EVP_ASYM_CIPHER_free(lVar11);
                EVP_KEYMGMT_free(local_48);
                if (uVar13 == 2) break;
                lVar11 = EVP_ASYM_CIPHER_fetch
                                   (*(undefined8 *)(param_1 + 2),lVar6,*(undefined8 *)(param_1 + 4))
                ;
                if (lVar11 != 0) {
                  uVar10 = EVP_ASYM_CIPHER_get0_provider(lVar11);
                  goto LAB_0051242a;
                }
                lVar11 = 0;
                lVar9 = 0;
                bVar4 = bVar3;
LAB_00512484:
                bVar2 = uVar13 < 2;
                uVar13 = 2;
                if (!(bool)(bVar2 & bVar4)) goto LAB_00512580;
              }
              uVar10 = EVP_KEYMGMT_get0_provider(*(undefined8 *)(param_1 + 8));
              lVar11 = evp_asym_cipher_fetch_from_prov(uVar10,lVar6,*(undefined8 *)(param_1 + 4));
              if (lVar11 == 0) goto LAB_005124d9;
LAB_0051242a:
              uVar1 = *(undefined8 *)(param_1 + 4);
              uVar7 = EVP_KEYMGMT_get0_name(*(undefined8 *)(param_1 + 8));
              lVar8 = evp_keymgmt_fetch_from_prov(uVar10,uVar7,uVar1);
              local_48 = lVar8;
              if (lVar8 == 0) {
                lVar9 = 0;
                bVar4 = bVar3;
              }
              else {
                lVar9 = evp_pkey_export_to_provider
                                  (*(undefined8 *)(param_1 + 0x22),*(undefined8 *)(param_1 + 2),
                                   &local_48,*(undefined8 *)(param_1 + 4));
                bVar4 = lVar9 == 0;
                if (local_48 != 0) goto LAB_00512484;
              }
              EVP_KEYMGMT_free(lVar8);
              bVar2 = uVar13 < 2;
              uVar13 = 2;
            } while ((bool)(bVar2 & bVar4));
LAB_00512580:
            if (lVar9 == 0) {
              EVP_ASYM_CIPHER_free(lVar11);
              goto LAB_005124d9;
            }
            ERR_pop_to_mark();
            *(long *)(param_1 + 10) = lVar11;
            pcVar12 = *(code **)(lVar11 + 0x30);
            uVar10 = ossl_provider_ctx(*(undefined8 *)(lVar11 + 0x18));
            lVar6 = (*pcVar12)(uVar10);
            *(long *)(param_1 + 0xc) = lVar6;
            if (lVar6 == 0) {
              ERR_new(0);
              uVar10 = 0x94;
LAB_005126e1:
              iVar5 = 0;
              ERR_set_debug("../crypto/evp/asymcipher.c",uVar10,"evp_pkey_asym_cipher_init");
              ERR_set_error(6,0x86,0);
            }
            else {
              if (param_2 == 0x200) {
                pcVar12 = *(code **)(lVar11 + 0x38);
                if (pcVar12 == (code *)0x0) {
                  ERR_new(lVar6);
                  uVar10 = 0x9b;
LAB_0051272e:
                  iVar5 = -2;
                  ERR_set_debug("../crypto/evp/asymcipher.c",uVar10,"evp_pkey_asym_cipher_init");
                  ERR_set_error(6,0x96,0);
                  goto LAB_00512648;
                }
              }
              else {
                if (param_2 != 0x400) {
                  ERR_new(lVar6);
                  uVar10 = 0xaa;
                  goto LAB_005126e1;
                }
                pcVar12 = *(code **)(lVar11 + 0x48);
                if (pcVar12 == (code *)0x0) {
                  ERR_new(lVar6);
                  uVar10 = 0xa3;
                  goto LAB_0051272e;
                }
              }
              iVar5 = (*pcVar12)(lVar6,lVar9,param_3);
              if (0 < iVar5) {
                iVar5 = 1;
                EVP_KEYMGMT_free(local_48);
                goto LAB_00512660;
              }
            }
          }
        }
        else {
          ERR_clear_last_mark();
          iVar5 = 0;
          ERR_new();
          ERR_set_debug("../crypto/evp/asymcipher.c",0x38,"evp_pkey_asym_cipher_init");
          ERR_set_error(6,0xc0103,0);
        }
      }
LAB_00512648:
      evp_pkey_ctx_free_old_ops(param_1);
      *param_1 = 0;
    }
    EVP_KEYMGMT_free(local_48);
  }
LAB_00512660:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


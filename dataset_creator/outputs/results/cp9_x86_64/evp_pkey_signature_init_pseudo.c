
int evp_pkey_signature_init(int *param_1,int param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  code *pcVar12;
  uint uVar13;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  if (param_1 == (int *)0x0) {
    ERR_new();
    uVar9 = 0x195;
LAB_00415347:
    iVar4 = -2;
    ERR_set_debug("../crypto/evp/signature.c",uVar9,"evp_pkey_signature_init");
    ERR_set_error(6,0x96,0);
  }
  else {
    evp_pkey_ctx_free_old_ops();
    *param_1 = param_2;
    ERR_set_mark();
    lVar5 = *(long *)(param_1 + 8);
    if (lVar5 == 0) {
LAB_00414fd9:
      ERR_pop_to_mark();
      EVP_KEYMGMT_free(local_48);
      lVar5 = *(long *)(param_1 + 0x1e);
      local_48 = 0;
      if (lVar5 == 0) {
LAB_00415371:
        ERR_new();
        uVar9 = 0x242;
        goto LAB_00415347;
      }
      if (param_2 == 0x10) {
        if (*(long *)(lVar5 + 0x48) == 0) goto LAB_00415371;
        pcVar12 = *(code **)(lVar5 + 0x40);
      }
      else if (param_2 == 0x20) {
        if (*(long *)(lVar5 + 0x58) == 0) goto LAB_00415371;
        pcVar12 = *(code **)(lVar5 + 0x50);
      }
      else {
        if (param_2 != 0x40) {
          ERR_new();
          uVar9 = 599;
          goto LAB_004150f2;
        }
        if (*(long *)(lVar5 + 0x68) == 0) goto LAB_00415371;
        pcVar12 = *(code **)(lVar5 + 0x60);
      }
      if (pcVar12 == (code *)0x0) {
        iVar4 = 1;
        goto LAB_00415181;
      }
      iVar4 = (*pcVar12)(param_1);
      if (0 < iVar4) {
LAB_0041503a:
        iVar4 = evp_pkey_ctx_use_cached_data(param_1);
        EVP_KEYMGMT_free(local_48);
        goto LAB_00415181;
      }
    }
    else if (*(long *)(param_1 + 0x22) == 0) {
      ERR_clear_last_mark();
      iVar4 = 0;
      ERR_new();
      ERR_set_debug("../crypto/evp/signature.c",0x1a3,"evp_pkey_signature_init");
      ERR_set_error(6,0x9a,0);
    }
    else {
      lVar10 = *(long *)(*(long *)(param_1 + 0x22) + 0x60);
      bVar2 = lVar5 == lVar10 || lVar10 == 0;
      if (lVar5 == lVar10 || lVar10 == 0) {
        lVar10 = 0;
        lVar5 = evp_keymgmt_util_query_operation_name(lVar5,0xc);
        uVar13 = 1;
        if (lVar5 == 0) {
          ERR_clear_last_mark();
          ERR_new();
          ERR_set_debug("../crypto/evp/signature.c",0x1b4,"evp_pkey_signature_init");
          ERR_set_error(6,0x86,0);
          iVar4 = 0;
        }
        else {
          do {
            while( true ) {
              EVP_SIGNATURE_free(lVar10);
              EVP_KEYMGMT_free(local_48);
              if (uVar13 == 2) break;
              lVar10 = EVP_SIGNATURE_fetch(*(undefined8 *)(param_1 + 2),lVar5,
                                           *(undefined8 *)(param_1 + 4));
              if (lVar10 != 0) {
                uVar9 = EVP_SIGNATURE_get0_provider(lVar10);
                goto LAB_00414f2a;
              }
              lVar10 = 0;
              lVar8 = 0;
              bVar3 = bVar2;
LAB_00414f84:
              bVar1 = uVar13 < 2;
              uVar13 = 2;
              if (!(bool)(bVar1 & bVar3)) goto LAB_00415088;
            }
            uVar9 = EVP_KEYMGMT_get0_provider(*(undefined8 *)(param_1 + 8));
            lVar10 = evp_signature_fetch_from_prov(uVar9,lVar5,*(undefined8 *)(param_1 + 4));
            if (lVar10 == 0) goto LAB_00414fd9;
LAB_00414f2a:
            uVar11 = *(undefined8 *)(param_1 + 4);
            uVar6 = EVP_KEYMGMT_get0_name(*(undefined8 *)(param_1 + 8));
            lVar7 = evp_keymgmt_fetch_from_prov(uVar9,uVar6,uVar11);
            local_48 = lVar7;
            if (lVar7 == 0) {
              lVar8 = 0;
              bVar3 = bVar2;
            }
            else {
              lVar8 = evp_pkey_export_to_provider
                                (*(undefined8 *)(param_1 + 0x22),*(undefined8 *)(param_1 + 2),
                                 &local_48,*(undefined8 *)(param_1 + 4));
              bVar3 = lVar8 == 0;
              if (local_48 != 0) goto LAB_00414f84;
            }
            EVP_KEYMGMT_free(lVar7);
            bVar1 = uVar13 < 2;
            uVar13 = 2;
          } while ((bool)(bVar1 & bVar3));
LAB_00415088:
          if (lVar8 == 0) {
            EVP_SIGNATURE_free(lVar10);
            goto LAB_00414fd9;
          }
          ERR_pop_to_mark();
          *(long *)(param_1 + 10) = lVar10;
          uVar9 = *(undefined8 *)(param_1 + 4);
          pcVar12 = *(code **)(lVar10 + 0x30);
          uVar11 = ossl_provider_ctx(*(undefined8 *)(lVar10 + 0x18));
          lVar5 = (*pcVar12)(uVar11,uVar9);
          *(long *)(param_1 + 0xc) = lVar5;
          if (lVar5 == 0) {
            ERR_new(0);
            uVar9 = 0x20a;
LAB_004150f2:
            iVar4 = 0;
            ERR_set_debug("../crypto/evp/signature.c",uVar9,"evp_pkey_signature_init");
            ERR_set_error(6,0x86,0);
            goto LAB_00415168;
          }
          if (param_2 == 0x20) {
            pcVar12 = *(code **)(lVar10 + 0x48);
            if (pcVar12 != (code *)0x0) {
LAB_004151ed:
              iVar4 = (*pcVar12)(lVar5,lVar8,param_3);
              if (iVar4 < 1) {
                (**(code **)(lVar10 + 0xa8))(*(undefined8 *)(param_1 + 0xc));
                param_1[0xc] = 0;
                param_1[0xd] = 0;
                goto LAB_00415168;
              }
              goto LAB_0041503a;
            }
            ERR_new(lVar5);
            uVar9 = 0x219;
          }
          else if (param_2 == 0x40) {
            pcVar12 = *(code **)(lVar10 + 0x58);
            if (pcVar12 != (code *)0x0) goto LAB_004151ed;
            ERR_new(lVar5);
            uVar9 = 0x221;
          }
          else {
            if (param_2 != 0x10) {
              ERR_new(lVar5);
              uVar9 = 0x229;
              goto LAB_004150f2;
            }
            pcVar12 = *(code **)(lVar10 + 0x38);
            if (pcVar12 != (code *)0x0) goto LAB_004151ed;
            ERR_new(lVar5);
            uVar9 = 0x211;
          }
          iVar4 = -2;
          ERR_set_debug("../crypto/evp/signature.c",uVar9,"evp_pkey_signature_init");
          ERR_set_error(6,0x96,0);
        }
      }
      else {
        ERR_clear_last_mark();
        iVar4 = 0;
        ERR_new();
        ERR_set_debug("../crypto/evp/signature.c",0x1ad,"evp_pkey_signature_init");
        ERR_set_error(6,0xc0103,0);
      }
    }
LAB_00415168:
    evp_pkey_ctx_free_old_ops(param_1);
    *param_1 = 0;
    EVP_KEYMGMT_free(local_48);
  }
LAB_00415181:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


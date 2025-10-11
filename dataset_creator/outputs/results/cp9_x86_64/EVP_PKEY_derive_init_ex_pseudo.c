
uint EVP_PKEY_derive_init_ex(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  EVP_PKEY *pkey;
  stack_st_X509_ATTRIBUTE *psVar11;
  undefined8 uVar12;
  long in_FS_OFFSET;
  bool bVar13;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  if (param_1 == (undefined4 *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/evp/exchange.c",0xd3,"EVP_PKEY_derive_init_ex");
    uVar4 = 0xfffffffe;
    ERR_set_error(6,0xc0102,0);
    goto LAB_00527940;
  }
  evp_pkey_ctx_free_old_ops();
  *param_1 = 0x800;
  ERR_set_mark();
  lVar6 = *(long *)(param_1 + 8);
  if (lVar6 == 0) {
LAB_0052789c:
    ERR_pop_to_mark();
    lVar6 = *(long *)(param_1 + 0x1e);
    if ((lVar6 == 0) || (*(long *)(lVar6 + 0xb8) == 0)) {
      ERR_new();
      ERR_set_debug("../crypto/evp/exchange.c",0x16b,"EVP_PKEY_derive_init_ex");
      uVar4 = 0xfffffffe;
      ERR_set_error(6,0x96,0);
    }
    else if (*(code **)(lVar6 + 0xb0) == (code *)0x0) {
      uVar4 = 1;
    }
    else {
      uVar4 = (**(code **)(lVar6 + 0xb0))(param_1);
      if ((int)uVar4 < 1) {
        *param_1 = 0;
        EVP_KEYMGMT_free(local_48);
      }
      else {
        EVP_KEYMGMT_free(local_48);
      }
    }
    goto LAB_00527940;
  }
  pkey = *(EVP_PKEY **)(param_1 + 0x22);
  if (pkey == (EVP_PKEY *)0x0) {
    pkey = EVP_PKEY_new();
    if (pkey != (EVP_PKEY *)0x0) {
      iVar5 = EVP_PKEY_set_type_by_keymgmt(pkey,*(undefined8 *)(param_1 + 8));
      if (iVar5 != 0) {
        psVar11 = (stack_st_X509_ATTRIBUTE *)evp_keymgmt_newdata(*(undefined8 *)(param_1 + 8));
        pkey[1].attributes = psVar11;
        if (psVar11 != (stack_st_X509_ATTRIBUTE *)0x0) {
          *(EVP_PKEY **)(param_1 + 0x22) = pkey;
          lVar6 = *(long *)(param_1 + 8);
          goto LAB_00527789;
        }
      }
    }
    ERR_clear_last_mark();
    EVP_PKEY_free(pkey);
    ERR_new();
    uVar12 = 0xeb;
LAB_00527a7e:
    ERR_set_debug("../crypto/evp/exchange.c",uVar12,"EVP_PKEY_derive_init_ex");
    ERR_set_error(6,0x86,0);
  }
  else {
LAB_00527789:
    if ((*(long *)&pkey[1].save_parameters == 0) || (*(long *)&pkey[1].save_parameters == lVar6)) {
      lVar10 = 0;
      lVar6 = evp_keymgmt_util_query_operation_name(lVar6,0xb);
      uVar4 = 1;
      if (lVar6 == 0) {
        ERR_clear_last_mark();
        ERR_new();
        uVar12 = 0xfe;
      }
      else {
        do {
          EVP_KEYEXCH_free(lVar10);
          EVP_KEYMGMT_free(local_48);
          if (uVar4 == 2) {
            uVar12 = EVP_KEYMGMT_get0_provider(*(undefined8 *)(param_1 + 8));
            lVar10 = evp_keyexch_fetch_from_prov(uVar12,lVar6,*(undefined8 *)(param_1 + 4));
            if (lVar10 == 0) goto LAB_0052789c;
LAB_005277ea:
            uVar1 = *(undefined8 *)(param_1 + 4);
            uVar7 = EVP_KEYMGMT_get0_name(*(undefined8 *)(param_1 + 8));
            lVar8 = evp_keymgmt_fetch_from_prov(uVar12,uVar7,uVar1);
            local_48 = lVar8;
            if (lVar8 == 0) {
              lVar9 = 0;
              bVar13 = true;
            }
            else {
              lVar9 = evp_pkey_export_to_provider
                                (*(undefined8 *)(param_1 + 0x22),*(undefined8 *)(param_1 + 2),
                                 &local_48,*(undefined8 *)(param_1 + 4));
              bVar13 = lVar9 == 0;
              if (local_48 != 0) goto LAB_00527844;
            }
            EVP_KEYMGMT_free(lVar8);
          }
          else {
            lVar10 = EVP_KEYEXCH_fetch(*(undefined8 *)(param_1 + 2),lVar6,
                                       *(undefined8 *)(param_1 + 4));
            if (lVar10 != 0) {
              uVar12 = EVP_KEYEXCH_get0_provider(lVar10);
              goto LAB_005277ea;
            }
            lVar10 = 0;
            bVar13 = true;
            lVar9 = 0;
          }
LAB_00527844:
          bVar3 = uVar4 < 2;
          uVar4 = 2;
        } while ((bool)(bVar3 & bVar13));
        if (lVar9 == 0) {
          EVP_KEYEXCH_free(lVar10);
          goto LAB_0052789c;
        }
        ERR_pop_to_mark();
        *(long *)(param_1 + 10) = lVar10;
        pcVar2 = *(code **)(lVar10 + 0x30);
        uVar12 = ossl_provider_ctx(*(undefined8 *)(lVar10 + 0x18));
        lVar6 = (*pcVar2)(uVar12);
        *(long *)(param_1 + 0xc) = lVar6;
        if (lVar6 != 0) {
          iVar5 = (**(code **)(lVar10 + 0x38))(lVar6,lVar9,param_2);
          EVP_KEYMGMT_free(local_48);
          uVar4 = (uint)(iVar5 != 0);
          goto LAB_00527940;
        }
        ERR_new(0);
        uVar12 = 0x153;
      }
      goto LAB_00527a7e;
    }
    ERR_clear_last_mark();
    ERR_new();
    ERR_set_debug("../crypto/evp/exchange.c",0xf7,"EVP_PKEY_derive_init_ex");
    ERR_set_error(6,0xc0103,0);
  }
  uVar4 = 0;
  evp_pkey_ctx_free_old_ops(param_1);
  *param_1 = 0;
  EVP_KEYMGMT_free(local_48);
LAB_00527940:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* WARNING: Removing unreachable block (ram,0x0052c52c) */

bool do_sigver_init(EVP_MD_CTX *param_1,undefined8 *param_2,EVP_MD *param_3,char *param_4,
                   undefined8 param_5,long param_6,ENGINE *param_7,EVP_PKEY *param_8,int param_9,
                   undefined8 param_10)

{
  code cVar1;
  undefined8 uVar2;
  _func_1088 *p_Var3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  EVP_PKEY_CTX *pEVar12;
  code *pcVar13;
  EVP_MD *pEVar14;
  char *__s1;
  char *pcVar15;
  EVP_PKEY_CTX *ctx;
  uint uVar16;
  long in_FS_OFFSET;
  bool bVar17;
  bool bVar18;
  char *local_f0;
  EVP_MD *local_e8;
  long local_e0;
  int local_a4;
  long local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = (undefined1  [16])0x0;
  local_a0 = 0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  if (param_1[1].engine != (ENGINE *)0x0) {
    if (param_1->engine == (ENGINE *)0x0) {
      ERR_new();
      bVar18 = false;
      ERR_set_debug("../crypto/evp/m_sigver.c",0x38,"do_sigver_init");
      ERR_set_error(6,0x86,0);
      goto LAB_0052c0ff;
    }
    pcVar13 = *(code **)(param_1->engine + 0xb0);
    if (pcVar13 != (code *)0x0) {
      (*pcVar13)();
    }
    param_1[1].engine = (ENGINE *)0x0;
  }
  pEVar12 = (EVP_PKEY_CTX *)param_1->update;
  if (pEVar12 == (EVP_PKEY_CTX *)0x0) {
    if (param_7 == (ENGINE *)0x0) {
      pEVar12 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(param_5,param_8,param_6);
      param_1->update = (_func_1088 *)pEVar12;
    }
    else {
      pEVar12 = EVP_PKEY_CTX_new(param_8,param_7);
      param_1->update = (_func_1088 *)pEVar12;
    }
    if (pEVar12 != (EVP_PKEY_CTX *)0x0) {
      ERR_set_mark();
      if (*(long *)(pEVar12 + 0x20) != 0) {
        lVar11 = 0;
        bVar18 = false;
        goto joined_r0x0052c043;
      }
      goto LAB_0052bf58;
    }
    goto LAB_0052c0fc;
  }
  ERR_set_mark();
  if (*(long *)(pEVar12 + 0x20) == 0) {
LAB_0052bf58:
    ERR_pop_to_mark();
    EVP_KEYMGMT_free(local_a0);
    local_a0 = 0;
    local_e8 = param_3;
    if ((param_3 == (EVP_MD *)0x0) && (param_4 != (char *)0x0)) {
      local_e8 = (EVP_MD *)evp_get_digestbyname_ex(*(undefined8 *)(pEVar12 + 8));
    }
    ctx = (EVP_PKEY_CTX *)param_1->update;
    lVar11 = *(long *)(ctx + 0x78);
    if (lVar11 == 0) {
      ERR_new();
      bVar18 = false;
      ERR_set_debug("../crypto/evp/m_sigver.c",0x131,"do_sigver_init");
      ERR_set_error(6,0x96,0);
      goto LAB_0052c0ff;
    }
    if (((*(uint *)(lVar11 + 4) & 4) == 0) && (local_e8 == (EVP_MD *)0x0)) {
      iVar5 = EVP_PKEY_get_default_digest_nid(param_8,&local_a4);
      if (0 < iVar5) {
        pcVar15 = OBJ_nid2sn(local_a4);
        local_e8 = EVP_get_digestbyname(pcVar15);
        if (local_e8 != (EVP_MD *)0x0) {
          ctx = (EVP_PKEY_CTX *)param_1->update;
          lVar11 = *(long *)(ctx + 0x78);
          goto LAB_0052bfb7;
        }
      }
      ERR_new();
      ERR_set_debug("../crypto/evp/m_sigver.c",0x13e,"do_sigver_init");
      ERR_set_error(6,0x9e,0);
      bVar18 = false;
      goto LAB_0052c0ff;
    }
LAB_0052bfb7:
    if (param_9 != 0) {
      if (*(code **)(lVar11 + 0x80) == (code *)0x0) {
        if (*(long *)(lVar11 + 0xd8) == 0) {
          iVar5 = EVP_PKEY_verify_init(ctx);
          if (iVar5 < 1) goto LAB_0052c0fc;
LAB_0052c764:
          ctx = (EVP_PKEY_CTX *)param_1->update;
        }
        else {
          *(undefined4 *)ctx = 0x20;
          param_1[1].digest = (EVP_MD *)update;
        }
      }
      else {
        iVar5 = (**(code **)(lVar11 + 0x80))(ctx,param_1);
        if (iVar5 < 1) goto LAB_0052c0fc;
        ctx = (EVP_PKEY_CTX *)param_1->update;
        *(undefined4 *)ctx = 0x100;
      }
LAB_0052c38c:
      iVar5 = EVP_PKEY_CTX_set_signature_md(ctx,local_e8);
      if (iVar5 < 1) goto LAB_0052c0fc;
      if (param_2 != (undefined8 *)0x0) {
        *param_2 = param_1->update;
      }
      bVar18 = true;
      if ((*(byte *)(*(long *)(param_1->update + 0x78) + 4) & 4) != 0) goto LAB_0052c0ff;
      iVar5 = EVP_DigestInit_ex(param_1,local_e8,param_7);
      if (iVar5 == 0) goto LAB_0052c0fc;
      p_Var3 = param_1->update;
      cVar1 = p_Var3[0xa0];
      p_Var3[0xa0] = (_func_1088)((byte)cVar1 & 0xfe);
      if (*(long *)(*(long *)(p_Var3 + 0x78) + 0xf8) != 0) {
        p_Var3[0xa0] = (_func_1088)((byte)cVar1 & 0xfe | 1);
      }
      goto LAB_0052c410;
    }
    if (*(code **)(lVar11 + 0x70) == (code *)0x0) {
      if (*(long *)(lVar11 + 0xd0) != 0) {
        *(undefined4 *)ctx = 0x10;
        param_1[1].digest = (EVP_MD *)update;
        goto LAB_0052c38c;
      }
      iVar5 = EVP_PKEY_sign_init(ctx);
      if (0 < iVar5) goto LAB_0052c764;
    }
    else {
      iVar5 = (**(code **)(lVar11 + 0x70))(ctx,param_1);
      if (0 < iVar5) {
        ctx = (EVP_PKEY_CTX *)param_1->update;
        *(undefined4 *)ctx = 0x80;
        goto LAB_0052c38c;
      }
    }
  }
  else {
    lVar11 = 0;
    bVar18 = false;
    if (((param_8 == (EVP_PKEY *)0x0) &&
        (*(int *)pEVar12 == (-(uint)(param_9 == 0) & 0xffffff80) + 0x100)) &&
       (lVar11 = *(long *)(pEVar12 + 0x28), lVar11 != 0)) {
      bVar18 = *(long *)(pEVar12 + 0x30) != 0;
    }
joined_r0x0052c043:
    if (param_6 == 0) {
      local_e0 = *(long *)(pEVar12 + 0x10);
      if (*(long *)(pEVar12 + 0x88) == 0) goto LAB_0052c240;
LAB_0052be0d:
      if (bVar18) {
        if (param_4 == (char *)0x0 && param_3 == (EVP_MD *)0x0) {
          local_f0 = (char *)EVP_MD_get0_name(param_1->digest);
          lVar9 = 0;
          if ((local_f0 != (char *)0x0) && (iVar5 = strcmp(local_f0,"UNDEF"), iVar5 != 0)) {
            if (param_2 != (undefined8 *)0x0) goto LAB_0052c06b;
            goto LAB_0052c1b1;
          }
          local_f0 = (char *)0x0;
          if (param_2 != (undefined8 *)0x0) {
LAB_0052c06b:
            *param_2 = pEVar12;
            goto LAB_0052c073;
          }
          lVar9 = 0;
          pcVar15 = local_f0;
        }
        else {
          lVar9 = 0;
LAB_0052c063:
          local_f0 = param_4;
          if (param_2 != (undefined8 *)0x0) goto LAB_0052c06b;
LAB_0052c073:
          pcVar15 = local_f0;
          if (param_3 == (EVP_MD *)0x0) {
            if (local_f0 == (char *)0x0) {
              if (!bVar18) {
                local_f0 = local_98;
                iVar5 = evp_keymgmt_util_get_deflt_digest_name(local_a0,lVar9,local_f0,0x50);
                if ((0 < iVar5) && (iVar5 = strcmp(local_f0,"UNDEF"), iVar5 != 0))
                goto LAB_0052c1b1;
                local_f0 = (char *)0x0;
                pcVar15 = local_f0;
              }
            }
            else {
LAB_0052c1b1:
              evp_md_ctx_clear_digest(param_1,1,0);
              ERR_set_mark();
              pEVar14 = (EVP_MD *)EVP_MD_fetch(*(undefined8 *)(pEVar12 + 8),local_f0,local_e0);
              param_1[1].flags = (ulong)pEVar14;
              if (pEVar14 == (EVP_MD *)0x0) {
                pEVar14 = EVP_get_digestbyname(local_f0);
                param_1->engine = (ENGINE *)pEVar14;
                param_1->digest = pEVar14;
                if (pEVar14 == (EVP_MD *)0x0) {
                  ERR_clear_last_mark();
                  ERR_new();
                  uVar10 = 0xfd;
                  goto LAB_0052c2ce;
                }
              }
              else {
                param_1->digest = pEVar14;
                param_1->engine = (ENGINE *)pEVar14;
              }
              ERR_pop_to_mark();
              pcVar15 = local_f0;
            }
          }
          else {
            param_1->digest = param_3;
            if (((local_f0 == (char *)0x0) &&
                (__s1 = (char *)EVP_MD_get0_name(param_3), __s1 != (char *)0x0)) &&
               (iVar5 = strcmp(__s1,"UNDEF"), pcVar15 = __s1, iVar5 == 0)) {
              pcVar15 = local_f0;
            }
          }
        }
        local_f0 = pcVar15;
        if (param_9 == 0) {
          pcVar13 = *(code **)(lVar11 + 0x68);
          if (pcVar13 != (code *)0x0) goto LAB_0052c0af;
          ERR_new();
          uVar10 = 0x10e;
        }
        else {
          pcVar13 = *(code **)(lVar11 + 0x88);
          if (pcVar13 != (code *)0x0) {
LAB_0052c0af:
            iVar5 = (*pcVar13)(*(undefined8 *)(pEVar12 + 0x30),local_f0,lVar9,param_10);
            if (iVar5 < 1) {
              if (local_f0 == (char *)0x0) {
                if (param_3 == (EVP_MD *)0x0) {
                  ERR_new();
                  ERR_set_debug("../crypto/evp/m_sigver.c",0x11c,"do_sigver_init");
                  ERR_set_error(6,0x9e,0);
                }
                goto LAB_0052c0e2;
              }
              bVar18 = false;
              if (0 < iVar5) goto LAB_0052c410;
            }
            else {
LAB_0052c410:
              iVar5 = evp_pkey_ctx_use_cached_data(pEVar12);
              bVar18 = 0 < iVar5;
            }
            EVP_KEYMGMT_free(local_a0);
            goto LAB_0052c0ff;
          }
          ERR_new();
          uVar10 = 0x107;
        }
      }
      else {
        evp_pkey_ctx_free_old_ops(pEVar12);
        if (*(long *)(*(long *)(pEVar12 + 0x88) + 0x60) == 0) {
          lVar9 = *(long *)(pEVar12 + 0x20);
        }
        else {
          lVar9 = *(long *)(pEVar12 + 0x20);
          if (*(long *)(*(long *)(pEVar12 + 0x88) + 0x60) != lVar9) {
            ERR_clear_last_mark();
            ERR_new();
            ERR_set_debug("../crypto/evp/m_sigver.c",0x70,"do_sigver_init");
            ERR_set_error(6,0xc0103,0);
            goto LAB_0052c0e2;
          }
        }
        uVar16 = 1;
        lVar6 = evp_keymgmt_util_query_operation_name(lVar9,0xc);
        if (lVar6 == 0) {
          ERR_clear_last_mark();
          ERR_new();
          uVar10 = 0x77;
        }
        else {
          do {
            EVP_SIGNATURE_free(lVar11);
            EVP_KEYMGMT_free(local_a0);
            if (uVar16 == 2) {
              uVar10 = EVP_KEYMGMT_get0_provider(*(undefined8 *)(pEVar12 + 0x20));
              lVar11 = evp_signature_fetch_from_prov(uVar10,lVar6,*(undefined8 *)(pEVar12 + 0x10));
              if (lVar11 == 0) goto LAB_0052bf58;
LAB_0052be9a:
              uVar2 = *(undefined8 *)(pEVar12 + 0x10);
              uVar7 = EVP_KEYMGMT_get0_name(*(undefined8 *)(pEVar12 + 0x20));
              lVar8 = evp_keymgmt_fetch_from_prov(uVar10,uVar7,uVar2);
              local_a0 = lVar8;
              if (lVar8 == 0) {
                lVar9 = 0;
                bVar17 = true;
              }
              else {
                lVar9 = evp_pkey_export_to_provider
                                  (*(undefined8 *)(pEVar12 + 0x88),*(undefined8 *)(pEVar12 + 8),
                                   &local_a0,*(undefined8 *)(pEVar12 + 0x10));
                bVar17 = lVar9 == 0;
                if (local_a0 != 0) goto LAB_0052bef4;
              }
              EVP_KEYMGMT_free(lVar8);
            }
            else {
              lVar11 = EVP_SIGNATURE_fetch(*(undefined8 *)(pEVar12 + 8),lVar6,
                                           *(undefined8 *)(pEVar12 + 0x10));
              if (lVar11 != 0) {
                uVar10 = EVP_SIGNATURE_get0_provider(lVar11);
                goto LAB_0052be9a;
              }
              lVar11 = 0;
              bVar17 = true;
              lVar9 = 0;
            }
LAB_0052bef4:
            bVar4 = uVar16 < 2;
            uVar16 = 2;
          } while ((bool)(bVar4 & bVar17));
          if (lVar9 == 0) {
            EVP_SIGNATURE_free(lVar11);
            ERR_clear_last_mark();
            ERR_new();
            uVar10 = 0xc2;
          }
          else {
            ERR_pop_to_mark();
            *(long *)(pEVar12 + 0x28) = lVar11;
            uVar10 = *(undefined8 *)(lVar11 + 0x18);
            pcVar13 = *(code **)(lVar11 + 0x30);
            *(uint *)pEVar12 = (-(uint)(param_9 == 0) & 0xffffff80) + 0x100;
            uVar10 = ossl_provider_ctx(uVar10);
            lVar6 = (*pcVar13)(uVar10,local_e0);
            *(long *)(pEVar12 + 0x30) = lVar6;
            if (lVar6 != 0) goto LAB_0052c063;
            ERR_new();
            uVar10 = 0xd0;
          }
        }
      }
LAB_0052c2ce:
      ERR_set_debug("../crypto/evp/m_sigver.c",uVar10,"do_sigver_init");
      ERR_set_error(6,0x86,0);
    }
    else {
      local_e0 = param_6;
      if (*(long *)(pEVar12 + 0x88) != 0) goto LAB_0052be0d;
LAB_0052c240:
      ERR_clear_last_mark();
      ERR_new();
      ERR_set_debug("../crypto/evp/m_sigver.c",0x5e,"do_sigver_init");
      ERR_set_error(6,0x9a,0);
    }
LAB_0052c0e2:
    evp_pkey_ctx_free_old_ops(pEVar12);
    *(int *)pEVar12 = 0;
    EVP_KEYMGMT_free(local_a0);
  }
LAB_0052c0fc:
  bVar18 = false;
LAB_0052c0ff:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


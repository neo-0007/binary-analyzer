
undefined4 provider_conf_init(CONF_IMODULE *param_1,CONF *param_2)

{
  char *pcVar1;
  bool bVar2;
  bool bVar3;
  char *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  stack_st_CONF_VALUE *psVar10;
  long lVar11;
  undefined8 uVar12;
  char *pcVar13;
  stack_st_CONF_VALUE *psVar14;
  char *pcVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  char *pcVar18;
  long lVar19;
  undefined4 uVar20;
  long in_FS_OFFSET;
  int local_a8;
  char *local_a0;
  long local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar9 = CONF_imodule_get_value(param_1);
  psVar10 = NCONF_get_section(param_2,pcVar9);
  local_a8 = 0;
  if (psVar10 == (stack_st_CONF_VALUE *)0x0) {
    ERR_new();
    uVar20 = 0;
    ERR_set_debug("../crypto/provider_conf.c",0x12a,"provider_conf_init");
    ERR_set_error(0xf,0x69,0);
  }
  else {
    iVar6 = OPENSSL_sk_num(psVar10);
    if (0 < iVar6) {
      do {
        lVar11 = OPENSSL_sk_value(psVar10,local_a8);
        pcVar9 = *(char **)(lVar11 + 0x10);
        pcVar18 = *(char **)(lVar11 + 8);
        uVar12 = NCONF_get0_libctx(param_2);
        local_70 = 0;
        pcVar13 = strchr(pcVar18,0x2e);
        if (pcVar13 != (char *)0x0) {
          pcVar18 = pcVar13 + 1;
        }
        psVar14 = NCONF_get_section(param_2,pcVar9);
        if (psVar14 == (stack_st_CONF_VALUE *)0x0) {
          ERR_new();
          uVar20 = 0;
          ERR_set_debug("../crypto/provider_conf.c",0x9c,"provider_conf_load");
          ERR_set_error(0xf,0x69,"section=%s not found",pcVar9);
          goto LAB_005fa253;
        }
        bVar2 = false;
        local_a0 = (char *)0x0;
        bVar3 = false;
        for (iVar6 = 0; iVar7 = OPENSSL_sk_num(psVar14), iVar6 < iVar7; iVar6 = iVar6 + 1) {
          lVar11 = OPENSSL_sk_value(psVar14,iVar6);
          pcVar13 = *(char **)(lVar11 + 8);
          pcVar15 = strchr(pcVar13,0x2e);
          pcVar1 = *(char **)(lVar11 + 0x10);
          if (pcVar15 != (char *)0x0) {
            pcVar13 = pcVar15 + 1;
          }
          iVar7 = strcmp(pcVar13,"identity");
          pcVar15 = pcVar1;
          pcVar4 = local_a0;
          bVar5 = bVar2;
          if (iVar7 != 0) {
            iVar7 = strcmp(pcVar13,"soft_load");
            pcVar15 = pcVar18;
            if (iVar7 == 0) {
              bVar3 = true;
            }
            else {
              iVar7 = strcmp(pcVar13,"module");
              pcVar4 = pcVar1;
              if (iVar7 != 0) {
                iVar7 = strcmp(pcVar13,"activate");
                pcVar4 = local_a0;
                bVar5 = true;
                if (iVar7 != 0) {
                  bVar5 = bVar2;
                }
              }
            }
          }
          bVar2 = bVar5;
          local_a0 = pcVar4;
          pcVar18 = pcVar15;
        }
        if (bVar2) {
          puVar16 = (undefined8 *)ossl_lib_ctx_get_data(uVar12,0x10,provider_conf_ossl_ctx_method);
          if ((puVar16 == (undefined8 *)0x0) ||
             (iVar6 = CRYPTO_THREAD_write_lock(*puVar16), iVar6 == 0)) {
            ERR_new();
            uVar20 = 0;
            ERR_set_debug("../crypto/provider_conf.c",0xbe,"provider_conf_load");
            ERR_set_error(0xf,0xc0103,0);
            goto LAB_005fa253;
          }
          lVar11 = puVar16[1];
          if ((lVar11 != 0) && (iVar6 = OPENSSL_sk_num(lVar11), 0 < iVar6)) {
            iVar7 = 0;
            do {
              uVar17 = OPENSSL_sk_value(lVar11,iVar7);
              pcVar13 = (char *)OSSL_PROVIDER_get0_name(uVar17);
              iVar8 = strcmp(pcVar13,pcVar18);
              if (iVar8 == 0) goto LAB_005fa117;
              iVar7 = iVar7 + 1;
            } while (iVar6 != iVar7);
          }
          iVar6 = ossl_provider_disable_fallback_loading(uVar12);
          if (iVar6 == 0) {
            CRYPTO_THREAD_unlock(*puVar16);
            ERR_new();
            ERR_set_debug("../crypto/provider_conf.c",0xcb,"provider_conf_load");
            ERR_set_error(0xf,0xc0103,0);
            uVar20 = 0;
            goto LAB_005fa253;
          }
          lVar11 = ossl_provider_find(uVar12,pcVar18,1);
          if ((lVar11 == 0) && (lVar11 = ossl_provider_new(uVar12,pcVar18,0,1), lVar11 == 0)) {
            CRYPTO_THREAD_unlock(*puVar16);
            if (bVar3) {
              ERR_clear_error();
            }
            uVar20 = 0;
            goto LAB_005fa253;
          }
          if (local_a0 != (char *)0x0) {
            ossl_provider_set_module_path(lVar11,local_a0);
          }
          iVar6 = provider_conf_params(lVar11,0,0,pcVar9,param_2);
          if ((iVar6 == 0) || (iVar6 = ossl_provider_activate(lVar11,1,0), iVar6 == 0)) {
LAB_005fa2f9:
            ossl_provider_free(lVar11);
          }
          else {
            iVar6 = ossl_provider_add_to_store(lVar11,&local_70,0);
            if (iVar6 == 0) {
              ossl_provider_deactivate(lVar11,1);
              goto LAB_005fa2f9;
            }
            if ((local_70 != lVar11) && (iVar6 = ossl_provider_activate(local_70,1,0), iVar6 == 0))
            {
LAB_005fa495:
              ossl_provider_free(local_70);
              goto LAB_005fa2f9;
            }
            lVar19 = puVar16[1];
            if (lVar19 == 0) {
              lVar19 = OPENSSL_sk_new_null();
              puVar16[1] = lVar19;
              if (lVar19 != 0) goto LAB_005fa474;
LAB_005fa486:
              ossl_provider_deactivate(local_70,1);
              goto LAB_005fa495;
            }
LAB_005fa474:
            iVar6 = OPENSSL_sk_push(lVar19,local_70);
            if (iVar6 == 0) goto LAB_005fa486;
          }
LAB_005fa117:
          CRYPTO_THREAD_unlock(*puVar16);
        }
        else {
          local_48 = 0;
          local_68 = (undefined1  [16])0x0;
          local_58 = (undefined1  [16])0x0;
          if (pcVar18 == (char *)0x0) {
LAB_005fa18e:
            if (local_a0 != (char *)0x0) {
              pcVar18 = CRYPTO_strdup(local_a0,"../crypto/provider_conf.c",0x106);
              local_68._8_8_ = pcVar18;
              if (pcVar18 == (char *)0x0) {
                ERR_new();
                uVar12 = 0x108;
                goto LAB_005fa383;
              }
            }
            iVar6 = provider_conf_params(0,local_68,0,pcVar9,param_2);
            if (iVar6 == 0) {
LAB_005fa20c:
              ossl_provider_info_clear(local_68);
            }
            else if ((local_68._8_8_ == 0) && (local_58._8_8_ == 0)) {
              ossl_provider_info_clear(local_68);
            }
            else {
              iVar6 = ossl_provider_info_add_to_store(uVar12,local_68);
              if ((iVar6 == 0) || ((local_68._8_8_ == 0 && (local_58._8_8_ == 0))))
              goto LAB_005fa20c;
            }
          }
          else {
            pcVar18 = CRYPTO_strdup(pcVar18,"../crypto/provider_conf.c",0xff);
            local_68._0_8_ = pcVar18;
            if (pcVar18 != (char *)0x0) goto LAB_005fa18e;
            ERR_new();
            uVar12 = 0x101;
LAB_005fa383:
            ERR_set_debug("../crypto/provider_conf.c",uVar12,"provider_conf_load");
            ERR_set_error(0xf,0xc0100,0);
            ossl_provider_info_clear(local_68);
          }
        }
        local_a8 = local_a8 + 1;
        iVar6 = OPENSSL_sk_num(psVar10);
      } while (local_a8 < iVar6);
    }
    uVar20 = 1;
  }
LAB_005fa253:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar20;
}


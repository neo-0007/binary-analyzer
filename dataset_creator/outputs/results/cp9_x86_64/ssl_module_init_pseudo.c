
undefined8 ssl_module_init(CONF_IMODULE *param_1,CONF *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  char *pcVar3;
  stack_st_CONF_VALUE *psVar4;
  long lVar5;
  stack_st_CONF_VALUE *psVar6;
  char *pcVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong local_48;
  
  pcVar3 = CONF_imodule_get_value(param_1);
  psVar4 = NCONF_get_section(param_2,pcVar3);
  iVar2 = OPENSSL_sk_num(psVar4);
  if (iVar2 < 1) {
    ERR_new();
    ERR_set_debug("../crypto/conf/conf_ssl.c",0x4c,"ssl_module_init");
    ERR_set_error(0xe,(psVar4 == (stack_st_CONF_VALUE *)0x0) + 'w',"section=%s",pcVar3);
LAB_005c042f:
    if (ssl_names != 0) {
      ssl_module_free_part_0();
    }
  }
  else {
    iVar2 = OPENSSL_sk_num(psVar4);
    uVar9 = (ulong)iVar2;
    if (ssl_names != 0) {
      ssl_module_free_part_0();
    }
    ssl_names = CRYPTO_zalloc(uVar9 * 0x18,"../crypto/conf/conf_ssl.c",0x51);
    if (ssl_names != 0) {
      ssl_names_count = uVar9;
      if (uVar9 != 0) {
        local_48 = 0;
        do {
          puVar1 = (undefined8 *)(ssl_names + local_48 * 0x18);
          lVar5 = OPENSSL_sk_value(psVar4,local_48 & 0xffffffff);
          psVar6 = NCONF_get_section(param_2,*(char **)(lVar5 + 0x10));
          iVar2 = OPENSSL_sk_num(psVar6);
          if (iVar2 < 1) {
            ERR_new();
            ERR_set_debug("../crypto/conf/conf_ssl.c",0x60,"ssl_module_init");
            ERR_set_error(0xe,(psVar6 == (stack_st_CONF_VALUE *)0x0) + 'u',"name=%s, value=%s",
                          *(undefined8 *)(lVar5 + 8),*(undefined8 *)(lVar5 + 0x10));
            goto LAB_005c042f;
          }
          pcVar3 = CRYPTO_strdup(*(char **)(lVar5 + 8),"../crypto/conf/conf_ssl.c",100);
          *puVar1 = pcVar3;
          if (pcVar3 == (char *)0x0) goto LAB_005c042f;
          iVar2 = OPENSSL_sk_num(psVar6);
          uVar9 = (ulong)iVar2;
          lVar5 = CRYPTO_zalloc(uVar9 << 4,"../crypto/conf/conf_ssl.c",0x68);
          puVar1[1] = lVar5;
          if (lVar5 == 0) goto LAB_005c042f;
          puVar1[2] = uVar9;
          uVar10 = 0;
          if (uVar9 != 0) {
            do {
              lVar5 = OPENSSL_sk_value(psVar6,uVar10 & 0xffffffff);
              pcVar3 = *(char **)(lVar5 + 8);
              plVar8 = (long *)(uVar10 * 0x10 + puVar1[1]);
              pcVar7 = strchr(pcVar3,0x2e);
              if (pcVar7 != (char *)0x0) {
                pcVar3 = pcVar7 + 1;
              }
              pcVar7 = CRYPTO_strdup(pcVar3,"../crypto/conf/conf_ssl.c",0x77);
              pcVar3 = *(char **)(lVar5 + 0x10);
              *plVar8 = (long)pcVar7;
              pcVar3 = CRYPTO_strdup(pcVar3,"../crypto/conf/conf_ssl.c",0x78);
              plVar8[1] = (long)pcVar3;
              if ((*plVar8 == 0) || (pcVar3 == (char *)0x0)) goto LAB_005c042f;
              uVar10 = uVar10 + 1;
            } while (uVar9 != uVar10);
          }
          local_48 = local_48 + 1;
        } while (local_48 < ssl_names_count);
      }
      return 1;
    }
  }
  return 0;
}


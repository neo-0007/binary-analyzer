
undefined8 stbl_module_init(CONF_IMODULE *param_1,CONF *param_2)

{
  char cVar1;
  char *line;
  int iVar2;
  int iVar3;
  char *pcVar4;
  stack_st_CONF_VALUE *psVar5;
  long lVar6;
  stack_st_CONF_VALUE *psVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  uintmax_t local_80;
  ulong local_78;
  uintmax_t local_70;
  int local_60;
  int local_5c;
  char *local_50;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar4 = CONF_imodule_get_value(param_1);
  psVar5 = NCONF_get_section(param_2,pcVar4);
  local_60 = 0;
  if (psVar5 == (stack_st_CONF_VALUE *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/asn1/asn_mstbl.c",0x1d,"stbl_module_init");
    ERR_set_error(0xd,0xac,0);
    uVar8 = 0;
  }
  else {
    iVar2 = OPENSSL_sk_num(psVar5);
    if (0 < iVar2) {
      do {
        lVar6 = OPENSSL_sk_value(psVar5,local_60);
        local_48 = 0;
        pcVar4 = *(char **)(lVar6 + 8);
        line = *(char **)(lVar6 + 0x10);
        local_5c = OBJ_sn2nid(pcVar4);
        if (((local_5c == 0) && (local_5c = OBJ_ln2nid(pcVar4), local_5c == 0)) ||
           (psVar7 = X509V3_parse_list(line), psVar7 == (stack_st_CONF_VALUE *)0x0)) {
          ERR_new();
          ERR_set_debug("../crypto/asn1/asn_mstbl.c",0x67,"do_tcreate");
          ERR_set_error(0xd,0xda,"name=%s, value=%s",pcVar4,line);
          OPENSSL_sk_pop_free(0,X509V3_conf_free);
LAB_00613c65:
          ERR_new();
          ERR_set_debug("../crypto/asn1/asn_mstbl.c",0x23,"stbl_module_init");
          ERR_set_error(0xd,0xdb,0);
          uVar8 = 0;
          goto LAB_00613c93;
        }
        local_78 = 0;
        local_70 = 0xffffffffffffffff;
        local_80 = 0xffffffffffffffff;
        for (iVar2 = 0; iVar3 = OPENSSL_sk_num(psVar7), iVar2 < iVar3; iVar2 = iVar2 + 1) {
          lVar6 = OPENSSL_sk_value(psVar7,iVar2);
          pcVar4 = *(char **)(lVar6 + 8);
          iVar3 = strcmp(pcVar4,"min");
          if (iVar3 == 0) {
            local_80 = strtouq(*(char **)(lVar6 + 0x10),&local_50,0);
            cVar1 = *local_50;
joined_r0x00613c14:
            if (cVar1 != '\0') {
LAB_00613c16:
              ERR_new();
              ERR_set_debug("../crypto/asn1/asn_mstbl.c",100,"do_tcreate");
              ERR_set_error(0xd,0xda,"field=%s, value=%s",*(undefined8 *)(lVar6 + 8),
                            *(undefined8 *)(lVar6 + 0x10));
              OPENSSL_sk_pop_free(psVar7,X509V3_conf_free);
              goto LAB_00613c65;
            }
          }
          else {
            iVar3 = strcmp(pcVar4,"max");
            if (iVar3 == 0) {
              local_70 = strtouq(*(char **)(lVar6 + 0x10),&local_50,0);
              cVar1 = *local_50;
              goto joined_r0x00613c14;
            }
            iVar3 = strcmp(pcVar4,"mask");
            if (iVar3 == 0) {
              iVar3 = ASN1_str2mask(*(undefined8 *)(lVar6 + 0x10),&local_48);
              if ((iVar3 != 0) && (local_48 != 0)) goto LAB_00613bc0;
              goto LAB_00613c16;
            }
            iVar3 = strcmp(pcVar4,"flags");
            if (iVar3 != 0) goto LAB_00613c16;
            pcVar4 = *(char **)(lVar6 + 0x10);
            iVar3 = strcmp(pcVar4,"nomask");
            if (iVar3 == 0) {
              local_78 = 2;
            }
            else {
              iVar3 = strcmp(pcVar4,"none");
              if (iVar3 != 0) goto LAB_00613c16;
              local_78 = 1;
            }
          }
LAB_00613bc0:
        }
        iVar2 = ASN1_STRING_TABLE_add(local_5c,local_80,local_70,local_48,local_78);
        if (iVar2 == 0) {
          ERR_new();
          ERR_set_debug("../crypto/asn1/asn_mstbl.c",0x6d,"do_tcreate");
          ERR_set_error(0xd,0xc0100,0);
          OPENSSL_sk_pop_free(psVar7,X509V3_conf_free);
          goto LAB_00613c65;
        }
        OPENSSL_sk_pop_free(psVar7,X509V3_conf_free);
        local_60 = local_60 + 1;
        iVar2 = OPENSSL_sk_num(psVar5);
      } while (local_60 < iVar2);
    }
    uVar8 = 1;
  }
LAB_00613c93:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


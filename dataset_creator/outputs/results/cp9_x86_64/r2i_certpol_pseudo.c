
long r2i_certpol(undefined8 param_1,X509V3_CTX *param_2,char *param_3)

{
  stack_st_ASN1_INTEGER *psVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  stack_st_CONF_VALUE *psVar7;
  ASN1_OBJECT *pAVar8;
  long lVar9;
  stack_st_CONF_VALUE *section;
  undefined8 *puVar10;
  POLICYQUALINFO *pPVar11;
  ASN1_IA5STRING *str;
  size_t sVar12;
  stack_st_CONF_VALUE *section_00;
  USERNOTICE *pUVar13;
  stack_st_CONF_VALUE *psVar14;
  ASN1_INTEGER *a;
  char *pcVar15;
  ASN1_STRING *str_00;
  NOTICEREF *pNVar16;
  stack_st_POLICYQUALINFO *psVar17;
  undefined8 uVar18;
  char *__s;
  int local_8c;
  POLICYINFO *local_80;
  int local_68;
  long local_48;
  
  psVar7 = X509V3_parse_list(param_3);
  iVar3 = OPENSSL_sk_num(psVar7);
  if (psVar7 == (stack_st_CONF_VALUE *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/x509/v3_cpols.c",0x66,"r2i_certpol");
    ERR_set_error(0x22,0x80022,0);
    local_48 = 0;
  }
  else {
    local_48 = OPENSSL_sk_new_reserve(0,iVar3);
    if (local_48 == 0) {
      ERR_new();
      ERR_set_debug("../crypto/x509/v3_cpols.c",0x6c,"r2i_certpol");
      ERR_set_error(0x22,0xc0100,0);
LAB_00609689:
      OPENSSL_sk_pop_free(psVar7,X509V3_conf_free);
      OPENSSL_sk_pop_free(local_48,POLICYINFO_free);
      local_48 = 0;
    }
    else {
      if (0 < iVar3) {
        bVar2 = false;
        local_68 = 0;
        do {
          while( true ) {
            lVar9 = OPENSSL_sk_value(psVar7,local_68);
            if ((*(long *)(lVar9 + 0x10) != 0) ||
               (pcVar15 = *(char **)(lVar9 + 8), pcVar15 == (char *)0x0)) {
              ERR_new();
              ERR_set_debug("../crypto/x509/v3_cpols.c",0x74,"r2i_certpol");
              ERR_set_error(0x22,0x86,0);
              ERR_add_error_data(4,"name=",*(undefined8 *)(lVar9 + 8),", value=",
                                 *(undefined8 *)(lVar9 + 0x10));
              goto LAB_00609689;
            }
            iVar4 = strcmp(pcVar15,"ia5org");
            if (iVar4 != 0) break;
            local_68 = local_68 + 1;
            bVar2 = true;
            if (iVar3 == local_68) goto LAB_006094e8;
          }
          if (*pcVar15 == '@') {
            section = X509V3_get_section(param_2,pcVar15 + 1);
            if (section == (stack_st_CONF_VALUE *)0x0) {
              ERR_new();
              ERR_set_debug("../crypto/x509/v3_cpols.c",0x81,"r2i_certpol");
              ERR_set_error(0x22,0x87,&DAT_007d9761,*(undefined8 *)(lVar9 + 8));
            }
            else {
              local_80 = POLICYINFO_new();
              if (local_80 == (POLICYINFO *)0x0) {
LAB_0060963f:
                ERR_new();
                ERR_set_debug("../crypto/x509/v3_cpols.c",0xf0,"policy_section");
                ERR_set_error(0x22,0xc0100,0);
              }
              else {
                for (local_8c = 0; iVar4 = OPENSSL_sk_num(section), local_8c < iVar4;
                    local_8c = local_8c + 1) {
                  puVar10 = (undefined8 *)OPENSSL_sk_value(section,local_8c);
                  pcVar15 = (char *)puVar10[1];
                  iVar4 = strcmp(pcVar15,"policyIdentifier");
                  if (iVar4 == 0) {
                    pAVar8 = OBJ_txt2obj((char *)puVar10[2],0);
                    if (pAVar8 == (ASN1_OBJECT *)0x0) {
                      ERR_new();
                      ERR_set_debug("../crypto/x509/v3_cpols.c",0xb6,"policy_section");
                      uVar18 = 0x6e;
                      goto LAB_00609d7b;
                    }
                    local_80->policyid = pAVar8;
                  }
                  else {
                    iVar4 = ossl_v3_name_cmp(pcVar15,"CPS");
                    if (iVar4 != 0) {
                      iVar4 = ossl_v3_name_cmp(puVar10[1],"userNotice");
                      if (iVar4 == 0) {
                        if (*(char *)puVar10[2] == '@') {
                          section_00 = X509V3_get_section(param_2,(char *)puVar10[2] + 1);
                          if (section_00 != (stack_st_CONF_VALUE *)0x0) {
                            pPVar11 = POLICYQUALINFO_new();
                            if (pPVar11 == (POLICYQUALINFO *)0x0) {
LAB_00609930:
                              ERR_new();
                              ERR_set_debug("../crypto/x509/v3_cpols.c",0x16d,"notice_section");
                              ERR_set_error(0x22,0xc0100,0);
                            }
                            else {
                              pAVar8 = OBJ_nid2obj(0xa5);
                              pPVar11->pqualid = pAVar8;
                              if (pAVar8 == (ASN1_OBJECT *)0x0) {
                                ERR_new();
                                ERR_set_debug("../crypto/x509/v3_cpols.c",0x125,"notice_section");
                                ERR_set_error(0x22,0xc0103,0);
                              }
                              else {
                                pUVar13 = USERNOTICE_new();
                                if (pUVar13 == (USERNOTICE *)0x0) goto LAB_00609930;
                                (pPVar11->d).usernotice = pUVar13;
                                for (iVar4 = 0; iVar5 = OPENSSL_sk_num(section_00), iVar4 < iVar5;
                                    iVar4 = iVar4 + 1) {
                                  lVar9 = OPENSSL_sk_value(section_00,iVar4);
                                  pcVar15 = *(char **)(lVar9 + 8);
                                  __s = *(char **)(lVar9 + 0x10);
                                  iVar5 = strcmp(pcVar15,"explicitText");
                                  if (iVar5 == 0) {
                                    pcVar15 = strchr(__s,0x3a);
                                    if ((pcVar15 != (char *)0x0) &&
                                       (iVar5 = (int)pcVar15 - (int)__s, iVar5 != -1)) {
                                      if (iVar5 == 4) {
                                        iVar5 = strncmp(__s,"UTF8",4);
                                        if (iVar5 == 0) {
                                          iVar5 = 4;
                                          iVar6 = 0xc;
                                          goto LAB_00609abe;
                                        }
                                      }
                                      else if (iVar5 == 10) {
                                        iVar5 = strncmp(__s,"UTF8String",10);
                                        if (iVar5 == 0) {
                                          iVar5 = 10;
                                          iVar6 = 0xc;
                                          goto LAB_00609abe;
                                        }
                                      }
                                      else if (iVar5 == 3) {
                                        if ((*__s == 'B') && (__s[1] == 'M')) {
                                          iVar5 = 3;
                                          iVar6 = 0x1e;
                                          if (__s[2] == 'P') goto LAB_00609abe;
                                        }
                                      }
                                      else if (iVar5 == 9) {
                                        iVar5 = strncmp(__s,"BMPSTRING",9);
                                        if (iVar5 == 0) {
                                          iVar5 = 9;
                                          iVar6 = 0x1e;
                                          goto LAB_00609abe;
                                        }
                                      }
                                      else if (iVar5 == 7) {
                                        iVar5 = strncmp(__s,"VISIBLE",7);
                                        if (iVar5 == 0) {
                                          iVar5 = 7;
                                          iVar6 = 0x1a;
LAB_00609abe:
                                          str_00 = ASN1_STRING_type_new(iVar6);
                                          pUVar13->exptext = str_00;
                                          if (str_00 != (ASN1_STRING *)0x0) {
                                            __s = __s + (iVar5 + 1);
                                            goto LAB_0060977b;
                                          }
                                          goto LAB_00609930;
                                        }
                                      }
                                      else if ((iVar5 == 0xd) &&
                                              (iVar5 = strncmp(__s,"VISIBLESTRING",0xd), iVar5 == 0)
                                              ) {
                                        iVar5 = 0xd;
                                        iVar6 = 0x1a;
                                        goto LAB_00609abe;
                                      }
                                    }
                                    str_00 = ASN1_STRING_type_new(0x1a);
                                    pUVar13->exptext = str_00;
                                    if (str_00 == (ASN1_STRING *)0x0) goto LAB_00609930;
LAB_0060977b:
                                    sVar12 = strlen(__s);
                                    iVar5 = ASN1_STRING_set(str_00,__s,(int)sVar12);
                                    if (iVar5 == 0) goto LAB_00609930;
                                  }
                                  else {
                                    iVar5 = strcmp(pcVar15,"organization");
                                    if (iVar5 == 0) {
                                      pNVar16 = pUVar13->noticeref;
                                      if (pNVar16 == (NOTICEREF *)0x0) {
                                        pNVar16 = NOTICEREF_new();
                                        if (pNVar16 == (NOTICEREF *)0x0) goto LAB_00609930;
                                        __s = *(char **)(lVar9 + 0x10);
                                        pUVar13->noticeref = pNVar16;
                                      }
                                      str_00 = pNVar16->organization;
                                      str_00->type = (-(uint)!bVar2 & 4) + 0x16;
                                      goto LAB_0060977b;
                                    }
                                    iVar5 = strcmp(pcVar15,"noticeNumbers");
                                    if (iVar5 != 0) {
                                      ERR_new();
                                      ERR_set_debug("../crypto/x509/v3_cpols.c",0x15e,
                                                    "notice_section");
                                      ERR_set_error(0x22,0x8a,0);
                                      ERR_add_error_data(4,"name=",*(undefined8 *)(lVar9 + 8),
                                                         ", value=",*(undefined8 *)(lVar9 + 0x10));
                                      goto LAB_00609960;
                                    }
                                    pNVar16 = pUVar13->noticeref;
                                    if (pNVar16 == (NOTICEREF *)0x0) {
                                      pNVar16 = NOTICEREF_new();
                                      if (pNVar16 == (NOTICEREF *)0x0) goto LAB_00609930;
                                      pcVar15 = *(char **)(lVar9 + 0x10);
                                      pUVar13->noticeref = pNVar16;
                                      psVar14 = X509V3_parse_list(pcVar15);
                                      if (psVar14 != (stack_st_CONF_VALUE *)0x0) goto LAB_0060982f;
LAB_00609a31:
                                      ERR_new();
                                      ERR_set_debug("../crypto/x509/v3_cpols.c",0x154,
                                                    "notice_section");
                                      ERR_set_error(0x22,0x8d,0);
                                      ERR_add_error_data(4,"name=",*(undefined8 *)(lVar9 + 8),
                                                         ", value=",*(undefined8 *)(lVar9 + 0x10));
                                      OPENSSL_sk_pop_free(psVar14,X509V3_conf_free);
                                      goto LAB_00609960;
                                    }
                                    psVar14 = X509V3_parse_list(__s);
                                    if (psVar14 == (stack_st_CONF_VALUE *)0x0) goto LAB_00609a31;
LAB_0060982f:
                                    iVar5 = OPENSSL_sk_num(psVar14);
                                    if (iVar5 == 0) goto LAB_00609a31;
                                    psVar1 = pNVar16->noticenos;
                                    for (iVar5 = 0; iVar6 = OPENSSL_sk_num(psVar14), iVar5 < iVar6;
                                        iVar5 = iVar5 + 1) {
                                      lVar9 = OPENSSL_sk_value(psVar14,iVar5);
                                      a = s2i_ASN1_INTEGER((X509V3_EXT_METHOD *)0x0,
                                                           *(char **)(lVar9 + 8));
                                      if (a == (ASN1_INTEGER *)0x0) {
                                        ERR_new();
                                        ERR_set_debug("../crypto/x509/v3_cpols.c",0x17e,"nref_nos");
                                        uVar18 = 0x8c;
LAB_006099a7:
                                        ERR_set_error(0x22,uVar18,0);
                                        OPENSSL_sk_pop_free(psVar14,X509V3_conf_free);
                                        goto LAB_00609960;
                                      }
                                      iVar6 = OPENSSL_sk_push(psVar1,a);
                                      if (iVar6 == 0) {
                                        ASN1_INTEGER_free(a);
                                        ERR_new();
                                        ERR_set_debug("../crypto/x509/v3_cpols.c",0x188,"nref_nos");
                                        uVar18 = 0xc0100;
                                        goto LAB_006099a7;
                                      }
                                    }
                                    OPENSSL_sk_pop_free(psVar14,X509V3_conf_free);
                                  }
                                }
                                pNVar16 = pUVar13->noticeref;
                                if ((pNVar16 == (NOTICEREF *)0x0) ||
                                   ((pNVar16->noticenos != (stack_st_ASN1_INTEGER *)0x0 &&
                                    (pNVar16->organization != (ASN1_STRING *)0x0)))) {
                                  X509V3_section_free(param_2,section_00);
                                  psVar17 = local_80->qualifiers;
                                  if (psVar17 == (stack_st_POLICYQUALINFO *)0x0) {
                                    psVar17 = (stack_st_POLICYQUALINFO *)OPENSSL_sk_new_null();
                                    local_80->qualifiers = psVar17;
                                  }
                                  iVar4 = OPENSSL_sk_push(psVar17,pPVar11);
                                  if (iVar4 != 0) goto LAB_0060956c;
                                  goto LAB_0060963f;
                                }
                                ERR_new();
                                ERR_set_debug("../crypto/x509/v3_cpols.c",0x166,"notice_section");
                                ERR_set_error(0x22,0x8e,0);
                              }
                            }
LAB_00609960:
                            POLICYQUALINFO_free(pPVar11);
                            X509V3_section_free(param_2,section_00);
                            goto LAB_00609670;
                          }
                          ERR_new();
                          ERR_set_debug("../crypto/x509/v3_cpols.c",0xd5,"policy_section");
                          uVar18 = 0x87;
                        }
                        else {
                          ERR_new();
                          ERR_set_debug("../crypto/x509/v3_cpols.c",0xcf,"policy_section");
                          uVar18 = 0x89;
                        }
                      }
                      else {
                        ERR_new();
                        ERR_set_debug("../crypto/x509/v3_cpols.c",0xe3,"policy_section");
                        uVar18 = 0x8a;
                      }
LAB_00609d7b:
                      ERR_set_error(0x22,uVar18,0);
                      ERR_add_error_data(6,"section:",*puVar10,",name:",puVar10[1],",value:",
                                         puVar10[2]);
                      goto LAB_00609670;
                    }
                    if (local_80->qualifiers == (stack_st_POLICYQUALINFO *)0x0) {
                      psVar17 = (stack_st_POLICYQUALINFO *)OPENSSL_sk_new_null();
                      local_80->qualifiers = psVar17;
                    }
                    pPVar11 = POLICYQUALINFO_new();
                    if ((pPVar11 == (POLICYQUALINFO *)0x0) ||
                       (iVar4 = OPENSSL_sk_push(local_80->qualifiers,pPVar11), iVar4 == 0))
                    goto LAB_0060963f;
                    pAVar8 = OBJ_nid2obj(0xa4);
                    pPVar11->pqualid = pAVar8;
                    if (pAVar8 == (ASN1_OBJECT *)0x0) {
                      ERR_new();
                      ERR_set_debug("../crypto/x509/v3_cpols.c",0xc4,"policy_section");
                      ERR_set_error(0x22,0xc0103,0);
                      goto LAB_00609670;
                    }
                    str = ASN1_IA5STRING_new();
                    (pPVar11->d).cpsuri = str;
                    if (str == (ASN1_IA5STRING *)0x0) goto LAB_0060963f;
                    pcVar15 = (char *)puVar10[2];
                    sVar12 = strlen(pcVar15);
                    iVar4 = ASN1_STRING_set(str,pcVar15,(int)sVar12);
                    if (iVar4 == 0) goto LAB_0060963f;
                  }
LAB_0060956c:
                }
                if (local_80->policyid != (ASN1_OBJECT *)0x0) {
                  X509V3_section_free(param_2,section);
                  goto LAB_0060946b;
                }
                ERR_new();
                ERR_set_debug("../crypto/x509/v3_cpols.c",0xe9,"policy_section");
                ERR_set_error(0x22,0x8b,0);
              }
LAB_00609670:
              POLICYINFO_free(local_80);
              X509V3_section_free(param_2,section);
            }
            goto LAB_00609689;
          }
          pAVar8 = OBJ_txt2obj(pcVar15,0);
          if (pAVar8 == (ASN1_OBJECT *)0x0) {
            ERR_new();
            ERR_set_debug("../crypto/x509/v3_cpols.c",0x8b,"r2i_certpol");
            ERR_set_error(0x22,0x6e,&DAT_007d9761,*(undefined8 *)(lVar9 + 8));
            goto LAB_00609689;
          }
          local_80 = POLICYINFO_new();
          if (local_80 == (POLICYINFO *)0x0) {
            ASN1_OBJECT_free(pAVar8);
            ERR_new();
            uVar18 = 0x93;
LAB_00609e42:
            ERR_set_debug("../crypto/x509/v3_cpols.c",uVar18,"r2i_certpol");
            ERR_set_error(0x22,0xc0100,0);
            goto LAB_00609689;
          }
          local_80->policyid = pAVar8;
LAB_0060946b:
          iVar4 = OPENSSL_sk_push(local_48,local_80);
          if (iVar4 == 0) {
            POLICYINFO_free(local_80);
            ERR_new();
            uVar18 = 0x9a;
            goto LAB_00609e42;
          }
          local_68 = local_68 + 1;
        } while (iVar3 != local_68);
      }
LAB_006094e8:
      OPENSSL_sk_pop_free(psVar7,X509V3_conf_free);
    }
  }
  return local_48;
}


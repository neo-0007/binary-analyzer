
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 def_load_bio(CONF *param_1,BIO *param_2,long *param_3)

{
  byte *pbVar1;
  long lVar2;
  byte bVar3;
  ushort uVar4;
  lhash_st_CONF_VALUE *plVar5;
  bool bVar6;
  char *__s;
  int iVar7;
  int iVar8;
  BUF_MEM *str;
  byte *pbVar9;
  undefined4 extraout_var;
  size_t sVar10;
  BIO *pBVar11;
  char *pcVar12;
  byte *pbVar13;
  size_t sVar14;
  char *__s_00;
  CONF_VALUE *value;
  CONF_VALUE *section;
  BIO *a;
  long lVar15;
  int *piVar16;
  byte bVar17;
  byte *pbVar19;
  ushort uVar20;
  int iVar21;
  short *buf;
  ulong uVar22;
  CONF *pCVar23;
  byte *pbVar24;
  undefined8 uVar25;
  void *pvVar26;
  char *pcVar27;
  long in_FS_OFFSET;
  bool bVar28;
  undefined1 auVar29 [16];
  long local_148;
  byte *local_140;
  CONF_VALUE *local_138;
  byte *local_100;
  long local_f8;
  char *local_f0;
  stat64 local_e8;
  undefined2 local_58;
  undefined1 local_56;
  long local_40;
  ulong uVar18;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar5 = param_1->data;
  local_100 = (byte *)0x0;
  local_f8 = 0;
  str = BUF_MEM_new();
  if (str == (BUF_MEM *)0x0) {
    pbVar9 = (byte *)0x0;
    pcVar27 = (char *)0x0;
    lVar15 = 0;
    ERR_new();
    ERR_set_debug("../crypto/conf/conf_def.c",0xe7,"def_load_bio");
    ERR_set_error(0xe,0x80007,0);
    local_138 = (CONF_VALUE *)0x0;
    local_148 = 0;
    value = local_138;
  }
  else {
    pbVar9 = (byte *)CRYPTO_strdup("default","../crypto/conf/conf_def.c",0xeb);
    local_100 = pbVar9;
    if (pbVar9 == (byte *)0x0) {
      ERR_new();
      uVar25 = 0xed;
    }
    else {
      iVar7 = _CONF_new_data(param_1);
      if (iVar7 != 0) {
        local_138 = _CONF_new_section(param_1,(char *)pbVar9);
        if (local_138 == (CONF_VALUE *)0x0) {
          ERR_new();
          pcVar27 = (char *)0x0;
          lVar15 = 0;
          ERR_set_debug("../crypto/conf/conf_def.c",0xf8,"def_load_bio");
          ERR_set_error(0xe,0x67,0);
          local_148 = 0;
          value = (CONF_VALUE *)0x0;
        }
        else {
          pcVar27 = (char *)0x0;
          lVar15 = 0;
          local_148 = 0;
          bVar28 = true;
          bVar6 = false;
          iVar7 = 0;
          while (iVar8 = BUF_MEM_grow(str,(long)(iVar7 + 0x200)), CONCAT44(extraout_var,iVar8) != 0)
          {
            buf = (short *)(str->data + iVar7);
            *(undefined1 *)buf = 0;
            while( true ) {
              if ((param_2 != (BIO *)0x0) &&
                 (iVar8 = BIO_gets(param_2,(char *)buf,0x1ff), iVar8 < 0)) goto LAB_005bf1c5;
              *(undefined1 *)((long)buf + 0x1ff) = 0;
              sVar10 = strlen((char *)buf);
              iVar8 = (int)sVar10;
              if (bVar28) {
                local_56 = 0xbf;
                local_58 = 0xbbef;
                if (((2 < iVar8) && (*buf == -0x4411)) && ((char)buf[1] == -0x41)) {
                  memmove(buf,(void *)((long)buf + 3),(long)(iVar8 + -3));
                  *(undefined1 *)((long)buf + (long)iVar8 + -3) = 0;
                  iVar8 = iVar8 + -3;
                }
              }
              if (bVar6 || iVar8 != 0) break;
              pcVar12 = pcVar27;
              if (local_f8 == 0) {
LAB_005bee8a:
                pBVar11 = (BIO *)OPENSSL_sk_pop(lVar15);
                if (pBVar11 == (BIO *)0x0) {
                  BUF_MEM_free(str);
                  CRYPTO_free(local_100);
                  uVar25 = 1;
                  OPENSSL_sk_free(lVar15);
                  goto LAB_005bf036;
                }
              }
              else {
                pBVar11 = (BIO *)get_next_file(pcVar27,&local_f8);
                if (pBVar11 == (BIO *)0x0) {
                  pcVar12 = (char *)0x0;
                  CRYPTO_free(pcVar27);
                  goto LAB_005bee8a;
                }
              }
              BIO_vfree(param_2);
              bVar28 = false;
              param_2 = pBVar11;
              pcVar27 = pcVar12;
            }
            bVar28 = true;
            iVar21 = iVar8;
            if (iVar8 < 1) {
LAB_005bf0f1:
              iVar7 = iVar7 + iVar21;
              if ((iVar8 == 0) || (!bVar28)) goto LAB_005bf1e0;
              if (0 < iVar7) {
                pbVar24 = (byte *)str->data;
                pbVar9 = pbVar24 + (long)iVar7 + -1;
                pvVar26 = param_1->meth_data;
                if (((char)*pbVar9 < '\0') ||
                   ((*(byte *)((long)pvVar26 + (long)(char)*pbVar9 * 2) & 0x20) == 0))
                goto LAB_005bf138;
                bVar6 = true;
                goto LAB_005bf9a8;
              }
LAB_005bf138:
              bVar6 = true;
              goto LAB_005bf140;
            }
            pcVar12 = (char *)((long)buf + (long)iVar8 + -1);
            do {
              if ((*pcVar12 != '\r') && (*pcVar12 != '\n')) {
                bVar28 = iVar8 == iVar21;
                goto LAB_005bf0f1;
              }
              pcVar12 = pcVar12 + -1;
              iVar21 = iVar21 + -1;
            } while (iVar21 != 0);
LAB_005bf1e0:
            *(undefined1 *)((long)buf + (long)iVar21) = 0;
            local_148 = local_148 + 1;
            pbVar24 = (byte *)str->data;
            if (iVar7 < 1) {
              pvVar26 = param_1->meth_data;
LAB_005bf228:
              uVar22 = (ulong)*pbVar24;
              pbVar9 = pbVar24;
              uVar18 = uVar22;
              if ((char)*pbVar24 < '\0') goto LAB_005bf268;
              while (uVar4 = *(ushort *)((long)pvVar26 + uVar18 * 2), (uVar4 & 0x800) == 0) {
                if ((uVar4 & 0x10) == 0) {
                  uVar18 = (ulong)*pbVar9;
                  goto LAB_005bf268;
                }
                pbVar19 = pbVar9 + 1;
                pbVar9 = pbVar9 + 1;
                uVar18 = (ulong)*pbVar19;
                if ((char)*pbVar19 < '\0') {
LAB_005bf260:
                  pbVar19 = pbVar9 + 1;
                  pbVar9 = pbVar9 + 1;
                  uVar18 = (ulong)*pbVar19;
LAB_005bf268:
                  do {
                    bVar17 = (byte)uVar18;
                    if ((char)bVar17 < '\0') goto LAB_005bf260;
                    uVar4 = *(ushort *)((long)pvVar26 + (long)(char)bVar17 * 2);
                    if ((uVar4 & 0x80) != 0) goto LAB_005bf598;
                    if ((uVar4 & 0x400) == 0) {
                      if ((uVar4 & 0x40) != 0) {
                        do {
                          do {
                            bVar3 = pbVar9[1];
                            pbVar9 = pbVar9 + 1;
                          } while ((char)bVar3 < '\0');
                          do {
                            uVar18 = (ulong)bVar3;
                            uVar4 = *(ushort *)((long)pvVar26 + (long)(char)bVar3 * 2);
                            if ((uVar4 & 8) != 0) {
                              if (bVar17 == bVar3) goto LAB_005bf260;
                              goto LAB_005bf268;
                            }
                            if (bVar17 == bVar3) goto LAB_005bf260;
                            if ((uVar4 & 0x20) == 0) break;
                            bVar3 = pbVar9[1];
                            if ((-1 < (char)bVar3) &&
                               ((*(byte *)((long)pvVar26 + (long)(char)bVar3 * 2) & 8) != 0)) {
                              pbVar9 = pbVar9 + 1;
                              uVar18 = (ulong)bVar3;
                              goto LAB_005bf268;
                            }
                            bVar3 = pbVar9[2];
                            pbVar9 = pbVar9 + 2;
                          } while (-1 < (char)bVar3);
                        } while( true );
                      }
                      if ((uVar4 & 0x20) == 0) {
                        if ((uVar4 & 8) != 0) goto LAB_005bf29e;
                        goto LAB_005bf260;
                      }
                      bVar17 = pbVar9[1];
                      if (((char)bVar17 < '\0') ||
                         ((*(byte *)((long)pvVar26 + (long)(char)bVar17 * 2) & 8) == 0)) {
                        pbVar19 = pbVar9 + 2;
                        pbVar9 = pbVar9 + 2;
                        uVar18 = (ulong)*pbVar19;
                      }
                      else {
                        pbVar9 = pbVar9 + 1;
                        uVar18 = (ulong)bVar17;
                      }
                    }
                    else {
                      while( true ) {
                        do {
                          pbVar19 = pbVar9;
                          bVar3 = pbVar19[1];
                          uVar18 = (ulong)bVar3;
                          pbVar9 = pbVar19 + 1;
                        } while ((char)bVar3 < '\0');
                        if ((*(byte *)((long)pvVar26 + (long)(char)bVar3 * 2) & 8) != 0) break;
                        if (bVar17 == bVar3) {
                          bVar3 = pbVar19[2];
                          if (bVar17 != bVar3) goto LAB_005bf588;
                          pbVar9 = pbVar19 + 2;
                        }
                      }
                      if (bVar17 == bVar3) {
                        bVar3 = pbVar19[2];
LAB_005bf588:
                        pbVar9 = pbVar19 + 2;
                        uVar18 = (ulong)bVar3;
                      }
                    }
                  } while( true );
                }
              }
LAB_005bf598:
              *pbVar9 = 0;
              uVar22 = (ulong)*pbVar24;
              pvVar26 = param_1->meth_data;
LAB_005bf29e:
              bVar17 = (byte)uVar22;
joined_r0x005bf2a1:
              pBVar11 = param_2;
              if (-1 < (char)bVar17) {
                uVar4 = *(ushort *)((long)pvVar26 + uVar22 * 2);
                uVar20 = uVar4 & 8;
                if ((uVar4 & 0x10) != 0) {
                  if (uVar20 == 0) goto code_r0x005bf2c2;
                  goto LAB_005bf80f;
                }
                if (uVar20 != 0) goto LAB_005bf80f;
                if ((char)uVar22 == '[') {
                  bVar17 = pbVar24[1];
                  while (((pbVar9 = pbVar24 + 1, pbVar19 = pbVar9, pCVar23 = param_1,
                          -1 < (char)bVar17 &&
                          (uVar4 = *(ushort *)((long)pvVar26 + (ulong)bVar17 * 2),
                          (uVar4 & 0x10) != 0)) && ((uVar4 & 8) == 0))) {
                    bVar17 = pbVar24[2];
                    pbVar24 = pbVar9;
                  }
                  do {
                    pbVar13 = (byte *)eat_alpha_numeric(pCVar23,pbVar19);
                    bVar17 = *pbVar13;
                    pbVar24 = pbVar13;
                    while (-1 < (char)bVar17) {
                      uVar4 = *(ushort *)((long)pvVar26 + (ulong)bVar17 * 2);
                      if (((uVar4 & 0x10) == 0) || ((uVar4 & 8) != 0)) {
                        if (bVar17 == 0x5d) {
                          *pbVar13 = 0;
                          iVar7 = str_copy(param_1,0,&local_100,pbVar9);
                          pbVar9 = local_100;
                          if (iVar7 == 0) goto LAB_005bf1c5;
                          local_138 = _CONF_get_section(param_1,(char *)local_100);
                          bVar6 = false;
                          iVar7 = 0;
                          if ((local_138 != (CONF_VALUE *)0x0) ||
                             (local_138 = _CONF_new_section(param_1,(char *)pbVar9),
                             local_138 != (CONF_VALUE *)0x0)) goto LAB_005bf140;
                          ERR_new();
                          ERR_set_debug("../crypto/conf/conf_def.c",0x177,"def_load_bio");
                          ERR_set_error(0xe,0x67,0);
                          value = (CONF_VALUE *)0x0;
                          goto LAB_005bef1c;
                        }
                        break;
                      }
                      pbVar1 = pbVar24 + 1;
                      pbVar24 = pbVar24 + 1;
                      bVar17 = *pbVar1;
                    }
                  } while ((bVar17 != 0) && (bVar28 = pbVar19 != pbVar24, pbVar19 = pbVar24, bVar28)
                          );
                  ERR_new();
                  ERR_set_debug("../crypto/conf/conf_def.c",0x16e,"def_load_bio");
                  uVar25 = 100;
                  goto LAB_005bfb4f;
                }
              }
              pbVar9 = (byte *)eat_alpha_numeric(param_1,pbVar24);
              bVar17 = *pbVar9;
              if ((bVar17 == 0x3a) && (pbVar9[1] == 0x3a)) {
                *pbVar9 = 0;
                pbVar19 = pbVar9 + 2;
                pCVar23 = param_1;
                pbVar9 = (byte *)eat_alpha_numeric(param_1,pbVar19);
                pvVar26 = pCVar23->meth_data;
                bVar17 = *pbVar9;
                local_140 = pbVar24;
                pbVar13 = pbVar9;
              }
              else {
                local_140 = local_100;
                pbVar13 = pbVar9;
                pbVar19 = pbVar24;
              }
              while (((-1 < (char)bVar17 &&
                      (uVar4 = *(ushort *)((long)pvVar26 + (ulong)bVar17 * 2), (uVar4 & 0x10) != 0))
                     && ((uVar4 & 8) == 0))) {
                bVar17 = pbVar9[1];
                pbVar9 = pbVar9 + 1;
              }
              iVar7 = strncmp((char *)pbVar19,".pragma",7);
              if (iVar7 != 0) {
                iVar7 = strncmp((char *)pbVar19,".include",8);
                if (iVar7 != 0) {
                  if (bVar17 != 0x3d) goto LAB_005bfba6;
                  *pbVar13 = 0;
                  bVar17 = pbVar9[1];
                  while (((pbVar24 = pbVar9 + 1, -1 < (char)bVar17 &&
                          (uVar4 = *(ushort *)((long)param_1->meth_data + (ulong)bVar17 * 2),
                          (uVar4 & 0x10) != 0)) && ((uVar4 & 8) == 0))) {
                    bVar17 = pbVar9[2];
                    pbVar9 = pbVar24;
                  }
                  trim_ws_isra_0(param_1->meth_data,pbVar24);
                  value = (CONF_VALUE *)CRYPTO_malloc(0x18,"../crypto/conf/conf_def.c",0x20a);
                  if (value != (CONF_VALUE *)0x0) {
                    pcVar12 = CRYPTO_strdup((char *)pbVar19,"../crypto/conf/conf_def.c",0x20e);
                    value->value = (char *)0x0;
                    value->name = pcVar12;
                    if (pcVar12 == (char *)0x0) {
                      ERR_new();
                      ERR_set_debug("../crypto/conf/conf_def.c",0x211,"def_load_bio");
                      ERR_set_error(0xe,0xc0100,0);
                      pbVar9 = local_100;
                    }
                    else {
                      iVar7 = str_copy(param_1,local_140,&value->value,pbVar24);
                      pbVar9 = local_100;
                      if (iVar7 != 0) {
                        iVar7 = strcmp((char *)local_140,(char *)local_100);
                        section = local_138;
                        if (((iVar7 == 0) ||
                            (section = _CONF_get_section(param_1,(char *)local_140),
                            section != (CONF_VALUE *)0x0)) ||
                           (section = _CONF_new_section(param_1,(char *)local_140),
                           section != (CONF_VALUE *)0x0)) {
                          iVar7 = _CONF_add_string(param_1,section,value);
                          if (iVar7 != 0) {
LAB_005bf80f:
                            bVar6 = false;
                            iVar7 = 0;
                            param_2 = pBVar11;
                            goto LAB_005bf140;
                          }
                          ERR_new();
                          ERR_set_debug("../crypto/conf/conf_def.c",0x223,"def_load_bio");
                          ERR_set_error(0xe,0xc0100,0);
                        }
                        else {
                          ERR_new();
                          ERR_set_debug("../crypto/conf/conf_def.c",0x21c,"def_load_bio");
                          ERR_set_error(0xe,0x67,0);
                        }
                      }
                    }
                    goto LAB_005bef1c;
                  }
                  ERR_new();
                  ERR_set_debug("../crypto/conf/conf_def.c",0x20b,"def_load_bio");
                  uVar25 = 0xc0100;
                  goto LAB_005bfb4f;
                }
LAB_005bf642:
                if ((pbVar9 == pbVar19 + 8) && (bVar17 != 0x3d)) {
LAB_005bfba6:
                  ERR_new();
                  ERR_set_debug("../crypto/conf/conf_def.c",0x201,"def_load_bio");
                  ERR_set_error(0xe,0x65,"HERE-->%s",pbVar9);
                  local_138 = (CONF_VALUE *)0x0;
                  pbVar9 = local_100;
                  value = local_138;
                }
                else {
                  local_f0 = (char *)0x0;
                  auVar29 = ossl_safe_getenv("OPENSSL_CONF_INCLUDE");
                  pcVar12 = auVar29._0_8_;
                  if (pcVar12 == (char *)0x0) {
                    pcVar12 = (char *)param_1[1].meth_data;
                  }
                  if (*pbVar9 == 0x3d) {
                    bVar17 = pbVar9[1];
                    while (((pbVar9 = pbVar9 + 1, -1 < (char)bVar17 &&
                            (uVar4 = *(ushort *)((long)param_1->meth_data + (ulong)bVar17 * 2),
                            (uVar4 & 0x10) != 0)) && ((uVar4 & 8) == 0))) {
                      bVar17 = pbVar9[1];
                    }
                  }
                  trim_ws_isra_0(param_1->meth_data,pbVar9,auVar29._8_8_,pbVar9);
                  iVar7 = str_copy(param_1,local_140,&local_f0);
                  __s = local_f0;
                  if (iVar7 != 0) {
                    __s_00 = local_f0;
                    if (pcVar12 == (char *)0x0) {
LAB_005bf760:
                      if ((*(int *)((long)&param_1[1].meth + 4) != 0) && (*__s_00 != '/')) {
                        ERR_new();
                        ERR_set_debug("../crypto/conf/conf_def.c",0x1dd,"def_load_bio");
                        ERR_set_error(0xe,0x7d,0);
                        CRYPTO_free(__s_00);
                        goto LAB_005bf1c5;
                      }
                    }
                    else if (*local_f0 != '/') {
                      sVar10 = strlen(pcVar12);
                      sVar14 = strlen(__s);
                      lVar2 = sVar10 + 2 + sVar14;
                      __s_00 = (char *)CRYPTO_malloc((int)lVar2,"../crypto/conf/conf_def.c",0x1cb);
                      if (__s_00 == (char *)0x0) {
                        ERR_new();
                        ERR_set_debug("../crypto/conf/conf_def.c",0x1cd,"def_load_bio");
                        ERR_set_error(0xe,0xc0100,0);
                        CRYPTO_free(__s);
                        goto LAB_005bf1c5;
                      }
                      OPENSSL_strlcpy(__s_00,pcVar12,lVar2);
                      if ((*__s_00 == '\0') || (sVar10 = strlen(__s_00), __s_00[sVar10 - 1] != '/'))
                      {
                        OPENSSL_strlcat(__s_00,0x8198dc,lVar2);
                      }
                      OPENSSL_strlcat(__s_00,__s,lVar2);
                      CRYPTO_free(__s);
                      goto LAB_005bf760;
                    }
                    iVar7 = stat64(__s_00,&local_e8);
                    if (iVar7 < 0) {
                      ERR_new();
                      ERR_set_debug("../crypto/conf/conf_def.c",0x325,"process_include");
                      piVar16 = __errno_location();
                      ERR_set_error(2,*piVar16,"calling stat(%s)",__s_00);
                    }
                    else {
                      if ((local_e8.st_mode & 0xf000) != 0x4000) {
                        a = BIO_new_file(__s_00,"r");
                        if (__s_00 != pcVar27) {
                          CRYPTO_free(__s_00);
                        }
                        __s_00 = pcVar27;
                        if (a == (BIO *)0x0) goto LAB_005bf80f;
LAB_005bfc56:
                        pcVar27 = __s_00;
                        if ((lVar15 == 0) && (lVar15 = OPENSSL_sk_new_null(), lVar15 == 0)) {
                          ERR_new();
                          uVar25 = 0x1f2;
                        }
                        else {
                          iVar7 = OPENSSL_sk_push(lVar15,param_2);
                          pBVar11 = a;
                          if (iVar7 != 0) goto LAB_005bf80f;
                          ERR_new();
                          uVar25 = 0x1f8;
                        }
                        ERR_set_debug("../crypto/conf/conf_def.c",uVar25,"def_load_bio");
                        ERR_set_error(0xe,0xc0100,0);
                        BIO_free(a);
                        goto LAB_005bf1c5;
                      }
                      if (local_f8 == 0) {
                        a = (BIO *)get_next_file(__s_00,&local_f8);
                        if (a != (BIO *)0x0) goto LAB_005bfc56;
                      }
                      else {
                        ERR_new();
                        ERR_set_debug("../crypto/conf/conf_def.c",0x32c,"process_include");
                        ERR_set_error(0xe,0x6f,&DAT_007d9761,__s_00);
                      }
                    }
                    if (__s_00 != pcVar27) {
                      CRYPTO_free(__s_00);
                    }
                    goto LAB_005bf80f;
                  }
LAB_005bf1c5:
                  local_138 = (CONF_VALUE *)0x0;
                  pbVar9 = local_100;
                  value = local_138;
                }
                goto LAB_005bef1c;
              }
              if (pbVar9 == pbVar19 + 7) {
                if (bVar17 != 0x3d) {
                  iVar7 = strncmp((char *)pbVar19,".include",8);
                  if (iVar7 != 0) goto LAB_005bfba6;
                  goto LAB_005bf642;
                }
LAB_005bfcce:
                bVar17 = pbVar9[1];
                while (((pbVar9 = pbVar9 + 1, -1 < (char)bVar17 &&
                        (uVar4 = *(ushort *)((long)pvVar26 + (ulong)bVar17 * 2), (uVar4 & 0x10) != 0
                        )) && ((uVar4 & 8) == 0))) {
                  bVar17 = pbVar9[1];
                }
              }
              else if (bVar17 == 0x3d) goto LAB_005bfcce;
              trim_ws_isra_0(pvVar26,pbVar9);
              pbVar24 = (byte *)strchr((char *)pbVar9,0x3a);
              if (((pbVar24 == (byte *)0x0) || (pbVar9 == pbVar24)) || (pbVar24[1] == 0)) {
                ERR_new();
                ERR_set_debug("../crypto/conf/conf_def.c",0x195,"def_load_bio");
                uVar25 = 0x7a;
                goto LAB_005bfb4f;
              }
              *pbVar24 = 0;
              pbVar19 = pbVar24;
              pCVar23 = param_1;
              trim_ws_isra_0(param_1->meth_data,pbVar9);
              bVar17 = pbVar19[1];
              while (((pbVar19 = pbVar24 + 1, -1 < (char)bVar17 &&
                      (uVar4 = *(ushort *)((long)pCVar23->meth_data + (ulong)bVar17 * 2),
                      (uVar4 & 0x10) != 0)) && ((uVar4 & 8) == 0))) {
                bVar17 = pbVar24[2];
                pbVar24 = pbVar19;
              }
              iVar7 = strcmp((char *)pbVar9,"dollarid");
              if (iVar7 == 0) {
                iVar7 = parsebool(pbVar19,param_1 + 1);
joined_r0x005bf1b6:
                if (iVar7 == 0) goto LAB_005bf1c5;
              }
              else {
                iVar7 = strcmp((char *)pbVar9,"abspath");
                if (iVar7 == 0) {
                  iVar7 = parsebool(pbVar19,(undefined1 *)((long)&param_1[1].meth + 4));
                  goto joined_r0x005bf1b6;
                }
                iVar7 = strcmp((char *)pbVar9,"includedir");
                if (iVar7 != 0) goto LAB_005bf80f;
                CRYPTO_free(param_1[1].meth_data);
                pcVar12 = CRYPTO_strdup((char *)pbVar19,"../crypto/conf/conf_def.c",0x1ac);
                param_1[1].meth_data = pcVar12;
                if (pcVar12 == (char *)0x0) {
                  ERR_new();
                  ERR_set_debug("../crypto/conf/conf_def.c",0x1ad,"def_load_bio");
                  uVar25 = 0xc0100;
                  goto LAB_005bfb4f;
                }
              }
              iVar7 = 0;
              bVar6 = false;
            }
            else {
              pbVar9 = pbVar24 + (long)iVar7 + -1;
              pvVar26 = param_1->meth_data;
              if (((char)*pbVar9 < '\0') ||
                 ((*(byte *)((long)pvVar26 + (long)(char)*pbVar9 * 2) & 0x20) == 0))
              goto LAB_005bf228;
              bVar6 = false;
LAB_005bf9a8:
              if (((iVar7 == 1) || ((char)pbVar9[-1] < '\0')) ||
                 ((*(byte *)((long)pvVar26 + (long)(char)pbVar9[-1] * 2) & 0x20) == 0)) {
                iVar7 = iVar7 + -1;
                bVar6 = true;
              }
              else if (!bVar6) goto LAB_005bf228;
            }
LAB_005bf140:
            bVar28 = false;
          }
          ERR_new();
          ERR_set_debug("../crypto/conf/conf_def.c",0x100,"def_load_bio");
          uVar25 = 0x80007;
LAB_005bfb4f:
          ERR_set_error(0xe,uVar25,0);
          local_138 = (CONF_VALUE *)0x0;
          pbVar9 = local_100;
          value = local_138;
        }
        goto LAB_005bef1c;
      }
      ERR_new();
      uVar25 = 0xf2;
    }
    pcVar27 = (char *)0x0;
    lVar15 = 0;
    ERR_set_debug("../crypto/conf/conf_def.c",uVar25,"def_load_bio");
    ERR_set_error(0xe,0xc0100,0);
    local_138 = (CONF_VALUE *)0x0;
    local_148 = 0;
    value = local_138;
  }
LAB_005bef1c:
  local_138 = value;
  BUF_MEM_free(str);
  CRYPTO_free(pbVar9);
  while (iVar7 = OPENSSL_sk_num(lVar15), 0 < iVar7) {
    pBVar11 = (BIO *)OPENSSL_sk_pop(lVar15);
    BIO_vfree(param_2);
    param_2 = pBVar11;
  }
  OPENSSL_sk_free();
  CRYPTO_free(pcVar27);
  if (local_f8 != 0) {
    OPENSSL_DIR_end(&local_f8);
  }
  if (param_3 != (long *)0x0) {
    *param_3 = local_148;
  }
  BIO_snprintf((char *)&local_58,0x18,"%ld",local_148);
  ERR_add_error_data(2,"line ",&local_58);
  if (param_1->data != plVar5) {
    CONF_free(param_1->data);
    param_1->data = (lhash_st_CONF_VALUE *)0x0;
  }
  uVar25 = 0;
  if (local_138 != (CONF_VALUE *)0x0) {
    CRYPTO_free(local_138->name);
    CRYPTO_free(local_138->value);
    CRYPTO_free(local_138);
  }
LAB_005bf036:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar25;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
code_r0x005bf2c2:
  bVar17 = pbVar24[1];
  uVar22 = (ulong)bVar17;
  pbVar24 = pbVar24 + 1;
  goto joined_r0x005bf2a1;
}


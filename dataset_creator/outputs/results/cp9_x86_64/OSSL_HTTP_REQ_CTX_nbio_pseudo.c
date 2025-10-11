
undefined4 OSSL_HTTP_REQ_CTX_nbio(uint *param_1)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  size_t sVar11;
  void *pvVar12;
  char *pcVar13;
  uintmax_t uVar14;
  byte *pbVar15;
  byte *pbVar16;
  char *buf;
  undefined4 uVar17;
  char *pcVar18;
  char *__s;
  long in_FS_OFFSET;
  byte *local_58;
  char *local_50;
  char *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (char *)0x0;
  if (param_1 == (uint *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/http/http_client.c",0x1ef,"OSSL_HTTP_REQ_CTX_nbio");
    ERR_set_error(0x3d,0xc0102,0);
    uVar17 = 0;
  }
  else {
    if (((*(long *)(param_1 + 0x16) != 0) && (*(long *)(param_1 + 6) != 0)) &&
       (*(long *)(param_1 + 8) != 0)) {
      uVar8 = *param_1;
      buf = *(char **)(param_1 + 2);
      param_1[0x2e] = 0;
      param_1[0x2f] = 0;
      bVar4 = false;
      bVar3 = false;
LAB_005f65a0:
      if ((uVar8 & 0x1000) != 0) goto LAB_005f65e8;
      uVar8 = param_1[0x1e];
joined_r0x005f65aa:
      if (uVar8 == 0) {
        ERR_set_mark();
        iVar6 = BIO_gets(*(BIO **)(param_1 + 8),buf,param_1[4]);
        if (iVar6 == -2) {
          ERR_pop_to_mark();
          iVar6 = BIO_get_line(*(undefined8 *)(param_1 + 8),buf,param_1[4]);
        }
        else {
          ERR_clear_last_mark();
        }
      }
      else {
        iVar6 = BIO_read(*(BIO **)(param_1 + 8),buf,param_1[4]);
      }
      if (iVar6 < 1) {
        iVar6 = BIO_test_flags(*(BIO **)(param_1 + 8),8);
        if (iVar6 == 0) {
          ERR_new();
          ERR_set_debug("../crypto/http/http_client.c",0x20a,"OSSL_HTTP_REQ_CTX_nbio");
          ERR_set_error(0x3d,0x80,0);
          uVar17 = 0;
        }
        else {
LAB_005f7025:
          uVar17 = 0xffffffff;
        }
        goto LAB_005f6bab;
      }
      iVar7 = BIO_write(*(BIO **)(param_1 + 0x16),*(void **)(param_1 + 2),iVar6);
      if (iVar7 != iVar6) goto LAB_005f6a03;
      uVar8 = *param_1;
LAB_005f65e8:
      if (0x1005 < (int)uVar8) goto LAB_005f675d;
      if (0xfff < (int)uVar8) {
        switch(uVar8) {
        case 0x1001:
          goto switchD_005f6614_caseD_1001;
        case 0x1002:
          goto switchD_005f6614_caseD_1002;
        case 0x1003:
        case 0x1004:
          lVar10 = *(long *)(param_1 + 0x22);
          if (0 < lVar10) goto LAB_005f6714;
          if (uVar8 == 0x1003) goto LAB_005f6df0;
          goto LAB_005f663b;
        case 0x1005:
          goto switchD_005f6614_caseD_1005;
        default:
          uVar17 = 0;
          goto LAB_005f6bab;
        }
      }
      if ((int)uVar8 < 4) {
        if (0 < (int)uVar8) {
          bVar2 = bVar3;
LAB_005f680d:
          while ((sVar11 = BIO_ctrl(*(BIO **)(param_1 + 0x16),3,0,&local_58), bVar3 = bVar2,
                 0 < (long)sVar11 && (pvVar12 = memchr(local_58,10,sVar11), pvVar12 != (void *)0x0))
                ) {
            uVar8 = BIO_gets(*(BIO **)(param_1 + 0x16),buf,param_1[4]);
            if ((int)uVar8 < 1) {
              iVar6 = BIO_test_flags(*(BIO **)(param_1 + 0x16),8);
              pbVar16 = local_58;
              if (iVar6 != 0) goto LAB_005f6781;
              goto LAB_005f7006;
            }
            if (uVar8 == param_1[4]) {
              ERR_new();
              ERR_set_debug("../crypto/http/http_client.c",0x276,"OSSL_HTTP_REQ_CTX_nbio");
              ERR_set_error(0x3d,0x71,0);
              *param_1 = 0x1000;
              uVar17 = 0;
              goto LAB_005f6bab;
            }
            if (*param_1 == 1) {
              iVar6 = strncmp(buf,"HTTP/1.",7);
              pcVar13 = buf;
              if (iVar6 != 0) goto LAB_005f6a82;
              bVar2 = '0' < buf[7];
              cVar5 = *buf;
              pcVar18 = buf;
              if (cVar5 != '\0') {
                do {
                  iVar6 = ossl_ctype_check((int)cVar5,8);
                  if (iVar6 != 0) goto LAB_005f6a79;
                  cVar5 = pcVar18[1];
                  pcVar18 = pcVar18 + 1;
                } while (cVar5 != '\0');
                goto LAB_005f6a82;
              }
              goto LAB_005f6ab8;
            }
            pcVar13 = strchr(buf,0x3a);
            if (pcVar13 != (char *)0x0) {
              *pcVar13 = '\0';
              do {
                pcVar13 = pcVar13 + 1;
                iVar6 = ossl_ctype_check((int)*pcVar13,8);
              } while (iVar6 != 0);
              local_50 = strchr(pcVar13,0xd);
              if (((local_50 != (char *)0x0) ||
                  (local_50 = strchr(pcVar13,10), local_50 != (char *)0x0)) &&
                 (*local_50 = '\0', local_50 != (char *)0x0)) {
                if ((*param_1 == 3) && (iVar6 = OPENSSL_strcasecmp(buf,"Location"), iVar6 == 0)) {
                  *(char **)(param_1 + 0x2e) = pcVar13;
                  uVar17 = 0;
                  goto LAB_005f6bab;
                }
                if ((*(long *)(param_1 + 0x1c) != 0) &&
                   (iVar6 = OPENSSL_strcasecmp(buf,"Content-Type"), iVar6 == 0)) {
                  iVar6 = OPENSSL_strcasecmp(*(undefined8 *)(param_1 + 0x1c),pcVar13);
                  if (iVar6 != 0) {
                    ERR_new();
                    ERR_set_debug("../crypto/http/http_client.c",0x2a4,"OSSL_HTTP_REQ_CTX_nbio");
                    ERR_set_error(0x3d,0x76,"expected=%s, actual=%s",*(undefined8 *)(param_1 + 0x1c)
                                  ,pcVar13);
                    uVar17 = 0;
                    goto LAB_005f6bab;
                  }
                  bVar4 = true;
                }
                iVar6 = OPENSSL_strcasecmp(buf,"Connection");
                if (iVar6 == 0) {
                  iVar6 = OPENSSL_strcasecmp(pcVar13,"keep-alive");
                  if (iVar6 == 0) {
                    bVar3 = true;
                  }
                  else {
                    iVar6 = OPENSSL_strcasecmp(pcVar13,"close");
                    bVar3 = false;
                    if (iVar6 != 0) {
                      bVar3 = bVar2;
                    }
                  }
                }
                else {
                  iVar6 = OPENSSL_strcasecmp(buf,"Content-Length");
                  if (iVar6 == 0) {
                    strtouq(pcVar13,&local_50,10);
                    if ((local_50 == pcVar13) || (*local_50 != '\0')) {
                      ERR_new();
                      ERR_set_debug("../crypto/http/http_client.c",0x2b5,"OSSL_HTTP_REQ_CTX_nbio");
                      ERR_set_error(0x3d,0x77,"input=%s",pcVar13);
                      uVar17 = 0;
                      goto LAB_005f6bab;
                    }
                    iVar6 = check_set_resp_len(param_1);
                    if (iVar6 == 0) goto LAB_005f6a03;
                  }
                }
              }
            }
            bVar1 = **(byte **)(param_1 + 2);
            local_58 = *(byte **)(param_1 + 2);
            while( true ) {
              if (bVar1 == 0) {
                uVar8 = param_1[0x28];
                if (((uVar8 != 0) && (!bVar3)) && (param_1[0x28] = 0, uVar8 == 2)) {
                  ERR_new();
                  ERR_set_debug("../crypto/http/http_client.c",0x2cb,"OSSL_HTTP_REQ_CTX_nbio");
                  ERR_set_error(0x3d,0x7f,0);
                  uVar17 = 0;
                  goto LAB_005f6bab;
                }
                if (*param_1 == 0x1000) goto LAB_005f6a03;
                if ((*(long *)(param_1 + 0x1c) != 0) && (!bVar4)) {
                  ERR_new();
                  ERR_set_debug("../crypto/http/http_client.c",0x2d5,"OSSL_HTTP_REQ_CTX_nbio");
                  ERR_set_error(0x3d,0x79,"expected=%s",*(undefined8 *)(param_1 + 0x1c));
                  uVar17 = 0;
                  goto LAB_005f6bab;
                }
                if (*param_1 == 3) {
                  ERR_new();
                  ERR_set_debug("../crypto/http/http_client.c",0x2db,"OSSL_HTTP_REQ_CTX_nbio");
                  ERR_set_error(0x3d,0x6f,0);
                  uVar17 = 0;
                  goto LAB_005f6bab;
                }
                if (param_1[0x1e] == 0) {
                  *param_1 = 0x1007;
                  uVar17 = 1;
                  goto LAB_005f6bab;
                }
                *param_1 = 4;
                goto LAB_005f679a;
              }
              if ((bVar1 != 0xd) && (bVar2 = bVar3, bVar1 != 10)) break;
              bVar1 = local_58[1];
              local_58 = local_58 + 1;
            }
          }
          if ((long)(int)param_1[4] <= (long)sVar11) goto LAB_005f7006;
          buf = *(char **)(param_1 + 2);
          uVar8 = *param_1;
          goto LAB_005f65a0;
        }
LAB_005f675d:
        uVar9 = BIO_ctrl(*(BIO **)(param_1 + 0x16),3,0,(void *)0x0);
        pbVar16 = local_58;
        bVar2 = bVar3;
        if ((-1 < (long)uVar9) && (*(ulong *)(param_1 + 0x24) <= uVar9)) {
          *param_1 = 0x1006;
          uVar17 = 1;
          goto LAB_005f6bab;
        }
      }
      else {
        if (uVar8 != 4) goto LAB_005f675d;
LAB_005f679a:
        lVar10 = BIO_ctrl(*(BIO **)(param_1 + 0x16),3,0,&local_58);
        pbVar16 = local_58;
        bVar2 = bVar3;
        if (1 < lVar10) {
          pbVar16 = local_58 + 1;
          if (*local_58 != 0x30) {
            local_58 = pbVar16;
            ERR_new();
            ERR_set_debug("../crypto/http/http_client.c",0x2f3,"OSSL_HTTP_REQ_CTX_nbio");
            ERR_set_error(0x3d,0x6e,0);
            uVar17 = 0;
            goto LAB_005f6bab;
          }
          bVar1 = local_58[1];
          uVar9 = (ulong)(byte)(bVar1 + 2);
          if ((char)bVar1 < '\0') {
            if (lVar10 < 6) goto LAB_005f6781;
            uVar8 = bVar1 & 0x7f;
            if (3 < (byte)((char)uVar8 - 1U)) {
              local_58 = pbVar16;
              ERR_new(uVar8,uVar9);
              ERR_set_debug("../crypto/http/http_client.c",0x302,"OSSL_HTTP_REQ_CTX_nbio");
              ERR_set_error(0x3d,0x6d,0);
              uVar17 = 0;
              goto LAB_005f6bab;
            }
            if ((char)uVar8 == '\0') {
              uVar9 = 0;
              local_58 = local_58 + 2;
            }
            else {
              pbVar15 = local_58 + (uVar8 + 2);
              uVar9 = 0;
              pbVar16 = local_58 + 2;
              do {
                local_58 = pbVar16 + 1;
                uVar9 = uVar9 << 8 | (ulong)*pbVar16;
                pbVar16 = local_58;
              } while (local_58 != pbVar15);
            }
            uVar9 = (uVar8 + 2) + uVar9;
            pbVar16 = local_58;
          }
          local_58 = pbVar16;
          iVar6 = check_set_resp_len(param_1,uVar9);
          if (iVar6 != 0) {
            *param_1 = 5;
            goto LAB_005f675d;
          }
LAB_005f6a03:
          uVar17 = 0;
          goto LAB_005f6bab;
        }
      }
LAB_005f6781:
      local_58 = pbVar16;
      buf = *(char **)(param_1 + 2);
      uVar8 = *param_1;
      bVar3 = bVar2;
      goto LAB_005f65a0;
    }
    ERR_new();
    ERR_set_debug("../crypto/http/http_client.c",499,"OSSL_HTTP_REQ_CTX_nbio");
    ERR_set_error(0x3d,0xc0101,0);
    uVar17 = 0;
  }
LAB_005f6bab:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar17;
switchD_005f6614_caseD_1001:
  iVar6 = BIO_write(*(BIO **)(param_1 + 0x16),&DAT_007fb8aa,2);
  if (iVar6 != 2) goto LAB_005f7006;
  *param_1 = 0x1002;
switchD_005f6614_caseD_1002:
  lVar10 = BIO_ctrl(*(BIO **)(param_1 + 0x16),3,0,param_1 + 0x20);
  *param_1 = 0x1003;
  *(long *)(param_1 + 0x22) = lVar10;
  if (0 < lVar10) {
LAB_005f6714:
    iVar6 = BIO_write(*(BIO **)(param_1 + 6),*(void **)(param_1 + 0x20),(int)lVar10);
    if (iVar6 < 1) {
LAB_005f6ff4:
      iVar6 = BIO_test_flags(*(BIO **)(param_1 + 6),8);
      if (iVar6 != 0) goto LAB_005f7025;
      goto LAB_005f7006;
    }
    buf = *(char **)(param_1 + 2);
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + (long)iVar6;
    *(long *)(param_1 + 0x22) = *(long *)(param_1 + 0x22) - (long)iVar6;
    uVar8 = *param_1;
    goto LAB_005f65a0;
  }
LAB_005f6df0:
  BIO_ctrl(*(BIO **)(param_1 + 0x16),1,0,(void *)0x0);
  *param_1 = 0x1004;
LAB_005f663b:
  if ((*(BIO **)(param_1 + 0x18) != (BIO *)0x0) &&
     (lVar10 = BIO_ctrl(*(BIO **)(param_1 + 0x18),2,0,(void *)0x0), (int)lVar10 == 0)) {
    iVar6 = BIO_read(*(BIO **)(param_1 + 0x18),*(void **)(param_1 + 2),param_1[4]);
    if (0 < (long)iVar6) {
      buf = *(char **)(param_1 + 2);
      *(long *)(param_1 + 0x22) = (long)iVar6;
      uVar8 = *param_1;
      *(char **)(param_1 + 0x20) = buf;
      goto LAB_005f65a0;
    }
    iVar6 = BIO_test_flags(*(BIO **)(param_1 + 8),8);
    if (iVar6 != 0) goto LAB_005f7025;
    ERR_new();
    ERR_set_debug("../crypto/http/http_client.c",0x23c,"OSSL_HTTP_REQ_CTX_nbio");
    ERR_set_error(0x3d,0x80,0);
    uVar17 = 0;
    goto LAB_005f6bab;
  }
  *param_1 = 0x1005;
switchD_005f6614_caseD_1005:
  lVar10 = BIO_ctrl(*(BIO **)(param_1 + 6),0xb,0,(void *)0x0);
  if ((int)lVar10 < 1) goto LAB_005f6ff4;
  uVar8 = param_1[0x1e];
  buf = *(char **)(param_1 + 2);
  *param_1 = 1;
  goto joined_r0x005f65aa;
LAB_005f6a79:
  if (*pcVar18 == '\0') goto LAB_005f6a82;
  iVar6 = ossl_ctype_check((int)*pcVar18,8);
  if (iVar6 == 0) {
    cVar5 = *pcVar18;
    __s = pcVar18;
    if (cVar5 != '\0') goto LAB_005f6cb0;
    goto LAB_005f6a82;
  }
  pcVar18 = pcVar18 + 1;
  goto LAB_005f6a79;
  while( true ) {
    cVar5 = __s[1];
    __s = __s + 1;
    if (cVar5 == '\0') break;
LAB_005f6cb0:
    iVar6 = ossl_ctype_check((int)cVar5,8);
    if (iVar6 != 0) {
      if (*__s != '\0') {
        *__s = '\0';
        uVar14 = strtouq(pcVar18,&local_48,10);
        if (*local_48 == '\0') {
          cVar5 = __s[1];
          goto joined_r0x005f6d0e;
        }
      }
      break;
    }
  }
LAB_005f6a82:
  cVar5 = *buf;
LAB_005f6ab8:
  while (cVar5 != '\0') {
    iVar6 = ossl_ctype_check((int)cVar5,0x100);
    if (iVar6 == 0) {
      *pcVar13 = ' ';
    }
    pcVar18 = pcVar13 + 1;
    pcVar13 = buf + 0x3c;
    if (buf + 0x3c == pcVar18) break;
    pcVar13 = pcVar18;
    cVar5 = *pcVar18;
  }
  *pcVar13 = '\0';
  ERR_new();
  ERR_set_debug("../crypto/http/http_client.c",0x1c2,"parse_http_line1");
  ERR_set_error(0x3d,0x7e,"content=%s",buf);
  goto LAB_005f6afa;
joined_r0x005f6d0e:
  __s = __s + 1;
  if (cVar5 == '\0') goto LAB_005f6d77;
  iVar6 = ossl_ctype_check((int)cVar5,8);
  if (iVar6 == 0) {
    if (*__s != '\0') {
      sVar11 = strlen(__s);
      local_48 = __s + (sVar11 - 1);
      while (iVar6 = ossl_ctype_check((int)*local_48,8), iVar6 != 0) {
        *local_48 = '\0';
        local_48 = local_48 + -1;
      }
    }
    goto LAB_005f6d77;
  }
  cVar5 = __s[1];
  goto joined_r0x005f6d0e;
LAB_005f6d77:
  iVar6 = (int)uVar14;
  if (iVar6 == 200) {
    *param_1 = 2;
    goto LAB_005f680d;
  }
  if (1 < iVar6 - 0x12dU) {
    cVar5 = (iVar6 < 400) * '\t' + 'i';
    if (*__s == '\0') {
      ERR_new();
      ERR_set_debug("../crypto/http/http_client.c",0x1b6,"parse_http_line1");
      ERR_set_error(0x3d,cVar5,"code=%s",pcVar18);
    }
    else {
      ERR_new();
      ERR_set_debug("../crypto/http/http_client.c",0x1b8,"parse_http_line1");
      ERR_set_error(0x3d,cVar5,"code=%s, reason=%s",pcVar18,__s);
    }
    if (1 < iVar6 - 0x12dU) goto LAB_005f6afa;
  }
  if (param_1[0x1a] == 0) {
    *param_1 = 3;
    goto LAB_005f680d;
  }
  ERR_new();
  ERR_set_debug("../crypto/http/http_client.c",0x287,"OSSL_HTTP_REQ_CTX_nbio");
  ERR_set_error(0x3d,0x74,0);
LAB_005f6afa:
  *param_1 = 0x1000;
  goto LAB_005f680d;
LAB_005f7006:
  *param_1 = 0x1000;
  uVar17 = 0;
  goto LAB_005f6bab;
}


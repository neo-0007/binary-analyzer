
undefined4
OSSL_HTTP_proxy_connect
          (BIO *param_1,long param_2,undefined8 param_3,char *param_4,char *param_5,int param_6,
          BIO *param_7,long param_8)

{
  undefined1 auVar1 [16];
  int iVar2;
  char *buf;
  BIO_METHOD *type;
  BIO *b;
  time_t tVar3;
  size_t sVar4;
  uchar *f;
  ulong uVar5;
  uchar *t;
  long lVar6;
  char *pcVar7;
  undefined4 uVar8;
  ulong uVar9;
  long local_50;
  char *local_48;
  
  buf = (char *)CRYPTO_malloc(0x2000,"../crypto/http/http_client.c",0x4e3);
  type = BIO_f_buffer();
  b = BIO_new(type);
  local_50 = 0;
  if (0 < param_6) {
    tVar3 = time((time_t *)0x0);
    local_50 = param_6 + tVar3;
  }
  if (((param_1 == (BIO *)0x0) || (param_2 == 0)) || ((param_7 != (BIO *)0x0 && (param_8 == 0)))) {
    ERR_new();
    ERR_set_debug("../crypto/http/http_client.c",0x4ed,"OSSL_HTTP_proxy_connect");
    ERR_set_error(0x3d,0xc0102,0);
LAB_005f8661:
    if (b == (BIO *)0x0) {
      uVar8 = 0;
      goto LAB_005f866d;
    }
LAB_005f8931:
    uVar8 = 0;
  }
  else {
    if ((buf == (char *)0x0) || (b == (BIO *)0x0)) {
      BIO_printf(param_7,"%s: out of memory",param_8);
      goto LAB_005f8661;
    }
    BIO_push(b,param_1);
    BIO_printf(b,"CONNECT %s:%s HTTP/1.0\r\n",param_2);
    BIO_printf(b,"Proxy-Connection: Keep-Alive\r\n");
    if (param_4 != (char *)0x0) {
      sVar4 = strlen(param_4);
      uVar9 = sVar4 + 1;
      if (param_5 == (char *)0x0) {
        sVar4 = sVar4 + 2;
        f = (uchar *)CRYPTO_malloc((int)sVar4,"../crypto/http/http_client.c",0x508);
        if (f != (uchar *)0x0) {
          local_48 = "";
          goto LAB_005f8741;
        }
      }
      else {
        sVar4 = strlen(param_5);
        uVar9 = uVar9 + sVar4;
        sVar4 = uVar9 + 1;
        f = (uchar *)CRYPTO_malloc((int)sVar4,"../crypto/http/http_client.c",0x508);
        local_48 = param_5;
        if (f != (uchar *)0x0) {
LAB_005f8741:
          iVar2 = BIO_snprintf((char *)f,sVar4,"%s:%s",param_4,local_48);
          if (iVar2 == (int)uVar9) {
            auVar1._8_8_ = 0;
            auVar1._0_8_ = uVar9;
            uVar5 = ((uVar9 / 3 + 1) -
                    (ulong)(uVar9 == (SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),8) &
                                     0xfffffffffffffffe) + uVar9 / 3)) * 4;
            t = (uchar *)CRYPTO_malloc((int)uVar5 + 1,"../crypto/http/http_client.c",0x4cc);
            if (t != (uchar *)0x0) {
              iVar2 = EVP_EncodeBlock(t,f,iVar2);
              if ((-1 < iVar2) && ((ulong)(long)iVar2 <= uVar5)) {
                BIO_printf(b,"Proxy-Authorization: Basic %s\r\n",t);
                sVar4 = strlen((char *)t);
                CRYPTO_clear_free(t,sVar4,"../crypto/http/http_client.c",0x511);
                CRYPTO_clear_free(f,uVar9,"../crypto/http/http_client.c");
                goto LAB_005f8845;
              }
              CRYPTO_free(t);
            }
          }
          CRYPTO_clear_free(f,uVar9,"../crypto/http/http_client.c");
          uVar8 = 0;
          goto LAB_005f8934;
        }
      }
      goto LAB_005f8931;
    }
LAB_005f8845:
    BIO_printf(b,"\r\n");
    do {
      lVar6 = BIO_ctrl(b,0xb,0,(void *)0x0);
      if ((int)lVar6 != 0) break;
      iVar2 = BIO_test_flags(b,8);
    } while (iVar2 != 0);
    do {
      iVar2 = BIO_wait(b,local_50,100);
      if (iVar2 < 1) {
        uVar8 = 0;
        BIO_printf(param_7,"%s: HTTP CONNECT %s\n",param_8);
        goto LAB_005f8934;
      }
      iVar2 = BIO_gets(b,buf,0x2000);
      lVar6 = (long)iVar2;
    } while (iVar2 < 0xd);
    iVar2 = strncmp(buf,"HTTP/",5);
    if (iVar2 == 0) {
      if ((buf[5] != '1') || (buf[6] != '.')) {
        ERR_new();
        ERR_set_debug("../crypto/http/http_client.c",0x541,"OSSL_HTTP_proxy_connect");
        ERR_set_error(0x3d,0x6a,0);
        BIO_printf(param_7,"%s: HTTP CONNECT failed, bad HTTP version %.*s\n",param_8,3,buf + 5);
        goto LAB_005f8931;
      }
      if ((buf[8] == ' ') && (buf[9] == '2')) {
        do {
          iVar2 = BIO_gets(b,buf,0x2000);
        } while (2 < iVar2);
        uVar8 = 1;
      }
      else {
        do {
          iVar2 = ossl_ctype_check((int)buf[lVar6 + -1],8);
          if (iVar2 == 0) {
            pcVar7 = buf + lVar6;
            break;
          }
          lVar6 = lVar6 + -1;
          pcVar7 = buf;
        } while (lVar6 != 0);
        *pcVar7 = '\0';
        ERR_new();
        ERR_set_debug("../crypto/http/http_client.c",0x54f,"OSSL_HTTP_proxy_connect");
        ERR_set_error(0x3d,100,"reason=%s",buf + 8);
        BIO_printf(param_7,"%s: HTTP CONNECT failed, reason=%s\n",param_8);
        uVar8 = 0;
      }
    }
    else {
      ERR_new();
      uVar8 = 0;
      ERR_set_debug("../crypto/http/http_client.c",0x539,"OSSL_HTTP_proxy_connect");
      ERR_set_error(0x3d,0x7e,0);
      BIO_printf(param_7,"%s: HTTP CONNECT failed, non-HTTP response\n",param_8);
    }
  }
LAB_005f8934:
  BIO_ctrl(b,0xb,0,(void *)0x0);
  BIO_pop(b);
  BIO_free(b);
LAB_005f866d:
  CRYPTO_free(buf);
  return uVar8;
}


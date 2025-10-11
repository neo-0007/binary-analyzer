
BIO * OSSL_HTTP_get(char *param_1,undefined8 param_2,undefined8 param_3,BIO *param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                   undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined8 param_12,
                   uint param_13)

{
  BIO *__s1;
  int iVar1;
  time_t tVar2;
  BIO *__s1_00;
  long lVar3;
  BIO *a;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  ulong local_c8;
  undefined4 local_64;
  BIO *local_60;
  void *local_58;
  void *local_50;
  char *local_48;
  long local_40;
  
  lVar5 = 0;
  local_c8 = (ulong)param_13;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = (BIO *)0x0;
  if (0 < (int)param_13) {
    tVar2 = time((time_t *)0x0);
    lVar5 = (int)param_13 + tVar2;
  }
  if (param_1 == (char *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/http/http_client.c",0x44f,"OSSL_HTTP_get");
    ERR_set_error(0x3d,0xc0102,0);
    a = (BIO *)0x0;
  }
  else {
    __s1_00 = (BIO *)CRYPTO_strdup(param_1,"../crypto/http/http_client.c",0x452);
    if (__s1_00 != (BIO *)0x0) {
      iVar4 = 0;
LAB_005f816a:
      iVar1 = OSSL_HTTP_parse_url(__s1_00,&local_64,0,&local_58,&local_50,0,&local_48,0,0);
      if (iVar1 != 0) {
        lVar3 = OSSL_HTTP_open(local_58,local_50,param_2,param_3,local_64,param_4,param_5,param_6,
                               param_7,param_8,local_c8 & 0xffffffff);
        do {
          if (lVar3 != 0) {
            iVar1 = OSSL_HTTP_set1_request
                              (lVar3,local_48,param_9,0,0,param_10,param_11,param_12,
                               0xffffffffffffffff,0);
            if (iVar1 == 0) {
              OSSL_HTTP_REQ_CTX_free(lVar3);
              CRYPTO_free(local_48);
              __s1 = local_60;
              goto joined_r0x005f8084;
            }
            a = (BIO *)OSSL_HTTP_exchange(lVar3,&local_60);
            CRYPTO_free(local_48);
            __s1 = local_60;
            if (a == (BIO *)0x0) goto joined_r0x005f8084;
            uVar6 = 1;
LAB_005f8277:
            CRYPTO_free(local_58);
            CRYPTO_free(local_50);
            iVar4 = OSSL_HTTP_close(lVar3,uVar6);
            if (iVar4 == 0) {
              BIO_free(a);
              a = (BIO *)0x0;
            }
            goto LAB_005f82be;
          }
          CRYPTO_free(local_48);
          __s1 = local_60;
joined_r0x005f8084:
          local_60 = __s1;
          if (__s1 == (BIO *)0x0) {
            uVar6 = 0;
            a = (BIO *)0x0;
            goto LAB_005f8277;
          }
          iVar4 = iVar4 + 1;
          if (0x31 < iVar4) {
            ERR_new();
            ERR_set_debug("../crypto/http/http_client.c",0x42f,"redirection_ok");
            ERR_set_error(0x3d,0x73,0);
LAB_005f8334:
            uVar6 = 0;
            CRYPTO_free(local_60);
            a = (BIO *)0x0;
            goto LAB_005f8277;
          }
          if (((*(char *)&__s1->method != '/') &&
              (iVar1 = strncmp((char *)__s1_00,"https:",6), iVar1 == 0)) &&
             (iVar1 = strncmp((char *)__s1,"https:",6), iVar1 != 0)) {
            ERR_new();
            ERR_set_debug("../crypto/http/http_client.c",0x436,"redirection_ok");
            ERR_set_error(0x3d,0x70,0);
            goto LAB_005f8334;
          }
          tVar2 = time((time_t *)0x0);
          if (lVar5 != 0) {
            if (lVar5 < tVar2) {
              ERR_new();
              ERR_set_debug("../crypto/http/http_client.c",0x1d9,"may_still_retry");
              ERR_set_error(0x3d,0x81,0);
              goto LAB_005f8334;
            }
            local_c8 = 0x7fffffff;
            if (lVar5 - tVar2 < 0x80000000) {
              local_c8 = lVar5 - tVar2;
            }
          }
          BIO_ctrl(param_4,1,0,(void *)0x0);
          CRYPTO_free(__s1_00);
          __s1_00 = local_60;
          if (*(char *)&local_60->method != '/') goto code_r0x005f8133;
          local_48 = CRYPTO_strdup((char *)local_60,"../crypto/http/http_client.c",0x471);
        } while( true );
      }
      a = (BIO *)0x0;
LAB_005f82be:
      CRYPTO_free(__s1_00);
      goto LAB_005f82d8;
    }
    a = (BIO *)0x0;
  }
LAB_005f82d8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return a;
code_r0x005f8133:
  CRYPTO_free(local_58);
  CRYPTO_free(local_50);
  OSSL_HTTP_close(lVar3,1);
  goto LAB_005f816a;
}


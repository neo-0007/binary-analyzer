
long OSSL_HTTP_open(char *param_1,char *param_2,long param_3,long param_4,int param_5,BIO *param_6,
                   long param_7,code *param_8,undefined8 param_9,undefined4 param_10,int param_11)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  BIO *bp;
  BIO *pBVar4;
  time_t tVar5;
  long lVar6;
  undefined8 uVar7;
  char *__s;
  long in_FS_OFFSET;
  char *local_68;
  char *local_50;
  char *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_5 != 0) && (param_8 == (code *)0x0)) {
    ERR_new();
    lVar2 = 0;
    ERR_set_debug("../crypto/http/http_client.c",899,"OSSL_HTTP_open");
    ERR_set_error(0x3d,0x6b,0);
    goto LAB_005f75d3;
  }
  if (param_7 != 0) {
    if ((param_6 == (BIO *)0x0) || (param_8 != (code *)0x0)) {
      ERR_new();
      uVar7 = 0x387;
    }
    else {
      if (param_4 == 0 && param_3 == 0) {
        ERR_set_mark();
        lVar2 = OSSL_HTTP_REQ_CTX_new(param_6,param_7,param_10);
        if (lVar2 != 0) {
          *(undefined4 *)(lVar2 + 0x14) = 0;
          *(undefined8 *)(lVar2 + 0x28) = 0;
          *(undefined8 *)(lVar2 + 0x30) = param_9;
          *(int *)(lVar2 + 0x38) = param_5;
          goto LAB_005f756a;
        }
        goto LAB_005f754c;
      }
LAB_005f7925:
      ERR_new();
      uVar7 = 0x38e;
    }
    lVar2 = 0;
    ERR_set_debug("../crypto/http/http_client.c",uVar7,"OSSL_HTTP_open");
    ERR_set_error(0x3d,0x80106,0);
    goto LAB_005f75d3;
  }
  if (param_6 == (BIO *)0x0) {
    local_50 = (char *)0x0;
    local_48 = (char *)0x0;
    if (param_1 == (char *)0x0) {
      ERR_new();
      lVar2 = 0;
      ERR_set_debug("../crypto/http/http_client.c",0x396,"OSSL_HTTP_open");
      ERR_set_error(0x3d,0xc0102,0);
      goto LAB_005f75d3;
    }
    if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
      param_2 = (char *)0x0;
      pcVar3 = strchr(param_1,0x3a);
      if ((pcVar3 == (char *)0x0) && (param_2 = "443", param_5 == 0)) {
        param_2 = "80";
      }
    }
    local_68 = (char *)OSSL_HTTP_adapt_proxy(param_3,param_4,param_1,param_5);
    if ((local_68 == (char *)0x0) ||
       (iVar1 = OSSL_HTTP_parse_url(local_68,0,0,&local_50,&local_48,0,0,0,0), iVar1 != 0)) {
      pcVar3 = local_48;
      __s = local_50;
      if (local_50 == (char *)0x0) {
        pcVar3 = param_2;
        __s = param_1;
      }
      if (pcVar3 == (char *)0x0) {
        pcVar3 = strchr(__s,0x3a);
        if (pcVar3 == (char *)0x0) {
          pcVar3 = "443";
          if (param_5 == 0) {
            pcVar3 = "80";
          }
          goto LAB_005f76c1;
        }
        bp = BIO_new_connect(__s);
        CRYPTO_free(local_50);
        CRYPTO_free(local_48);
        if (bp == (BIO *)0x0) {
          lVar2 = 0;
          goto LAB_005f75d3;
        }
      }
      else {
LAB_005f76c1:
        bp = BIO_new_connect(__s);
        if (bp == (BIO *)0x0) {
          CRYPTO_free(local_50);
          lVar2 = 0;
          CRYPTO_free(local_48);
          goto LAB_005f75d3;
        }
        BIO_ctrl(bp,100,1,pcVar3);
        CRYPTO_free(local_50);
        CRYPTO_free(local_48);
      }
      ERR_set_mark();
      iVar1 = BIO_do_connect_retry(bp,param_11,0xffffffff);
      if (0 < iVar1) goto LAB_005f7751;
      goto LAB_005f7962;
    }
  }
  else {
    if (param_3 != 0 || param_4 != 0) goto LAB_005f7925;
    ERR_set_mark();
    iVar1 = BIO_do_connect_retry(param_6,param_11,0xffffffff);
    if (iVar1 < 1) goto LAB_005f754c;
    local_68 = (char *)0x0;
    bp = param_6;
LAB_005f7751:
    pBVar4 = bp;
    if ((param_8 == (code *)0x0) ||
       (pBVar4 = (BIO *)(*param_8)(bp,param_9,1,param_5), pBVar4 != (BIO *)0x0)) {
      lVar2 = OSSL_HTTP_REQ_CTX_new(pBVar4,pBVar4,param_10);
      if (lVar2 != 0) {
        *(code **)(lVar2 + 0x28) = param_8;
        *(undefined8 *)(lVar2 + 0x30) = param_9;
        *(uint *)(lVar2 + 0x14) = (uint)(param_6 == (BIO *)0x0);
        *(int *)(lVar2 + 0x38) = param_5;
        if (local_68 == (char *)0x0) {
LAB_005f756a:
          if (param_1 != (char *)0x0) {
            pcVar3 = CRYPTO_strdup(param_1,"../crypto/http/http_client.c",0x164);
            *(char **)(lVar2 + 0x48) = pcVar3;
            if (pcVar3 == (char *)0x0) goto LAB_005f77ea;
          }
          if (param_2 != (char *)0x0) {
            pcVar3 = CRYPTO_strdup(param_2,"../crypto/http/http_client.c",0x167);
            *(char **)(lVar2 + 0x50) = pcVar3;
            if (pcVar3 == (char *)0x0) goto LAB_005f77ea;
          }
          if (param_11 < 1) {
            lVar6 = 0;
          }
          else {
            tVar5 = time((time_t *)0x0);
            lVar6 = param_11 + tVar5;
          }
          *(long *)(lVar2 + 0xb0) = lVar6;
          ERR_pop_to_mark();
          goto LAB_005f75d3;
        }
        pcVar3 = CRYPTO_strdup(local_68,"../crypto/http/http_client.c",0x161);
        *(char **)(lVar2 + 0x40) = pcVar3;
        if (pcVar3 != (char *)0x0) goto LAB_005f756a;
LAB_005f77ea:
        OSSL_HTTP_REQ_CTX_free(lVar2);
      }
    }
    else if (param_6 == (BIO *)0x0) {
LAB_005f7962:
      BIO_free_all(bp);
    }
LAB_005f754c:
    ERR_clear_last_mark();
  }
  lVar2 = 0;
LAB_005f75d3:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return lVar2;
}



undefined8
OSSL_parse_url(char *param_1,long *param_2,long *param_3,long *param_4,long *param_5,uint *param_6,
              long *param_7,long *param_8,long *param_9)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  size_t sVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  void *pvVar10;
  long lVar11;
  char *pcVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  undefined8 uVar16;
  long in_FS_OFFSET;
  char *local_c0;
  byte *local_a8;
  char *local_a0;
  byte *local_98;
  char *local_80;
  byte *local_78;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != (long *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (long *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (long *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (long *)0x0) {
    *param_5 = 0;
  }
  if (param_7 != (long *)0x0) {
    *param_7 = 0;
  }
  if (param_9 != (long *)0x0) {
    *param_9 = 0;
  }
  if (param_8 != (long *)0x0) {
    *param_8 = 0;
  }
  if (param_1 == (char *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/http/http_lib.c",0x3e,"OSSL_parse_url");
    ERR_set_error(0x3d,0xc0102,0);
    uVar16 = 0;
    goto LAB_005f9138;
  }
  pcVar4 = strstr(param_1,"://");
  pcVar12 = param_1;
  local_a0 = param_1;
  if (pcVar4 == (char *)0x0) {
LAB_005f8c37:
    local_80 = strchr(local_a0,0x40);
    if (local_80 == (char *)0x0) {
      local_c0 = local_a0;
      local_80 = local_a0;
    }
    else {
      local_c0 = local_80 + 1;
    }
    if (*local_c0 == '[') {
      pcVar4 = strchr(local_c0 + 1,0x5d);
      pbVar5 = (byte *)(pcVar4 + 1);
      if (pcVar4 == (char *)0x0) goto LAB_005f91a1;
    }
    else {
      pbVar5 = (byte *)strchr(local_c0,0x3a);
      if ((((pbVar5 == (byte *)0x0) &&
           (pbVar5 = (byte *)strchr(local_c0,0x2f), pbVar5 == (byte *)0x0)) &&
          (pbVar5 = (byte *)strchr(local_c0,0x3f), pbVar5 == (byte *)0x0)) &&
         (pbVar5 = (byte *)strchr(local_c0,0x23), pbVar5 == (byte *)0x0)) {
        sVar6 = strlen(local_c0);
        pbVar5 = (byte *)(local_c0 + sVar6);
      }
    }
    pbVar14 = (byte *)0x8239a3;
    local_a8 = pbVar5;
    if (*pbVar5 == 0x3a) {
      pbVar14 = pbVar5 + 1;
      local_a8 = pbVar14;
    }
    iVar3 = __isoc99_sscanf(pbVar14,"%u",&local_44);
    if ((iVar3 == 0) || (0xffff < local_44)) {
      ERR_new();
      ERR_set_debug("../crypto/http/http_lib.c",0x72,"OSSL_parse_url");
      ERR_set_error(0x3d,0x7b,&DAT_007d9761,pbVar14);
      goto LAB_005f905a;
    }
    bVar1 = *pbVar14;
    pbVar13 = pbVar14;
    while ((byte)(bVar1 - 0x30) < 10) {
      pbVar8 = pbVar13 + 1;
      pbVar13 = pbVar13 + 1;
      bVar1 = *pbVar8;
    }
    if (local_a8 == pbVar14) {
      local_a8 = pbVar13;
    }
    if ((0x3f < *local_a8) || ((0x8000800800000001U >> ((ulong)*local_a8 & 0x3f) & 1) == 0)) {
      ERR_new();
      ERR_set_debug("../crypto/http/http_lib.c",0x7d,"OSSL_parse_url");
      ERR_set_error(0x3d,0x7d,0);
      goto LAB_005f91a1;
    }
    sVar6 = strlen((char *)local_a8);
    pbVar7 = local_a8 + sVar6;
    pbVar8 = (byte *)strchr((char *)local_a8,0x3f);
    pbVar15 = local_a8;
    if ((pbVar8 == (byte *)0x0) || (pbVar15 = pbVar8, param_8 == (long *)0x0)) {
      pbVar9 = (byte *)strchr((char *)pbVar15,0x23);
      pbVar15 = pbVar7;
      pbVar8 = pbVar7;
      pbVar2 = pbVar9;
    }
    else {
      pbVar9 = (byte *)strchr((char *)pbVar8,0x23);
      pbVar15 = pbVar8 + 1;
      pbVar2 = pbVar8;
    }
    local_98 = pbVar7;
    local_78 = pbVar7;
    if (pbVar9 != (byte *)0x0) {
      pbVar8 = pbVar2;
      local_98 = pbVar9;
      local_78 = pbVar9 + 1;
    }
    if (param_2 != (long *)0x0) {
      pvVar10 = (void *)CRYPTO_strndup(param_1,(long)pcVar12 - (long)param_1,
                                       "../crypto/http/http_lib.c",0x1c);
      *param_2 = (long)pvVar10;
      if (pvVar10 != (void *)0x0) goto LAB_005f8e38;
      goto LAB_005f9063;
    }
LAB_005f8e38:
    if (param_4 != (long *)0x0) {
      lVar11 = CRYPTO_strndup(local_c0,(long)pbVar5 - (long)local_c0,"../crypto/http/http_lib.c",
                              0x1c);
      *param_4 = lVar11;
      if (lVar11 == 0) goto LAB_005f905a;
    }
    if (param_5 != (long *)0x0) {
      lVar11 = CRYPTO_strndup(pbVar14,(long)pbVar13 - (long)pbVar14,"../crypto/http/http_lib.c",0x1c
                             );
      *param_5 = lVar11;
      if (lVar11 == 0) goto LAB_005f905a;
    }
    if (param_3 == (long *)0x0) {
LAB_005f8f00:
      if (param_8 != (long *)0x0) {
        lVar11 = CRYPTO_strndup(pbVar15,(long)local_98 - (long)pbVar15,"../crypto/http/http_lib.c",
                                0x1c);
        *param_8 = lVar11;
        if (lVar11 == 0) goto LAB_005f905a;
      }
      if (param_9 != (long *)0x0) {
        lVar11 = CRYPTO_strndup(local_78,(long)pbVar7 - (long)local_78,"../crypto/http/http_lib.c",
                                0x1c);
        *param_9 = lVar11;
        if (lVar11 == 0) goto LAB_005f905a;
      }
      if (param_6 != (uint *)0x0) {
        *param_6 = local_44;
      }
      if (*local_a8 == 0x2f) {
        if (param_7 != (long *)0x0) {
          lVar11 = CRYPTO_strndup(local_a8,(long)pbVar8 - (long)local_a8,"../crypto/http/http_lib.c"
                                  ,0x1c);
          *param_7 = lVar11;
          if (lVar11 == 0) goto LAB_005f905a;
        }
      }
      else if (param_7 != (long *)0x0) {
        pcVar12 = (char *)CRYPTO_malloc((int)(pbVar8 + (2 - (long)local_a8)),
                                        "../crypto/http/http_lib.c",0xa4);
        *param_7 = (long)pcVar12;
        if (pcVar12 == (char *)0x0) goto LAB_005f905a;
        BIO_snprintf(pcVar12,(size_t)(pbVar8 + (2 - (long)local_a8)),"/%s",local_a8);
      }
      uVar16 = 1;
      goto LAB_005f9138;
    }
    lVar11 = CRYPTO_strndup(local_a0,(long)local_80 - (long)local_a0,"../crypto/http/http_lib.c",
                            0x1c);
    *param_3 = lVar11;
    if (lVar11 != 0) goto LAB_005f8f00;
    if (param_2 != (long *)0x0) goto LAB_005f905f;
    pvVar10 = (void *)0x0;
LAB_005f9084:
    CRYPTO_free(pvVar10);
    *param_3 = 0;
  }
  else {
    if (param_1 != pcVar4) {
      local_a0 = pcVar4 + 3;
      pcVar12 = pcVar4;
      goto LAB_005f8c37;
    }
LAB_005f91a1:
    ERR_new();
    ERR_set_debug("../crypto/http/http_lib.c",0xab,"OSSL_parse_url");
    ERR_set_error(0x3d,0x65,0);
LAB_005f905a:
    if (param_2 != (long *)0x0) {
LAB_005f905f:
      pvVar10 = (void *)*param_2;
LAB_005f9063:
      CRYPTO_free(pvVar10);
      *param_2 = 0;
    }
    if (param_3 != (long *)0x0) {
      pvVar10 = (void *)*param_3;
      goto LAB_005f9084;
    }
  }
  if (param_4 != (long *)0x0) {
    CRYPTO_free((void *)*param_4);
    *param_4 = 0;
  }
  if (param_5 != (long *)0x0) {
    CRYPTO_free((void *)*param_5);
    *param_5 = 0;
  }
  if (param_7 != (long *)0x0) {
    CRYPTO_free((void *)*param_7);
    *param_7 = 0;
  }
  if (param_8 != (long *)0x0) {
    CRYPTO_free((void *)*param_8);
    *param_8 = 0;
  }
  uVar16 = 0;
  if (param_9 != (long *)0x0) {
    CRYPTO_free((void *)*param_9);
    *param_9 = 0;
  }
LAB_005f9138:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar16;
}


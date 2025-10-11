
undefined4
PEM_read_bio_ex(BIO *param_1,undefined8 *param_2,long *param_3,long *param_4,long *param_5,
               uint param_6)

{
  bool bVar1;
  bool bVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  BIO_METHOD *pBVar8;
  char *pcVar9;
  EVP_ENCODE_CTX *ctx;
  long lVar10;
  void *pvVar11;
  void *pvVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  size_t sVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long in_FS_OFFSET;
  bool bVar19;
  bool bVar20;
  BIO *local_a8;
  BIO *local_98;
  char *local_88;
  BIO *local_80;
  int local_50;
  int local_4c;
  long *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_5 = 0;
  uVar4 = param_6 & 1;
  *param_3 = 0;
  *param_2 = 0;
  *param_4 = 0;
  if ((param_6 & 6) == 6) {
    ERR_new();
    uVar15 = 0;
    ctx = (EVP_ENCODE_CTX *)0x0;
    ERR_set_debug("../crypto/pem/pem_lib.c",0x3a5,"PEM_read_bio_ex");
    ERR_set_error(9,0x80106,0);
    local_88 = (char *)0x0;
    local_a8 = (BIO *)0x0;
    local_98 = (BIO *)0x0;
LAB_00541188:
    EVP_ENCODE_CTX_free(ctx);
    if (uVar4 == 0) {
LAB_00541263:
      CRYPTO_free(local_88);
      goto LAB_005411b2;
    }
  }
  else {
    if (uVar4 == 0) {
      pBVar8 = BIO_s_mem();
      local_98 = BIO_new(pBVar8);
      local_a8 = BIO_new(pBVar8);
      if ((local_98 == (BIO *)0x0) || (local_a8 == (BIO *)0x0)) {
LAB_00541280:
        ERR_new();
        uVar15 = 0;
        ctx = (EVP_ENCODE_CTX *)0x0;
        ERR_set_debug("../crypto/pem/pem_lib.c",0x3ad,"PEM_read_bio_ex");
        ERR_set_error(9,0xc0100,0);
        local_88 = (char *)0x0;
        goto LAB_00541188;
      }
      pcVar9 = (char *)CRYPTO_malloc(0x100,"../crypto/pem/pem_lib.c",0xe8);
    }
    else {
      pBVar8 = (BIO_METHOD *)BIO_s_secmem();
      local_98 = BIO_new(pBVar8);
      local_a8 = BIO_new(pBVar8);
      if ((local_98 == (BIO *)0x0) || (local_a8 == (BIO *)0x0)) goto LAB_00541280;
      pcVar9 = (char *)CRYPTO_secure_malloc(0x100,"../crypto/pem/pem_lib.c",0xe7);
    }
    uVar17 = 1;
    uVar14 = param_6 & 0xfffffffb;
    if (pcVar9 == (char *)0x0) {
      ERR_new();
      uVar15 = 0;
      ERR_set_debug("../crypto/pem/pem_lib.c",0x2f3,"get_name");
      ERR_set_error(9,0xc0100,0);
      local_88 = (char *)0x0;
      ctx = (EVP_ENCODE_CTX *)0x0;
      goto LAB_00541188;
    }
    do {
      do {
        iVar5 = BIO_gets(param_1,pcVar9,0xff);
        if (iVar5 < 1) {
          ERR_new();
          ERR_set_debug("../crypto/pem/pem_lib.c",0x2fb,"get_name");
          ERR_set_error(9,0x6c,0);
          if (uVar4 == 0) goto LAB_00541240;
          goto LAB_0054115f;
        }
        uVar18 = 0;
        iVar5 = sanitize_line(pcVar9,iVar5,uVar14,uVar17);
        iVar6 = strncmp(pcVar9,"-----BEGIN ",0xb);
        uVar17 = uVar18;
      } while ((iVar6 != 0) || (iVar5 < 6));
      iVar6 = strncmp(pcVar9 + (long)iVar5 + -6,"-----\n",6);
    } while (iVar6 != 0);
    pcVar9[(long)iVar5 + -6] = '\0';
    sVar16 = (size_t)(iVar5 + -0x10);
    if (uVar4 == 0) {
      local_88 = (char *)CRYPTO_malloc(iVar5 + -0x10,"../crypto/pem/pem_lib.c",0xe8);
      if (local_88 != (char *)0x0) {
        memcpy(local_88,pcVar9 + 0xb,sVar16);
        CRYPTO_free(pcVar9);
        pcVar9 = (char *)CRYPTO_malloc(0x100,"../crypto/pem/pem_lib.c",0xe8);
        goto LAB_00540f87;
      }
      ERR_new();
      ERR_set_debug("../crypto/pem/pem_lib.c",0x30b,"get_name");
      ERR_set_error(9,0xc0100,0);
LAB_00541240:
      uVar15 = 0;
      CRYPTO_free(pcVar9);
      EVP_ENCODE_CTX_free(0);
      local_88 = (char *)0x0;
      goto LAB_00541263;
    }
    local_88 = (char *)CRYPTO_secure_malloc(sVar16,"../crypto/pem/pem_lib.c",0xe7);
    if (local_88 == (char *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/pem/pem_lib.c",0x30b,"get_name");
      ERR_set_error(9,0xc0100,0);
LAB_0054115f:
      uVar15 = 0;
      ctx = (EVP_ENCODE_CTX *)0x0;
      CRYPTO_secure_clear_free(pcVar9,0x100,"../crypto/pem/pem_lib.c",0xe0);
      local_88 = (char *)0x0;
      goto LAB_00541188;
    }
    memcpy(local_88,pcVar9 + 0xb,sVar16);
    CRYPTO_secure_clear_free(pcVar9,0x100,"../crypto/pem/pem_lib.c",0xe0);
    pcVar9 = (char *)CRYPTO_secure_malloc(0x100,"../crypto/pem/pem_lib.c",0xe7);
LAB_00540f87:
    pcVar3 = local_88;
    if (pcVar9 == (char *)0x0) {
      ERR_new();
      uVar15 = 0;
      ERR_set_debug("../crypto/pem/pem_lib.c",0x337,"get_header_and_data");
      ERR_set_error(9,0xc0100,0);
      ctx = (EVP_ENCODE_CTX *)0x0;
      goto LAB_00541188;
    }
    iVar5 = 0;
    bVar20 = false;
    local_80 = local_98;
    bVar1 = false;
    while (iVar6 = BIO_gets(param_1,pcVar9,0xff), 0 < iVar6) {
      bVar19 = false;
      if (iVar6 == 0xfe) {
        bVar19 = pcVar9[0xfd] != '\n';
      }
      uVar13 = uVar14;
      if (iVar5 == 0) {
        pvVar11 = memchr(pcVar9,0x3a,(long)iVar6);
        if (pvVar11 == (void *)0x0) {
          iVar7 = strncmp(pcVar9,"-----END ",9);
          if (iVar7 != 0) {
            uVar13 = param_6;
          }
        }
        else {
          iVar5 = 1;
        }
      }
      else {
        iVar7 = strncmp(pcVar9,"-----END ",9);
        if ((iVar7 != 0) && (iVar5 != 1)) {
          iVar5 = 2;
          uVar13 = param_6;
        }
      }
      iVar6 = sanitize_line(pcVar9,iVar6,uVar13,0);
      if (*pcVar9 == '\n') {
        bVar2 = !bVar1;
        bVar1 = bVar19;
        if (bVar2) {
          if (iVar5 == 2) {
            ERR_new();
            uVar17 = 0x35c;
            goto LAB_005413b4;
          }
          local_80 = local_a8;
          iVar5 = 2;
        }
      }
      else {
        iVar7 = strncmp(pcVar9,"-----END ",9);
        if (iVar7 == 0) {
          sVar16 = strlen(local_88);
          iVar6 = strncmp(pcVar9 + 9,local_88,sVar16);
          if ((iVar6 != 0) || (iVar6 = strncmp(pcVar9 + 9 + sVar16,"-----\n",6), iVar6 != 0)) {
            ERR_new();
            uVar17 = 0x36b;
            goto LAB_005413b4;
          }
          if (iVar5 == 0) {
            local_98 = local_a8;
            local_a8 = local_80;
          }
          if (uVar4 == 0) {
            CRYPTO_free(pcVar9);
            BIO_ctrl(local_a8,0x73,0,&local_48);
            local_50 = (int)*local_48;
            if (local_50 == 0) goto LAB_00541412;
          }
          else {
            CRYPTO_secure_clear_free(pcVar9,0x100,"../crypto/pem/pem_lib.c",0xe0);
            BIO_ctrl(local_a8,0x73,0,&local_48);
            local_50 = (int)*local_48;
            if (local_50 == 0) goto LAB_005413f0;
          }
          ctx = (EVP_ENCODE_CTX *)EVP_ENCODE_CTX_new();
          uVar15 = 0;
          if (ctx == (EVP_ENCODE_CTX *)0x0) {
            ERR_new();
            ERR_set_debug("../crypto/pem/pem_lib.c",0x3bf,"PEM_read_bio_ex");
            ERR_set_error(9,0xc0100,0);
            goto LAB_00541188;
          }
          EVP_DecodeInit(ctx);
          iVar5 = EVP_DecodeUpdate(ctx,(uchar *)local_48[1],&local_50,(uchar *)local_48[1],local_50)
          ;
          if ((iVar5 < 0) ||
             (iVar5 = EVP_DecodeFinal(ctx,(uchar *)((long)local_50 + local_48[1]),&local_4c),
             iVar5 < 0)) {
            ERR_new();
            ERR_set_debug("../crypto/pem/pem_lib.c",0x3c8,"PEM_read_bio_ex");
            ERR_set_error(9,100,0);
            goto LAB_00541188;
          }
          local_50 = local_4c + local_50;
          *local_48 = (long)local_50;
          lVar10 = BIO_ctrl(local_98,3,0,(void *)0x0);
          iVar5 = (int)lVar10;
          if (uVar4 == 0) {
            pvVar11 = CRYPTO_malloc(iVar5 + 1,"../crypto/pem/pem_lib.c",0xe8);
            *param_3 = (long)pvVar11;
            pvVar12 = CRYPTO_malloc(local_50,"../crypto/pem/pem_lib.c",0xe8);
            pvVar11 = (void *)*param_3;
            *param_4 = (long)pvVar12;
            if ((pvVar11 != (void *)0x0) && (pvVar12 != (void *)0x0)) goto LAB_005416a2;
LAB_00541882:
            CRYPTO_free(pvVar11);
            *param_3 = 0;
            CRYPTO_free((void *)*param_4);
          }
          else {
            lVar10 = CRYPTO_secure_malloc((long)(iVar5 + 1),"../crypto/pem/pem_lib.c",0xe7);
            *param_3 = lVar10;
            lVar10 = CRYPTO_secure_malloc((long)local_50,"../crypto/pem/pem_lib.c",0xe7);
            pvVar11 = (void *)*param_3;
            *param_4 = lVar10;
            if ((pvVar11 != (void *)0x0) && (lVar10 != 0)) {
LAB_005416a2:
              if (iVar5 == 0) {
LAB_005416bf:
                *(undefined1 *)((long)pvVar11 + (long)iVar5) = 0;
                iVar5 = BIO_read(local_a8,(void *)*param_4,local_50);
                if (iVar5 == local_50) {
                  uVar15 = 1;
                  *param_5 = (long)iVar5;
                  local_88 = (char *)0x0;
                  *param_2 = pcVar3;
                  goto LAB_00541188;
                }
              }
              else {
                iVar6 = BIO_read(local_98,pvVar11,iVar5);
                if (iVar6 == iVar5) {
                  pvVar11 = (void *)*param_3;
                  goto LAB_005416bf;
                }
              }
              pvVar11 = (void *)*param_3;
              if (uVar4 == 0) goto LAB_00541882;
            }
            CRYPTO_secure_clear_free(pvVar11,0,"../crypto/pem/pem_lib.c",0xe0);
            *param_3 = 0;
            CRYPTO_secure_clear_free(*param_4,0,"../crypto/pem/pem_lib.c",0xe0);
          }
          *param_4 = 0;
          goto LAB_00541188;
        }
        if (bVar20) {
          ERR_new();
          uVar17 = 0x375;
          goto LAB_005413b4;
        }
        iVar7 = BIO_puts(local_80,pcVar9);
        if ((iVar7 < 0) || ((bVar1 = bVar19, iVar5 == 2 && (bVar20 = iVar6 != 0x41, 0x41 < iVar6))))
        goto LAB_005413d1;
      }
    }
    ERR_new();
    uVar17 = 0x33f;
LAB_005413b4:
    ERR_set_debug("../crypto/pem/pem_lib.c",uVar17,"get_header_and_data");
    ERR_set_error(9,0x66,0);
LAB_005413d1:
    if (uVar4 == 0) {
      CRYPTO_free(pcVar9);
LAB_00541412:
      uVar15 = 0;
      EVP_ENCODE_CTX_free(0);
      goto LAB_00541263;
    }
    CRYPTO_secure_clear_free(pcVar9,0x100,"../crypto/pem/pem_lib.c",0xe0);
LAB_005413f0:
    uVar15 = 0;
    EVP_ENCODE_CTX_free(0);
  }
  CRYPTO_secure_clear_free(local_88,0,"../crypto/pem/pem_lib.c",0xe0);
LAB_005411b2:
  BIO_free(local_98);
  BIO_free(local_a8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar15;
}


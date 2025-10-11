
undefined4 drbg_ctr_set_ctx_params(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  void *ptr;
  undefined8 uVar12;
  EVP_CIPHER_CTX *pEVar13;
  EVP_CIPHER_CTX *pEVar14;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  lVar1 = *(long *)(param_1 + 0xf8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = ossl_prov_ctx_get0_libctx(*(undefined8 *)(param_1 + 8));
  lVar10 = OSSL_PARAM_locate_const(param_2,"use_derivation_function");
  if ((lVar10 == 0) || (iVar6 = OSSL_PARAM_get_int(lVar10,&local_44), iVar6 == 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
    *(uint *)(lVar1 + 0x30) = (uint)(local_44 != 0);
  }
  lVar10 = OSSL_PARAM_locate_const(param_2,"properties");
  if (lVar10 == 0) {
LAB_00476514:
    lVar11 = OSSL_PARAM_locate_const(param_2,"cipher");
    if (lVar11 == 0) {
      if (bVar5) goto LAB_00476679;
LAB_004767c0:
      uVar8 = ossl_drbg_set_ctx_params(param_1,param_2);
      goto LAB_004764e7;
    }
    lVar2 = *(long *)(lVar11 + 0x10);
    if ((*(int *)(lVar11 + 8) == 4) && (2 < *(ulong *)(lVar11 + 0x18))) {
      iVar6 = OPENSSL_strcasecmp("CTR",lVar2 + -3 + *(ulong *)(lVar11 + 0x18));
      if (iVar6 != 0) {
        ERR_new();
        ERR_set_debug("../providers/implementations/rands/drbg_ctr.c",0x2b5,
                      "drbg_ctr_set_ctx_params");
        ERR_set_error(0x39,0xce,0);
        uVar8 = 0;
        goto LAB_004764e7;
      }
      ptr = (void *)CRYPTO_strndup(lVar2,*(undefined8 *)(lVar11 + 0x18),
                                   "../providers/implementations/rands/drbg_ctr.c");
      if (ptr == (void *)0x0) {
        ERR_new();
        ERR_set_debug("../providers/implementations/rands/drbg_ctr.c",0x2b9,
                      "drbg_ctr_set_ctx_params");
        ERR_set_error(0x39,0xc0100,0);
        uVar8 = 0;
        goto LAB_004764e7;
      }
      *(undefined4 *)((long)ptr + *(long *)(lVar11 + 0x18) + -3) = 0x424345;
      EVP_CIPHER_free(*(undefined8 *)(lVar1 + 0x18));
      EVP_CIPHER_free(*(undefined8 *)(lVar1 + 0x20));
      uVar12 = EVP_CIPHER_fetch(uVar9,lVar2,lVar10);
      *(undefined8 *)(lVar1 + 0x20) = uVar12;
      uVar9 = EVP_CIPHER_fetch(uVar9,ptr,lVar10);
      *(undefined8 *)(lVar1 + 0x18) = uVar9;
      CRYPTO_free(ptr);
      if ((*(long *)(lVar1 + 0x20) == 0) || (*(long *)(lVar1 + 0x18) == 0)) {
        ERR_new();
        ERR_set_debug("../providers/implementations/rands/drbg_ctr.c",0x2c3,
                      "drbg_ctr_set_ctx_params");
        ERR_set_error(0x39,0xcf,0);
        uVar8 = 0;
        goto LAB_004764e7;
      }
LAB_00476679:
      plVar3 = *(long **)(param_1 + 0xf8);
      if (plVar3[4] == 0) {
        ERR_new();
        ERR_set_debug("../providers/implementations/rands/drbg_ctr.c",0x214,"drbg_ctr_init");
        ERR_set_error(0x39,0x9b,0);
        uVar8 = 0;
        goto LAB_004764e7;
      }
      iVar6 = EVP_CIPHER_get_key_length();
      plVar3[5] = (long)iVar6;
      if (*plVar3 == 0) {
        pEVar14 = EVP_CIPHER_CTX_new();
        *plVar3 = (long)pEVar14;
        if (plVar3[1] == 0) goto LAB_004768b0;
        if (pEVar14 != (EVP_CIPHER_CTX *)0x0) goto LAB_004766b4;
LAB_004768ca:
        ERR_new();
        uVar9 = 0x21d;
LAB_004768db:
        ERR_set_debug("../providers/implementations/rands/drbg_ctr.c",uVar9,"drbg_ctr_init");
        ERR_set_error(0x39,0xc0100,0);
      }
      else {
        if (plVar3[1] == 0) {
LAB_004768b0:
          pEVar13 = EVP_CIPHER_CTX_new();
          pEVar14 = (EVP_CIPHER_CTX *)*plVar3;
          plVar3[1] = (long)pEVar13;
          if ((pEVar14 == (EVP_CIPHER_CTX *)0x0) || (pEVar13 == (EVP_CIPHER_CTX *)0x0))
          goto LAB_004768ca;
        }
        else {
          pEVar14 = (EVP_CIPHER_CTX *)*plVar3;
        }
LAB_004766b4:
        iVar7 = EVP_CipherInit_ex(pEVar14,(EVP_CIPHER *)plVar3[3],(ENGINE *)0x0,(uchar *)0x0,
                                  (uchar *)0x0,1);
        if ((iVar7 != 0) &&
           (iVar7 = EVP_CipherInit_ex((EVP_CIPHER_CTX *)plVar3[1],(EVP_CIPHER *)plVar3[4],
                                      (ENGINE *)0x0,(uchar *)0x0,(uchar *)0x0,1), iVar7 != 0)) {
          lVar1 = plVar3[6];
          *(int *)(param_1 + 0x80) = iVar6 << 3;
          *(long *)(param_1 + 0xe8) = (long)iVar6 + 0x10;
          if ((int)lVar1 != 0) {
            pEVar14 = (EVP_CIPHER_CTX *)plVar3[2];
            if (pEVar14 == (EVP_CIPHER_CTX *)0x0) {
              pEVar14 = EVP_CIPHER_CTX_new();
              plVar3[2] = (long)pEVar14;
              if (pEVar14 == (EVP_CIPHER_CTX *)0x0) {
                ERR_new();
                uVar9 = 0x238;
                goto LAB_004768db;
              }
            }
            iVar6 = EVP_CipherInit_ex(pEVar14,(EVP_CIPHER *)plVar3[3],(ENGINE *)0x0,df_key_3,
                                      (uchar *)0x0,1);
            if (iVar6 == 0) {
              ERR_new();
              ERR_set_debug("../providers/implementations/rands/drbg_ctr.c",0x23e,"drbg_ctr_init");
              ERR_set_error(0x39,0xcd,0);
              goto LAB_00476808;
            }
          }
          *(undefined8 *)(param_1 + 0x88) = 0x10000;
          uVar4 = *(ulong *)(*(long *)(param_1 + 0xf8) + 0x28);
          if (*(int *)(*(long *)(param_1 + 0xf8) + 0x30) == 0) {
            uVar9 = 0x7fffffff;
            if (uVar4 != 0) {
              uVar9 = *(undefined8 *)(param_1 + 0xe8);
            }
            *(undefined8 *)(param_1 + 0x90) = uVar9;
            *(undefined8 *)(param_1 + 0x98) = uVar9;
            *(undefined8 *)(param_1 + 0xa0) = 0;
            *(undefined8 *)(param_1 + 0xa8) = 0;
            *(undefined8 *)(param_1 + 0xb0) = uVar9;
            *(undefined8 *)(param_1 + 0xb8) = uVar9;
          }
          else {
            *(undefined8 *)(param_1 + 0x90) = 0;
            *(undefined8 *)(param_1 + 0x98) = 0x7fffffff;
            *(undefined8 *)(param_1 + 0xa0) = 0;
            *(undefined8 *)(param_1 + 0xa8) = 0x7fffffff;
            *(undefined8 *)(param_1 + 0xb0) = 0x7fffffff;
            *(undefined8 *)(param_1 + 0xb8) = 0x7fffffff;
            if (uVar4 != 0) {
              *(ulong *)(param_1 + 0x90) = uVar4;
              *(ulong *)(param_1 + 0xa0) = uVar4 >> 1;
            }
          }
          goto LAB_004767c0;
        }
        ERR_new();
        ERR_set_debug("../providers/implementations/rands/drbg_ctr.c",0x225,"drbg_ctr_init");
        ERR_set_error(0x39,0xd0,0);
      }
LAB_00476808:
      EVP_CIPHER_CTX_free((EVP_CIPHER_CTX *)*plVar3);
      EVP_CIPHER_CTX_free((EVP_CIPHER_CTX *)plVar3[1]);
      plVar3[1] = 0;
      *plVar3 = 0;
    }
  }
  else if (*(int *)(lVar10 + 8) == 4) {
    lVar10 = *(long *)(lVar10 + 0x10);
    goto LAB_00476514;
  }
  uVar8 = 0;
LAB_004764e7:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar8;
}


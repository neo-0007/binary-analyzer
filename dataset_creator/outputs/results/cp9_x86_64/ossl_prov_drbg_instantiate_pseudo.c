
bool ossl_prov_drbg_instantiate
               (DRBG_CTX *param_1,uint param_2,undefined8 param_3,char *param_4,ulong param_5)

{
  uint entropy;
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  size_t olen;
  time_t tVar5;
  undefined8 *puVar6;
  void *ptr;
  ulong uVar7;
  undefined8 uVar8;
  size_t max_len;
  ulong min_len;
  long in_FS_OFFSET;
  void *local_68;
  uchar *local_60;
  DRBG_CTX *local_58;
  undefined8 local_50 [2];
  long local_40;
  
  entropy = *(uint *)(param_1 + 0x80);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (void *)0x0;
  local_60 = (uchar *)0x0;
  if (entropy < param_2) {
    ERR_new();
    uVar3 = 0;
    ERR_set_debug("../providers/implementations/rands/drbg.c",0x172,"ossl_prov_drbg_instantiate");
    ERR_set_error(0x39,0xb5,0);
    goto LAB_0059f933;
  }
  min_len = *(ulong *)(param_1 + 0x90);
  max_len = *(size_t *)(param_1 + 0x98);
  if (param_4 == (char *)0x0) {
    param_5 = 0x1d;
    param_4 = "OpenSSL NIST SP 800-90A DRBG";
    if (*(ulong *)(param_1 + 0xb0) < 0x1d) goto LAB_0059f8ca;
  }
  else if (*(ulong *)(param_1 + 0xb0) < param_5) {
LAB_0059f8ca:
    ERR_new();
    uVar3 = 0;
    ERR_set_debug("../providers/implementations/rands/drbg.c",0x17e,"ossl_prov_drbg_instantiate");
    ERR_set_error(0x39,0xc3,0);
    goto LAB_0059f933;
  }
  if (*(int *)(param_1 + 0xf0) != 0) {
    if (*(int *)(param_1 + 0xf0) == 2) {
      ERR_new();
      uVar3 = 0;
      ERR_set_debug("../providers/implementations/rands/drbg.c",0x184,"ossl_prov_drbg_instantiate");
      ERR_set_error(0x39,0xc0,0);
    }
    else {
      ERR_new();
      uVar3 = 0;
      ERR_set_debug("../providers/implementations/rands/drbg.c",0x186,"ossl_prov_drbg_instantiate");
      ERR_set_error(0x39,0xb9,0);
    }
    goto LAB_0059f933;
  }
  uVar4 = *(ulong *)(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0xf0) = 2;
  uVar3 = uVar4;
  if (uVar4 == 0) {
LAB_0059f7a5:
    if (*(int *)(param_1 + 0xd8) == 0) {
      *(undefined4 *)(param_1 + 0xdc) = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0xd8) + 1;
      if (iVar2 == 0) {
        iVar2 = 1;
      }
      *(int *)(param_1 + 0xdc) = iVar2;
    }
    olen = get_entropy(param_1,&local_60,entropy,min_len,max_len);
    if ((olen < min_len) || (max_len < olen)) {
      ERR_new();
      ERR_set_debug("../providers/implementations/rands/drbg.c",0x1c8,"ossl_prov_drbg_instantiate");
      ERR_set_error(0x39,0xbd,0);
    }
    else {
      iVar2 = (**(code **)(param_1 + 0x10))(param_1,local_60,olen,local_68,uVar3,param_4,param_5);
      if (iVar2 == 0) {
        cleanup_entropy(param_1,local_60,olen);
        ERR_new();
        ERR_set_debug("../providers/implementations/rands/drbg.c",0x1cf,"ossl_prov_drbg_instantiate"
                     );
        ERR_set_error(0x39,0xbc,0);
      }
      else {
        cleanup_entropy(param_1,local_60,olen);
        *(undefined4 *)(param_1 + 0xf0) = 1;
        *(undefined4 *)(param_1 + 0xc0) = 1;
        tVar5 = time((time_t *)0x0);
        *(time_t *)(param_1 + 200) = tVar5;
        *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_1 + 0xdc);
      }
    }
  }
  else {
    lVar1 = *(long *)(param_1 + 0xa8);
    if (*(code **)(param_1 + 0x58) == (code *)0x0) {
      if (*(long *)(param_1 + 0x30) != 0) {
        min_len = min_len + uVar4;
        entropy = entropy + (entropy >> 1);
        max_len = max_len + lVar1;
        uVar3 = 0;
        goto LAB_0059f7a5;
      }
      uVar8 = ossl_prov_ctx_get0_libctx(*(undefined8 *)(param_1 + 8));
      puVar6 = (undefined8 *)ossl_lib_ctx_get_data(uVar8,6,drbg_nonce_ossl_ctx_method);
      if (puVar6 == (undefined8 *)0x0) {
        uVar3 = *(ulong *)(param_1 + 0xa0);
        if (uVar3 == 0) goto LAB_0059f7a5;
        uVar3 = 0;
      }
      else {
        if ((((*(long *)(param_1 + 0x30) == 0) || (*(code **)(param_1 + 0x58) == (code *)0x0)) ||
            (uVar3 = (**(code **)(param_1 + 0x58))
                               (*(long *)(param_1 + 0x30),0,0,*(undefined8 *)(param_1 + 0xa0),
                                *(undefined8 *)(param_1 + 0xa8)), uVar3 == 0)) ||
           (ptr = CRYPTO_malloc((int)uVar3,"../providers/implementations/rands/drbg.c",0x14c),
           ptr == (void *)0x0)) {
LAB_0059fb52:
          local_50[0] = 0;
          local_58 = param_1;
          CRYPTO_atomic_add(puVar6 + 1,1,local_50,*puVar6);
          uVar3 = ossl_prov_get_nonce(*(undefined8 *)(param_1 + 8),&local_68,uVar4,lVar1,&local_58,
                                      0x10);
          ptr = local_68;
        }
        else {
          uVar7 = (**(code **)(param_1 + 0x58))
                            (*(undefined8 *)(param_1 + 0x30),ptr,0,*(undefined8 *)(param_1 + 0xa0),
                             *(undefined8 *)(param_1 + 0xa8));
          if (uVar3 != uVar7) {
            CRYPTO_free(ptr);
            goto LAB_0059fb52;
          }
        }
        local_68 = ptr;
        if ((*(ulong *)(param_1 + 0xa0) <= uVar3) && (uVar3 <= *(ulong *)(param_1 + 0xa8)))
        goto LAB_0059f7a5;
      }
      ERR_new();
      uVar8 = 0x1b5;
    }
    else {
      uVar3 = (**(code **)(param_1 + 0x58))(*(long *)(param_1 + 0x30),0,entropy,uVar4,lVar1);
      if (uVar3 == 0) {
        ERR_new();
        uVar8 = 0x192;
      }
      else {
        local_68 = CRYPTO_malloc((int)uVar3,"../providers/implementations/rands/drbg.c",0x195);
        if (local_68 == (void *)0x0) {
          ERR_new();
          uVar8 = 0x197;
        }
        else {
          uVar4 = (**(code **)(param_1 + 0x58))
                            (*(undefined8 *)(param_1 + 0x30),local_68,
                             *(undefined4 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0xa0),
                             *(undefined8 *)(param_1 + 0xa8));
          if (uVar4 == uVar3) goto LAB_0059f7a5;
          ERR_new();
          uVar8 = 0x19e;
        }
      }
    }
    ERR_set_debug("../providers/implementations/rands/drbg.c",uVar8,"ossl_prov_drbg_instantiate");
    ERR_set_error(0x39,0xbe,0);
  }
LAB_0059f933:
  if (local_68 != (void *)0x0) {
    ossl_prov_cleanup_nonce(*(undefined8 *)(param_1 + 8),local_68,uVar3);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return *(int *)(param_1 + 0xf0) == 1;
}


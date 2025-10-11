
undefined8 x942kdf_set_ctx_params(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  
  uVar2 = ossl_prov_ctx_get0_libctx(*param_1);
  if (param_2 == 0) {
    return 1;
  }
  iVar1 = ossl_prov_digest_load_from_params(param_1 + 1,param_2,uVar2);
  if (iVar1 != 0) {
    lVar3 = OSSL_PARAM_locate_const(param_2,"secret");
    if ((((lVar3 != 0) || (lVar3 = OSSL_PARAM_locate_const(param_2,"key"), lVar3 != 0)) &&
        (*(long *)(lVar3 + 0x18) != 0)) && (*(long *)(lVar3 + 0x10) != 0)) {
      CRYPTO_free((void *)param_1[4]);
      param_1[4] = 0;
      iVar1 = OSSL_PARAM_get_octet_string(lVar3,param_1 + 4,0,param_1 + 5);
      if (iVar1 == 0) {
        return 0;
      }
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,"acvp-info");
    if (((lVar3 != 0) && (*(long *)(lVar3 + 0x18) != 0)) && (*(long *)(lVar3 + 0x10) != 0)) {
      CRYPTO_free((void *)param_1[6]);
      param_1[6] = 0;
      iVar1 = OSSL_PARAM_get_octet_string(lVar3,param_1 + 6,0,param_1 + 7);
      if (iVar1 == 0) {
        return 0;
      }
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,"partyu-info");
    if (((lVar3 != 0) || (lVar3 = OSSL_PARAM_locate_const(param_2,&DAT_007d9d1f), lVar3 != 0)) &&
       ((*(long *)(lVar3 + 0x18) != 0 && (*(long *)(lVar3 + 0x10) != 0)))) {
      CRYPTO_free((void *)param_1[8]);
      param_1[8] = 0;
      iVar1 = OSSL_PARAM_get_octet_string(lVar3,param_1 + 8,0,param_1 + 0xc);
      if (iVar1 == 0) {
        return 0;
      }
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,"partyv-info");
    if (((lVar3 != 0) && (*(long *)(lVar3 + 0x18) != 0)) && (*(long *)(lVar3 + 0x10) != 0)) {
      CRYPTO_free((void *)param_1[9]);
      param_1[9] = 0;
      iVar1 = OSSL_PARAM_get_octet_string(lVar3,param_1 + 9,0,param_1 + 0xd);
      if (iVar1 == 0) {
        return 0;
      }
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,"use-keybits");
    if ((lVar3 == 0) || (iVar1 = OSSL_PARAM_get_int(lVar3,param_1 + 0x13), iVar1 != 0)) {
      lVar3 = OSSL_PARAM_locate_const(param_2,"supp-pubinfo");
      if (lVar3 != 0) {
        if ((*(long *)(lVar3 + 0x18) != 0) && (*(long *)(lVar3 + 0x10) != 0)) {
          CRYPTO_free((void *)param_1[10]);
          param_1[10] = 0;
          iVar1 = OSSL_PARAM_get_octet_string(lVar3,param_1 + 10,0,param_1 + 0xe);
          if (iVar1 == 0) {
            return 0;
          }
        }
        *(undefined4 *)(param_1 + 0x13) = 0;
      }
      lVar3 = OSSL_PARAM_locate_const(param_2,"supp-privinfo");
      if (((lVar3 != 0) && (*(long *)(lVar3 + 0x18) != 0)) && (*(long *)(lVar3 + 0x10) != 0)) {
        CRYPTO_free((void *)param_1[0xb]);
        param_1[0xb] = 0;
        iVar1 = OSSL_PARAM_get_octet_string(lVar3,param_1 + 0xb,0,param_1 + 0xf);
        if (iVar1 == 0) {
          return 0;
        }
      }
      lVar3 = OSSL_PARAM_locate_const(param_2,"cekalg");
      if (lVar3 == 0) {
        return 1;
      }
      if (*(int *)(lVar3 + 8) == 4) {
        lVar4 = OSSL_PARAM_locate_const(param_2,"properties");
        if (lVar4 == 0) {
          uVar6 = *(undefined8 *)(lVar3 + 0x10);
          uVar5 = 0;
        }
        else {
          uVar5 = *(undefined8 *)(lVar3 + 0x10);
          uVar6 = uVar5;
        }
        lVar3 = EVP_CIPHER_fetch(uVar2,uVar6,uVar5);
        if (lVar3 != 0) {
          lVar4 = 0;
          puVar7 = kek_algs;
          iVar1 = EVP_CIPHER_is_a(lVar3,"AES-128-WRAP");
          while( true ) {
            if (iVar1 != 0) {
              lVar4 = lVar4 * 0x20;
              EVP_CIPHER_free(lVar3);
              param_1[0x11] = *(undefined8 *)(kek_algs + lVar4 + 8);
              param_1[0x12] = *(undefined8 *)(kek_algs + lVar4 + 0x10);
              param_1[0x10] = *(undefined8 *)(kek_algs + lVar4 + 0x18);
              return 1;
            }
            lVar4 = lVar4 + 1;
            puVar7 = (undefined1 *)((long)puVar7 + 0x20);
            if (lVar4 == 4) break;
            iVar1 = EVP_CIPHER_is_a(lVar3,*(undefined8 *)puVar7);
          }
        }
        ERR_new();
        ERR_set_debug("../providers/implementations/kdfs/x942kdf.c",0x5d,"find_alg_id");
        ERR_set_error(0x39,0x91,0);
        EVP_CIPHER_free(lVar3);
      }
    }
  }
  return 0;
}


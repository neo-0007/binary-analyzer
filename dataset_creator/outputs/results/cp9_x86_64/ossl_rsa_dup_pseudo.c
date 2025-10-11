
RSA * ossl_rsa_dup(long param_1,ulong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  RSA *r;
  BIGNUM *pBVar6;
  BN_MONT_CTX *pBVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  int iVar11;
  
  iVar5 = ossl_rsa_is_foreign();
  if (iVar5 != 0) {
    return (RSA *)0x0;
  }
  r = (RSA *)ossl_rsa_new_with_ctx(*(undefined8 *)(param_1 + 8));
  if (r == (RSA *)0x0) {
    return (RSA *)0x0;
  }
  if ((param_2 & 3) != 0) {
    if (*(BIGNUM **)(param_1 + 0x28) != (BIGNUM *)0x0) {
      pBVar6 = BN_dup(*(BIGNUM **)(param_1 + 0x28));
      r->e = pBVar6;
      if (pBVar6 == (BIGNUM *)0x0) goto LAB_00554af8;
    }
    if (*(BIGNUM **)(param_1 + 0x30) != (BIGNUM *)0x0) {
      pBVar6 = BN_dup(*(BIGNUM **)(param_1 + 0x30));
      r->d = pBVar6;
      if (pBVar6 == (BIGNUM *)0x0) goto LAB_00554af8;
    }
  }
  if ((param_2 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    uVar3 = *(undefined8 *)(param_1 + 0x70);
    *(undefined4 *)&r->meth = *(undefined4 *)(param_1 + 0x10);
    uVar1 = *(undefined4 *)(param_1 + 0xa4);
    *(undefined8 *)&(r->ex_data).dummy = uVar2;
    r->references = (int)uVar3;
    r->flags = (int)((ulong)uVar3 >> 0x20);
    *(undefined4 *)((long)&r->mt_blinding + 4) = uVar1;
    *(undefined4 *)&r->_method_mod_n = *(undefined4 *)(param_1 + 0x78);
  }
  else {
    if (*(BIGNUM **)(param_1 + 0x38) != (BIGNUM *)0x0) {
      pBVar6 = BN_dup(*(BIGNUM **)(param_1 + 0x38));
      r->p = pBVar6;
      if (pBVar6 == (BIGNUM *)0x0) goto LAB_00554af8;
    }
    if (*(BIGNUM **)(param_1 + 0x40) != (BIGNUM *)0x0) {
      pBVar6 = BN_dup(*(BIGNUM **)(param_1 + 0x40));
      r->q = pBVar6;
      if (pBVar6 == (BIGNUM *)0x0) goto LAB_00554af8;
    }
    if (*(BIGNUM **)(param_1 + 0x48) != (BIGNUM *)0x0) {
      pBVar6 = BN_dup(*(BIGNUM **)(param_1 + 0x48));
      r->dmp1 = pBVar6;
      if (pBVar6 == (BIGNUM *)0x0) goto LAB_00554af8;
    }
    if (*(BIGNUM **)(param_1 + 0x50) != (BIGNUM *)0x0) {
      pBVar6 = BN_dup(*(BIGNUM **)(param_1 + 0x50));
      r->dmq1 = pBVar6;
      if (pBVar6 == (BIGNUM *)0x0) goto LAB_00554af8;
    }
    if (*(BIGNUM **)(param_1 + 0x58) != (BIGNUM *)0x0) {
      pBVar6 = BN_dup(*(BIGNUM **)(param_1 + 0x58));
      r->iqmp = pBVar6;
      if (pBVar6 == (BIGNUM *)0x0) goto LAB_00554af8;
    }
    if (*(BIGNUM **)(param_1 + 0x60) != (BIGNUM *)0x0) {
      pBVar6 = BN_dup(*(BIGNUM **)(param_1 + 0x60));
      (r->ex_data).sk = (stack_st_void *)pBVar6;
      if (pBVar6 == (BIGNUM *)0x0) goto LAB_00554af8;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    uVar4 = *(undefined8 *)(param_1 + 0x70);
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    *(undefined4 *)&r->meth = *(undefined4 *)(param_1 + 0x10);
    uVar1 = *(undefined4 *)(param_1 + 0xa4);
    *(undefined8 *)&(r->ex_data).dummy = uVar3;
    r->references = (int)uVar4;
    r->flags = (int)((ulong)uVar4 >> 0x20);
    *(undefined4 *)((long)&r->mt_blinding + 4) = uVar1;
    *(undefined4 *)&r->_method_mod_n = *(undefined4 *)(param_1 + 0x78);
    iVar5 = OPENSSL_sk_num(uVar2);
    if (0 < iVar5) {
      pBVar7 = (BN_MONT_CTX *)OPENSSL_sk_new_reserve(0,iVar5);
      r->_method_mod_q = pBVar7;
      if (pBVar7 == (BN_MONT_CTX *)0x0) goto LAB_00554af8;
      iVar11 = 0;
      do {
        puVar8 = (undefined8 *)CRYPTO_zalloc(0x28,"../crypto/rsa/rsa_backend.c",0x191);
        if (puVar8 == (undefined8 *)0x0) {
          ERR_new();
          ERR_set_debug("../crypto/rsa/rsa_backend.c",0x192,"ossl_rsa_dup");
          ERR_set_error(4,0xc0100,0);
          goto LAB_00554af8;
        }
        OPENSSL_sk_push(r->_method_mod_q,puVar8);
        puVar9 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x88),iVar11);
        if ((BIGNUM *)*puVar9 != (BIGNUM *)0x0) {
          pBVar6 = BN_dup((BIGNUM *)*puVar9);
          *puVar8 = pBVar6;
          if (pBVar6 == (BIGNUM *)0x0) goto LAB_00554af8;
        }
        if ((BIGNUM *)puVar9[1] != (BIGNUM *)0x0) {
          pBVar6 = BN_dup((BIGNUM *)puVar9[1]);
          puVar8[1] = pBVar6;
          if (pBVar6 == (BIGNUM *)0x0) goto LAB_00554af8;
        }
        if ((BIGNUM *)puVar9[2] != (BIGNUM *)0x0) {
          pBVar6 = BN_dup((BIGNUM *)puVar9[2]);
          puVar8[2] = pBVar6;
          if (pBVar6 == (BIGNUM *)0x0) goto LAB_00554af8;
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 != iVar5);
      iVar5 = ossl_rsa_multip_calc_product(r);
      if (iVar5 == 0) goto LAB_00554af8;
    }
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    pBVar7 = (BN_MONT_CTX *)RSA_PSS_PARAMS_dup();
    r->_method_mod_p = pBVar7;
    if ((*(long *)(*(long *)(param_1 + 0x80) + 8) != 0) && ((pBVar7->RR).d == (ulong *)0x0)) {
      puVar10 = (ulong *)ossl_x509_algor_mgf1_decode();
      (pBVar7->N).d = puVar10;
      if ((r->_method_mod_p->N).d == (ulong *)0x0) goto LAB_00554af8;
    }
  }
  iVar5 = CRYPTO_dup_ex_data(9,(CRYPTO_EX_DATA *)&r->bignum_data,(CRYPTO_EX_DATA *)(param_1 + 0x90))
  ;
  if (iVar5 != 0) {
    return r;
  }
LAB_00554af8:
  RSA_free(r);
  return (RSA *)0x0;
}



int pkey_rsa_keygen(long param_1,EVP_PKEY *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  RSA *r;
  long lVar3;
  BIGNUM *a;
  BN_MONT_CTX *pBVar4;
  int iVar5;
  int type;
  
  puVar1 = *(undefined4 **)(param_1 + 0x98);
  if (*(long *)(puVar1 + 2) == 0) {
    a = BN_new();
    *(BIGNUM **)(puVar1 + 2) = a;
    if (a == (BIGNUM *)0x0) {
      return 0;
    }
    iVar2 = BN_set_word(a,0x10001);
    if (iVar2 == 0) {
      return 0;
    }
  }
  r = RSA_new();
  if (r == (RSA *)0x0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x60) == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = BN_GENCB_new();
    if (lVar3 == 0) goto LAB_00432498;
    evp_pkey_set_cb_translate(lVar3,param_1);
  }
  iVar2 = RSA_generate_multi_prime_key(r,*puVar1,puVar1[4],*(undefined8 *)(puVar1 + 2),lVar3);
  BN_GENCB_free(lVar3);
  if (iVar2 < 1) {
    RSA_free(r);
    return iVar2;
  }
  lVar3 = *(long *)(param_1 + 0x98);
  type = **(int **)(param_1 + 0x78);
  if (type == 0x390) {
    iVar5 = *(int *)(lVar3 + 0x30);
    if ((*(long *)(lVar3 + 0x20) == 0) && (*(long *)(lVar3 + 0x28) == 0)) {
      if (iVar5 == -2) goto LAB_0043252b;
    }
    else if (iVar5 == -2) {
      iVar5 = 0;
    }
    pBVar4 = (BN_MONT_CTX *)
             ossl_rsa_pss_params_create(*(long *)(lVar3 + 0x20),*(long *)(lVar3 + 0x28),iVar5);
    r->_method_mod_p = pBVar4;
    if (pBVar4 == (BN_MONT_CTX *)0x0) {
LAB_00432498:
      RSA_free(r);
      return 0;
    }
    type = **(int **)(param_1 + 0x78);
  }
LAB_0043252b:
  EVP_PKEY_assign(param_2,type,r);
  return iVar2;
}


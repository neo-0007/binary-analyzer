
int rsa_int_import_from(undefined8 param_1,EVP_PKEY_CTX *param_2,int param_3)

{
  int iVar1;
  int n;
  undefined4 uVar2;
  EVP_PKEY *pkey;
  RSA *r;
  char *pcVar3;
  EVP_MD *pEVar4;
  EVP_MD *pEVar5;
  BN_MONT_CTX *pBVar6;
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined1 local_58 [16];
  undefined4 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pkey = EVP_PKEY_CTX_get0_pkey(param_2);
  r = (RSA *)ossl_rsa_new_with_ctx(*(undefined8 *)(param_2 + 8));
  local_48 = 0;
  local_5c = 0;
  local_58 = (undefined1  [16])0x0;
  if (r == (RSA *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/rsa/rsa_ameth.c",0x31b,"rsa_int_import_from");
    ERR_set_error(5,0xc0100,0);
    iVar1 = 0;
    goto LAB_005532ea;
  }
  RSA_clear_flags(r,0xf000);
  RSA_set_flags(r,param_3);
  iVar1 = ossl_rsa_pss_params_30_fromdata(local_58,&local_5c,param_1,*(undefined8 *)(param_2 + 8));
  if (iVar1 != 0) {
    if (param_3 == 0) {
      iVar1 = ossl_rsa_pss_params_30_is_unrestricted(local_58);
      if ((iVar1 != 0) && (iVar1 = ossl_rsa_fromdata(r,param_1,1), iVar1 != 0)) {
        iVar1 = EVP_PKEY_assign(pkey,6,r);
LAB_005532d5:
        if (iVar1 != 0) goto LAB_005532ea;
      }
    }
    else if (param_3 == 0x1000) {
      iVar1 = ossl_rsa_pss_params_30_is_unrestricted(local_58);
      if (iVar1 == 0) {
        iVar1 = ossl_rsa_pss_params_30_hashalg(local_58);
        n = ossl_rsa_pss_params_30_maskgenhashalg(local_58);
        uVar2 = ossl_rsa_pss_params_30_saltlen(local_58);
        pcVar3 = OBJ_nid2sn(iVar1);
        pEVar4 = EVP_get_digestbyname(pcVar3);
        pcVar3 = OBJ_nid2sn(n);
        pEVar5 = EVP_get_digestbyname(pcVar3);
        pBVar6 = (BN_MONT_CTX *)ossl_rsa_pss_params_create(pEVar4,pEVar5,uVar2);
        r->_method_mod_p = pBVar6;
        if (pBVar6 == (BN_MONT_CTX *)0x0) goto LAB_005532e0;
      }
      iVar1 = ossl_rsa_fromdata(r,param_1,1);
      if (iVar1 != 0) {
        iVar1 = EVP_PKEY_assign(pkey,0x390,r);
        goto LAB_005532d5;
      }
    }
  }
LAB_005532e0:
  RSA_free(r);
  iVar1 = 0;
LAB_005532ea:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar1;
}


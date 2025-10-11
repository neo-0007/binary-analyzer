
undefined8
ossl_rsa_pss_to_ctx(EVP_MD_CTX *param_1,EVP_PKEY_CTX *param_2,undefined8 *param_3,EVP_PKEY *param_4)

{
  int iVar1;
  int iVar2;
  RSA_PSS_PARAMS *a;
  undefined8 uVar3;
  long in_FS_OFFSET;
  EVP_PKEY_CTX *local_50 [2];
  undefined4 local_3c;
  undefined8 local_38;
  EVP_MD *local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  local_30 = (EVP_MD *)0x0;
  local_50[0] = param_2;
  iVar1 = OBJ_obj2nid((ASN1_OBJECT *)*param_3);
  if (iVar1 != 0x390) {
    ERR_new();
    ERR_set_debug("../crypto/rsa/rsa_ameth.c",0x211,"ossl_rsa_pss_to_ctx");
    uVar3 = 0xffffffff;
    ERR_set_error(4,0x9b,0);
    goto LAB_005537b1;
  }
  a = (RSA_PSS_PARAMS *)ossl_rsa_pss_decode(param_3);
  iVar1 = ossl_rsa_pss_get_param(a,&local_30,&local_38);
  if (iVar1 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/rsa/rsa_ameth.c",0x218,"ossl_rsa_pss_to_ctx");
    uVar3 = 0xffffffff;
    ERR_set_error(4,0x95,0);
  }
  else {
    if (param_4 == (EVP_PKEY *)0x0) {
      iVar1 = EVP_PKEY_CTX_get_signature_md(local_50[0],&local_28);
      if (0 < iVar1) {
        iVar1 = EVP_MD_get_type(local_30);
        iVar2 = EVP_MD_get_type(local_28);
        if (iVar1 == iVar2) goto LAB_00553822;
        ERR_new();
        ERR_set_debug("../crypto/rsa/rsa_ameth.c",0x225,"ossl_rsa_pss_to_ctx");
        ERR_set_error(4,0x9e,0);
      }
    }
    else {
      iVar1 = EVP_DigestVerifyInit(param_1,local_50,local_30,(ENGINE *)0x0,param_4);
      if (iVar1 != 0) {
LAB_00553822:
        iVar1 = EVP_PKEY_CTX_set_rsa_padding(local_50[0],6);
        if (0 < iVar1) {
          iVar1 = EVP_PKEY_CTX_set_rsa_pss_saltlen(local_50[0],local_3c);
          if (0 < iVar1) {
            uVar3 = 1;
            iVar1 = EVP_PKEY_CTX_set_rsa_mgf1_md(local_50[0],local_38);
            if (0 < iVar1) goto LAB_00553866;
          }
        }
      }
    }
    uVar3 = 0xffffffff;
  }
LAB_00553866:
  RSA_PSS_PARAMS_free(a);
LAB_005537b1:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


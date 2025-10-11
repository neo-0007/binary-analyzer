
int ASN1_item_verify_ctx
              (ASN1_ITEM *param_1,undefined8 *param_2,int *param_3,ASN1_VALUE *param_4,
              EVP_MD_CTX *param_5)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  EVP_PKEY_CTX *ctx;
  EVP_PKEY *pkey;
  char *name;
  EVP_MD *type;
  undefined8 uVar4;
  long lVar5;
  long in_FS_OFFSET;
  int local_50;
  int local_4c;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (uchar *)0x0;
  ctx = (EVP_PKEY_CTX *)EVP_MD_CTX_get_pkey_ctx(param_5);
  pkey = EVP_PKEY_CTX_get0_pkey(ctx);
  if (pkey == (EVP_PKEY *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/asn1/a_verify.c",0x7d,"ASN1_item_verify_ctx");
    iVar2 = -1;
    ERR_set_error(0xd,0xc0102,0);
    goto LAB_005a5dfc;
  }
  if ((param_3[1] == 3) && ((*(byte *)(param_3 + 4) & 7) != 0)) {
    ERR_new();
    ERR_set_debug("../crypto/asn1/a_verify.c",0x82,"ASN1_item_verify_ctx");
    iVar2 = -1;
    ERR_set_error(0xd,0xdc,0);
    goto LAB_005a5dfc;
  }
  iVar2 = OBJ_obj2nid((ASN1_OBJECT *)*param_2);
  iVar2 = OBJ_find_sigid_algs(iVar2,&local_50,&local_4c);
  if (iVar2 == 0) {
    ERR_new();
    uVar4 = 0x88;
LAB_005a5f01:
    ERR_set_debug("../crypto/asn1/a_verify.c",uVar4,"ASN1_item_verify_ctx");
    uVar4 = 199;
LAB_005a5f17:
    lVar5 = 0;
    iVar2 = -1;
    ERR_set_error(0xd,uVar4,0);
  }
  else if (local_50 == 0) {
    if ((pkey->type == 0) || (*(long *)&pkey[1].save_parameters != 0)) {
      if (local_4c != 0x390) goto LAB_005a5d37;
      iVar2 = EVP_PKEY_is_a(pkey,"RSA");
      if ((iVar2 == 0) && (iVar2 = EVP_PKEY_is_a(pkey,"RSA-PSS"), iVar2 == 0)) {
        ERR_new();
        uVar4 = 0xa7;
        goto LAB_005a5f91;
      }
      iVar2 = ossl_rsa_pss_to_ctx(param_5,0,param_2,pkey);
      if (iVar2 < 1) {
        ERR_new();
        ERR_set_debug("../crypto/asn1/a_verify.c",0xac,"ASN1_item_verify_ctx");
        uVar4 = 0xc0103;
        goto LAB_005a5f17;
      }
LAB_005a5d8e:
      iVar2 = -1;
    }
    else {
      if ((*(long *)&pkey->references == 0) ||
         (pcVar1 = *(code **)(*(long *)&pkey->references + 200), pcVar1 == (code *)0x0)) {
        ERR_new();
        uVar4 = 0x8e;
        goto LAB_005a5f01;
      }
      iVar2 = (*pcVar1)(param_5,param_1,param_4,param_2,param_3,pkey);
      if (iVar2 < 1) {
        ERR_new();
        uVar4 = 0x99;
        goto LAB_005a5fc1;
      }
      if (iVar2 == 1) {
        lVar5 = 0;
        goto LAB_005a5de7;
      }
    }
    iVar3 = ASN1_item_i2d(param_4,&local_48,param_1);
    if (iVar3 < 1) {
      ERR_new();
      lVar5 = 0;
      ERR_set_debug("../crypto/asn1/a_verify.c",0xcd,"ASN1_item_verify_ctx");
      ERR_set_error(0xd,0xc0103,0);
    }
    else if (local_48 == (uchar *)0x0) {
      ERR_new();
      lVar5 = 0;
      ERR_set_debug("../crypto/asn1/a_verify.c",0xd1,"ASN1_item_verify_ctx");
      ERR_set_error(0xd,0xc0100,0);
    }
    else {
      lVar5 = (long)iVar3;
      iVar2 = EVP_DigestVerify(param_5,*(undefined8 *)(param_3 + 2),(long)*param_3,local_48,lVar5);
      if (iVar2 < 1) {
        ERR_new();
        ERR_set_debug("../crypto/asn1/a_verify.c",0xd9,"ASN1_item_verify_ctx");
        ERR_set_error(0xd,0x80006,0);
      }
      else {
        iVar2 = 1;
      }
    }
  }
  else {
LAB_005a5d37:
    OBJ_nid2sn(local_4c);
    iVar2 = EVP_PKEY_is_a(pkey);
    if (iVar2 == 0) {
      ERR_new();
      uVar4 = 0xb2;
LAB_005a5f91:
      ERR_set_debug("../crypto/asn1/a_verify.c",uVar4,"ASN1_item_verify_ctx");
      uVar4 = 200;
      goto LAB_005a5f17;
    }
    if (local_50 == 0) {
      type = (EVP_MD *)0x0;
    }
    else {
      name = OBJ_nid2sn(local_50);
      type = EVP_get_digestbyname(name);
      if (type == (EVP_MD *)0x0) {
        ERR_new();
        ERR_set_debug("../crypto/asn1/a_verify.c",0xb9,"ASN1_item_verify_ctx");
        uVar4 = 0xa1;
        goto LAB_005a5f17;
      }
    }
    iVar2 = EVP_DigestVerifyInit(param_5,(EVP_PKEY_CTX **)0x0,type,(ENGINE *)0x0,pkey);
    if (iVar2 != 0) goto LAB_005a5d8e;
    ERR_new();
    uVar4 = 0xc4;
    iVar2 = 0;
LAB_005a5fc1:
    lVar5 = 0;
    ERR_set_debug("../crypto/asn1/a_verify.c",uVar4,"ASN1_item_verify_ctx");
    ERR_set_error(0xd,0x80006,0);
  }
LAB_005a5de7:
  CRYPTO_clear_free(local_48,lVar5,"../crypto/asn1/a_verify.c",0xde);
LAB_005a5dfc:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar2;
}


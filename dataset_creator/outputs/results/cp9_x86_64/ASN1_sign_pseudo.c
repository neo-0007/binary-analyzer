
int ASN1_sign(undefined1 *i2d,X509_ALGOR *algor1,X509_ALGOR *algor2,ASN1_BIT_STRING *signature,
             char *data,EVP_PKEY *pkey,EVP_MD *type)

{
  int iVar1;
  EVP_MD_CTX *ctx;
  ASN1_TYPE *pAVar2;
  ASN1_OBJECT *pAVar3;
  void *d;
  uchar *md;
  size_t cnt;
  undefined8 uVar4;
  long lVar5;
  X509_ALGOR *pXVar6;
  long in_FS_OFFSET;
  uint local_4c;
  void *local_48;
  long local_40;
  
  iVar1 = 1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  local_4c = 0;
  if (ctx == (EVP_MD_CTX *)0x0) {
    md = (uchar *)0x0;
    d = (void *)0x0;
    lVar5 = 0;
    ERR_new();
    cnt = 0;
    ERR_set_debug("../crypto/asn1/a_sign.c",0x26,"ASN1_sign");
    ERR_set_error(0xd,0xc0100,0);
    goto LAB_005a2268;
  }
LAB_005a2105:
  if (iVar1 == 1) {
    if (algor1 == (X509_ALGOR *)0x0) goto LAB_005a22c8;
    pAVar2 = algor1->parameter;
    pXVar6 = algor1;
    if (type->pkey_type == 0x71) goto LAB_005a22ea;
LAB_005a2126:
    if ((pAVar2 != (ASN1_TYPE *)0x0) && (pAVar2->type == 5)) goto LAB_005a2150;
    ASN1_TYPE_free(pAVar2);
    pAVar2 = ASN1_TYPE_new();
    pXVar6->parameter = pAVar2;
    if (pAVar2 == (ASN1_TYPE *)0x0) {
      md = (uchar *)0x0;
      lVar5 = 0;
      cnt = 0;
      d = (void *)0x0;
      goto LAB_005a2268;
    }
    pAVar2->type = 5;
LAB_005a2150:
    ASN1_OBJECT_free(pXVar6->algorithm);
    pAVar3 = OBJ_nid2obj(type->pkey_type);
    pXVar6->algorithm = pAVar3;
    if (pAVar3 == (ASN1_OBJECT *)0x0) {
      md = (uchar *)0x0;
      lVar5 = 0;
      cnt = 0;
      ERR_new();
      ERR_set_debug("../crypto/asn1/a_sign.c",0x41,"ASN1_sign");
      ERR_set_error(0xd,0xa2,0);
      d = (void *)0x0;
      goto LAB_005a2268;
    }
    if (pAVar3->length == 0) {
      ERR_new();
      ERR_set_debug("../crypto/asn1/a_sign.c",0x45,"ASN1_sign");
      uVar4 = 0x9a;
      goto LAB_005a2327;
    }
  }
  else if (algor2 != (X509_ALGOR *)0x0) {
    pAVar2 = algor2->parameter;
    pXVar6 = algor2;
    if (type->pkey_type != 0x71) goto LAB_005a2126;
LAB_005a22ea:
    ASN1_TYPE_free(pAVar2);
    pXVar6->parameter = (ASN1_TYPE *)0x0;
    goto LAB_005a2150;
  }
  if (iVar1 == 2) goto code_r0x005a2187;
LAB_005a22c8:
  iVar1 = iVar1 + 1;
  goto LAB_005a2105;
code_r0x005a2187:
  iVar1 = (*(code *)i2d)(data,0);
  if (iVar1 < 1) {
    ERR_new();
    ERR_set_debug("../crypto/asn1/a_sign.c",0x4c,"ASN1_sign");
    uVar4 = 0xc0103;
LAB_005a2327:
    lVar5 = 0;
    cnt = 0;
    ERR_set_error(0xd,uVar4,0);
    md = (uchar *)0x0;
    d = (void *)0x0;
  }
  else {
    cnt = (size_t)iVar1;
    d = CRYPTO_malloc(iVar1,"../crypto/asn1/a_sign.c",0x50);
    local_4c = EVP_PKEY_get_size(pkey);
    lVar5 = (long)(int)local_4c;
    md = (uchar *)CRYPTO_malloc(local_4c,"../crypto/asn1/a_sign.c",0x52);
    if ((d == (void *)0x0) || (md == (uchar *)0x0)) {
      local_4c = 0;
      ERR_new();
      ERR_set_debug("../crypto/asn1/a_sign.c",0x55,"ASN1_sign");
      ERR_set_error(0xd,0xc0100,0);
    }
    else {
      local_48 = d;
      (*(code *)i2d)(data,&local_48);
      iVar1 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
      if (iVar1 != 0) {
        iVar1 = EVP_DigestUpdate(ctx,d,cnt);
        if (iVar1 != 0) {
          iVar1 = EVP_SignFinal(ctx,md,&local_4c,pkey);
          if (iVar1 != 0) {
            CRYPTO_free(signature->data);
            signature->data = md;
            md = (uchar *)0x0;
            signature->length = local_4c;
            signature->flags = signature->flags & 0xfffffffffffffff0U | 8;
            goto LAB_005a2268;
          }
        }
      }
      local_4c = 0;
      ERR_new();
      ERR_set_debug("../crypto/asn1/a_sign.c",0x60,"ASN1_sign");
      ERR_set_error(0xd,0x80006,0);
    }
  }
LAB_005a2268:
  EVP_MD_CTX_free(ctx);
  CRYPTO_clear_free(d,cnt,"../crypto/asn1/a_sign.c",0x6f);
  CRYPTO_clear_free(md,lVar5,"../crypto/asn1/a_sign.c",0x70);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_4c;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


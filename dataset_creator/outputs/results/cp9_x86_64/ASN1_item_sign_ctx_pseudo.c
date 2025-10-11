
int ASN1_item_sign_ctx(ASN1_ITEM *it,X509_ALGOR *algor1,X509_ALGOR *algor2,
                      ASN1_BIT_STRING *signature,void *asn,EVP_MD_CTX *ctx)

{
  code *pcVar1;
  int iVar2;
  int dig_nid;
  long lVar3;
  EVP_PKEY_CTX *ctx_00;
  EVP_PKEY *pEVar4;
  uchar *puVar5;
  ASN1_OBJECT *pAVar6;
  int *piVar7;
  X509_ALGOR *pXVar8;
  undefined8 uVar9;
  uint ptype;
  long in_FS_OFFSET;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  long local_158;
  X509_ALGOR *local_148;
  X509_ALGOR *local_140;
  uchar *local_138;
  long local_130;
  long local_128;
  uchar *local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  long local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  long local_d0;
  uchar local_c8 [136];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_138 = (uchar *)0x0;
  local_130 = 0;
  local_128 = 0;
  local_148 = algor2;
  local_140 = algor1;
  lVar3 = EVP_MD_CTX_get0_md(ctx);
  ctx_00 = (EVP_PKEY_CTX *)EVP_MD_CTX_get_pkey_ctx(ctx);
  pEVar4 = EVP_PKEY_CTX_get0_pkey(ctx_00);
  if (pEVar4 == (EVP_PKEY *)0x0) {
    ERR_new();
    lVar3 = 0;
    ERR_set_debug("../crypto/asn1/a_sign.c",0xa6,"ASN1_item_sign_ctx");
    ERR_set_error(0xd,0xd9,0);
    puVar5 = (uchar *)0x0;
    goto LAB_005a2718;
  }
  if (*(long *)&pEVar4->references == 0) {
    piVar7 = (int *)EVP_MD_CTX_get_pkey_ctx(ctx);
    if ((piVar7 == (int *)0x0) ||
       ((iVar2 = *piVar7, (iVar2 - 0x40U & 0xffffffbf) != 0 && (iVar2 - 0x10U & 0xffffffef) != 0 &&
        (iVar2 != 0x100)))) {
      ERR_new();
      ERR_set_debug("../crypto/asn1/a_sign.c",0xb2,"ASN1_item_sign_ctx");
      ERR_set_error(0xd,0xd9,0);
    }
    else {
      OSSL_PARAM_construct_octet_string(&local_178,"algorithm-id",local_c8,0x80);
      local_f8 = local_158;
      local_118 = local_178;
      uStack_110 = uStack_170;
      local_108 = local_168;
      uStack_100 = uStack_160;
      OSSL_PARAM_construct_end(&local_178);
      local_f0 = local_178;
      uStack_e8 = uStack_170;
      local_d0 = local_158;
      local_e0 = local_168;
      uStack_d8 = uStack_160;
      iVar2 = EVP_PKEY_CTX_get_params(piVar7,&local_118);
      lVar3 = local_f8;
      if (0 < iVar2) {
        if (local_f8 != 0) {
          if ((local_140 == (X509_ALGOR *)0x0) ||
             (local_120 = local_c8, pXVar8 = d2i_X509_ALGOR(&local_140,&local_120,local_f8),
             pXVar8 != (X509_ALGOR *)0x0)) {
            if ((local_148 == (X509_ALGOR *)0x0) ||
               (local_120 = local_c8, pXVar8 = d2i_X509_ALGOR(&local_148,&local_120,lVar3),
               pXVar8 != (X509_ALGOR *)0x0)) goto LAB_005a258f;
            ERR_new();
            uVar9 = 0xd0;
          }
          else {
            ERR_new();
            uVar9 = 199;
          }
          ERR_set_debug("../crypto/asn1/a_sign.c",uVar9,"ASN1_item_sign_ctx");
          uVar9 = 0xc0103;
          goto LAB_005a2a5f;
        }
        ERR_new();
        ERR_set_debug("../crypto/asn1/a_sign.c",0xbf,"ASN1_item_sign_ctx");
        ERR_set_error(0xd,0xc6,0);
      }
    }
LAB_005a2a6b:
    puVar5 = (uchar *)0x0;
    lVar3 = 0;
  }
  else {
    pcVar1 = *(code **)(*(long *)&pEVar4->references + 0xd0);
    if (pcVar1 == (code *)0x0) {
LAB_005a2650:
      if (lVar3 == 0) {
        ERR_new();
        ERR_set_debug("../crypto/asn1/a_sign.c",0xeb,"ASN1_item_sign_ctx");
        uVar9 = 0xd9;
LAB_005a2a5f:
        ERR_set_error(0xd,uVar9,0);
        goto LAB_005a2a6b;
      }
      iVar2 = EVP_PKEY_get_id(pEVar4);
      if (iVar2 != 0x494) {
        iVar2 = **(int **)&pEVar4->references;
      }
      dig_nid = EVP_MD_get_type(lVar3);
      iVar2 = OBJ_find_sigid_by_algs((int *)&local_120,dig_nid,iVar2);
      if (iVar2 == 0) {
        ERR_new();
        ERR_set_debug("../crypto/asn1/a_sign.c",0xf6,"ASN1_item_sign_ctx");
        uVar9 = 0xc6;
      }
      else {
        ptype = -(uint)((*(ulong *)(*(long *)&pEVar4->references + 8) & 4) == 0) | 5;
        if (local_140 != (X509_ALGOR *)0x0) {
          pAVar6 = OBJ_nid2obj((int)local_120);
          X509_ALGOR_set0(local_140,pAVar6,ptype,(void *)0x0);
        }
        if (local_148 != (X509_ALGOR *)0x0) {
          pAVar6 = OBJ_nid2obj((int)local_120);
          X509_ALGOR_set0(local_148,pAVar6,ptype,(void *)0x0);
        }
LAB_005a258f:
        iVar2 = ASN1_item_i2d((ASN1_VALUE *)asn,&local_138,it);
        if (0 < iVar2) {
          lVar3 = (long)iVar2;
          iVar2 = EVP_DigestSign(ctx,0,&local_128,local_138,lVar3);
          if (iVar2 == 0) {
            puVar5 = (uchar *)0x0;
            local_130 = 0;
            ERR_new();
            ERR_set_debug("../crypto/asn1/a_sign.c",0x10f,"ASN1_item_sign_ctx");
            ERR_set_error(0xd,0x80006,0);
          }
          else {
            local_130 = local_128;
            puVar5 = (uchar *)CRYPTO_malloc((int)local_128,"../crypto/asn1/a_sign.c",0x113);
            if ((local_138 == (uchar *)0x0) || (puVar5 == (uchar *)0x0)) {
              local_130 = 0;
              ERR_new();
              ERR_set_debug("../crypto/asn1/a_sign.c",0x116,"ASN1_item_sign_ctx");
              ERR_set_error(0xd,0xc0100,0);
            }
            else {
              iVar2 = EVP_DigestSign(ctx,puVar5,&local_130,local_138,lVar3);
              if (iVar2 == 0) {
                local_130 = 0;
                ERR_new();
                ERR_set_debug("../crypto/asn1/a_sign.c",0x11c,"ASN1_item_sign_ctx");
                ERR_set_error(0xd,0x80006,0);
              }
              else {
                CRYPTO_free(signature->data);
                signature->data = puVar5;
                puVar5 = (uchar *)0x0;
                signature->length = (int)local_130;
                signature->flags = signature->flags & 0xfffffffffffffff0U | 8;
              }
            }
          }
          goto LAB_005a2718;
        }
        local_130 = 0;
        ERR_new();
        ERR_set_debug("../crypto/asn1/a_sign.c",0x109,"ASN1_item_sign_ctx");
        uVar9 = 0xc0103;
      }
    }
    else {
      iVar2 = (*pcVar1)(ctx,it,asn,local_140,local_148,signature);
      if (iVar2 == 1) {
        local_130 = (long)signature->length;
        lVar3 = 0;
        puVar5 = (uchar *)0x0;
        goto LAB_005a2718;
      }
      if (0 < iVar2) {
        if (iVar2 == 2) goto LAB_005a2650;
        goto LAB_005a258f;
      }
      ERR_new();
      ERR_set_debug("../crypto/asn1/a_sign.c",0xe2,"ASN1_item_sign_ctx");
      uVar9 = 0x80006;
    }
    lVar3 = 0;
    puVar5 = (uchar *)0x0;
    ERR_set_error(0xd,uVar9,0);
  }
LAB_005a2718:
  CRYPTO_clear_free(local_138,lVar3,"../crypto/asn1/a_sign.c",0x12a);
  CRYPTO_clear_free(puVar5,local_128,"../crypto/asn1/a_sign.c",299);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return (int)local_130;
}


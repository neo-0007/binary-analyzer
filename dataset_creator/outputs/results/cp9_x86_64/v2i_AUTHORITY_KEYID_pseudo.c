
AUTHORITY_KEYID * v2i_AUTHORITY_KEYID(undefined8 param_1,byte *param_2,undefined8 param_3)

{
  char *__s1;
  X509 *x;
  X509 *pXVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  X509_NAME *xn;
  ASN1_STRING *pAVar6;
  GENERAL_NAMES *pGVar7;
  GENERAL_NAME *a;
  ASN1_STRING *x_00;
  int iVar8;
  long in_FS_OFFSET;
  bool bVar9;
  byte local_5a;
  byte local_59;
  X509_NAME *local_58;
  AUTHORITY_KEYID *local_50;
  X509_PUBKEY *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = OPENSSL_sk_num(param_3);
  local_50 = AUTHORITY_KEYID_new();
  if (local_50 == (AUTHORITY_KEYID *)0x0) {
LAB_0061ca49:
    pAVar6 = (ASN1_STRING *)0x0;
    a = (GENERAL_NAME *)0x0;
    pGVar7 = (GENERAL_NAMES *)0x0;
    x_00 = (ASN1_STRING *)0x0;
    local_58 = (X509_NAME *)0x0;
  }
  else {
    if (iVar2 == 1) {
      lVar5 = OPENSSL_sk_value(param_3,0);
      iVar8 = strcmp(*(char **)(lVar5 + 8),"none");
      if (iVar8 == 0) goto LAB_0061c9e6;
LAB_0061c7d0:
      local_59 = 0;
      iVar8 = 0;
      local_5a = 0;
      do {
        while( true ) {
          lVar5 = OPENSSL_sk_value(param_3,iVar8);
          __s1 = *(char **)(lVar5 + 8);
          iVar3 = strcmp(__s1,"keyid");
          if (iVar3 != 0) break;
          local_5a = 1;
          if (*(char **)(lVar5 + 0x10) != (char *)0x0) {
            iVar3 = strcmp(*(char **)(lVar5 + 0x10),"always");
            local_5a = (iVar3 == 0) + 1;
          }
LAB_0061c814:
          iVar8 = iVar8 + 1;
          if (iVar2 <= iVar8) goto LAB_0061c881;
        }
        iVar3 = strcmp(__s1,"issuer");
        if (iVar3 != 0) {
          ERR_new();
          ERR_set_debug("../crypto/x509/v3_akid.c",0x83,"v2i_AUTHORITY_KEYID");
          ERR_set_error(0x22,0x78,"name=%s",*(undefined8 *)(lVar5 + 8));
          goto LAB_0061ca49;
        }
        local_59 = 1;
        if (*(char **)(lVar5 + 0x10) == (char *)0x0) goto LAB_0061c814;
        iVar3 = strcmp(*(char **)(lVar5 + 0x10),"always");
        local_59 = (iVar3 == 0) + 1;
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar2);
    }
    else {
      if (0 < iVar2) goto LAB_0061c7d0;
      local_59 = 0;
      local_5a = 0;
    }
LAB_0061c881:
    if (param_2 == (byte *)0x0) {
      ERR_new();
      pAVar6 = (ASN1_STRING *)0x0;
      a = (GENERAL_NAME *)0x0;
      pGVar7 = (GENERAL_NAMES *)0x0;
      x_00 = (ASN1_STRING *)0x0;
      ERR_set_debug("../crypto/x509/v3_akid.c",0x8d,"v2i_AUTHORITY_KEYID");
      ERR_set_error(0x22,0xc0102,0);
      local_58 = (X509_NAME *)0x0;
    }
    else {
      if ((*param_2 & 1) != 0) goto LAB_0061c9e6;
      x = *(X509 **)(param_2 + 8);
      if (x == (X509 *)0x0) {
        ERR_new();
        pAVar6 = (ASN1_STRING *)0x0;
        a = (GENERAL_NAME *)0x0;
        x_00 = (ASN1_STRING *)0x0;
        ERR_set_debug("../crypto/x509/v3_akid.c",0x91,"v2i_AUTHORITY_KEYID");
        ERR_set_error(0x22,0x79,0);
        local_58 = (X509_NAME *)0x0;
        pGVar7 = (GENERAL_NAMES *)0x0;
        goto LAB_0061ca5d;
      }
      pXVar1 = *(X509 **)(param_2 + 0x10);
      bVar9 = pXVar1 == x;
      ERR_set_mark();
      uVar4 = (uint)bVar9;
      if (*(EVP_PKEY **)(param_2 + 0x38) != (EVP_PKEY *)0x0) {
        uVar4 = X509_check_private_key(*(X509 **)(param_2 + 0x10),*(EVP_PKEY **)(param_2 + 0x38));
      }
      ERR_pop_to_mark();
      if ((local_5a != 2) && ((uVar4 != 0 || ((local_5a & 1) == 0)))) {
LAB_0061cb18:
        x_00 = (ASN1_OCTET_STRING *)0x0;
LAB_0061c939:
        if ((local_59 == 2) || ((x_00 == (ASN1_OCTET_STRING *)0x0 && ((local_59 & 1) != 0))))
        goto LAB_0061c953;
LAB_0061cb6c:
        pAVar6 = (ASN1_INTEGER *)0x0;
        pGVar7 = (GENERAL_NAMES *)0x0;
LAB_0061c9d6:
        local_50->issuer = pGVar7;
        local_50->serial = pAVar6;
        local_50->keyid = x_00;
        goto LAB_0061c9e6;
      }
      x_00 = (ASN1_STRING *)0x0;
      iVar2 = X509_get_ext_by_NID(x,0x52,-1);
      if ((-1 < iVar2) && (x_00 = (ASN1_STRING *)X509_get_ext(x,iVar2), x_00 != (ASN1_STRING *)0x0))
      {
        if ((pXVar1 != x) || (uVar4 != 0)) {
          x_00 = (ASN1_STRING *)X509V3_EXT_d2i((X509_EXTENSION *)x_00);
          bVar9 = bVar9 && x_00 == (ASN1_STRING *)0x0;
          goto LAB_0061c91a;
        }
LAB_0061cac5:
        if (*(EVP_PKEY **)(param_2 + 0x38) != (EVP_PKEY *)0x0) {
          local_48 = (X509_PUBKEY *)0x0;
          x_00 = (ASN1_STRING *)0x0;
          iVar2 = X509_PUBKEY_set(&local_48,*(EVP_PKEY **)(param_2 + 0x38));
          if (iVar2 != 0) {
            x_00 = (ASN1_STRING *)ossl_x509_pubkey_hash(local_48);
          }
          X509_PUBKEY_free(local_48);
          goto LAB_0061c923;
        }
        if ((local_5a != 2) && (local_59 != 0)) goto LAB_0061cb18;
LAB_0061cc02:
        x_00 = (ASN1_STRING *)0x0;
LAB_0061cc04:
        ERR_new();
        pAVar6 = (ASN1_STRING *)0x0;
        a = (GENERAL_NAME *)0x0;
        pGVar7 = (GENERAL_NAMES *)0x0;
        ERR_set_debug("../crypto/x509/v3_akid.c",0xb1,"v2i_AUTHORITY_KEYID");
        ERR_set_error(0x22,0x7b,0);
        local_58 = (X509_NAME *)0x0;
        goto LAB_0061ca5d;
      }
LAB_0061c91a:
      if (bVar9) goto LAB_0061cac5;
LAB_0061c923:
      if ((local_5a != 2) && (local_59 != 0)) goto LAB_0061c939;
      if (x_00 == (ASN1_STRING *)0x0) goto LAB_0061cc02;
      iVar2 = ASN1_STRING_length(x_00);
      if (iVar2 < 3) goto LAB_0061cc04;
      if (local_59 != 2) goto LAB_0061cb6c;
LAB_0061c953:
      xn = X509_get_issuer_name(x);
      local_58 = X509_NAME_dup(xn);
      pAVar6 = (ASN1_STRING *)X509_get0_serialNumber(x);
      pAVar6 = ASN1_INTEGER_dup(pAVar6);
      if ((local_58 == (X509_NAME *)0x0) || (pAVar6 == (ASN1_STRING *)0x0)) {
        ERR_new();
        a = (GENERAL_NAME *)0x0;
        pGVar7 = (GENERAL_NAMES *)0x0;
        ERR_set_debug("../crypto/x509/v3_akid.c",0xba,"v2i_AUTHORITY_KEYID");
        ERR_set_error(0x22,0x7a,0);
        goto LAB_0061ca5d;
      }
      pGVar7 = (GENERAL_NAMES *)OPENSSL_sk_new_null();
      if ((pGVar7 == (GENERAL_NAMES *)0x0) || (a = GENERAL_NAME_new(), a == (GENERAL_NAME *)0x0)) {
        a = (GENERAL_NAME *)0x0;
      }
      else {
        iVar2 = OPENSSL_sk_push(pGVar7,a);
        if (iVar2 != 0) {
          a->type = 4;
          (a->d).directoryName = local_58;
          goto LAB_0061c9d6;
        }
      }
      ERR_new();
      ERR_set_debug("../crypto/x509/v3_akid.c",0xc3,"v2i_AUTHORITY_KEYID");
      ERR_set_error(0x22,0xc0100,0);
    }
  }
LAB_0061ca5d:
  OPENSSL_sk_free(pGVar7);
  GENERAL_NAME_free(a);
  X509_NAME_free(local_58);
  ASN1_INTEGER_free(pAVar6);
  ASN1_OCTET_STRING_free(x_00);
  AUTHORITY_KEYID_free(local_50);
  local_50 = (AUTHORITY_KEYID *)0x0;
LAB_0061c9e6:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return local_50;
}


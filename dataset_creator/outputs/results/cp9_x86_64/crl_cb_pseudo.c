
bool crl_cb(undefined4 param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  uint *puVar1;
  byte bVar2;
  X509_CRL *data;
  int *piVar3;
  byte *pbVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  EVP_MD *type;
  undefined8 *puVar12;
  X509_NAME *iname;
  ASN1_INTEGER *pAVar13;
  ASN1_BIT_STRING *pAVar14;
  ISSUING_DIST_POINT *pIVar15;
  void *pvVar16;
  X509_EXTENSION *pXVar17;
  ASN1_OBJECT *pAVar18;
  undefined8 uVar19;
  X509_REVOKED *x;
  ASN1_INTEGER *pAVar20;
  ASN1_ENUMERATED *a;
  long lVar21;
  int iVar22;
  long in_FS_OFFSET;
  bool bVar23;
  int local_48;
  int local_44;
  long local_40;
  
  data = (X509_CRL *)*param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  switch(param_1) {
  default:
    bVar23 = true;
    break;
  case 3:
    pcVar6 = *(code **)(*(long *)(data[1].sha1_hash + 0x10) + 0x10);
    if ((pcVar6 == (code *)0x0) || (iVar8 = (*pcVar6)(data), iVar8 != 0)) {
      AUTHORITY_KEYID_free((AUTHORITY_KEYID *)data[1].signature);
      ISSUING_DIST_POINT_free(*(ISSUING_DIST_POINT **)&data[1].references);
      ASN1_INTEGER_free((ASN1_STRING *)data[1].idp);
      ASN1_INTEGER_free(*(ASN1_STRING **)&data[1].idp_flags);
      OPENSSL_sk_pop_free(data[1].crl_number,GENERAL_NAMES_free);
      CRYPTO_free(data[2].crl);
      bVar23 = true;
      break;
    }
    goto LAB_00599610;
  case 4:
    pcVar6 = *(code **)(*(long *)(data[1].sha1_hash + 0x10) + 0x10);
    if ((pcVar6 != (code *)0x0) && (iVar8 = (*pcVar6)(data), iVar8 == 0)) goto LAB_00599610;
    AUTHORITY_KEYID_free((AUTHORITY_KEYID *)data[1].signature);
    ISSUING_DIST_POINT_free(*(ISSUING_DIST_POINT **)&data[1].references);
    ASN1_INTEGER_free((ASN1_STRING *)data[1].idp);
    ASN1_INTEGER_free(*(ASN1_STRING **)&data[1].idp_flags);
    OPENSSL_sk_pop_free(data[1].crl_number,GENERAL_NAMES_free);
  case 1:
    puVar7 = default_crl_method;
    data[1].issuers = (stack_st_GENERAL_NAMES *)0x0;
    *(undefined4 *)((long)&data[1].sig_alg + 4) = 0;
    *(undefined **)(data[1].sha1_hash + 0x10) = puVar7;
    data[1].akid = (AUTHORITY_KEYID *)0x807f00000000;
    bVar23 = true;
    data[1].signature = (ASN1_BIT_STRING *)0x0;
    data[1].references = 0;
    data[1].flags = 0;
    data[1].idp = (ISSUING_DIST_POINT *)0x0;
    data[1].idp_flags = 0;
    data[1].idp_reasons = 0;
    data[1].crl_number = (ASN1_INTEGER *)0x0;
    break;
  case 5:
    type = EVP_sha1();
    iVar8 = X509_CRL_digest(data,type,(uchar *)&data[1].base_crl_number,(uint *)0x0);
    if (iVar8 == 0) {
      puVar1 = (uint *)((long)&data[1].sig_alg + 4);
      *puVar1 = *puVar1 | 0x100000;
    }
    puVar12 = (undefined8 *)X509_CRL_get_ext_d2i(data,0x302,&local_48,(int *)0x0);
    *(undefined8 **)&data[1].references = puVar12;
    if (puVar12 == (undefined8 *)0x0) {
      if (local_48 != -1) goto LAB_0059961e;
    }
    else {
      uVar10 = *(uint *)&data[1].akid;
      iVar8 = *(int *)(puVar12 + 1);
      iVar22 = *(int *)((long)puVar12 + 0x1c);
      iVar11 = *(int *)((long)puVar12 + 0xc);
      *(uint *)&data[1].akid = uVar10 | 1;
      if (iVar8 < 1) {
        if (0 < iVar11) {
          uVar9 = uVar10 | 9;
          *(uint *)&data[1].akid = uVar9;
          goto LAB_00599912;
        }
        if (0 < iVar22) {
          *(uint *)&data[1].akid = uVar10 | 0x11;
        }
      }
      else {
        uVar9 = uVar10 | 5;
        *(uint *)&data[1].akid = uVar9;
        if (iVar11 < 1) {
LAB_00599912:
          if (0 < iVar22) goto LAB_0059956a;
        }
        else {
          uVar9 = uVar10 | 0xd;
          *(uint *)&data[1].akid = uVar9;
          if (0 < iVar22) {
LAB_0059956a:
            uVar9 = uVar9 | 0x10;
          }
          *(uint *)&data[1].akid = uVar9 | 2;
        }
      }
      if (0 < *(int *)(puVar12 + 3)) {
        *(uint *)&data[1].akid = *(uint *)&data[1].akid | 0x20;
      }
      piVar3 = (int *)puVar12[2];
      if (piVar3 != (int *)0x0) {
        *(uint *)&data[1].akid = *(uint *)&data[1].akid | 0x40;
        iVar8 = *piVar3;
        if (iVar8 < 1) {
          uVar10 = *(uint *)((long)&data[1].akid + 4);
        }
        else {
          pbVar4 = *(byte **)(piVar3 + 2);
          bVar2 = *pbVar4;
          uVar10 = (uint)bVar2;
          *(uint *)((long)&data[1].akid + 4) = (uint)bVar2;
          if (iVar8 != 1) {
            uVar10 = (uint)CONCAT11(pbVar4[1],bVar2);
          }
        }
        *(uint *)((long)&data[1].akid + 4) = uVar10 & 0x807f;
      }
      iname = (X509_NAME *)X509_CRL_get_issuer(data);
      iVar8 = DIST_POINT_set_dpname((DIST_POINT_NAME *)*puVar12,iname);
      if (iVar8 == 0) {
LAB_0059961e:
        puVar1 = (uint *)((long)&data[1].sig_alg + 4);
        *puVar1 = *puVar1 | 0x80;
      }
    }
    pAVar14 = (ASN1_BIT_STRING *)X509_CRL_get_ext_d2i(data,0x5a,&local_48,(int *)0x0);
    data[1].signature = pAVar14;
    if ((pAVar14 == (ASN1_BIT_STRING *)0x0) && (local_48 != -1)) {
      puVar1 = (uint *)((long)&data[1].sig_alg + 4);
      *puVar1 = *puVar1 | 0x80;
    }
    pIVar15 = (ISSUING_DIST_POINT *)X509_CRL_get_ext_d2i(data,0x58,&local_48,(int *)0x0);
    data[1].idp = pIVar15;
    if ((pIVar15 == (ISSUING_DIST_POINT *)0x0) && (local_48 != -1)) {
      puVar1 = (uint *)((long)&data[1].sig_alg + 4);
      *puVar1 = *puVar1 | 0x80;
    }
    pvVar16 = X509_CRL_get_ext_d2i(data,0x8c,&local_48,(int *)0x0);
    *(void **)&data[1].idp_flags = pvVar16;
    if (pvVar16 == (void *)0x0) {
      if (local_48 != -1) goto LAB_005998f0;
    }
    else if (data[1].idp == (ISSUING_DIST_POINT *)0x0) {
LAB_005998f0:
      puVar1 = (uint *)((long)&data[1].sig_alg + 4);
      *puVar1 = *puVar1 | 0x80;
    }
    pAVar13 = data->crl_number;
    iVar22 = 0;
    iVar8 = OPENSSL_sk_num(pAVar13);
    if (0 < iVar8) {
      do {
        pXVar17 = (X509_EXTENSION *)OPENSSL_sk_value(pAVar13,iVar22);
        pAVar18 = X509_EXTENSION_get_object(pXVar17);
        iVar8 = OBJ_obj2nid(pAVar18);
        if (iVar8 == 0x359) {
          puVar1 = (uint *)((long)&data[1].sig_alg + 4);
          *puVar1 = *puVar1 | 0x1000;
          iVar8 = X509_EXTENSION_get_critical(pXVar17);
          if (iVar8 != 0) goto LAB_00599894;
        }
        else {
          iVar11 = X509_EXTENSION_get_critical(pXVar17);
          if (((iVar11 != 0) && (iVar8 != 0x302 && iVar8 != 0x5a)) && (iVar8 != 0x8c)) {
LAB_00599894:
            puVar1 = (uint *)((long)&data[1].sig_alg + 4);
            *puVar1 = *puVar1 | 0x200;
            break;
          }
        }
        iVar22 = iVar22 + 1;
        iVar8 = OPENSSL_sk_num(pAVar13);
      } while (iVar22 < iVar8);
    }
    pAVar13 = (ASN1_INTEGER *)0x0;
    uVar19 = X509_CRL_get_REVOKED(data);
    for (iVar8 = 0; iVar22 = OPENSSL_sk_num(uVar19), iVar8 < iVar22; iVar8 = iVar8 + 1) {
      x = (X509_REVOKED *)OPENSSL_sk_value(uVar19,iVar8);
      pAVar20 = (ASN1_INTEGER *)X509_REVOKED_get_ext_d2i(x,0x303,&local_44,(int *)0x0);
      if (pAVar20 == (ASN1_INTEGER *)0x0) {
        if (local_44 == -1) goto LAB_005997a7;
LAB_005998a5:
        puVar1 = (uint *)((long)&data[1].sig_alg + 4);
        *puVar1 = *puVar1 | 0x80;
        break;
      }
      pAVar13 = data[1].crl_number;
      if (pAVar13 == (ASN1_INTEGER *)0x0) {
        pAVar13 = (ASN1_INTEGER *)OPENSSL_sk_new_null();
        data[1].crl_number = pAVar13;
        if (pAVar13 == (ASN1_INTEGER *)0x0) goto LAB_00599610;
      }
      iVar22 = OPENSSL_sk_push(pAVar13,pAVar20);
      pAVar13 = pAVar20;
      if (iVar22 == 0) goto LAB_00599610;
LAB_005997a7:
      x[1].serialNumber = pAVar13;
      a = (ASN1_ENUMERATED *)X509_REVOKED_get_ext_d2i(x,0x8d,&local_44,(int *)0x0);
      if (a == (ASN1_ENUMERATED *)0x0) {
        if (local_44 != -1) goto LAB_005998a5;
        *(undefined4 *)&x[1].revocationDate = 0xffffffff;
      }
      else {
        lVar21 = ASN1_ENUMERATED_get(a);
        *(int *)&x[1].revocationDate = (int)lVar21;
        ASN1_ENUMERATED_free(a);
      }
      uVar5._0_4_ = x->reason;
      uVar5._4_4_ = x->sequence;
      local_44 = 0;
      while (iVar22 = OPENSSL_sk_num(uVar5), local_44 < iVar22) {
        pXVar17 = (X509_EXTENSION *)OPENSSL_sk_value(uVar5);
        iVar22 = X509_EXTENSION_get_critical(pXVar17);
        if (iVar22 != 0) {
          pAVar18 = X509_EXTENSION_get_object(pXVar17);
          iVar22 = OBJ_obj2nid(pAVar18);
          if (iVar22 != 0x303) {
            puVar1 = (uint *)((long)&data[1].sig_alg + 4);
            *puVar1 = *puVar1 | 0x200;
            break;
          }
        }
        local_44 = local_44 + 1;
      }
    }
    pcVar6 = *(code **)(*(long *)(data[1].sha1_hash + 0x10) + 8);
    if ((pcVar6 == (code *)0x0) || (iVar8 = (*pcVar6)(data), iVar8 != 0)) {
      puVar1 = (uint *)((long)&data[1].sig_alg + 4);
      *puVar1 = *puVar1 | 0x100;
      bVar23 = true;
      break;
    }
LAB_00599610:
    bVar23 = false;
    break;
  case 0xf:
    iVar8 = ossl_x509_crl_set0_libctx
                      (data,*(undefined8 *)(param_4 + 0xe8),*(undefined8 *)(param_4 + 0xf0));
    bVar23 = iVar8 != 0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar23;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


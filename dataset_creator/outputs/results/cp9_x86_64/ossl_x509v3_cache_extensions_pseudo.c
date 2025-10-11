
ulong ossl_x509v3_cache_extensions(X509 *param_1)

{
  byte bVar1;
  ASN1_INTEGER *a;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  EVP_MD *type;
  long lVar6;
  BASIC_CONSTRAINTS *a_00;
  ASN1_BIT_STRING *pAVar7;
  PROXY_CERT_INFO_EXTENSION *a_01;
  ASN1_STRING *pAVar8;
  void *pvVar9;
  ASN1_OBJECT *pAVar10;
  X509_NAME *pXVar11;
  X509_NAME *a_02;
  undefined8 *puVar12;
  int *piVar13;
  int *piVar14;
  ASN1_OCTET_STRING *pAVar15;
  X509_EXTENSION *ex;
  undefined8 uVar16;
  uint uVar17;
  long in_FS_OFFSET;
  int local_38;
  int local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)&param_1[1].rfc3779_addr != 0) {
LAB_0058747b:
    uVar5 = (ulong)((*(uint *)&param_1[1].name >> 7 ^ 1) & 1);
    goto LAB_0058748a;
  }
  uVar5 = CRYPTO_THREAD_write_lock(param_1[1].nc);
  if ((int)uVar5 == 0) goto LAB_0058748a;
  if (((ulong)param_1[1].name & 0x100) != 0) {
    CRYPTO_THREAD_unlock(param_1[1].nc);
    goto LAB_0058747b;
  }
  type = EVP_sha1();
  iVar3 = X509_digest(param_1,type,(uchar *)&param_1[1].akid,(uint *)0x0);
  if (iVar3 == 0) {
    *(uint *)&param_1[1].name = *(uint *)&param_1[1].name | 0x100000;
  }
  ERR_set_mark();
  lVar6 = X509_get_version(param_1);
  if (lVar6 == 0) {
    *(uint *)&param_1[1].name = *(uint *)&param_1[1].name | 0x40;
  }
  param_1[1].signature = (ASN1_BIT_STRING *)0xffffffffffffffff;
  a_00 = (BASIC_CONSTRAINTS *)X509_get_ext_d2i(param_1,0x57,&local_38,(int *)0x0);
  if (a_00 == (BASIC_CONSTRAINTS *)0x0) {
    if (local_38 != -1) {
      *(uint *)&param_1[1].name = *(uint *)&param_1[1].name | 0x80;
    }
  }
  else {
    if (a_00->ca != 0) {
      *(uint *)&param_1[1].name = *(uint *)&param_1[1].name | 0x10;
    }
    a = a_00->pathlen;
    if (a != (ASN1_INTEGER *)0x0) {
      if (a->type == 0x102) {
        ERR_new();
        ERR_set_debug("../crypto/x509/v3_purp.c",0x1b9,"ossl_x509v3_cache_extensions");
        ERR_set_error(0xb,0xa8,0);
        *(uint *)&param_1[1].name = *(uint *)&param_1[1].name | 0x80;
      }
      else {
        pAVar7 = (ASN1_BIT_STRING *)ASN1_INTEGER_get(a);
        param_1[1].signature = pAVar7;
      }
    }
    BASIC_CONSTRAINTS_free(a_00);
    *(uint *)&param_1[1].name = *(uint *)&param_1[1].name | 1;
  }
  a_01 = (PROXY_CERT_INFO_EXTENSION *)X509_get_ext_d2i(param_1,0x297,&local_38,(int *)0x0);
  if (a_01 == (PROXY_CERT_INFO_EXTENSION *)0x0) {
    if (local_38 != -1) {
      *(uint *)&param_1[1].name = *(uint *)&param_1[1].name | 0x80;
    }
  }
  else {
    uVar17 = *(uint *)&param_1[1].name;
    if ((uVar17 & 0x10) == 0) {
      iVar3 = X509_get_ext_by_NID(param_1,0x55,-1);
      if ((-1 < iVar3) || (iVar3 = X509_get_ext_by_NID(param_1,0x56,-1), -1 < iVar3)) {
        uVar17 = *(uint *)&param_1[1].name;
        goto LAB_005875aa;
      }
    }
    else {
LAB_005875aa:
      *(uint *)&param_1[1].name = uVar17 | 0x80;
    }
    lVar6 = -1;
    if (a_01->pcPathLengthConstraint != (ASN1_INTEGER *)0x0) {
      lVar6 = ASN1_INTEGER_get(a_01->pcPathLengthConstraint);
    }
    param_1[1].valid = (int)lVar6;
    param_1[1].references = (int)((ulong)lVar6 >> 0x20);
    PROXY_CERT_INFO_EXTENSION_free(a_01);
    *(uint *)&param_1[1].name = *(uint *)&param_1[1].name | 0x400;
  }
  pAVar8 = (ASN1_STRING *)X509_get_ext_d2i(param_1,0x53,&local_38,(int *)0x0);
  if (pAVar8 == (ASN1_STRING *)0x0) {
    if (local_38 != -1) {
      *(uint *)&param_1[1].name = *(uint *)&param_1[1].name | 0x80;
    }
  }
  else {
    *(undefined4 *)((long)&param_1[1].name + 4) = 0;
    iVar3 = pAVar8->length;
    if (0 < iVar3) {
      pbVar2 = pAVar8->data;
      bVar1 = *pbVar2;
      *(uint *)((long)&param_1[1].name + 4) = (uint)bVar1;
      if (iVar3 != 1) {
        *(uint *)((long)&param_1[1].name + 4) = (uint)CONCAT11(pbVar2[1],bVar1);
      }
    }
    *(uint *)&param_1[1].name = *(uint *)&param_1[1].name | 2;
    ASN1_BIT_STRING_free(pAVar8);
    if (*(int *)((long)&param_1[1].name + 4) == 0) {
      ERR_new();
      ERR_set_debug("../crypto/x509/v3_purp.c",0x1e2,"ossl_x509v3_cache_extensions");
      ERR_set_error(0xb,0xa9,0);
      *(uint *)&param_1[1].name = *(uint *)&param_1[1].name | 0x80;
    }
  }
  *(undefined4 *)&param_1[1].ex_data.sk = 0;
  pvVar9 = X509_get_ext_d2i(param_1,0x7e,&local_38,(int *)0x0);
  if (pvVar9 == (void *)0x0) {
    if (local_38 != -1) {
      *(uint *)&param_1[1].name = *(uint *)&param_1[1].name | 0x80;
    }
  }
  else {
    *(uint *)&param_1[1].name = *(uint *)&param_1[1].name | 4;
    local_38 = 0;
    while (iVar3 = OPENSSL_sk_num(pvVar9), local_38 < iVar3) {
      pAVar10 = (ASN1_OBJECT *)OPENSSL_sk_value(pvVar9);
      iVar3 = OBJ_obj2nid(pAVar10);
      if (iVar3 < 0xb5) {
        if (iVar3 < 0x81) goto switchD_005876ce_caseD_86;
        switch(iVar3) {
        case 0x81:
          *(uint *)&param_1[1].ex_data.sk = *(uint *)&param_1[1].ex_data.sk | 1;
          local_38 = local_38 + 1;
          break;
        case 0x82:
          *(uint *)&param_1[1].ex_data.sk = *(uint *)&param_1[1].ex_data.sk | 2;
          local_38 = local_38 + 1;
          break;
        case 0x83:
          *(uint *)&param_1[1].ex_data.sk = *(uint *)&param_1[1].ex_data.sk | 8;
          local_38 = local_38 + 1;
          break;
        case 0x84:
          *(uint *)&param_1[1].ex_data.sk = *(uint *)&param_1[1].ex_data.sk | 4;
          local_38 = local_38 + 1;
          break;
        case 0x85:
          *(uint *)&param_1[1].ex_data.sk = *(uint *)&param_1[1].ex_data.sk | 0x40;
          local_38 = local_38 + 1;
          break;
        default:
          goto switchD_005876ce_caseD_86;
        case 0x89:
        case 0x8b:
          *(uint *)&param_1[1].ex_data.sk = *(uint *)&param_1[1].ex_data.sk | 0x10;
          local_38 = local_38 + 1;
          break;
        case 0xb4:
          *(uint *)&param_1[1].ex_data.sk = *(uint *)&param_1[1].ex_data.sk | 0x20;
          local_38 = local_38 + 1;
        }
      }
      else if (iVar3 == 0x129) {
        *(uint *)&param_1[1].ex_data.sk = *(uint *)&param_1[1].ex_data.sk | 0x80;
        local_38 = local_38 + 1;
      }
      else {
        if (iVar3 == 0x38e) {
          *(uint *)&param_1[1].ex_data.sk = *(uint *)&param_1[1].ex_data.sk | 0x100;
        }
switchD_005876ce_caseD_86:
        local_38 = local_38 + 1;
      }
    }
    OPENSSL_sk_pop_free(pvVar9,ASN1_OBJECT_free);
  }
  pAVar8 = (ASN1_STRING *)X509_get_ext_d2i(param_1,0x47,&local_38,(int *)0x0);
  if (pAVar8 == (ASN1_STRING *)0x0) {
    if (local_38 != -1) {
      *(uint *)&param_1[1].name = *(uint *)&param_1[1].name | 0x80;
    }
  }
  else {
    uVar17 = 0;
    if (0 < pAVar8->length) {
      uVar17 = (uint)*pAVar8->data;
    }
    *(uint *)&param_1[1].name = *(uint *)&param_1[1].name | 8;
    *(uint *)((long)&param_1[1].ex_data.sk + 4) = uVar17;
    ASN1_BIT_STRING_free(pAVar8);
  }
  pvVar9 = X509_get_ext_d2i(param_1,0x52,&local_38,(int *)0x0);
  *(void **)&param_1[1].ex_data.dummy = pvVar9;
  if ((pvVar9 == (void *)0x0) && (local_38 != -1)) {
    *(uint *)&param_1[1].name = *(uint *)&param_1[1].name | 0x80;
  }
  pvVar9 = X509_get_ext_d2i(param_1,0x5a,&local_38,(int *)0x0);
  param_1[1].ex_pathlen = (long)pvVar9;
  if ((pvVar9 == (void *)0x0) && (local_38 != -1)) {
    *(uint *)&param_1[1].name = *(uint *)&param_1[1].name | 0x80;
  }
  pXVar11 = X509_get_issuer_name(param_1);
  a_02 = X509_get_subject_name(param_1);
  iVar3 = X509_NAME_cmp(a_02,pXVar11);
  if (iVar3 == 0) {
    *(uint *)&param_1[1].name = *(uint *)&param_1[1].name | 0x20;
    iVar3 = X509_check_akid(param_1,(AUTHORITY_KEYID *)param_1[1].ex_pathlen);
    if (iVar3 == 0) {
      uVar16 = X509_get0_pubkey(param_1);
      iVar3 = check_sig_alg_match(uVar16,param_1);
      if (iVar3 == 0) {
        *(uint *)&param_1[1].name = *(uint *)&param_1[1].name | 0x2000;
      }
    }
  }
  pvVar9 = X509_get_ext_d2i(param_1,0x55,&local_38,(int *)0x0);
  param_1[1].ex_kusage = (ulong)pvVar9;
  if ((pvVar9 == (void *)0x0) && (local_38 != -1)) {
    *(uint *)&param_1[1].name = *(uint *)&param_1[1].name | 0x80;
  }
  pvVar9 = X509_get_ext_d2i(param_1,0x29a,&local_38,(int *)0x0);
  param_1[1].ex_xkusage = (ulong)pvVar9;
  if ((pvVar9 == (void *)0x0) && (local_38 != -1)) {
    *(uint *)&param_1[1].name = *(uint *)&param_1[1].name | 0x80;
  }
  pvVar9 = X509_get_ext_d2i(param_1,0x67,&local_34,(int *)0x0);
  param_1[1].ex_flags = (ulong)pvVar9;
  if ((pvVar9 == (void *)0x0) && (local_34 != -1)) {
LAB_00587a48:
    *(uint *)&param_1[1].name = *(uint *)&param_1[1].name | 0x80;
  }
  else {
    local_34 = 0;
    while (iVar3 = OPENSSL_sk_num(pvVar9), local_34 < iVar3) {
      puVar12 = (undefined8 *)OPENSSL_sk_value(param_1[1].ex_flags);
      piVar14 = (int *)*puVar12;
      if (piVar14 == (int *)0x0) {
        iVar3 = OPENSSL_sk_num(puVar12[2]);
        if (iVar3 < 1) {
          ERR_new();
          ERR_set_debug("../crypto/x509/v3_purp.c",0x139,"setup_dp");
          ERR_set_error(0xb,0x8f,0);
          goto LAB_00587a48;
        }
        piVar13 = (int *)puVar12[1];
        piVar14 = (int *)*puVar12;
        if (piVar13 != (int *)0x0) goto LAB_00587915;
        uVar17 = 0x807f;
LAB_0058793c:
        *(uint *)(puVar12 + 3) = uVar17;
        if (piVar14 != (int *)0x0) goto LAB_00587944;
      }
      else {
        piVar13 = (int *)puVar12[1];
        if (piVar13 != (int *)0x0) {
LAB_00587915:
          iVar3 = *piVar13;
          if (iVar3 < 1) {
            uVar17 = *(uint *)(puVar12 + 3);
          }
          else {
            pbVar2 = *(byte **)(piVar13 + 2);
            bVar1 = *pbVar2;
            uVar17 = (uint)bVar1;
            *(uint *)(puVar12 + 3) = (uint)bVar1;
            if (iVar3 != 1) {
              uVar17 = (uint)CONCAT11(pbVar2[1],bVar1);
            }
          }
          uVar17 = uVar17 & 0x807f;
          goto LAB_0058793c;
        }
        *(undefined4 *)(puVar12 + 3) = 0x807f;
LAB_00587944:
        iVar3 = 0;
        if (*piVar14 == 1) {
          iVar4 = OPENSSL_sk_num(puVar12[2]);
          if (0 < iVar4) {
            do {
              piVar14 = (int *)OPENSSL_sk_value(puVar12[2],iVar3);
              if (*piVar14 == 4) {
                pXVar11 = *(X509_NAME **)(piVar14 + 2);
                if (pXVar11 != (X509_NAME *)0x0) goto LAB_0058798e;
                break;
              }
              iVar3 = iVar3 + 1;
              iVar4 = OPENSSL_sk_num(puVar12[2]);
            } while (iVar3 < iVar4);
          }
          pXVar11 = X509_get_issuer_name(param_1);
LAB_0058798e:
          iVar3 = DIST_POINT_set_dpname((DIST_POINT_NAME *)*puVar12,pXVar11);
          if (iVar3 == 0) goto LAB_0058799f;
        }
      }
      local_34 = local_34 + 1;
      pvVar9 = (void *)param_1[1].ex_flags;
    }
  }
  pvVar9 = X509_get_ext_d2i(param_1,0x122,&local_38,(int *)0x0);
  param_1[1].ex_nscert = (ulong)pvVar9;
  if ((pvVar9 == (void *)0x0) && (local_38 != -1)) {
    *(uint *)&param_1[1].name = *(uint *)&param_1[1].name | 0x80;
  }
  pAVar15 = (ASN1_OCTET_STRING *)X509_get_ext_d2i(param_1,0x123,&local_38,(int *)0x0);
  param_1[1].skid = pAVar15;
  if ((pAVar15 == (ASN1_OCTET_STRING *)0x0) && (local_38 != -1)) {
    *(uint *)&param_1[1].name = *(uint *)&param_1[1].name | 0x80;
  }
  local_38 = 0;
  while (iVar3 = X509_get_ext_count(param_1), local_38 < iVar3) {
    ex = X509_get_ext(param_1,local_38);
    pAVar10 = X509_EXTENSION_get_object(ex);
    iVar3 = OBJ_obj2nid(pAVar10);
    if (iVar3 == 0x359) {
      *(uint *)&param_1[1].name = *(uint *)&param_1[1].name | 0x1000;
    }
    iVar4 = X509_EXTENSION_get_critical(ex);
    if (iVar4 != 0) {
      iVar4 = X509_supported_extension(ex);
      if (iVar4 == 0) {
        *(uint *)&param_1[1].name = *(uint *)&param_1[1].name | 0x200;
        break;
      }
      if (iVar3 == 0x57) {
        *(uint *)&param_1[1].name = *(uint *)&param_1[1].name | 0x10000;
      }
      else if (iVar3 < 0x58) {
        if (iVar3 == 0x52) {
          *(uint *)&param_1[1].name = *(uint *)&param_1[1].name | 0x40000;
        }
        else if (iVar3 == 0x55) {
          *(uint *)&param_1[1].name = *(uint *)&param_1[1].name | 0x80000;
        }
      }
      else if (iVar3 == 0x5a) {
        *(uint *)&param_1[1].name = *(uint *)&param_1[1].name | 0x20000;
      }
    }
    local_38 = local_38 + 1;
  }
  ossl_x509_init_sig_info(param_1);
  *(uint *)&param_1[1].name = *(uint *)&param_1[1].name | 0x100;
  *(undefined4 *)&param_1[1].rfc3779_addr = 1;
  ERR_pop_to_mark();
  uVar17 = *(uint *)&param_1[1].name;
  if ((uVar17 & 0x100080) == 0) {
    CRYPTO_THREAD_unlock(param_1[1].nc);
    uVar5 = 1;
  }
  else {
    if ((uVar17 & 0x80) != 0) {
      ERR_new();
      ERR_set_debug("../crypto/x509/v3_purp.c",0x27b,"ossl_x509v3_cache_extensions");
      ERR_set_error(0xb,0x9e,0);
LAB_0058799f:
      uVar17 = *(uint *)&param_1[1].name;
    }
    *(uint *)&param_1[1].name = uVar17 | 0x100;
    CRYPTO_THREAD_unlock(param_1[1].nc);
    uVar5 = 0;
  }
LAB_0058748a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



long ossl_policy_cache_set(X509 *param_1)

{
  long *plVar1;
  ASN1_INTEGER *pAVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  POLICY_CONSTRAINTS *a;
  long lVar7;
  void *pvVar8;
  ASN1_INTEGER *pAVar9;
  undefined8 uVar10;
  ASN1_INTEGER *pAVar11;
  int iVar12;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  lVar7 = param_1[1].ex_pcpathlen;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((lVar7 != 0) || (iVar3 = CRYPTO_THREAD_write_lock(param_1[1].nc), iVar3 == 0))
  goto LAB_00602cee;
  if (param_1[1].ex_pcpathlen == 0) {
    puVar6 = (undefined8 *)CRYPTO_malloc(0x28,"../crypto/x509/pcy_cache.c",0x5c);
    if (puVar6 == (undefined8 *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/x509/pcy_cache.c",0x5e,"policy_cache_new");
      ERR_set_error(0x22,0xc0100,0);
    }
    else {
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0xffffffffffffffff;
      puVar6[3] = 0xffffffffffffffff;
      puVar6[4] = 0xffffffffffffffff;
      param_1[1].ex_pcpathlen = (long)puVar6;
      a = (POLICY_CONSTRAINTS *)X509_get_ext_d2i(param_1,0x191,&local_44,(int *)0x0);
      pAVar2 = (ASN1_INTEGER *)0x0;
      pAVar9 = pAVar2;
      if (a == (POLICY_CONSTRAINTS *)0x0) {
        if (local_44 != -1) goto LAB_00602f55;
LAB_00602df8:
        pvVar8 = X509_get_ext_d2i(param_1,0x59,&local_44,(int *)0x0);
        iVar3 = local_44;
        if (pvVar8 == (void *)0x0) {
          if (local_44 == -1) goto LAB_00602d37;
          goto LAB_00602f55;
        }
        plVar1 = (long *)param_1[1].ex_pcpathlen;
        iVar4 = OPENSSL_sk_num(pvVar8);
        if (iVar4 < 1) {
          ossl_policy_data_free(0);
          OPENSSL_sk_pop_free(pvVar8,POLICYINFO_free);
LAB_00602f28:
          OPENSSL_sk_pop_free(plVar1[1],ossl_policy_data_free);
          plVar1[1] = 0;
          goto LAB_00602d37;
        }
        iVar12 = 0;
        lVar7 = OPENSSL_sk_new(policy_data_cmp);
        plVar1[1] = lVar7;
        if (lVar7 == 0) {
          ERR_new();
          uVar10 = 0x26;
LAB_006030be:
          ERR_set_debug("../crypto/x509/pcy_cache.c",uVar10,"policy_cache_create");
          ERR_set_error(0x22,0xc0100,0);
          OPENSSL_sk_pop_free(pvVar8,POLICYINFO_free);
          goto LAB_00602f28;
        }
        do {
          uVar10 = OPENSSL_sk_value(pvVar8,iVar12);
          lVar7 = ossl_policy_data_new(uVar10,0,iVar3);
          if (lVar7 == 0) {
            ERR_new();
            uVar10 = 0x2d;
            goto LAB_006030be;
          }
          iVar5 = OBJ_obj2nid(*(ASN1_OBJECT **)(lVar7 + 8));
          if (iVar5 != 0x2ea) {
            iVar5 = OPENSSL_sk_find(plVar1[1],lVar7);
            if (-1 < iVar5) goto LAB_0060309d;
            iVar5 = OPENSSL_sk_push(plVar1[1],lVar7);
            if (iVar5 != 0) goto LAB_00602e6d;
            ERR_new();
            ERR_set_debug("../crypto/x509/pcy_cache.c",0x3d,"policy_cache_create");
            ERR_set_error(0x22,0xc0100,0);
LAB_00602f10:
            ossl_policy_data_free(lVar7);
            OPENSSL_sk_pop_free(pvVar8,POLICYINFO_free);
            goto LAB_00602f28;
          }
          if (*plVar1 != 0) {
LAB_0060309d:
            *(uint *)&param_1[1].name = *(uint *)&param_1[1].name | 0x800;
            goto LAB_00602f10;
          }
          *plVar1 = lVar7;
LAB_00602e6d:
          iVar12 = iVar12 + 1;
        } while (iVar4 != iVar12);
        ossl_policy_data_free(0);
        OPENSSL_sk_pop_free(pvVar8,POLICYINFO_free);
        local_44 = 1;
        pvVar8 = X509_get_ext_d2i(param_1,0x2eb,&local_44,(int *)0x0);
        if (pvVar8 == (void *)0x0) {
          if (local_44 == -1) goto LAB_00603025;
          goto LAB_00602f55;
        }
        local_44 = ossl_policy_cache_set_mapping(param_1,pvVar8);
        if (local_44 < 1) goto LAB_00602f55;
LAB_00603025:
        pAVar9 = (ASN1_INTEGER *)X509_get_ext_d2i(param_1,0x2ec,&local_44,(int *)0x0);
        if (pAVar9 == (ASN1_INTEGER *)0x0) {
          pAVar9 = pAVar2;
          if (local_44 != -1) goto LAB_00602f55;
          pAVar9 = (ASN1_STRING *)0x0;
        }
        else {
          if (pAVar9->type == 0x102) goto LAB_00602f55;
          lVar7 = ASN1_INTEGER_get(pAVar9);
          puVar6[2] = lVar7;
        }
      }
      else {
        pAVar11 = a->requireExplicitPolicy;
        if (pAVar11 == (ASN1_INTEGER *)0x0) {
          pAVar11 = a->inhibitPolicyMapping;
          if (pAVar11 != (ASN1_INTEGER *)0x0) goto LAB_00602f7e;
        }
        else if (pAVar11->type != 0x102) {
          lVar7 = ASN1_INTEGER_get(pAVar11);
          pAVar11 = a->inhibitPolicyMapping;
          puVar6[3] = lVar7;
          if (pAVar11 == (ASN1_INTEGER *)0x0) goto LAB_00602df8;
LAB_00602f7e:
          if (pAVar11->type != 0x102) {
            lVar7 = ASN1_INTEGER_get(pAVar11);
            puVar6[4] = lVar7;
            goto LAB_00602df8;
          }
        }
LAB_00602f55:
        *(uint *)&param_1[1].name = *(uint *)&param_1[1].name | 0x800;
      }
      POLICY_CONSTRAINTS_free(a);
      ASN1_INTEGER_free(pAVar9);
    }
  }
LAB_00602d37:
  CRYPTO_THREAD_unlock(param_1[1].nc);
  lVar7 = param_1[1].ex_pcpathlen;
LAB_00602cee:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return lVar7;
}


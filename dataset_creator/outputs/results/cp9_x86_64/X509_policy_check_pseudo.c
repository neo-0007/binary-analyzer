
int X509_policy_check(X509_POLICY_TREE **ptree,int *pexplicit_policy,stack_st_X509 *certs,
                     stack_st_ASN1_OBJECT *policy_oids,uint flags)

{
  int *piVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  X509 *x;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ASN1_OBJECT *pAVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  void *pvVar17;
  undefined4 *puVar18;
  stack_st_X509_POLICY_NODE *psVar19;
  byte bVar20;
  uint uVar21;
  int iVar22;
  X509_POLICY_TREE *pXVar23;
  int iVar24;
  int iVar25;
  ulong uVar26;
  long lVar27;
  long in_FS_OFFSET;
  bool bVar28;
  X509_POLICY_TREE *local_90;
  long local_80;
  int local_78;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *ptree = (X509_POLICY_TREE *)0x0;
  *pexplicit_policy = 0;
  local_48 = 0;
  uVar5 = OPENSSL_sk_num(certs);
  uVar26 = (ulong)uVar5;
  if ((flags & 0x100) != 0) {
    uVar26 = 0;
  }
  uVar21 = uVar5;
  if ((flags & 0x200) != 0) {
    uVar21 = 0;
  }
  uVar3 = 0;
  if ((flags & 0x400) == 0) {
    uVar3 = uVar5;
  }
  if (uVar5 == 1) {
LAB_00603a04:
    local_90 = (X509_POLICY_TREE *)0x0;
LAB_00603a0d:
    iVar24 = 1;
    X509_policy_tree_free(local_90);
    goto LAB_00603744;
  }
  iVar6 = uVar5 - 2;
  iVar24 = iVar6;
  if (iVar6 < 0) {
    bVar20 = (-((int)uVar26 == 0) & 4U) + 1;
LAB_0060385a:
    local_90 = (X509_POLICY_TREE *)CRYPTO_zalloc(0x40,"../crypto/x509/pcy_tree.c",0xac);
    if (local_90 == (X509_POLICY_TREE *)0x0) {
      ERR_new();
      uVar9 = 0xad;
LAB_006041c0:
      ERR_set_debug("../crypto/x509/pcy_tree.c",uVar9,"tree_init");
      ERR_set_error(0x22,0xc0100,0);
LAB_00603741:
      iVar24 = 0;
      goto LAB_00603744;
    }
    *(undefined8 *)(local_90 + 8) = 1000;
    puVar10 = (undefined8 *)CRYPTO_zalloc((long)(int)uVar5 << 5,"../crypto/x509/pcy_tree.c",0xbb);
    *(undefined8 **)(local_90 + 0x10) = puVar10;
    if (puVar10 == (undefined8 *)0x0) {
      CRYPTO_free(local_90);
      ERR_new();
      uVar9 = 0xbd;
      goto LAB_006041c0;
    }
    *(uint *)(local_90 + 0x18) = uVar5;
    pAVar11 = OBJ_nid2obj(0x2ea);
    lVar8 = ossl_policy_data_new(0,pAVar11,0);
    if (lVar8 != 0) {
      lVar12 = ossl_policy_level_add_node(puVar10,lVar8,0,local_90,1);
      if (lVar12 != 0) {
        if (-1 < iVar6) {
          uVar26 = (ulong)uVar3;
          do {
            uVar9 = OPENSSL_sk_value(certs,iVar6);
            uVar5 = X509_get_extension_flags(uVar9);
            plVar13 = (long *)ossl_policy_cache_set(uVar9);
            X509_up_ref(uVar9);
            lVar8 = *plVar13;
            puVar10[4] = uVar9;
            if (lVar8 == 0) {
              *(uint *)(puVar10 + 7) = *(uint *)(puVar10 + 7) | 0x200;
            }
            uVar5 = uVar5 & 0x20;
            iVar24 = (int)uVar26;
            if (uVar21 == 0) {
              if ((iVar6 == 0) || (uVar5 == 0)) {
                *(uint *)(puVar10 + 7) = *(uint *)(puVar10 + 7) | 0x200;
                goto LAB_006039c4;
              }
              if (iVar24 == 0) goto LAB_0060393c;
LAB_006039d5:
              uVar2 = plVar13[4];
              if ((-1 < (long)uVar2) && ((long)uVar2 < (long)(int)uVar26)) {
                uVar26 = uVar2 & 0xffffffff;
              }
            }
            else {
              lVar8 = plVar13[2];
              uVar21 = uVar21 - (uVar5 == 0);
              if ((-1 < lVar8) && (lVar8 < (int)uVar21)) {
                uVar21 = (uint)lVar8;
              }
LAB_006039c4:
              if (iVar24 != 0) {
                uVar26 = (ulong)(iVar24 - (uint)(uVar5 == 0));
                goto LAB_006039d5;
              }
LAB_0060393c:
              *(uint *)(puVar10 + 7) = *(uint *)(puVar10 + 7) | 0x400;
              uVar26 = 0;
            }
            bVar28 = iVar6 != 0;
            iVar6 = iVar6 + -1;
            puVar10 = puVar10 + 4;
          } while (bVar28);
        }
        bVar4 = bVar20 & 4;
        if (bVar4 == 0) goto LAB_006040d4;
        goto LAB_00603b4d;
      }
      ossl_policy_data_free(lVar8);
    }
LAB_00603b28:
    iVar24 = 0;
    X509_policy_tree_free(local_90);
    goto LAB_00603744;
  }
  do {
    x = (X509 *)OPENSSL_sk_value(certs,iVar24);
    X509_check_purpose(x,-1,0);
    lVar8 = ossl_policy_cache_set(x);
    if (lVar8 == 0) goto LAB_00603741;
    bVar28 = iVar24 != 0;
    iVar24 = iVar24 + -1;
  } while (bVar28);
  bVar20 = 1;
  iVar22 = iVar6;
LAB_006037d5:
  do {
    iVar25 = (int)uVar26;
    if (iVar25 < 1) {
      if (bVar20 != 1) {
        if (iVar25 != 0) goto LAB_00603a04;
        *pexplicit_policy = 1;
        goto LAB_00604129;
      }
      uVar9 = OPENSSL_sk_value(certs,iVar22);
      uVar7 = X509_get_extension_flags(uVar9);
      if ((uVar7 & 0x800) != 0) goto LAB_00603744;
      bVar20 = 2;
      lVar8 = ossl_policy_cache_set(uVar9);
      if (*(long *)(lVar8 + 8) != 0) goto LAB_006037c4;
    }
    else {
      uVar9 = OPENSSL_sk_value(certs,iVar22);
      uVar7 = X509_get_extension_flags(uVar9);
      if ((uVar7 & 0x800) != 0) goto LAB_00603744;
      lVar8 = ossl_policy_cache_set(uVar9);
      if ((bVar20 == 1) && (*(long *)(lVar8 + 8) != 0)) {
LAB_006037c4:
        bVar20 = 1;
        if (iVar25 < 1) goto LAB_006037cf;
      }
      else {
        bVar20 = 2;
      }
      uVar2 = *(ulong *)(lVar8 + 0x18);
      uVar7 = iVar25 - (uint)((uVar7 & 0x20) == 0);
      uVar26 = (ulong)uVar7;
      if (-1 < (long)uVar2) {
        uVar26 = (ulong)uVar7;
        if ((long)uVar2 < (long)(int)uVar7) {
          uVar26 = uVar2 & 0xffffffff;
        }
        iVar25 = (int)uVar26;
        bVar28 = iVar22 == 0;
        iVar22 = iVar22 + -1;
        if (bVar28) break;
        goto LAB_006037d5;
      }
    }
LAB_006037cf:
    iVar25 = (int)uVar26;
    bVar28 = iVar22 != 0;
    iVar22 = iVar22 + -1;
  } while (bVar28);
  bVar4 = bVar20 & 1;
  if (iVar25 == 0) {
    bVar20 = bVar20 | 4;
    if (bVar4 != 0) goto LAB_0060385a;
    local_90 = (X509_POLICY_TREE *)0x0;
    bVar4 = 4;
LAB_00603b4d:
    *pexplicit_policy = 1;
    if ((bVar20 & 2) == 0) goto LAB_00603b61;
LAB_00604129:
    iVar24 = -2;
  }
  else {
    if (bVar4 != 0) goto LAB_0060385a;
    local_90 = (X509_POLICY_TREE *)0x0;
LAB_006040d4:
    bVar4 = bVar20 & 2;
    if (bVar4 != 0) goto LAB_00603a0d;
LAB_00603b61:
    if (*(int *)(local_90 + 0x18) < 2) {
      if (*(long *)(*(long *)(local_90 + 0x10) + -0x10 + (long)*(int *)(local_90 + 0x18) * 0x20) !=
          0) goto LAB_0060405b;
LAB_00603eaf:
      iVar6 = 1;
      uVar9 = *(undefined8 *)(local_90 + 0x28);
      local_48 = uVar9;
      iVar24 = OPENSSL_sk_num(policy_oids);
      if (0 < iVar24) goto LAB_00603ed5;
    }
    else {
      local_78 = 1;
      local_80 = *(long *)(local_90 + 0x10);
      do {
        lVar8 = local_80 + 0x20;
        puVar10 = (undefined8 *)ossl_policy_cache_set(*(undefined8 *)(local_80 + 0x20));
        for (iVar24 = 0; iVar6 = OPENSSL_sk_num(puVar10[1]), iVar24 < iVar6; iVar24 = iVar24 + 1) {
          bVar28 = false;
          lVar12 = OPENSSL_sk_value(puVar10[1],iVar24);
          for (iVar6 = 0; iVar22 = OPENSSL_sk_num(*(undefined8 *)(local_80 + 8)), iVar6 < iVar22;
              iVar6 = iVar6 + 1) {
            uVar9 = OPENSSL_sk_value(*(undefined8 *)(local_80 + 8),iVar6);
            iVar22 = ossl_policy_node_match(local_80,uVar9,*(undefined8 *)(lVar12 + 8));
            if (iVar22 != 0) {
              lVar16 = ossl_policy_level_add_node(lVar8,lVar12,uVar9,local_90,0);
              if (lVar16 == 0) goto LAB_00603b28;
              bVar28 = true;
            }
          }
          if (((!bVar28) && (*(long *)(local_80 + 0x10) != 0)) &&
             (lVar12 = ossl_policy_level_add_node
                                 (lVar8,lVar12,*(long *)(local_80 + 0x10),local_90,0), lVar12 == 0))
          goto LAB_00603b28;
        }
        uVar5 = *(uint *)(local_80 + 0x38);
        if ((uVar5 & 0x200) == 0) {
          for (iVar24 = 0; iVar6 = OPENSSL_sk_num(*(undefined8 *)(local_80 + 8)), iVar24 < iVar6;
              iVar24 = iVar24 + 1) {
            puVar14 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(local_80 + 8),iVar24);
            if (((*(byte *)(local_80 + 0x19) & 4) == 0) && ((*(byte *)*puVar14 & 1) != 0)) {
              uVar9 = *(undefined8 *)((byte *)*puVar14 + 0x18);
              iVar6 = *(int *)(puVar14 + 2);
              iVar22 = OPENSSL_sk_num(uVar9);
              if (iVar22 != iVar6) {
                for (iVar6 = 0; iVar22 = OPENSSL_sk_num(uVar9), iVar6 < iVar22; iVar6 = iVar6 + 1) {
                  uVar15 = OPENSSL_sk_value(uVar9,iVar6);
                  lVar12 = ossl_policy_level_find_node(lVar8,puVar14,uVar15);
                  if ((lVar12 == 0) &&
                     (iVar22 = tree_add_unmatched(lVar8,puVar10,uVar15,puVar14), iVar22 == 0))
                  goto LAB_00603b28;
                }
              }
            }
            else if ((*(int *)(puVar14 + 2) == 0) &&
                    (iVar6 = tree_add_unmatched(lVar8,puVar10,0,puVar14), iVar6 == 0))
            goto LAB_00603b28;
          }
          if ((*(long *)(local_80 + 0x10) != 0) &&
             (lVar12 = ossl_policy_level_add_node
                                 (lVar8,*puVar10,*(long *)(local_80 + 0x10),local_90,0), lVar12 == 0
             )) goto LAB_00603b28;
          uVar5 = *(uint *)(local_80 + 0x38);
        }
        lVar12 = lVar8;
        if ((uVar5 & 0x400) != 0) {
          uVar9 = *(undefined8 *)(local_80 + 0x28);
          iVar24 = OPENSSL_sk_num(uVar9);
          iVar24 = iVar24 + -1;
          if (-1 < iVar24) {
            do {
              puVar10 = (undefined8 *)OPENSSL_sk_value(uVar9,iVar24);
              if ((*(byte *)*puVar10 & 3) != 0) {
                *(int *)(puVar10[1] + 0x10) = *(int *)(puVar10[1] + 0x10) + -1;
                CRYPTO_free(puVar10);
                OPENSSL_sk_delete(uVar9,iVar24);
              }
              bVar28 = iVar24 != 0;
              iVar24 = iVar24 + -1;
            } while (bVar28);
          }
        }
        do {
          uVar9 = *(undefined8 *)(lVar12 + -0x18);
          lVar16 = lVar12 + -0x20;
          iVar24 = OPENSSL_sk_num(uVar9);
          iVar24 = iVar24 + -1;
          if (-1 < iVar24) {
            do {
              while (pvVar17 = (void *)OPENSSL_sk_value(uVar9,iVar24),
                    *(int *)((long)pvVar17 + 0x10) != 0) {
                bVar28 = iVar24 == 0;
                iVar24 = iVar24 + -1;
                if (bVar28) goto LAB_00603d21;
              }
              piVar1 = (int *)(*(long *)((long)pvVar17 + 8) + 0x10);
              *piVar1 = *piVar1 + -1;
              CRYPTO_free(pvVar17);
              OPENSSL_sk_delete(uVar9,iVar24);
              bVar28 = iVar24 != 0;
              iVar24 = iVar24 + -1;
            } while (bVar28);
          }
LAB_00603d21:
          pvVar17 = *(void **)(lVar12 + -0x10);
          if ((pvVar17 != (void *)0x0) && (*(int *)((long)pvVar17 + 0x10) == 0)) {
            if (*(long *)((long)pvVar17 + 8) != 0) {
              piVar1 = (int *)(*(long *)((long)pvVar17 + 8) + 0x10);
              *piVar1 = *piVar1 + -1;
            }
            CRYPTO_free(pvVar17);
            *(undefined8 *)(lVar12 + -0x10) = 0;
          }
          lVar27 = *(long *)(local_90 + 0x10);
          lVar12 = lVar16;
        } while (lVar16 != lVar27);
        if (*(long *)(lVar27 + 0x10) == 0) {
          X509_policy_tree_free(local_90);
          if (bVar4 == 0) goto LAB_006040c2;
          goto LAB_00604129;
        }
        local_78 = local_78 + 1;
        iVar24 = *(int *)(local_90 + 0x18);
        local_80 = lVar8;
      } while (local_78 < iVar24);
      pXVar23 = local_90 + 0x28;
      if (*(long *)(lVar27 + -0x10 + (long)iVar24 * 0x20) == 0) {
        if (iVar24 < 2) goto LAB_00603eaf;
LAB_00603db0:
        iVar24 = 1;
        do {
          lVar8 = *(long *)(lVar27 + 0x10);
          if (lVar8 == 0) break;
          for (iVar6 = 0; iVar22 = OPENSSL_sk_num(*(undefined8 *)(lVar27 + 0x28)), iVar6 < iVar22;
              iVar6 = iVar6 + 1) {
            lVar12 = OPENSSL_sk_value(*(undefined8 *)(lVar27 + 0x28),iVar6);
            if ((lVar8 == *(long *)(lVar12 + 8)) &&
               (iVar22 = tree_add_auth_node(pXVar23,lVar12), iVar22 == 0)) {
              if (pXVar23 == (X509_POLICY_TREE *)&local_48) {
                OPENSSL_sk_free(local_48);
              }
              goto LAB_00603b28;
            }
          }
          iVar24 = iVar24 + 1;
          lVar27 = lVar27 + 0x20;
        } while (iVar24 < *(int *)(local_90 + 0x18));
        if (pXVar23 != (X509_POLICY_TREE *)&local_48) goto LAB_00603eaf;
      }
      else {
LAB_0060405b:
        iVar24 = tree_add_auth_node(local_90 + 0x28);
        if (iVar24 == 0) goto LAB_00603b28;
        pXVar23 = (X509_POLICY_TREE *)&local_48;
        lVar27 = *(long *)(local_90 + 0x10);
        if (1 < *(int *)(local_90 + 0x18)) goto LAB_00603db0;
      }
      uVar9 = local_48;
      iVar6 = 2;
      iVar24 = OPENSSL_sk_num(policy_oids);
      if (0 < iVar24) {
LAB_00603ed5:
        plVar13 = *(long **)((long)*(int *)(local_90 + 0x18) * 0x20 + *(long *)(local_90 + 0x10) +
                            -0x10);
        for (iVar24 = 0; iVar22 = OPENSSL_sk_num(policy_oids), iVar24 < iVar22; iVar24 = iVar24 + 1)
        {
          pAVar11 = (ASN1_OBJECT *)OPENSSL_sk_value(policy_oids,iVar24);
          iVar22 = OBJ_obj2nid(pAVar11);
          if (iVar22 == 0x2ea) {
            *(uint *)(local_90 + 0x38) = *(uint *)(local_90 + 0x38) | 2;
            goto LAB_00603ff8;
          }
        }
        for (iVar24 = 0; iVar22 = OPENSSL_sk_num(policy_oids), iVar24 < iVar22; iVar24 = iVar24 + 1)
        {
          uVar15 = OPENSSL_sk_value(policy_oids,iVar24);
          lVar8 = ossl_policy_tree_find_sk(uVar9,uVar15);
          if (lVar8 == 0) {
            if (plVar13 != (long *)0x0) {
              puVar18 = (undefined4 *)ossl_policy_data_new(0,uVar15,*(uint *)*plVar13 & 0x10);
              if (puVar18 != (undefined4 *)0x0) {
                lVar8 = plVar13[1];
                uVar15 = *(undefined8 *)(*plVar13 + 0x10);
                *puVar18 = 0xc;
                *(undefined8 *)(puVar18 + 4) = uVar15;
                lVar8 = ossl_policy_level_add_node(0,puVar18,lVar8,local_90,1);
                lVar12 = *(long *)(local_90 + 0x30);
                goto joined_r0x00603f37;
              }
              goto LAB_00604163;
            }
          }
          else {
            lVar12 = *(long *)(local_90 + 0x30);
joined_r0x00603f37:
            if (lVar12 == 0) {
              lVar12 = OPENSSL_sk_new_null();
              *(long *)(local_90 + 0x30) = lVar12;
              if (lVar12 == 0) break;
            }
            iVar22 = OPENSSL_sk_push(lVar12,lVar8);
            if (iVar22 == 0) {
LAB_00604163:
              if (iVar6 == 2) {
                OPENSSL_sk_free(uVar9);
              }
              goto LAB_00603b28;
            }
          }
        }
LAB_00603ff8:
        if (iVar6 != 2) goto LAB_00604002;
      }
      OPENSSL_sk_free(uVar9);
    }
LAB_00604002:
    *ptree = local_90;
    if (bVar4 != 0) {
      psVar19 = X509_policy_tree_get0_user_policies(local_90);
      iVar24 = OPENSSL_sk_num(psVar19);
      if (iVar24 < 1) goto LAB_00604129;
    }
LAB_006040c2:
    iVar24 = 1;
  }
LAB_00603744:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar24;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


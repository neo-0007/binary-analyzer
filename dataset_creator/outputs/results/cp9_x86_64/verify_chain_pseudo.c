
undefined8 verify_chain(long param_1)

{
  byte bVar1;
  NAME_CONSTRAINTS *nc;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  X509_NAME *pXVar8;
  X509 *pXVar9;
  long lVar10;
  X509 *pXVar11;
  X509_NAME *name;
  X509_NAME_ENTRY *pXVar12;
  ASN1_OBJECT *o;
  GENERAL_NAMES *a;
  int *piVar13;
  int iVar14;
  int iVar15;
  long in_FS_OFFSET;
  bool bVar16;
  int local_64;
  int local_60;
  uint local_5c;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = build_chain();
  if (0 < (int)uVar6) {
    iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
    local_5c = 0;
    local_64 = 6;
    if (*(long *)(param_1 + 0xd8) == 0) {
      local_5c = (uint)(*(ulong *)(*(long *)(param_1 + 0x20) + 0x18) >> 6) & 1;
      local_64 = *(int *)(*(long *)(param_1 + 0x20) + 0x20);
    }
    if (0 < iVar2) {
      iVar15 = 0;
      iVar5 = -1;
      iVar14 = 0;
      local_60 = 0;
LAB_00592f91:
      do {
        pXVar9 = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar14);
        if (((*(byte *)(*(long *)(param_1 + 0x20) + 0x18) & 0x10) == 0) &&
           (((ulong)pXVar9[1].name & 0x200) != 0)) {
          *(int *)(param_1 + 0xac) = iVar14;
          *(X509 **)(param_1 + 0xb8) = pXVar9;
          *(undefined4 *)(param_1 + 0xb0) = 0x22;
          iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
          if (iVar3 == 0) goto LAB_00593120;
        }
        if ((local_5c == 0) && (((ulong)pXVar9[1].name & 0x400) != 0)) {
          *(int *)(param_1 + 0xac) = iVar14;
          *(X509 **)(param_1 + 0xb8) = pXVar9;
          *(undefined4 *)(param_1 + 0xb0) = 0x28;
          iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
          if (iVar3 == 0) goto LAB_00593120;
        }
        uVar4 = X509_check_ca(pXVar9);
        if (iVar5 == -1) {
          if (((*(byte *)(*(long *)(param_1 + 0x20) + 0x18) & 0x20) != 0) && (1 < uVar4)) {
            *(int *)(param_1 + 0xac) = iVar14;
joined_r0x0059320c:
            pXVar11 = pXVar9;
            if (pXVar9 == (X509 *)0x0) {
              pXVar11 = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar14);
            }
            *(X509 **)(param_1 + 0xb8) = pXVar11;
            *(undefined4 *)(param_1 + 0xb0) = 0x4f;
LAB_00592d52:
            iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
            if (iVar3 == 0) goto LAB_00593120;
          }
        }
        else if (iVar5 == 0) {
          if (uVar4 != 0) {
            *(int *)(param_1 + 0xac) = iVar14;
            pXVar11 = pXVar9;
            if (pXVar9 == (X509 *)0x0) {
              pXVar11 = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar14);
            }
            *(X509 **)(param_1 + 0xb8) = pXVar11;
            *(undefined4 *)(param_1 + 0xb0) = 0x25;
            goto LAB_00592d52;
          }
        }
        else if ((uVar4 == 0) ||
                (((iVar14 + 1 < iVar2 || ((*(byte *)(*(long *)(param_1 + 0x20) + 0x18) & 0x20) != 0)
                  ) && (uVar4 != 1)))) {
          *(int *)(param_1 + 0xac) = iVar14;
          goto joined_r0x0059320c;
        }
        if (iVar2 != 1) {
          lVar7 = X509_get0_pubkey(pXVar9);
          if (lVar7 == 0) {
LAB_005933d0:
            *(int *)(param_1 + 0xac) = iVar14;
            pXVar11 = pXVar9;
            if (pXVar9 == (X509 *)0x0) {
              pXVar11 = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar14);
            }
            *(X509 **)(param_1 + 0xb8) = pXVar11;
            *(undefined4 *)(param_1 + 0xb0) = 1;
LAB_005933f5:
            iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
            if (iVar3 == 0) goto LAB_00593120;
          }
          else {
            iVar3 = EVP_PKEY_get_id();
            if (iVar3 == 0x198) {
              iVar3 = EVP_PKEY_get_int_param(lVar7,"decoded-from-explicit",&local_44);
              if (iVar3 < 0) goto LAB_005933d0;
              if (local_44 == 0) goto LAB_00592d9b;
              *(int *)(param_1 + 0xac) = iVar14;
              pXVar11 = pXVar9;
              if (pXVar9 == (X509 *)0x0) {
                pXVar11 = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar14);
              }
              *(X509 **)(param_1 + 0xb8) = pXVar11;
              *(undefined4 *)(param_1 + 0xb0) = 0x5e;
              goto LAB_005933f5;
            }
          }
LAB_00592d9b:
          if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x18) & 0x20) != 0) {
            if (pXVar9[1].signature != (ASN1_BIT_STRING *)0xffffffffffffffff) {
              if (((ulong)pXVar9[1].name & 0x10) == 0) {
                *(int *)(param_1 + 0xac) = iVar14;
                *(X509 **)(param_1 + 0xb8) = pXVar9;
                *(undefined4 *)(param_1 + 0xb0) = 0x50;
                iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
                if (iVar3 == 0) goto LAB_00593120;
                bVar1 = *(byte *)((long)&pXVar9[1].name + 4);
              }
              else {
                bVar1 = *(byte *)((long)&pXVar9[1].name + 4);
              }
              if ((bVar1 & 4) == 0) {
                *(int *)(param_1 + 0xac) = iVar14;
                *(X509 **)(param_1 + 0xb8) = pXVar9;
                *(undefined4 *)(param_1 + 0xb0) = 0x51;
                iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
                if (iVar3 == 0) goto LAB_00593120;
              }
            }
            uVar4 = *(uint *)&pXVar9[1].name;
            if ((uVar4 & 0x10011) == 0x11) {
              *(int *)(param_1 + 0xac) = iVar14;
              *(X509 **)(param_1 + 0xb8) = pXVar9;
              *(undefined4 *)(param_1 + 0xb0) = 0x59;
              iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
              if (iVar3 == 0) goto LAB_00593120;
              uVar4 = *(uint *)&pXVar9[1].name;
            }
            if ((uVar4 & 0x10) == 0) {
              if (((ulong)pXVar9[1].name & 0x400000000) != 0) {
                *(int *)(param_1 + 0xac) = iVar14;
                *(X509 **)(param_1 + 0xb8) = pXVar9;
                *(undefined4 *)(param_1 + 0xb0) = 0x52;
                goto LAB_00593387;
              }
            }
            else if ((uVar4 & 2) == 0) {
              *(int *)(param_1 + 0xac) = iVar14;
              *(X509 **)(param_1 + 0xb8) = pXVar9;
              *(undefined4 *)(param_1 + 0xb0) = 0x5c;
LAB_00593387:
              iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
              if (iVar3 == 0) goto LAB_00593120;
            }
            pXVar8 = X509_get_issuer_name(pXVar9);
            iVar3 = X509_NAME_entry_count(pXVar8);
            if (iVar3 == 0) {
              *(int *)(param_1 + 0xac) = iVar14;
              *(X509 **)(param_1 + 0xb8) = pXVar9;
              *(undefined4 *)(param_1 + 0xb0) = 0x53;
              iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
              if (iVar3 == 0) goto LAB_00593120;
            }
            if ((((ulong)pXVar9[1].name & 0x200000010) != 0) || (pXVar9[1].ex_kusage == 0)) {
              pXVar8 = X509_get_subject_name(pXVar9);
              iVar3 = X509_NAME_entry_count(pXVar8);
              if (iVar3 == 0) {
                *(int *)(param_1 + 0xac) = iVar14;
                *(X509 **)(param_1 + 0xb8) = pXVar9;
                *(undefined4 *)(param_1 + 0xb0) = 0x54;
                iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
                if (iVar3 == 0) goto LAB_00593120;
              }
            }
            pXVar8 = X509_get_subject_name(pXVar9);
            iVar3 = X509_NAME_entry_count(pXVar8);
            if (iVar3 == 0) {
              if (pXVar9[1].ex_kusage != 0) {
                if (((ulong)pXVar9[1].name & 0x80000) != 0) {
                  iVar3 = OPENSSL_sk_num();
                  if (0 < iVar3) goto LAB_00592e78;
                  goto LAB_005932ad;
                }
                *(int *)(param_1 + 0xac) = iVar14;
                *(X509 **)(param_1 + 0xb8) = pXVar9;
                *(undefined4 *)(param_1 + 0xb0) = 0x58;
                iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
                if (iVar3 != 0) goto LAB_00593290;
                goto LAB_00593120;
              }
            }
            else {
LAB_00593290:
              if ((pXVar9[1].ex_kusage != 0) && (iVar3 = OPENSSL_sk_num(), iVar3 < 1)) {
LAB_005932ad:
                *(int *)(param_1 + 0xac) = iVar14;
                *(X509 **)(param_1 + 0xb8) = pXVar9;
                *(undefined4 *)(param_1 + 0xb0) = 0x57;
                iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
                if (iVar3 == 0) goto LAB_00593120;
              }
            }
LAB_00592e78:
            iVar3 = X509_ALGOR_cmp((X509_ALGOR *)&pXVar9->altname,(X509_ALGOR *)&pXVar9->name);
            if (iVar3 != 0) {
              *(int *)(param_1 + 0xac) = iVar14;
              *(X509 **)(param_1 + 0xb8) = pXVar9;
              *(undefined4 *)(param_1 + 0xb0) = 0x4e;
              iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
              if (iVar3 == 0) goto LAB_00593120;
            }
            if ((pXVar9[1].ex_pathlen != 0) && (((ulong)pXVar9[1].name & 0x20000) != 0)) {
              *(int *)(param_1 + 0xac) = iVar14;
              *(X509 **)(param_1 + 0xb8) = pXVar9;
              *(undefined4 *)(param_1 + 0xb0) = 0x5a;
              iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
              if (iVar3 == 0) goto LAB_00593120;
            }
            if ((*(long *)&pXVar9[1].ex_data.dummy == 0) || (((ulong)pXVar9[1].name & 0x40000) == 0)
               ) {
              lVar7 = X509_get_version(pXVar9);
              if (1 < lVar7) goto LAB_00592ed2;
LAB_005934ec:
              uVar6 = X509_get0_extensions(pXVar9);
              iVar3 = OPENSSL_sk_num(uVar6);
              if (iVar3 < 1) goto LAB_00592f10;
              *(int *)(param_1 + 0xac) = iVar14;
              *(X509 **)(param_1 + 0xb8) = pXVar9;
              *(undefined4 *)(param_1 + 0xb0) = 0x5d;
            }
            else {
              *(int *)(param_1 + 0xac) = iVar14;
              *(X509 **)(param_1 + 0xb8) = pXVar9;
              *(undefined4 *)(param_1 + 0xb0) = 0x5b;
              iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
              if (iVar3 == 0) goto LAB_00593120;
              lVar7 = X509_get_version(pXVar9);
              if (lVar7 < 2) goto LAB_005934ec;
LAB_00592ed2:
              if ((iVar14 + 1 < iVar2) &&
                 (((long *)pXVar9[1].ex_pathlen == (long *)0x0 ||
                  (*(long *)pXVar9[1].ex_pathlen == 0)))) {
                *(int *)(param_1 + 0xac) = iVar14;
                *(X509 **)(param_1 + 0xb8) = pXVar9;
                *(undefined4 *)(param_1 + 0xb0) = 0x55;
                iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
                if (iVar3 == 0) goto LAB_00593120;
              }
              if ((((ulong)pXVar9[1].name & 0x10) == 0) || (*(long *)&pXVar9[1].ex_data.dummy != 0))
              goto LAB_00592f10;
              *(int *)(param_1 + 0xac) = iVar14;
              *(X509 **)(param_1 + 0xb8) = pXVar9;
              *(undefined4 *)(param_1 + 0xb0) = 0x56;
            }
            iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
            if (iVar3 == 0) goto LAB_00593120;
          }
        }
LAB_00592f10:
        if (local_64 < 1) {
LAB_00592f1c:
          if (1 < iVar14) goto LAB_00592f25;
LAB_005931cf:
          uVar4 = *(uint *)&pXVar9[1].name;
          if (iVar14 != 0) goto LAB_00592f4d;
        }
        else {
          if ((iVar14 < *(int *)(param_1 + 0x94)) ||
             (local_64 != *(int *)(*(long *)(param_1 + 0x20) + 0x20))) {
            iVar5 = X509_check_purpose(pXVar9,local_64,(uint)(0 < iVar5));
            if (iVar5 != 0) {
LAB_00593179:
              if ((iVar5 == 1) || ((*(byte *)(*(long *)(param_1 + 0x20) + 0x18) & 0x20) == 0))
              goto LAB_00592f1c;
            }
LAB_00593190:
            *(int *)(param_1 + 0xac) = iVar14;
          }
          else {
            iVar3 = X509_check_trust(pXVar9,*(int *)(*(long *)(param_1 + 0x20) + 0x24),4);
            if (iVar3 == 1) goto LAB_00592f1c;
            if (iVar3 == 2) goto LAB_00593190;
            iVar5 = X509_check_purpose(pXVar9,local_64,(uint)(0 < iVar5));
            if (iVar5 != 0) goto LAB_00593179;
            *(int *)(param_1 + 0xac) = iVar14;
          }
          pXVar11 = pXVar9;
          if (pXVar9 == (X509 *)0x0) {
            pXVar11 = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar14);
          }
          *(X509 **)(param_1 + 0xb8) = pXVar11;
          *(undefined4 *)(param_1 + 0xb0) = 0x1a;
          iVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
          if (iVar5 == 0) goto LAB_00593120;
          if (iVar14 < 2) goto LAB_005931cf;
LAB_00592f25:
          if ((pXVar9[1].signature != (ASN1_BIT_STRING *)0xffffffffffffffff) &&
             ((long)&(pXVar9[1].signature)->length + (long)iVar15 < (long)local_60)) {
            *(int *)(param_1 + 0xac) = iVar14;
            *(X509 **)(param_1 + 0xb8) = pXVar9;
            *(undefined4 *)(param_1 + 0xb0) = 0x19;
            iVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
            if (iVar5 == 0) goto LAB_00593120;
          }
          uVar4 = *(uint *)&pXVar9[1].name;
LAB_00592f4d:
          local_60 = local_60 + (uint)((uVar4 & 0x20) == 0);
        }
        if ((uVar4 & 0x400) != 0) {
          lVar7._0_4_ = pXVar9[1].valid;
          lVar7._4_4_ = pXVar9[1].references;
          if (lVar7 != -1) {
            if (lVar7 < iVar15) {
              *(int *)(param_1 + 0xac) = iVar14;
              *(X509 **)(param_1 + 0xb8) = pXVar9;
              *(undefined4 *)(param_1 + 0xb0) = 0x26;
              iVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
              if (iVar5 == 0) goto LAB_00593120;
              lVar7._0_4_ = pXVar9[1].valid;
              lVar7._4_4_ = pXVar9[1].references;
            }
            iVar15 = (int)lVar7;
          }
          iVar14 = iVar14 + 1;
          iVar15 = iVar15 + 1;
          iVar5 = 0;
          if (iVar2 == iVar14) break;
          goto LAB_00592f91;
        }
        iVar14 = iVar14 + 1;
        iVar5 = 1;
      } while (iVar2 != iVar14);
    }
    iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
    if ((*(int *)(*(long *)(param_1 + 0x20) + 0x2c) < 1) || (iVar2 < 1)) {
LAB_005937e0:
      uVar6 = check_id();
      if (0 < (int)uVar6) {
        iVar2 = X509_get_pubkey_parameters((EVP_PKEY *)0x0,*(stack_st_X509 **)(param_1 + 0x98));
        if (iVar2 == 0) {
LAB_00593b76:
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (**(code **)(param_1 + 0x50))(param_1);
          if (0 < (int)uVar6) {
            iVar2 = X509_chain_check_suiteb(param_1 + 0xac,0,*(undefined8 *)(param_1 + 0x98));
            if (iVar2 != 0) {
              uVar6 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),
                                       *(undefined4 *)(param_1 + 0xac));
              *(int *)(param_1 + 0xb0) = iVar2;
              *(undefined8 *)(param_1 + 0xb8) = uVar6;
              iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
              if (iVar2 == 0) goto LAB_00593120;
            }
            if (*(code **)(param_1 + 0x30) == (code *)0x0) {
              uVar6 = internal_verify(param_1);
            }
            else {
              uVar6 = (**(code **)(param_1 + 0x30))(param_1);
            }
            if (0 < (int)uVar6) {
              iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
              iVar2 = iVar2 + -1;
              if (-1 < iVar2) {
                do {
                  pXVar9 = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar2);
                  if ((iVar2 == 0) || (((ulong)pXVar9[1].name & 0x20) == 0)) {
                    if (((ulong)pXVar9[1].name & 0x400) != 0) {
                      pXVar8 = X509_get_subject_name(pXVar9);
                      name = X509_get_issuer_name(pXVar9);
                      iVar5 = X509_NAME_entry_count(pXVar8);
                      iVar14 = iVar5 + -1;
                      if (0 < iVar14) {
                        iVar15 = X509_NAME_entry_count(pXVar8);
                        iVar3 = X509_NAME_entry_count(name);
                        if (iVar15 == iVar3 + 1) {
                          pXVar12 = X509_NAME_get_entry(pXVar8,iVar14);
                          iVar15 = X509_NAME_ENTRY_set(pXVar12);
                          pXVar12 = X509_NAME_get_entry(pXVar8,iVar5 + -2);
                          iVar5 = X509_NAME_ENTRY_set(pXVar12);
                          if (iVar15 != iVar5) {
                            pXVar8 = X509_NAME_dup(pXVar8);
                            if (pXVar8 == (X509_NAME *)0x0) {
                              ERR_new();
                              ERR_set_debug("../crypto/x509/x509_vfy.c",0x2c4,
                                            "check_name_constraints");
                              ERR_set_error(0xb,0xc0100,0);
                              uVar6 = 0xffffffff;
                              *(undefined4 *)(param_1 + 0xb0) = 0x11;
                              goto LAB_00593122;
                            }
                            pXVar12 = X509_NAME_delete_entry(pXVar8,iVar14);
                            o = X509_NAME_ENTRY_get_object(pXVar12);
                            iVar14 = OBJ_obj2nid(o);
                            if ((iVar14 == 0xd) &&
                               (iVar14 = X509_NAME_cmp(pXVar8,name), iVar14 == 0)) {
                              X509_NAME_ENTRY_free(pXVar12);
                              X509_NAME_free(pXVar8);
                              goto LAB_0059398e;
                            }
                            X509_NAME_ENTRY_free(pXVar12);
                            X509_NAME_free(pXVar8);
                          }
                        }
                      }
                      *(int *)(param_1 + 0xac) = iVar2;
                      *(X509 **)(param_1 + 0xb8) = pXVar9;
                      *(undefined4 *)(param_1 + 0xb0) = 0x48;
                      iVar14 = (**(code **)(param_1 + 0x38))(0,param_1);
                      if (iVar14 == 0) goto LAB_00593120;
                    }
LAB_0059398e:
                    iVar14 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
                    if (iVar2 < iVar14 + -1) {
                      iVar14 = iVar14 + -2;
LAB_005939aa:
                      lVar7 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar14 + 1);
                      nc = *(NAME_CONSTRAINTS **)(lVar7 + 0x120);
                      if (nc != (NAME_CONSTRAINTS *)0x0) {
                        iVar5 = NAME_CONSTRAINTS_check(pXVar9,nc);
                        if (iVar2 == 0 && iVar5 == 0) {
                          uVar4 = *(uint *)(*(long *)(param_1 + 0x20) + 0x40);
                          if ((uVar4 & 0x20) == 0) {
                            if ((uVar4 & 1) == 0) {
                              a = (GENERAL_NAMES *)
                                  X509_get_ext_d2i(pXVar9,0x55,(int *)0x0,(int *)0x0);
                              iVar5 = 0;
                              if (a != (GENERAL_NAMES *)0x0) {
                                for (; iVar15 = OPENSSL_sk_num(a), iVar5 < iVar15; iVar5 = iVar5 + 1
                                    ) {
                                  piVar13 = (int *)OPENSSL_sk_value(a,iVar5);
                                  if (*piVar13 == 2) {
                                    GENERAL_NAMES_free(a);
                                    goto LAB_00593b88;
                                  }
                                }
                                GENERAL_NAMES_free(a);
                              }
                            }
                            iVar5 = NAME_CONSTRAINTS_check_CN(pXVar9,nc);
                            goto LAB_00593a6c;
                          }
LAB_00593b88:
                          if (iVar14 == 0) break;
                          goto LAB_00593aa7;
                        }
LAB_00593a6c:
                        if (iVar5 != 0) {
                          if (iVar5 != 0x11) {
                            *(int *)(param_1 + 0xac) = iVar2;
                            *(X509 **)(param_1 + 0xb8) = pXVar9;
                            *(int *)(param_1 + 0xb0) = iVar5;
                            iVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
                            if (iVar5 != 0) goto LAB_00593a9f;
                            goto LAB_00593120;
                          }
                          goto LAB_00593b76;
                        }
                      }
LAB_00593a9f:
                      if (iVar14 <= iVar2) goto LAB_00593c20;
LAB_00593aa7:
                      iVar14 = iVar14 + -1;
                      goto LAB_005939aa;
                    }
                  }
LAB_00593c20:
                  bVar16 = iVar2 != 0;
                  iVar2 = iVar2 + -1;
                } while (bVar16);
              }
              uVar6 = X509v3_asid_validate_path(param_1);
              if (((0 < (int)uVar6) && (uVar6 = X509v3_addr_validate_path(param_1), 0 < (int)uVar6))
                 && ((*(byte *)(*(long *)(param_1 + 0x20) + 0x18) & 0x80) != 0)) {
                if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00593be7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  uVar6 = (**(code **)(param_1 + 0x70))(param_1);
                  return uVar6;
                }
                goto LAB_00593c65;
              }
            }
          }
        }
      }
    }
    else {
      iVar14 = 0;
      lVar7 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),0);
LAB_00593070:
      do {
        do {
          if (iVar14 < iVar2 + -1) {
            local_44 = -1;
            iVar5 = *(int *)(*(long *)(param_1 + 0x20) + 0x2c);
            if (0 < iVar5) {
              iVar15 = X509_get_signature_info(lVar7,0,0,&local_44,0);
              if (iVar15 != 0) {
                if (5 < iVar5) {
                  iVar5 = 5;
                }
                if (*(int *)(minbits_table + (long)(iVar5 + -1) * 4) <= local_44)
                goto joined_r0x005937d2;
              }
              *(int *)(param_1 + 0xac) = iVar14;
              if (lVar7 == 0) {
                lVar7 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar14);
              }
              *(long *)(param_1 + 0xb8) = lVar7;
              *(undefined4 *)(param_1 + 0xb0) = 0x44;
              iVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
              if (iVar5 == 0) goto LAB_00593120;
            }
          }
joined_r0x005937d2:
          if (iVar2 == iVar14 + 1) goto LAB_005937e0;
          iVar14 = iVar14 + 1;
          lVar7 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98));
          lVar10 = X509_get0_pubkey(lVar7);
          iVar5 = *(int *)(*(long *)(param_1 + 0x20) + 0x2c);
        } while (iVar5 < 1);
        if (lVar10 != 0) {
          iVar15 = EVP_PKEY_get_security_bits(lVar10);
          if (5 < iVar5) {
            iVar5 = 5;
          }
          if (*(int *)(minbits_table + (long)(iVar5 + -1) * 4) <= iVar15) goto LAB_00593070;
        }
        *(int *)(param_1 + 0xac) = iVar14;
        lVar10 = lVar7;
        if (lVar7 == 0) {
          lVar10 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar14);
        }
        *(long *)(param_1 + 0xb8) = lVar10;
        *(undefined4 *)(param_1 + 0xb0) = 0x43;
        iVar5 = (**(code **)(param_1 + 0x38))(0);
      } while (iVar5 != 0);
LAB_00593120:
      uVar6 = 0;
    }
  }
LAB_00593122:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
LAB_00593c65:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


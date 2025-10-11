
bool get_crl_sk(long param_1,long *param_2,long *param_3,undefined8 *param_4,uint *param_5,
               uint *param_6,undefined8 param_7)

{
  X509 *a;
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  X509_NAME *pXVar7;
  X509_NAME *pXVar8;
  X509 *pXVar9;
  undefined8 *puVar10;
  GENERAL_NAME *a_00;
  GENERAL_NAME *b;
  int *piVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  long lVar15;
  long in_FS_OFFSET;
  int local_d8;
  uint local_d4;
  uint local_c0;
  uint local_bc;
  long local_b8;
  X509 *local_b0;
  X509 *local_a0;
  uint local_90;
  uint local_8c;
  int local_48;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c0 = *param_5;
  local_90 = 0;
  local_b0 = (X509 *)0x0;
  local_a0 = (X509 *)0x0;
  local_b8 = 0;
  local_d8 = 0;
  a = *(X509 **)(param_1 + 0xb8);
  iVar2 = OPENSSL_sk_num(param_7);
  if (0 < iVar2) {
    do {
      lVar6 = OPENSSL_sk_value(param_7,local_d8);
      uVar3 = *(uint *)(lVar6 + 0x98);
      if ((uVar3 & 2) == 0) {
        local_bc = *param_6;
        if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x19) & 0x10) == 0) {
          if ((uVar3 & 0x60) == 0) goto LAB_00592034;
        }
        else if ((uVar3 & 0x40) == 0) {
          if (*(long *)(lVar6 + 0xa8) == 0) goto LAB_00592034;
        }
        else if ((~local_bc & *(uint *)(lVar6 + 0x9c)) != 0) {
LAB_00592034:
          pXVar7 = (X509_NAME *)X509_CRL_get_issuer(lVar6);
          pXVar8 = X509_get_issuer_name(a);
          iVar2 = X509_NAME_cmp(pXVar8,pXVar7);
          if (iVar2 == 0) {
            local_d4 = 0x20;
          }
          else {
            if ((*(byte *)(lVar6 + 0x98) & 0x20) == 0) goto LAB_00592170;
            local_d4 = 0;
          }
          uVar3 = local_d4 | 0x100;
          if ((*(byte *)(lVar6 + 0x85) & 2) != 0) {
            uVar3 = local_d4;
          }
          iVar2 = check_crl_time(param_1,lVar6,0);
          local_d4 = uVar3 | 0x40;
          if (iVar2 == 0) {
            local_d4 = uVar3;
          }
          pXVar7 = (X509_NAME *)X509_CRL_get_issuer(lVar6);
          iVar2 = *(int *)(param_1 + 0xac);
          iVar4 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
          iVar14 = iVar4 + -1;
          if (iVar2 != iVar4 + -1) {
            iVar14 = iVar2 + 1;
          }
          pXVar9 = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar14);
          iVar2 = X509_check_akid(pXVar9,*(AUTHORITY_KEYID **)(lVar6 + 0x88));
          if ((iVar2 == 0) && ((local_d4 & 0x20) != 0)) {
            local_d4 = local_d4 | 0x1c;
            local_b0 = pXVar9;
          }
          else {
            do {
              iVar14 = iVar14 + 1;
              iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
              if (iVar2 <= iVar14) {
                iVar2 = 0;
                if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x19) & 0x10) != 0) goto LAB_00592344;
                goto LAB_0059215c;
              }
              pXVar9 = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar14);
              pXVar8 = X509_get_subject_name(pXVar9);
              iVar2 = X509_NAME_cmp(pXVar8,pXVar7);
            } while ((iVar2 != 0) ||
                    (iVar2 = X509_check_akid(pXVar9,*(AUTHORITY_KEYID **)(lVar6 + 0x88)), iVar2 != 0
                    ));
            local_d4 = local_d4 | 0xc;
            local_b0 = pXVar9;
          }
LAB_0059215c:
          if ((local_d4 & 4) != 0) {
LAB_00592399:
            uVar3 = *(uint *)(lVar6 + 0x98);
            if ((uVar3 & 0x10) == 0) {
              if (((ulong)a[1].name & 0x10) == 0) {
                uVar3 = uVar3 & 8;
              }
              else {
                uVar3 = uVar3 & 4;
              }
              if (uVar3 == 0) {
                local_8c = *(uint *)(lVar6 + 0x9c);
                iVar2 = 0;
                while (iVar14 = OPENSSL_sk_num(a[1].ex_flags), iVar2 < iVar14) {
                  iVar14 = 0;
                  puVar10 = (undefined8 *)OPENSSL_sk_value(a[1].ex_flags,iVar2);
                  pXVar7 = (X509_NAME *)X509_CRL_get_issuer(lVar6);
                  lVar15 = puVar10[2];
                  if (lVar15 == 0) {
                    if ((local_d4 & 0x20) == 0) goto LAB_00592538;
LAB_0059246c:
                    if (*(undefined8 **)(lVar6 + 0x90) == (undefined8 *)0x0) {
LAB_005925ba:
                      local_8c = local_8c & *(uint *)(puVar10 + 3);
                      goto LAB_005925c1;
                    }
                    piVar11 = (int *)**(undefined8 **)(lVar6 + 0x90);
                    piVar1 = (int *)*puVar10;
                    if ((piVar1 == (int *)0x0) || (piVar11 == (int *)0x0)) goto LAB_005925ba;
                    if (*piVar1 != 1) {
                      iVar14 = 0;
                      if (*piVar11 == 1) {
                        pXVar7 = *(X509_NAME **)(piVar11 + 4);
                        if (pXVar7 != (X509_NAME *)0x0) {
                          uVar12 = *(undefined8 *)(piVar1 + 2);
                          goto LAB_00592574;
                        }
                      }
                      else {
                        iVar4 = OPENSSL_sk_num(*(undefined8 *)(piVar1 + 2));
                        if (0 < iVar4) {
                          do {
                            a_00 = (GENERAL_NAME *)
                                   OPENSSL_sk_value(*(undefined8 *)(piVar1 + 2),iVar14);
                            for (iVar4 = 0; iVar5 = OPENSSL_sk_num(*(undefined8 *)(piVar11 + 2)),
                                iVar4 < iVar5; iVar4 = iVar4 + 1) {
                              b = (GENERAL_NAME *)
                                  OPENSSL_sk_value(*(undefined8 *)(piVar11 + 2),iVar4);
                              iVar5 = GENERAL_NAME_cmp(a_00,b);
                              if (iVar5 == 0) goto LAB_005925ba;
                            }
                            iVar14 = iVar14 + 1;
                            iVar4 = OPENSSL_sk_num(*(undefined8 *)(piVar1 + 2));
                          } while (iVar14 < iVar4);
                        }
                      }
                      goto LAB_00592538;
                    }
                    pXVar7 = *(X509_NAME **)(piVar1 + 4);
                    if (pXVar7 == (X509_NAME *)0x0) goto LAB_00592538;
                    if (*piVar11 != 1) {
                      uVar12 = *(undefined8 *)(piVar11 + 2);
LAB_00592574:
                      for (iVar14 = 0; iVar4 = OPENSSL_sk_num(uVar12), iVar14 < iVar4;
                          iVar14 = iVar14 + 1) {
                        piVar11 = (int *)OPENSSL_sk_value(uVar12,iVar14);
                        if ((*piVar11 == 4) &&
                           (iVar4 = X509_NAME_cmp(pXVar7,*(X509_NAME **)(piVar11 + 2)), iVar4 == 0))
                        goto LAB_005925ba;
                      }
                      goto LAB_00592538;
                    }
                    if (*(X509_NAME **)(piVar11 + 4) == (X509_NAME *)0x0) goto LAB_00592538;
                    iVar14 = X509_NAME_cmp(pXVar7,*(X509_NAME **)(piVar11 + 4));
                    if (iVar14 == 0) goto LAB_005925ba;
                    iVar2 = iVar2 + 1;
                  }
                  else {
                    for (; iVar4 = OPENSSL_sk_num(lVar15), iVar14 < iVar4; iVar14 = iVar14 + 1) {
                      piVar11 = (int *)OPENSSL_sk_value(puVar10[2],iVar14);
                      if ((*piVar11 == 4) &&
                         (iVar4 = X509_NAME_cmp(*(X509_NAME **)(piVar11 + 2),pXVar7), iVar4 == 0))
                      goto LAB_0059246c;
                      lVar15 = puVar10[2];
                    }
LAB_00592538:
                    iVar2 = iVar2 + 1;
                  }
                }
                if (((*(long **)(lVar6 + 0x90) == (long *)0x0) || (**(long **)(lVar6 + 0x90) == 0))
                   && ((local_d4 & 0x20) != 0)) {
LAB_005925c1:
                  if ((local_8c & ~local_bc) == 0) goto LAB_00592170;
                  local_bc = local_bc | local_8c;
                  local_d4 = local_d4 | 0x80;
                }
              }
            }
            if ((int)local_c0 <= (int)local_d4) {
              if ((local_c0 == local_d4) && (local_b8 != 0)) {
                uVar12 = X509_CRL_get0_lastUpdate(lVar6);
                uVar13 = X509_CRL_get0_lastUpdate(local_b8);
                iVar2 = ASN1_TIME_diff(&local_48,&local_44,uVar13,uVar12);
                if ((iVar2 == 0) || ((local_48 < 1 && (local_44 < 1)))) goto LAB_00592170;
              }
              local_a0 = local_b0;
              local_90 = local_bc;
              local_c0 = local_d4;
              local_b8 = lVar6;
            }
          }
        }
      }
LAB_00592170:
      local_d8 = local_d8 + 1;
      iVar2 = OPENSSL_sk_num(param_7);
    } while (local_d8 < iVar2);
  }
  if (local_b8 != 0) {
    X509_CRL_free((X509_CRL *)*param_2);
    *param_2 = local_b8;
    *param_4 = local_a0;
    *param_5 = local_c0;
    *param_6 = local_90;
    X509_CRL_up_ref(local_b8);
    X509_CRL_free((X509_CRL *)*param_3);
    lVar6 = *(long *)(param_1 + 0x20);
    *param_3 = 0;
    if (((*(byte *)(lVar6 + 0x19) & 0x20) != 0) &&
       (((*(uint *)(*(long *)(param_1 + 0xb8) + 0xe8) | *(uint *)(local_b8 + 0x84)) & 0x1000) != 0))
    {
      iVar14 = 0;
      iVar2 = OPENSSL_sk_num(param_7);
      if (0 < iVar2) {
        do {
          lVar6 = OPENSSL_sk_value(param_7,iVar14);
          if ((*(long *)(lVar6 + 0xa8) != 0) && (*(long *)(local_b8 + 0xa0) != 0)) {
            pXVar7 = (X509_NAME *)X509_CRL_get_issuer(lVar6);
            pXVar8 = (X509_NAME *)X509_CRL_get_issuer(local_b8);
            iVar2 = X509_NAME_cmp(pXVar8,pXVar7);
            if (((iVar2 == 0) &&
                (((iVar2 = crl_extension_match(lVar6,local_b8,0x5a), iVar2 != 0 &&
                  (iVar2 = crl_extension_match(lVar6,local_b8,0x302), iVar2 != 0)) &&
                 (iVar2 = ASN1_INTEGER_cmp(*(ASN1_INTEGER **)(lVar6 + 0xa8),
                                           *(ASN1_INTEGER **)(local_b8 + 0xa0)), iVar2 < 1)))) &&
               (iVar2 = ASN1_INTEGER_cmp(*(ASN1_INTEGER **)(lVar6 + 0xa0),
                                         *(ASN1_INTEGER **)(local_b8 + 0xa0)), 0 < iVar2)) {
              iVar2 = check_crl_time(param_1,lVar6,0);
              if (iVar2 != 0) {
                *param_5 = *param_5 | 2;
              }
              X509_CRL_up_ref(lVar6);
              *param_3 = lVar6;
              goto LAB_005922c0;
            }
          }
          iVar14 = iVar14 + 1;
          iVar2 = OPENSSL_sk_num(param_7);
        } while (iVar14 < iVar2);
      }
      *param_3 = 0;
    }
  }
LAB_005922c0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0x1bf < (int)local_c0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
LAB_00592344:
  iVar14 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x10));
  if (iVar14 <= iVar2) goto LAB_0059215c;
  pXVar9 = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x10),iVar2);
  pXVar8 = X509_get_subject_name(pXVar9);
  iVar14 = X509_NAME_cmp(pXVar8,pXVar7);
  if ((iVar14 == 0) &&
     (iVar14 = X509_check_akid(pXVar9,*(AUTHORITY_KEYID **)(lVar6 + 0x88)), iVar14 == 0)) {
    local_d4 = local_d4 | 4;
    local_b0 = pXVar9;
    goto LAB_00592399;
  }
  iVar2 = iVar2 + 1;
  goto LAB_00592344;
}


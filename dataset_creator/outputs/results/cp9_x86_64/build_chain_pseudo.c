
ulong build_chain(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  X509 *pXVar10;
  short *psVar11;
  int iVar12;
  int iVar13;
  long in_FS_OFFSET;
  byte bVar14;
  int local_80;
  int local_7c;
  long local_70;
  uint local_68;
  uint local_50;
  X509 *local_48;
  long local_40;
  
  lVar2 = *(long *)(param_1 + 0xf0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
  uVar1 = *(undefined4 *)(param_1 + 0xb0);
  if ((iVar5 == 1) && (*(int *)(param_1 + 0x94) == 1)) {
    bVar14 = *(long *)(param_1 + 0x10) != 0;
    if (((lVar2 == 0) || ((*(uint *)(lVar2 + 0x28) & 3) != 0)) ||
       ((*(uint *)(lVar2 + 0x28) & 0xc) == 0)) {
      if ((*(long *)(param_1 + 0x10) == 0) ||
         (uVar9 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x18), (uVar9 & 0x8000) != 0)) {
        local_50 = 0;
        bVar14 = bVar14 | 2;
      }
      else {
        local_50 = ((uint)(uVar9 >> 0x14) ^ 1) & 1;
      }
      local_70 = OPENSSL_sk_new_null();
      if (local_70 == 0) goto LAB_005919cc;
      bVar4 = true;
      if (lVar2 != 0) goto LAB_00590ff5;
LAB_00591024:
      iVar5 = X509_add_certs(local_70,*(undefined8 *)(param_1 + 0x10),0);
      if (iVar5 == 0) goto LAB_00591847;
      local_80 = *(int *)(*(long *)(param_1 + 0x20) + 0x28);
      if (local_80 < 0x40000000) {
        local_80 = local_80 + 1;
      }
      else {
        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x28) = 0x3fffffff;
        local_80 = 0x40000000;
      }
      if (bVar14 == 0) {
        OPENSSL_sk_free(local_70);
        iVar5 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
        if (iVar5 <= local_80) {
          if (lVar2 != 0) {
LAB_005912ab:
            if ((*(byte *)(lVar2 + 0x28) & 4) != 0) {
              iVar6 = *(int *)(param_1 + 0x94) + -1;
              lVar3 = *(long *)(param_1 + 0xf0);
              pXVar10 = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar6);
              iVar12 = OPENSSL_sk_num(*(undefined8 *)(lVar3 + 8));
              if (0 < iVar12) {
                iVar13 = 0;
                do {
                  psVar11 = (short *)OPENSSL_sk_value(*(undefined8 *)(lVar3 + 8),iVar13);
                  if (((*psVar11 == 0x102) && ((char)psVar11[1] == '\0')) &&
                     (iVar7 = X509_verify(pXVar10,*(EVP_PKEY **)(psVar11 + 0xc)), 0 < iVar7)) {
                    X509_free(*(X509 **)(lVar3 + 0x20));
                    *(undefined8 *)(lVar3 + 0x20) = 0;
                    *(undefined4 *)(param_1 + 0xf8) = 1;
                    uVar8 = *(undefined8 *)(param_1 + 0x98);
                    *(int *)(lVar3 + 0x2c) = iVar6;
                    *(short **)(lVar3 + 0x18) = psVar11;
                    iVar5 = OPENSSL_sk_num(uVar8);
                    if (*(int *)(param_1 + 0x94) < iVar5) {
                      do {
                        iVar5 = iVar5 + -1;
                        pXVar10 = (X509 *)OPENSSL_sk_pop(*(undefined8 *)(param_1 + 0x98));
                        X509_free(pXVar10);
                      } while (*(int *)(param_1 + 0x94) < iVar5);
                    }
                    goto LAB_005917b0;
                  }
                  iVar13 = iVar13 + 1;
                } while (iVar12 != iVar13);
              }
            }
          }
LAB_005912c1:
          if (*(int *)(param_1 + 0x94) == iVar5) {
            local_68 = check_trust(param_1,iVar5);
            goto LAB_005913f8;
          }
          iVar6 = *(int *)(param_1 + 0xb0);
          if (10 < iVar6) goto LAB_005917eb;
          if (8 < iVar6) goto LAB_0059140e;
          iVar12 = iVar5 + -1;
          if (iVar6 == 0) goto LAB_005912f3;
          goto LAB_005917f7;
        }
        iVar6 = *(int *)(param_1 + 0xb0);
        if (iVar6 != 0) goto LAB_005918c8;
        iVar12 = iVar5 + -1;
LAB_00591961:
        if (iVar12 < 0) {
          iVar6 = *(int *)(param_1 + 0xac);
        }
        else {
          *(int *)(param_1 + 0xac) = iVar12;
          iVar6 = iVar12;
        }
        uVar8 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar6);
        *(undefined4 *)(param_1 + 0xb0) = 0x16;
        *(undefined8 *)(param_1 + 0xb8) = uVar8;
        iVar6 = (**(code **)(param_1 + 0x38))(0,param_1);
        if (iVar6 == 0) goto LAB_0059140e;
LAB_005912f3:
        if (((lVar2 != 0) && (iVar6 = OPENSSL_sk_num(*(undefined8 *)(lVar2 + 8)), 0 < iVar6)) &&
           (((*(byte *)(lVar2 + 0x28) & 3) == 0 || (-1 < *(int *)(lVar2 + 0x30))))) {
          if (iVar12 < 0) {
            iVar6 = *(int *)(param_1 + 0xac);
          }
          else {
            *(int *)(param_1 + 0xac) = iVar12;
            iVar6 = iVar12;
          }
          uVar8 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar6);
          *(undefined4 *)(param_1 + 0xb0) = 0x41;
          *(undefined8 *)(param_1 + 0xb8) = uVar8;
          iVar6 = (**(code **)(param_1 + 0x38))(0,param_1);
          if (iVar6 == 0) goto LAB_0059140e;
        }
        uVar8 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar12);
        iVar6 = X509_self_signed(uVar8,0);
        if (iVar6 < 1) {
          iVar6 = 2;
          if (iVar5 <= *(int *)(param_1 + 0x94)) {
            iVar6 = 0x14;
          }
          if (-1 < iVar12) goto LAB_00591396;
          iVar12 = *(int *)(param_1 + 0xac);
        }
        else {
          if (iVar5 == 1) {
            iVar6 = 0x12;
          }
          else {
            if (iVar12 < 0) {
              iVar12 = *(int *)(param_1 + 0xac);
              iVar6 = 0x13;
              goto LAB_0059139d;
            }
            iVar6 = 0x13;
          }
LAB_00591396:
          *(int *)(param_1 + 0xac) = iVar12;
        }
LAB_0059139d:
        uVar8 = *(undefined8 *)(param_1 + 0x98);
      }
      else {
        local_68 = 3;
        iVar5 = 0;
LAB_00591078:
        do {
          do {
            local_48 = (X509 *)0x0;
            iVar6 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
            iVar12 = iVar6 + -1;
            *(int *)(param_1 + 0xac) = iVar12;
            if ((bVar14 & 2) != 0) {
              iVar13 = iVar12;
              local_7c = iVar6;
              if ((bVar14 & 4) != 0) {
                iVar13 = iVar5 + -1;
                local_7c = iVar5;
              }
              pXVar10 = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar13);
              if (local_80 < iVar6) {
LAB_00591248:
                if ((bVar14 & 1) != 0) break;
LAB_00591255:
                if ((bVar14 & 4) != 0) {
                  iVar5 = iVar5 + -1;
                  if (iVar5 < 1) goto LAB_00591267;
                  goto LAB_00591078;
                }
              }
              else {
                uVar8 = *(undefined8 *)(param_1 + 0x98);
                *(undefined8 *)(param_1 + 0x98) = 0;
                iVar13 = (**(code **)(param_1 + 0x40))(&local_48,param_1,pXVar10);
                *(undefined8 *)(param_1 + 0x98) = uVar8;
                if (iVar13 < 0) {
                  *(undefined4 *)(param_1 + 0xb0) = 0x46;
                  OPENSSL_sk_free(local_70);
                  local_68 = 0xffffffff;
                  goto LAB_00591420;
                }
                if (iVar13 == 0) goto LAB_00591248;
                iVar13 = X509_self_signed(pXVar10,0);
                if (iVar13 < 0) {
LAB_0059167c:
                  X509_free(local_48);
                  goto LAB_00591686;
                }
                if ((bVar14 & 4) != 0) {
                  if ((iVar6 <= local_7c || local_7c < 1) || (iVar13 != 0)) goto LAB_0059167c;
                  bVar14 = bVar14 & 0xfb;
                  iVar13 = iVar6;
                  do {
                    iVar13 = iVar13 + -1;
                    pXVar10 = (X509 *)OPENSSL_sk_pop(*(undefined8 *)(param_1 + 0x98));
                    X509_free(pXVar10);
                  } while (local_7c < iVar13);
                  iVar13 = local_7c - iVar12;
                  if (iVar6 <= local_7c) {
                    iVar13 = 0;
                  }
                  iVar6 = iVar12 + iVar13;
                  *(int *)(param_1 + 0x94) = iVar6;
                  if (lVar2 != 0) {
                    iVar12 = OPENSSL_sk_num(*(undefined8 *)(lVar2 + 8));
                    if ((0 < iVar12) && (*(int *)(param_1 + 0x94) <= *(int *)(lVar2 + 0x2c))) {
                      *(undefined4 *)(lVar2 + 0x2c) = 0xffffffff;
                      X509_free(*(X509 **)(lVar2 + 0x20));
                      *(undefined8 *)(lVar2 + 0x20) = 0;
                    }
                    iVar12 = OPENSSL_sk_num(*(undefined8 *)(lVar2 + 8));
                    if ((0 < iVar12) && (*(int *)(param_1 + 0x94) <= *(int *)(lVar2 + 0x30))) {
                      *(undefined4 *)(lVar2 + 0x30) = 0xffffffff;
                    }
                  }
LAB_005915c5:
                  iVar12 = iVar6;
                  iVar6 = OPENSSL_sk_push(*(undefined8 *)(param_1 + 0x98),local_48);
                  if (iVar6 == 0) {
                    X509_free(local_48);
                    goto LAB_00591847;
                  }
                  iVar13 = X509_self_signed(local_48,0);
                  if (iVar13 < 0) goto LAB_00591686;
LAB_005915ef:
                  if (iVar12 < *(int *)(param_1 + 0x94)) goto LAB_00591686;
                  bVar14 = bVar14 & 0xfe;
                  local_68 = check_trust(param_1,iVar12);
                  if (local_68 == 3) {
                    if (iVar13 == 0) goto LAB_00591628;
                    goto LAB_00591255;
                  }
                  goto LAB_00591267;
                }
                if (iVar13 == 0) goto LAB_005915c5;
                iVar6 = X509_cmp(pXVar10,local_48);
                if (iVar6 == 0) {
                  X509_free(pXVar10);
                  *(int *)(param_1 + 0x94) = iVar12;
                  OPENSSL_sk_set(*(undefined8 *)(param_1 + 0x98),iVar12,local_48);
                  goto LAB_005915ef;
                }
                X509_free(local_48);
                if ((bVar14 & 1) != 0) break;
              }
              if ((local_50 == 0) || (*(int *)(param_1 + 0x94) < 2)) goto LAB_00591267;
              bVar14 = bVar14 | 4;
              iVar5 = *(int *)(param_1 + 0x94) + -1;
              goto LAB_00591078;
            }
          } while ((bVar14 & 1) == 0);
          iVar6 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
          if (*(int *)(param_1 + 0x94) != iVar6) goto LAB_00591686;
          uVar8 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar6 + -1);
          iVar12 = X509_self_signed(uVar8,0);
          if (((0 < iVar12) || (local_80 < iVar6)) ||
             (local_48 = (X509 *)find_issuer(param_1,local_70,uVar8), local_48 == (X509 *)0x0)) {
            bVar14 = bVar14 & 0xfe;
            if (bVar4) {
              bVar14 = bVar14 | 2;
            }
            else {
LAB_00591628:
              if (bVar14 == 0) break;
            }
            goto LAB_00591078;
          }
          OPENSSL_sk_delete_ptr(local_70,local_48);
          iVar6 = X509_add_cert(*(undefined8 *)(param_1 + 0x98),local_48,1);
          if (iVar6 == 0) goto LAB_00591686;
          *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
          local_68 = check_dane_issuer(param_1);
        } while (1 < local_68 - 1);
LAB_00591267:
        OPENSSL_sk_free(local_70);
        if ((int)local_68 < 0) goto LAB_00591420;
        iVar5 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
        if (iVar5 <= local_80) {
          if (lVar2 == 0) {
            if (local_68 == 3) goto LAB_005912c1;
          }
          else if (local_68 == 3) goto LAB_005912ab;
        }
LAB_005913f8:
        if (local_68 == 1) {
LAB_005917b0:
          local_68 = 1;
          *(undefined4 *)(param_1 + 0xb0) = uVar1;
          goto LAB_00591420;
        }
        if (local_68 == 2) goto LAB_0059140e;
        iVar6 = *(int *)(param_1 + 0xb0);
        if (iVar6 == 0) {
          iVar12 = iVar5 + -1;
          if (local_80 < iVar5) goto LAB_00591961;
          goto LAB_005912f3;
        }
LAB_005918c8:
        if (-1 < iVar6) {
          if (iVar6 < 0xb) {
            if (8 < iVar6) {
LAB_0059140e:
              local_68 = 0;
              goto LAB_00591420;
            }
          }
          else {
LAB_005917eb:
            if (iVar6 - 0xdU < 2) goto LAB_0059140e;
          }
        }
LAB_005917f7:
        iVar12 = iVar5 + -1;
        if (iVar12 < 0) {
          iVar12 = *(int *)(param_1 + 0xac);
        }
        else {
          *(int *)(param_1 + 0xac) = iVar12;
        }
        uVar8 = *(undefined8 *)(param_1 + 0x98);
      }
      uVar8 = OPENSSL_sk_value(uVar8,iVar12);
      *(int *)(param_1 + 0xb0) = iVar6;
      *(undefined8 *)(param_1 + 0xb8) = uVar8;
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x005913e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar9 = (**(code **)(param_1 + 0x38))(0,param_1);
        return uVar9;
      }
      goto LAB_005919fa;
    }
    local_70 = OPENSSL_sk_new_null();
    if (local_70 == 0) {
LAB_005919cc:
      local_70 = 0;
    }
    else {
      local_50 = 0;
      bVar4 = false;
LAB_00590ff5:
      iVar5 = OPENSSL_sk_num(*(undefined8 *)(lVar2 + 8));
      if (((iVar5 < 1) || (*(long *)(lVar2 + 0x10) == 0)) ||
         (iVar5 = X509_add_certs(local_70,*(long *)(lVar2 + 0x10),0), iVar5 != 0))
      goto LAB_00591024;
    }
LAB_00591847:
    ERR_new();
    ERR_set_debug("../crypto/x509/x509_vfy.c",0xd04,"build_chain");
    ERR_set_error(0xb,0xc0100,0);
    *(undefined4 *)(param_1 + 0xb0) = 0x11;
    OPENSSL_sk_free(local_70);
    local_68 = 0xffffffff;
  }
  else {
    local_70 = 0;
LAB_00591686:
    ERR_new();
    ERR_set_debug("../crypto/x509/x509_vfy.c",0xcfe,"build_chain");
    ERR_set_error(0xb,0xc0103,0);
    *(undefined4 *)(param_1 + 0xb0) = 1;
    OPENSSL_sk_free(local_70);
    local_68 = 0xffffffff;
  }
LAB_00591420:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)local_68;
  }
LAB_005919fa:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}


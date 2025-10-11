
long FUN_0060c6b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  char *pcVar18;
  int local_8c;
  long *local_80;
  int local_68;
  long local_48;
  
  lVar7 = FUN_0059d500(param_3);
  iVar2 = FUN_00436480(lVar7);
  if (lVar7 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/v3_cpols.c",0x66,"r2i_certpol");
    FUN_0051f8f0(0x22,0x80022,0);
    local_48 = 0;
  }
  else {
    local_48 = FUN_004363b0(0,iVar2);
    if (local_48 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/x509/v3_cpols.c",0x6c,"r2i_certpol");
      FUN_0051f8f0(0x22,0xc0100,0);
LAB_0060c989:
      FUN_00436430(lVar7,FUN_0059cb40);
      FUN_00436430(local_48,FUN_0060c3b0);
      local_48 = 0;
    }
    else {
      if (0 < iVar2) {
        bVar1 = false;
        local_68 = 0;
        do {
          while( true ) {
            lVar9 = FUN_004364a0(lVar7,local_68);
            if ((*(long *)(lVar9 + 0x10) != 0) ||
               (pcVar18 = *(char **)(lVar9 + 8), pcVar18 == (char *)0x0)) {
              FUN_0051f420();
              FUN_0051f540("../crypto/x509/v3_cpols.c",0x74,"r2i_certpol");
              FUN_0051f8f0(0x22,0x86,0);
              FUN_0051ef40(4,"name=",*(undefined8 *)(lVar9 + 8),", value=",
                           *(undefined8 *)(lVar9 + 0x10));
              goto LAB_0060c989;
            }
            iVar3 = thunk_FUN_00712780(pcVar18,"ia5org");
            if (iVar3 != 0) break;
            local_68 = local_68 + 1;
            bVar1 = true;
            if (iVar2 == local_68) goto LAB_0060c7e8;
          }
          if (*pcVar18 == '@') {
            lVar8 = FUN_0061dcb0(param_2,pcVar18 + 1);
            if (lVar8 == 0) {
              FUN_0051f420();
              FUN_0051f540("../crypto/x509/v3_cpols.c",0x81,"r2i_certpol");
              FUN_0051f8f0(0x22,0x87,&DAT_007e3d61,*(undefined8 *)(lVar9 + 8));
            }
            else {
              local_80 = (long *)FUN_0060c4d0();
              if (local_80 == (long *)0x0) {
LAB_0060c93f:
                FUN_0051f420();
                FUN_0051f540("../crypto/x509/v3_cpols.c",0xf0,"policy_section");
                FUN_0051f8f0(0x22,0xc0100,0);
              }
              else {
                for (local_8c = 0; iVar3 = FUN_00436480(lVar8), local_8c < iVar3;
                    local_8c = local_8c + 1) {
                  puVar10 = (undefined8 *)FUN_004364a0(lVar8,local_8c);
                  uVar17 = puVar10[1];
                  iVar3 = thunk_FUN_00712780(uVar17,"policyIdentifier");
                  if (iVar3 == 0) {
                    lVar9 = FUN_00424530(puVar10[2],0);
                    if (lVar9 == 0) {
                      FUN_0051f420();
                      FUN_0051f540("../crypto/x509/v3_cpols.c",0xb6,"policy_section");
                      uVar17 = 0x6e;
                      goto LAB_0060d07b;
                    }
                    *local_80 = lVar9;
                  }
                  else {
                    iVar3 = FUN_0059d800(uVar17,"CPS");
                    if (iVar3 != 0) {
                      iVar3 = FUN_0059d800(puVar10[1],"userNotice");
                      if (iVar3 == 0) {
                        if (*(char *)puVar10[2] == '@') {
                          lVar9 = FUN_0061dcb0(param_2,(char *)puVar10[2] + 1);
                          if (lVar9 != 0) {
                            plVar11 = (long *)FUN_0060c550();
                            if (plVar11 == (long *)0x0) {
LAB_0060cc30:
                              FUN_0051f420();
                              FUN_0051f540("../crypto/x509/v3_cpols.c",0x16d,"notice_section");
                              FUN_0051f8f0(0x22,0xc0100,0);
                            }
                            else {
                              lVar12 = FUN_004239c0(0xa5);
                              *plVar11 = lVar12;
                              if (lVar12 == 0) {
                                FUN_0051f420();
                                FUN_0051f540("../crypto/x509/v3_cpols.c",0x125,"notice_section");
                                FUN_0051f8f0(0x22,0xc0103,0);
                              }
                              else {
                                plVar13 = (long *)FUN_0060c5f0();
                                if (plVar13 == (long *)0x0) goto LAB_0060cc30;
                                plVar11[1] = (long)plVar13;
                                for (iVar3 = 0; iVar5 = FUN_00436480(lVar9), iVar3 < iVar5;
                                    iVar3 = iVar3 + 1) {
                                  lVar12 = FUN_004364a0(lVar9,iVar3);
                                  uVar17 = *(undefined8 *)(lVar12 + 8);
                                  pcVar18 = *(char **)(lVar12 + 0x10);
                                  iVar5 = thunk_FUN_00712780(uVar17,"explicitText");
                                  if (iVar5 == 0) {
                                    lVar12 = thunk_FUN_00712710(pcVar18,0x3a);
                                    if ((lVar12 != 0) &&
                                       (iVar5 = (int)lVar12 - (int)pcVar18, iVar5 != -1)) {
                                      if (iVar5 == 4) {
                                        iVar5 = thunk_FUN_00712ab0(pcVar18,&DAT_0081b2cc,4);
                                        if (iVar5 == 0) {
                                          iVar5 = 4;
                                          uVar17 = 0xc;
                                          goto LAB_0060cdbe;
                                        }
                                      }
                                      else if (iVar5 == 10) {
                                        iVar5 = thunk_FUN_00712ab0(pcVar18,"UTF8String",10);
                                        if (iVar5 == 0) {
                                          iVar5 = 10;
                                          uVar17 = 0xc;
                                          goto LAB_0060cdbe;
                                        }
                                      }
                                      else if (iVar5 == 3) {
                                        if ((*pcVar18 == 'B') && (pcVar18[1] == 'M')) {
                                          iVar5 = 3;
                                          uVar17 = 0x1e;
                                          if (pcVar18[2] == 'P') goto LAB_0060cdbe;
                                        }
                                      }
                                      else if (iVar5 == 9) {
                                        iVar5 = thunk_FUN_00712ab0(pcVar18,"BMPSTRING",9);
                                        if (iVar5 == 0) {
                                          iVar5 = 9;
                                          uVar17 = 0x1e;
                                          goto LAB_0060cdbe;
                                        }
                                      }
                                      else if (iVar5 == 7) {
                                        iVar5 = thunk_FUN_00712ab0(pcVar18,"VISIBLE",7);
                                        if (iVar5 == 0) {
                                          iVar5 = 7;
                                          uVar17 = 0x1a;
LAB_0060cdbe:
                                          lVar12 = FUN_004a2180(uVar17);
                                          plVar13[1] = lVar12;
                                          if (lVar12 != 0) {
                                            pcVar18 = pcVar18 + (iVar5 + 1);
                                            goto LAB_0060ca7b;
                                          }
                                          goto LAB_0060cc30;
                                        }
                                      }
                                      else if ((iVar5 == 0xd) &&
                                              (iVar5 = thunk_FUN_00712ab0(pcVar18,"VISIBLESTRING",
                                                                          0xd), iVar5 == 0)) {
                                        iVar5 = 0xd;
                                        uVar17 = 0x1a;
                                        goto LAB_0060cdbe;
                                      }
                                    }
                                    lVar12 = FUN_004a2180(0x1a);
                                    plVar13[1] = lVar12;
                                    if (lVar12 == 0) goto LAB_0060cc30;
LAB_0060ca7b:
                                    uVar4 = thunk_FUN_007129d0(pcVar18);
                                    iVar5 = FUN_004a1fa0(lVar12,pcVar18,uVar4);
                                    if (iVar5 == 0) goto LAB_0060cc30;
                                  }
                                  else {
                                    iVar5 = thunk_FUN_00712780(uVar17,"organization");
                                    if (iVar5 == 0) {
                                      plVar16 = (long *)*plVar13;
                                      if (plVar16 == (long *)0x0) {
                                        plVar16 = (long *)FUN_0060c690();
                                        if (plVar16 == (long *)0x0) goto LAB_0060cc30;
                                        pcVar18 = *(char **)(lVar12 + 0x10);
                                        *plVar13 = (long)plVar16;
                                      }
                                      lVar12 = *plVar16;
                                      *(uint *)(lVar12 + 4) = (-(uint)!bVar1 & 4) + 0x16;
                                      goto LAB_0060ca7b;
                                    }
                                    iVar5 = thunk_FUN_00712780(uVar17,"noticeNumbers");
                                    if (iVar5 != 0) {
                                      FUN_0051f420();
                                      FUN_0051f540("../crypto/x509/v3_cpols.c",0x15e,
                                                   "notice_section");
                                      FUN_0051f8f0(0x22,0x8a,0);
                                      FUN_0051ef40(4,"name=",*(undefined8 *)(lVar12 + 8),", value=",
                                                   *(undefined8 *)(lVar12 + 0x10));
                                      goto LAB_0060cc60;
                                    }
                                    lVar15 = *plVar13;
                                    if (lVar15 == 0) {
                                      lVar15 = FUN_0060c690();
                                      if (lVar15 == 0) goto LAB_0060cc30;
                                      uVar17 = *(undefined8 *)(lVar12 + 0x10);
                                      *plVar13 = lVar15;
                                      lVar14 = FUN_0059d500(uVar17);
                                      if (lVar14 != 0) goto LAB_0060cb2f;
LAB_0060cd31:
                                      FUN_0051f420();
                                      FUN_0051f540("../crypto/x509/v3_cpols.c",0x154,
                                                   "notice_section");
                                      FUN_0051f8f0(0x22,0x8d,0);
                                      FUN_0051ef40(4,"name=",*(undefined8 *)(lVar12 + 8),", value=",
                                                   *(undefined8 *)(lVar12 + 0x10));
                                      FUN_00436430(lVar14,FUN_0059cb40);
                                      goto LAB_0060cc60;
                                    }
                                    lVar14 = FUN_0059d500(pcVar18);
                                    if (lVar14 == 0) goto LAB_0060cd31;
LAB_0060cb2f:
                                    iVar5 = FUN_00436480(lVar14);
                                    if (iVar5 == 0) goto LAB_0060cd31;
                                    uVar17 = *(undefined8 *)(lVar15 + 8);
                                    for (iVar5 = 0; iVar6 = FUN_00436480(lVar14), iVar5 < iVar6;
                                        iVar5 = iVar5 + 1) {
                                      lVar12 = FUN_004364a0(lVar14,iVar5);
                                      lVar12 = FUN_0059d060(0,*(undefined8 *)(lVar12 + 8));
                                      if (lVar12 == 0) {
                                        FUN_0051f420();
                                        FUN_0051f540("../crypto/x509/v3_cpols.c",0x17e,"nref_nos");
                                        uVar17 = 0x8c;
LAB_0060cca7:
                                        FUN_0051f8f0(0x22,uVar17,0);
                                        FUN_00436430(lVar14,FUN_0059cb40);
                                        goto LAB_0060cc60;
                                      }
                                      iVar6 = FUN_00435f80(uVar17,lVar12);
                                      if (iVar6 == 0) {
                                        thunk_FUN_004a2270(lVar12);
                                        FUN_0051f420();
                                        FUN_0051f540("../crypto/x509/v3_cpols.c",0x188,"nref_nos");
                                        uVar17 = 0xc0100;
                                        goto LAB_0060cca7;
                                      }
                                    }
                                    FUN_00436430(lVar14,FUN_0059cb40);
                                  }
                                }
                                plVar13 = (long *)*plVar13;
                                if ((plVar13 == (long *)0x0) ||
                                   ((plVar13[1] != 0 && (*plVar13 != 0)))) {
                                  FUN_0061dd50(param_2,lVar9);
                                  lVar9 = local_80[1];
                                  if (lVar9 == 0) {
                                    lVar9 = FUN_00436410();
                                    local_80[1] = lVar9;
                                  }
                                  iVar3 = FUN_00435f80(lVar9,plVar11);
                                  if (iVar3 != 0) goto LAB_0060c86c;
                                  goto LAB_0060c93f;
                                }
                                FUN_0051f420();
                                FUN_0051f540("../crypto/x509/v3_cpols.c",0x166,"notice_section");
                                FUN_0051f8f0(0x22,0x8e,0);
                              }
                            }
LAB_0060cc60:
                            FUN_0060c570(plVar11);
                            FUN_0061dd50(param_2,lVar9);
                            goto LAB_0060c970;
                          }
                          FUN_0051f420();
                          FUN_0051f540("../crypto/x509/v3_cpols.c",0xd5,"policy_section");
                          uVar17 = 0x87;
                        }
                        else {
                          FUN_0051f420();
                          FUN_0051f540("../crypto/x509/v3_cpols.c",0xcf,"policy_section");
                          uVar17 = 0x89;
                        }
                      }
                      else {
                        FUN_0051f420();
                        FUN_0051f540("../crypto/x509/v3_cpols.c",0xe3,"policy_section");
                        uVar17 = 0x8a;
                      }
LAB_0060d07b:
                      FUN_0051f8f0(0x22,uVar17,0);
                      FUN_0051ef40(6,"section:",*puVar10,",name:",puVar10[1],",value:",puVar10[2]);
                      goto LAB_0060c970;
                    }
                    if (local_80[1] == 0) {
                      lVar9 = FUN_00436410();
                      local_80[1] = lVar9;
                    }
                    plVar11 = (long *)FUN_0060c550();
                    if ((plVar11 == (long *)0x0) ||
                       (iVar3 = FUN_00435f80(local_80[1],plVar11), iVar3 == 0)) goto LAB_0060c93f;
                    lVar9 = FUN_004239c0(0xa4);
                    *plVar11 = lVar9;
                    if (lVar9 == 0) {
                      FUN_0051f420();
                      FUN_0051f540("../crypto/x509/v3_cpols.c",0xc4,"policy_section");
                      FUN_0051f8f0(0x22,0xc0103,0);
                      goto LAB_0060c970;
                    }
                    lVar9 = FUN_004a7a60();
                    plVar11[1] = lVar9;
                    if (lVar9 == 0) goto LAB_0060c93f;
                    uVar17 = puVar10[2];
                    uVar4 = thunk_FUN_007129d0(uVar17);
                    iVar3 = FUN_004a1fa0(lVar9,uVar17,uVar4);
                    if (iVar3 == 0) goto LAB_0060c93f;
                  }
LAB_0060c86c:
                }
                if (*local_80 != 0) {
                  FUN_0061dd50(param_2,lVar8);
                  goto LAB_0060c76b;
                }
                FUN_0051f420();
                FUN_0051f540("../crypto/x509/v3_cpols.c",0xe9,"policy_section");
                FUN_0051f8f0(0x22,0x8b,0);
              }
LAB_0060c970:
              FUN_0060c3b0(local_80);
              FUN_0061dd50(param_2,lVar8);
            }
            goto LAB_0060c989;
          }
          lVar8 = FUN_00424530(pcVar18,0);
          if (lVar8 == 0) {
            FUN_0051f420();
            FUN_0051f540("../crypto/x509/v3_cpols.c",0x8b,"r2i_certpol");
            FUN_0051f8f0(0x22,0x6e,&DAT_007e3d61,*(undefined8 *)(lVar9 + 8));
            goto LAB_0060c989;
          }
          local_80 = (long *)FUN_0060c4d0();
          if (local_80 == (long *)0x0) {
            FUN_004a06b0(lVar8);
            FUN_0051f420();
            uVar17 = 0x93;
LAB_0060d142:
            FUN_0051f540("../crypto/x509/v3_cpols.c",uVar17,"r2i_certpol");
            FUN_0051f8f0(0x22,0xc0100,0);
            goto LAB_0060c989;
          }
          *local_80 = lVar8;
LAB_0060c76b:
          iVar3 = FUN_00435f80(local_48,local_80);
          if (iVar3 == 0) {
            FUN_0060c3b0(local_80);
            FUN_0051f420();
            uVar17 = 0x9a;
            goto LAB_0060d142;
          }
          local_68 = local_68 + 1;
        } while (iVar2 != local_68);
      }
LAB_0060c7e8:
      FUN_00436430(lVar7,FUN_0059cb40);
    }
  }
  return local_48;
}


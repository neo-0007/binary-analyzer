
long FUN_004e9240(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  long local_50;
  long local_48;
  
  plVar1 = *(long **)(param_1 + 8);
  if (((plVar1 == (long *)0x0) || (*plVar1 == 0)) || (plVar1[1] == 0)) {
    FUN_0051f420();
    uVar17 = 0x217;
LAB_004e9671:
    lVar14 = 0;
    lVar9 = 0;
    lVar8 = 0;
    FUN_0051f540("../crypto/ec/ec_asn1.c",uVar17,"EC_GROUP_new_from_ecparameters");
    lVar10 = 0;
    lVar11 = 0;
    FUN_0051f8f0(0x10,0x73,0);
    lVar12 = 0;
    local_50 = 0;
  }
  else {
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    if (((puVar2 == (undefined8 *)0x0) ||
        (puVar3 = (undefined4 *)*puVar2, puVar3 == (undefined4 *)0x0)) ||
       ((*(long *)(puVar3 + 2) == 0 || ((puVar2[1] == 0 || (*(long *)(puVar2[1] + 8) == 0)))))) {
      FUN_0051f420();
      uVar17 = 0x224;
      goto LAB_004e9671;
    }
    lVar8 = FUN_004b84d0(*(long *)(puVar3 + 2),*puVar3,0);
    if (lVar8 == 0) {
      FUN_0051f420();
      lVar14 = 0;
      lVar9 = 0;
      lVar10 = 0;
      lVar11 = 0;
      FUN_0051f540("../crypto/ec/ec_asn1.c",0x229,"EC_GROUP_new_from_ecparameters");
      FUN_0051f8f0(0x10,0x80003,0);
      lVar12 = 0;
      local_50 = 0;
      goto LAB_004e96a4;
    }
    puVar3 = *(undefined4 **)(*(long *)(param_1 + 0x10) + 8);
    lVar9 = FUN_004b84d0(*(undefined8 *)(puVar3 + 2),*puVar3,0);
    if (lVar9 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/ec/ec_asn1.c",0x22e,"EC_GROUP_new_from_ecparameters");
      uVar17 = 0x80003;
LAB_004e9864:
      lVar14 = 0;
      lVar10 = 0;
      FUN_0051f8f0(0x10,uVar17,0);
      lVar11 = 0;
      lVar12 = 0;
      local_50 = 0;
    }
    else {
      iVar6 = FUN_00423da0(**(undefined8 **)(param_1 + 8));
      if (iVar6 != 0x197) {
        if (iVar6 != 0x196) {
          FUN_0051f420();
          FUN_0051f540("../crypto/ec/ec_asn1.c",0x2a7,"EC_GROUP_new_from_ecparameters");
          uVar17 = 0x67;
          goto LAB_004e9864;
        }
        lVar11 = *(long *)(*(long *)(param_1 + 8) + 8);
        if (lVar11 == 0) {
          lVar14 = 0;
          lVar10 = 0;
          lVar11 = 0;
          FUN_0051f420();
          FUN_0051f540("../crypto/ec/ec_asn1.c",0x290,"EC_GROUP_new_from_ecparameters");
          FUN_0051f8f0(0x10,0x73,0);
          lVar12 = 0;
          local_50 = 0;
          goto LAB_004e96a4;
        }
        lVar10 = FUN_0049fa70(lVar11,0);
        if (lVar10 == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/ec/ec_asn1.c",0x295,"EC_GROUP_new_from_ecparameters");
          uVar17 = 0x8000d;
        }
        else {
          iVar6 = FUN_004b7d60(lVar10);
          if ((iVar6 == 0) && (iVar6 = FUN_004b7ba0(lVar10), iVar6 == 0)) {
            iVar6 = FUN_004b7bb0(lVar10);
            if (iVar6 < 0x296) {
              local_50 = FUN_004ed500(lVar10,lVar8,lVar9,0);
LAB_004e937d:
              if (local_50 == 0) {
                FUN_0051f420();
                FUN_0051f540("../crypto/ec/ec_asn1.c",0x2ac,"EC_GROUP_new_from_ecparameters");
                uVar17 = 0x80010;
                goto LAB_004e9ae2;
              }
              if (*(long *)(*(long *)(param_1 + 0x10) + 0x10) != 0) {
                FUN_0041ad60(*(undefined8 *)(local_50 + 0x30),"../crypto/ec/ec_asn1.c",0x2b2);
                lVar11 = FUN_0041ad90((long)**(int **)(*(long *)(param_1 + 0x10) + 0x10),
                                      "../crypto/ec/ec_asn1.c",0x2b3);
                *(long *)(local_50 + 0x30) = lVar11;
                if (lVar11 == 0) {
                  FUN_0051f420();
                  lVar14 = 0;
                  FUN_0051f540("../crypto/ec/ec_asn1.c",0x2b4,"EC_GROUP_new_from_ecparameters");
                  FUN_0051f8f0(0x10,0xc0100,0);
                  lVar12 = 0;
                  lVar11 = 0;
                  goto LAB_004e96a4;
                }
                piVar4 = *(int **)(*(long *)(param_1 + 0x10) + 0x10);
                thunk_FUN_00713a50(lVar11,*(undefined8 *)(piVar4 + 2),(long)*piVar4);
                *(long *)(local_50 + 0x38) = (long)**(int **)(*(long *)(param_1 + 0x10) + 0x10);
              }
              if ((((*(long *)(param_1 + 0x20) == 0) ||
                   (piVar4 = *(int **)(param_1 + 0x18), piVar4 == (int *)0x0)) ||
                  (*(long *)(piVar4 + 2) == 0)) || (*piVar4 == 0)) {
                FUN_0051f420();
                uVar17 = 0x2c0;
                goto LAB_004e9acf;
              }
              lVar12 = FUN_004efb90(local_50);
              if (lVar12 == 0) {
                lVar14 = 0;
                lVar11 = 0;
                goto LAB_004e96a4;
              }
              FUN_004ef8c0(local_50,**(byte **)(*(long *)(param_1 + 0x18) + 8) & 0xfe);
              iVar7 = FUN_004f4d10(local_50,lVar12,*(undefined8 *)(*(int **)(param_1 + 0x18) + 2),
                                   (long)**(int **)(param_1 + 0x18),0);
              if (iVar7 == 0) {
                FUN_0051f420();
                uVar17 = 0x2ce;
LAB_004e9cb7:
                FUN_0051f540("../crypto/ec/ec_asn1.c",uVar17,"EC_GROUP_new_from_ecparameters");
                uVar17 = 0x80010;
              }
              else {
                lVar8 = FUN_0049fa70(*(undefined8 *)(param_1 + 0x20),lVar8);
                if (lVar8 == 0) {
                  FUN_0051f420();
                  FUN_0051f540("../crypto/ec/ec_asn1.c",0x2d4,"EC_GROUP_new_from_ecparameters");
                  uVar17 = 0x8000d;
                }
                else {
                  iVar7 = FUN_004b7d60(lVar8);
                  if ((iVar7 == 0) && (iVar7 = FUN_004b7ba0(lVar8), iVar7 == 0)) {
                    iVar7 = FUN_004b7bb0(lVar8);
                    if (iVar7 <= iVar6 + 1) {
                      if (*(long *)(param_1 + 0x28) == 0) {
                        lVar13 = 0;
                        FUN_004b7fa0(lVar9);
                      }
                      else {
                        lVar13 = FUN_0049fa70(*(long *)(param_1 + 0x28),lVar9);
                        if (lVar13 == 0) {
                          FUN_0051f420();
                          FUN_0051f540("../crypto/ec/ec_asn1.c",0x2e5,
                                       "EC_GROUP_new_from_ecparameters");
                          uVar17 = 0x8000d;
                          lVar9 = lVar13;
                          goto LAB_004e9c85;
                        }
                      }
                      iVar6 = FUN_004f03b0(local_50,lVar12,lVar8,lVar13);
                      lVar9 = lVar13;
                      if (iVar6 == 0) {
                        FUN_0051f420();
                        uVar17 = 0x2ea;
                        goto LAB_004e9cb7;
                      }
                      lVar14 = FUN_004b2b10();
                      if (lVar14 == 0) {
                        FUN_0051f420();
                        lVar11 = 0;
                        FUN_0051f540("../crypto/ec/ec_asn1.c",0x2fb,"EC_GROUP_new_from_ecparameters"
                                    );
                        FUN_0051f8f0(0x10,0x80003,0);
                      }
                      else {
                        lVar11 = FUN_004f0340(local_50);
                        if (((lVar11 == 0) || (lVar15 = FUN_004ef8e0(lVar11,0,0), lVar15 != 1)) ||
                           (iVar6 = FUN_004f03b0(lVar11,lVar12,lVar8,0), iVar6 == 0)) {
                          FUN_0051f420();
                          uVar17 = 0x301;
                        }
                        else {
                          iVar6 = FUN_004ed170(lVar11,lVar14);
                          local_48 = local_50;
                          if (iVar6 == 0) goto LAB_004e96bf;
                          if (iVar6 == 0x2e9) {
                            iVar6 = 0x2c9;
                          }
                          local_48 = FUN_004ed0e0(iVar6);
                          if (local_48 != 0) {
                            FUN_004efd00(local_50);
                            FUN_004ef8a0(local_48,0);
                            if ((*(long *)(*(long *)(param_1 + 0x10) + 0x10) != 0) ||
                               (lVar15 = FUN_004ef8e0(local_48,0,0), local_50 = local_48,
                               lVar15 == 1)) goto LAB_004e96bf;
                            goto LAB_004e96a4;
                          }
                          FUN_0051f420();
                          uVar17 = 0x31a;
                        }
                        FUN_0051f540("../crypto/ec/ec_asn1.c",uVar17,
                                     "EC_GROUP_new_from_ecparameters");
                        FUN_0051f8f0(0x10,0x80010,0);
                      }
                      goto LAB_004e96a4;
                    }
                    FUN_0051f420();
                    FUN_0051f540("../crypto/ec/ec_asn1.c",0x2dc,"EC_GROUP_new_from_ecparameters");
                    uVar17 = 0x7a;
                  }
                  else {
                    FUN_0051f420();
                    FUN_0051f540("../crypto/ec/ec_asn1.c",0x2d8,"EC_GROUP_new_from_ecparameters");
                    uVar17 = 0x7a;
                  }
                }
              }
LAB_004e9c85:
              lVar14 = 0;
              lVar11 = 0;
              FUN_0051f8f0(0x10,uVar17,0);
              goto LAB_004e96a4;
            }
            FUN_0051f420();
            FUN_0051f540("../crypto/ec/ec_asn1.c",0x2a0,"EC_GROUP_new_from_ecparameters");
            uVar17 = 0x8f;
          }
          else {
            FUN_0051f420();
            FUN_0051f540("../crypto/ec/ec_asn1.c",0x29a,"EC_GROUP_new_from_ecparameters");
            uVar17 = 0x67;
          }
        }
        goto LAB_004e97a0;
      }
      piVar4 = *(int **)(*(long *)(param_1 + 8) + 8);
      iVar6 = *piVar4;
      if (0x295 < iVar6) {
        FUN_0051f420();
        FUN_0051f540("../crypto/ec/ec_asn1.c",0x242,"EC_GROUP_new_from_ecparameters");
        uVar17 = 0x8f;
        goto LAB_004e9864;
      }
      lVar10 = FUN_004b7690();
      if (lVar10 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/ec/ec_asn1.c",0x247,"EC_GROUP_new_from_ecparameters");
        uVar17 = 0xc0100;
LAB_004e97a0:
        FUN_0051f8f0(0x10,uVar17,0);
      }
      else {
        iVar7 = FUN_00423da0(*(undefined8 *)(piVar4 + 2));
        if (iVar7 != 0x2aa) {
          if (iVar7 == 0x2ab) {
            piVar5 = *(int **)(piVar4 + 4);
            if (piVar5 == (int *)0x0) {
              FUN_0051f420();
              uVar17 = 0x269;
              local_50 = 0;
              goto LAB_004e9acf;
            }
            if ((((piVar5[2] < *piVar4) && (piVar5[1] < piVar5[2])) && (0 < *piVar5)) &&
               (*piVar5 < piVar5[1])) {
              iVar7 = FUN_004b8360(lVar10);
              if (((iVar7 != 0) && (iVar7 = FUN_004b8360(lVar10,*piVar5), iVar7 != 0)) &&
                 (iVar7 = FUN_004b8360(lVar10,piVar5[1]), iVar7 != 0)) {
                iVar7 = FUN_004b8360(lVar10,piVar5[2]);
                goto joined_r0x004e9a7c;
              }
              goto LAB_004e97ac;
            }
            FUN_0051f420();
            FUN_0051f540("../crypto/ec/ec_asn1.c",0x270,"EC_GROUP_new_from_ecparameters");
            uVar17 = 0x84;
          }
          else if (iVar7 == 0x2a9) {
            FUN_0051f420();
            FUN_0051f540("../crypto/ec/ec_asn1.c",0x280,"EC_GROUP_new_from_ecparameters");
            uVar17 = 0x7e;
          }
          else {
            FUN_0051f420();
            FUN_0051f540("../crypto/ec/ec_asn1.c",0x284,"EC_GROUP_new_from_ecparameters");
            uVar17 = 0x73;
          }
          goto LAB_004e97a0;
        }
        if (*(long *)(piVar4 + 4) == 0) {
          FUN_0051f420();
          uVar17 = 0x252;
          local_50 = 0;
LAB_004e9acf:
          FUN_0051f540("../crypto/ec/ec_asn1.c",uVar17,"EC_GROUP_new_from_ecparameters");
          uVar17 = 0x73;
LAB_004e9ae2:
          lVar14 = 0;
          lVar11 = 0;
          FUN_0051f8f0(0x10,uVar17,0);
          lVar12 = 0;
          goto LAB_004e96a4;
        }
        uVar16 = FUN_0049fa00(*(long *)(piVar4 + 4));
        if (((long)uVar16 < 1) || ((long)*piVar4 <= (long)uVar16)) {
          FUN_0051f420();
          FUN_0051f540("../crypto/ec/ec_asn1.c",0x259,"EC_GROUP_new_from_ecparameters");
          uVar17 = 0x89;
          goto LAB_004e97a0;
        }
        iVar7 = FUN_004b8360(lVar10);
        if (iVar7 != 0) {
          iVar7 = FUN_004b8360(lVar10,uVar16 & 0xffffffff);
joined_r0x004e9a7c:
          if ((iVar7 != 0) && (iVar7 = FUN_004b8360(lVar10,0), iVar7 != 0)) {
            local_50 = FUN_004ed580(lVar10,lVar8,lVar9,0);
            goto LAB_004e937d;
          }
        }
      }
LAB_004e97ac:
      lVar14 = 0;
      lVar12 = 0;
      lVar11 = 0;
      local_50 = 0;
    }
  }
LAB_004e96a4:
  FUN_004efd00(local_50);
  local_48 = 0;
  lVar13 = lVar9;
LAB_004e96bf:
  FUN_004efd00(lVar11);
  FUN_004b7fa0(lVar10);
  FUN_004b7fa0(lVar8);
  FUN_004b7fa0(lVar13);
  FUN_004efcc0(lVar12);
  FUN_004b2b50(lVar14);
  return local_48;
}


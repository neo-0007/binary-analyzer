
ulong FUN_004f2a10(long *param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  bool bVar14;
  uint local_68;
  
  if ((param_4 != 0) && (iVar1 = FUN_004f0cc0(param_1,param_4), iVar1 != 0)) {
    uVar13 = FUN_004f0830(param_1,param_2);
    return uVar13;
  }
  iVar1 = FUN_004b7ba0(param_1[2]);
  if (iVar1 != 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_mult.c",0xa2,"ossl_ec_scalar_mul_ladder");
    FUN_0051f8f0(0x10,0x72,0);
    return 0;
  }
  uVar2 = FUN_004b7ba0(param_1[3]);
  uVar13 = (ulong)uVar2;
  if (uVar2 != 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_mult.c",0xa6,"ossl_ec_scalar_mul_ladder");
    FUN_0051f8f0(0x10,0xa4,0);
    return 0;
  }
  FUN_004b2c00(param_5);
  lVar7 = FUN_004efb90(param_1);
  if ((lVar7 == 0) || (lVar8 = FUN_004efb90(param_1), lVar8 == 0)) {
    FUN_0051f420();
    lVar8 = 0;
    FUN_0051f540("../crypto/ec/ec_mult.c",0xae,"ossl_ec_scalar_mul_ladder");
    FUN_0051f8f0(0x10,0xc0100,0);
    goto LAB_004f3052;
  }
  if (param_4 == 0) {
    iVar1 = FUN_004efec0(lVar7,param_1[1]);
    if (iVar1 != 0) goto LAB_004f2aba;
    FUN_0051f420();
    uVar9 = 0xb4;
  }
  else {
    iVar1 = FUN_004efec0(lVar7,param_4);
    if (iVar1 != 0) {
LAB_004f2aba:
      FUN_004b7e70(*(undefined8 *)(lVar7 + 0x10),4);
      FUN_004b7e70(*(undefined8 *)(lVar7 + 0x18),4);
      FUN_004b7e70(*(undefined8 *)(lVar7 + 0x20),4);
      FUN_004b7e70(*(undefined8 *)(param_2 + 0x10),4);
      FUN_004b7e70(*(undefined8 *)(param_2 + 0x18),4);
      FUN_004b7e70(*(undefined8 *)(param_2 + 0x20),4);
      FUN_004b7e70(*(undefined8 *)(lVar8 + 0x10),4);
      FUN_004b7e70(*(undefined8 *)(lVar8 + 0x18),4);
      FUN_004b7e70(*(undefined8 *)(lVar8 + 0x20),4);
      uVar9 = FUN_004b2df0(param_5);
      uVar10 = FUN_004b2df0(param_5);
      lVar11 = FUN_004b2df0(param_5);
      if (lVar11 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/ec/ec_mult.c",0xc6,"ossl_ec_scalar_mul_ladder");
        FUN_0051f8f0(0x10,0xc0100,0);
        goto LAB_004f3052;
      }
      iVar1 = FUN_004bacf0(uVar9,param_1[2],param_1[3],param_5);
      if (iVar1 == 0) {
        FUN_0051f420();
        uVar9 = 0xcb;
        goto LAB_004f3081;
      }
      iVar3 = FUN_004b7bb0(uVar9);
      iVar1 = FUN_004b7380(uVar9);
      iVar1 = iVar1 + 2;
      lVar12 = FUN_004b8240(lVar11,iVar1);
      if ((lVar12 == 0) || (lVar12 = FUN_004b8240(uVar10,iVar1), lVar12 == 0)) {
        FUN_0051f420();
        uVar9 = 0xd9;
      }
      else {
        lVar12 = FUN_004b8260(lVar11,param_3);
        if (lVar12 != 0) {
          FUN_004b7e70(lVar11,4);
          iVar4 = FUN_004b7bb0(lVar11);
          if (((iVar3 < iVar4) || (iVar4 = FUN_004b7d60(lVar11), iVar4 != 0)) &&
             (iVar4 = FUN_004b8a20(lVar11,lVar11,uVar9,param_5), iVar4 == 0)) {
            FUN_0051f420();
            uVar9 = 0xea;
          }
          else {
            iVar4 = FUN_004b1810(uVar10,lVar11,uVar9);
            if (iVar4 == 0) {
              FUN_0051f420();
              uVar9 = 0xf0;
            }
            else {
              FUN_004b7e70(uVar10,4);
              iVar4 = FUN_004b1810(lVar11,uVar10,uVar9);
              if (iVar4 != 0) {
                iVar4 = FUN_004b78f0(uVar10,iVar3);
                FUN_004b7a20((long)iVar4,lVar11,uVar10,iVar1);
                uVar5 = FUN_004b7380(param_1[8]);
                lVar12 = FUN_004b8240(*(undefined8 *)(lVar8 + 0x10),uVar5);
                if (((((lVar12 == 0) ||
                      (lVar12 = FUN_004b8240(*(undefined8 *)(lVar8 + 0x18),uVar5), lVar12 == 0)) ||
                     ((lVar12 = FUN_004b8240(*(undefined8 *)(lVar8 + 0x20),uVar5), lVar12 == 0 ||
                      ((lVar12 = FUN_004b8240(*(undefined8 *)(param_2 + 0x10),uVar5), lVar12 == 0 ||
                       (lVar12 = FUN_004b8240(*(undefined8 *)(param_2 + 0x18),uVar5), lVar12 == 0)))
                      ))) || (lVar12 = FUN_004b8240(*(undefined8 *)(param_2 + 0x20),uVar5),
                             lVar12 == 0)) ||
                   (((lVar12 = FUN_004b8240(*(undefined8 *)(lVar7 + 0x10),uVar5), lVar12 == 0 ||
                     (lVar12 = FUN_004b8240(*(undefined8 *)(lVar7 + 0x18),uVar5), lVar12 == 0)) ||
                    (lVar12 = FUN_004b8240(*(undefined8 *)(lVar7 + 0x20),uVar5), lVar12 == 0)))) {
                  FUN_0051f420();
                  uVar9 = 0x109;
                  goto LAB_004f30d1;
                }
                lVar12 = *param_1;
                if (*(int *)(lVar7 + 0x28) == 0) {
                  if ((*(code **)(lVar12 + 0xd0) == (code *)0x0) ||
                     (iVar1 = (**(code **)(lVar12 + 0xd0))(param_1,lVar7,param_5), iVar1 == 0)) {
                    FUN_0051f420();
                    uVar13 = 0;
                    FUN_0051f540("../crypto/ec/ec_mult.c",0x110,"ossl_ec_scalar_mul_ladder");
                    FUN_0051f8f0(0x10,0x80010,0);
                    goto LAB_004f3052;
                  }
                  lVar12 = *param_1;
                }
                if (*(code **)(lVar12 + 0x1a0) == (code *)0x0) {
                  iVar1 = FUN_004efec0(lVar8,lVar7);
                  if (iVar1 != 0) {
                    iVar1 = FUN_004f0b30(param_1,param_2,lVar8,param_5);
                    goto joined_r0x004f32d5;
                  }
                }
                else {
                  iVar1 = (**(code **)(lVar12 + 0x1a0))(param_1,param_2,lVar8,lVar7,param_5);
joined_r0x004f32d5:
                  if (iVar1 != 0) {
                    local_68 = 1;
                    iVar3 = iVar3 + -1;
                    if (-1 < iVar3) {
                      do {
                        uVar2 = FUN_004b78f0(lVar11,iVar3);
                        lVar12 = (long)(int)(local_68 ^ uVar2);
                        FUN_004b7a20(lVar12,*(undefined8 *)(param_2 + 0x10),
                                     *(undefined8 *)(lVar8 + 0x10),uVar5);
                        FUN_004b7a20(lVar12,*(undefined8 *)(param_2 + 0x18),
                                     *(undefined8 *)(lVar8 + 0x18),uVar5);
                        FUN_004b7a20(lVar12,*(undefined8 *)(param_2 + 0x20),
                                     *(undefined8 *)(lVar8 + 0x20),uVar5);
                        uVar6 = (*(uint *)(lVar8 + 0x28) ^ *(uint *)(param_2 + 0x28)) &
                                (local_68 ^ uVar2);
                        *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) ^ uVar6;
                        *(uint *)(lVar8 + 0x28) = *(uint *)(lVar8 + 0x28) ^ uVar6;
                        if (*(code **)(*param_1 + 0x1a8) == (code *)0x0) {
                          iVar1 = FUN_004f0a30(param_1,lVar8,param_2,lVar8,param_5);
                          if (iVar1 != 0) {
                            iVar1 = FUN_004f0b30(param_1,param_2,param_2,param_5);
                            goto joined_r0x004f2edc;
                          }
LAB_004f2ee2:
                          uVar13 = 0;
                          FUN_0051f420();
                          FUN_0051f540("../crypto/ec/ec_mult.c",0x166,"ossl_ec_scalar_mul_ladder");
                          FUN_0051f8f0(0x10,0xa2,0);
                          goto LAB_004f3052;
                        }
                        iVar1 = (**(code **)(*param_1 + 0x1a8))(param_1,param_2,lVar8,lVar7,param_5)
                        ;
joined_r0x004f2edc:
                        if (iVar1 == 0) goto LAB_004f2ee2;
                        bVar14 = iVar3 != 0;
                        iVar3 = iVar3 + -1;
                        local_68 = uVar2;
                      } while (bVar14);
                    }
                    lVar11 = (long)(int)local_68;
                    FUN_004b7a20(lVar11,*(undefined8 *)(param_2 + 0x10),
                                 *(undefined8 *)(lVar8 + 0x10),uVar5);
                    FUN_004b7a20(lVar11,*(undefined8 *)(param_2 + 0x18),
                                 *(undefined8 *)(lVar8 + 0x18),uVar5);
                    uVar13 = 1;
                    FUN_004b7a20(lVar11,*(undefined8 *)(param_2 + 0x20),
                                 *(undefined8 *)(lVar8 + 0x20),uVar5);
                    local_68 = (*(uint *)(lVar8 + 0x28) ^ *(uint *)(param_2 + 0x28)) & local_68;
                    *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) ^ local_68;
                    *(uint *)(lVar8 + 0x28) = *(uint *)(lVar8 + 0x28) ^ local_68;
                    if (*(code **)(*param_1 + 0x1b0) != (code *)0x0) {
                      uVar2 = (**(code **)(*param_1 + 0x1b0))(param_1,param_2,lVar8,lVar7,param_5);
                      uVar13 = (ulong)uVar2;
                      if (uVar2 == 0) {
                        FUN_0051f420();
                        FUN_0051f540("../crypto/ec/ec_mult.c",0x175,"ossl_ec_scalar_mul_ladder");
                        FUN_0051f8f0(0x10,0x88,0);
                      }
                      else {
                        uVar13 = 1;
                      }
                    }
                    goto LAB_004f3052;
                  }
                }
                FUN_0051f420();
                FUN_0051f540("../crypto/ec/ec_mult.c",0x116,"ossl_ec_scalar_mul_ladder");
                FUN_0051f8f0(0x10,0x99,0);
                goto LAB_004f3052;
              }
              FUN_0051f420();
              uVar9 = 0xf5;
            }
          }
LAB_004f3081:
          uVar13 = 0;
          FUN_0051f540("../crypto/ec/ec_mult.c",uVar9,"ossl_ec_scalar_mul_ladder");
          FUN_0051f8f0(0x10,0x80003,0);
          goto LAB_004f3052;
        }
        FUN_0051f420();
        uVar9 = 0xde;
      }
LAB_004f30d1:
      FUN_0051f540("../crypto/ec/ec_mult.c",uVar9,"ossl_ec_scalar_mul_ladder");
      FUN_0051f8f0(0x10,0x80003,0);
      goto LAB_004f3052;
    }
    FUN_0051f420();
    uVar9 = 0xb9;
  }
  FUN_0051f540("../crypto/ec/ec_mult.c",uVar9,"ossl_ec_scalar_mul_ladder");
  FUN_0051f8f0(0x10,0x80010,0);
LAB_004f3052:
  FUN_004efcc0(lVar7);
  FUN_004efdb0(lVar8);
  FUN_004b2d50(param_5);
  return uVar13;
}


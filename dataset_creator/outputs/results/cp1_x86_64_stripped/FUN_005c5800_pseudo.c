
long FUN_005c5800(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  ulong uVar13;
  int iVar14;
  
  iVar1 = FUN_004b7d40(param_3);
  if ((iVar1 == 0) || (iVar1 = FUN_004b7b70(param_3,1), iVar1 != 0)) {
    iVar1 = FUN_004b7b70(param_3,2);
    if (iVar1 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/bn/bn_sqrt.c",0x2b,"BN_mod_sqrt");
      FUN_0051f8f0(3,0x70,0);
      return 0;
    }
    if (param_1 != 0) {
      iVar1 = FUN_004b78f0(param_2,0);
LAB_005c585b:
      iVar1 = FUN_004b8190(param_1,(long)iVar1);
      if (iVar1 == 0) {
        return 0;
      }
      return param_1;
    }
    lVar4 = FUN_004b7690();
    if (lVar4 == 0) {
      return 0;
    }
    iVar1 = FUN_004b78f0(param_2,0);
LAB_005c5ff0:
    iVar1 = FUN_004b8190(lVar4,(long)iVar1);
    if (iVar1 == 0) {
      FUN_004b7fa0(lVar4);
      return 0;
    }
    return lVar4;
  }
  iVar1 = FUN_004b7ba0(param_2);
  if ((iVar1 != 0) || (iVar1 = FUN_004b7cc0(param_2), iVar1 != 0)) {
    if (param_1 != 0) {
      iVar1 = FUN_004b7cc0(param_2);
      goto LAB_005c585b;
    }
    lVar4 = FUN_004b7690();
    if (lVar4 == 0) {
      return 0;
    }
    iVar1 = FUN_004b7cc0(param_2);
    goto LAB_005c5ff0;
  }
  FUN_004b2c00(param_4);
  uVar5 = FUN_004b2df0(param_4);
  uVar6 = FUN_004b2df0(param_4);
  lVar4 = FUN_004b2df0(param_4);
  uVar7 = FUN_004b2df0(param_4);
  uVar8 = FUN_004b2df0(param_4);
  lVar9 = FUN_004b2df0(param_4);
  if (lVar9 != 0) {
    if (param_1 == 0) {
      lVar11 = FUN_004b7690();
      if (lVar11 != 0) {
        iVar1 = FUN_004b8a20(uVar5,param_2,param_3,param_4);
        if (iVar1 != 0) goto LAB_005c5990;
LAB_005c5a55:
        FUN_004b7f20(lVar11);
      }
    }
    else {
      iVar1 = FUN_004b8a20(uVar5,param_2,param_3,param_4);
      lVar11 = param_1;
      if (iVar1 != 0) {
LAB_005c5990:
        iVar1 = 1;
        while (iVar2 = FUN_004b78f0(param_3,iVar1), iVar2 == 0) {
          iVar1 = iVar1 + 1;
        }
        if (iVar1 == 1) {
          iVar1 = FUN_004bc3b0(lVar4,param_3,2);
          if (iVar1 != 0) {
            *(undefined4 *)(lVar4 + 0x10) = 0;
            iVar1 = FUN_004bcc70(lVar4,1);
            if ((iVar1 != 0) &&
               (iVar1 = FUN_004b5a10(lVar11,uVar5,lVar4,param_3,param_4), iVar1 != 0)) {
LAB_005c5bc5:
              iVar1 = FUN_004b9090(uVar8,lVar11,param_3,param_4);
              if (iVar1 != 0) {
                iVar1 = FUN_004b7840(uVar8,uVar5);
                if (iVar1 == 0) goto LAB_005c5a60;
                FUN_0051f420();
                uVar5 = 0x161;
LAB_005c5c08:
                FUN_0051f540("../crypto/bn/bn_sqrt.c",uVar5,"BN_mod_sqrt");
                FUN_0051f8f0(3,0x6f,0);
              }
            }
          }
        }
        else if (iVar1 == 2) {
          iVar1 = FUN_004b9110(uVar7,uVar5,param_3);
          if ((iVar1 != 0) && (iVar1 = FUN_004bc3b0(lVar4,param_3,3), iVar1 != 0)) {
            *(undefined4 *)(lVar4 + 0x10) = 0;
            iVar1 = FUN_004b5a10(uVar6,uVar7,lVar4,param_3,param_4);
            if ((iVar1 != 0) &&
               ((((iVar1 = FUN_004b9090(lVar9,uVar6,param_3,param_4), iVar1 != 0 &&
                  (iVar1 = FUN_004b8fe0(uVar7,uVar7,lVar9,param_3,param_4), iVar1 != 0)) &&
                 (iVar1 = FUN_004bcb60(uVar7,1), iVar1 != 0)) &&
                ((iVar1 = FUN_004b8fe0(uVar8,uVar5,uVar6,param_3,param_4), iVar1 != 0 &&
                 (iVar1 = FUN_004b8fe0(uVar8,uVar8,uVar7,param_3,param_4), iVar1 != 0)))))) {
              lVar4 = FUN_004b8260(lVar11,uVar8);
joined_r0x005c5bbf:
              if (lVar4 != 0) goto LAB_005c5bc5;
            }
          }
        }
        else {
          lVar10 = FUN_004b8260(lVar4,param_3);
          if (lVar10 != 0) {
            uVar13 = 2;
            *(undefined4 *)(lVar4 + 0x10) = 0;
            do {
              if (uVar13 < 0x16) {
LAB_005c5a3c:
                iVar2 = FUN_004b8190(lVar9,uVar13);
                if (iVar2 == 0) goto LAB_005c5a50;
              }
              else {
                uVar3 = FUN_004b7bb0(param_3);
                iVar2 = FUN_004bb500(lVar9,uVar3,0,0,0,param_4);
                if (iVar2 == 0) goto LAB_005c5a50;
                iVar2 = FUN_004b77f0(lVar9,param_3);
                if (-1 < iVar2) {
                  if (*(int *)(param_3 + 0x10) == 0) {
                    pcVar12 = FUN_004b18d0;
                  }
                  else {
                    pcVar12 = FUN_004b1810;
                  }
                  iVar2 = (*pcVar12)(lVar9,lVar9,param_3);
                  if (iVar2 == 0) goto LAB_005c5a50;
                }
                iVar2 = FUN_004b7ba0(lVar9);
                if (iVar2 != 0) goto LAB_005c5a3c;
              }
              iVar2 = FUN_005c2570(lVar9,lVar4,param_4);
              if (iVar2 < -1) goto LAB_005c5a50;
              if (iVar2 == 0) {
                FUN_0051f420();
                uVar5 = 0xcb;
LAB_005c5e4d:
                FUN_0051f540("../crypto/bn/bn_sqrt.c",uVar5,"BN_mod_sqrt");
                FUN_0051f8f0(3,0x70,0);
                goto LAB_005c5a50;
              }
              if (iVar2 != 1) {
                if (iVar2 == -1) {
                  iVar2 = FUN_004bc3b0(lVar4,lVar4,iVar1);
                  if ((iVar2 == 0) ||
                     (iVar2 = FUN_004b5a10(lVar9,lVar9,lVar4,param_3,param_4), iVar2 == 0))
                  goto LAB_005c5a50;
                  iVar2 = FUN_004b7cc0(lVar9);
                  if (iVar2 != 0) {
                    FUN_0051f420();
                    uVar5 = 0xe6;
                    goto LAB_005c5e4d;
                  }
                  iVar2 = FUN_004bbff0(uVar7,lVar4);
                  if (iVar2 == 0) goto LAB_005c5a50;
                  iVar2 = FUN_004b7ba0(uVar7);
                  if (iVar2 == 0) {
                    iVar2 = FUN_004b5a10(uVar8,uVar5,uVar7,param_3,param_4);
                    if (iVar2 == 0) goto LAB_005c5a50;
                    iVar2 = FUN_004b7ba0(uVar8);
                    if (iVar2 != 0) goto LAB_005c5fd9;
                  }
                  else {
                    iVar2 = FUN_004b8a20(uVar7,uVar5,param_3,param_4);
                    if (iVar2 == 0) goto LAB_005c5a50;
                    iVar2 = FUN_004b7ba0(uVar7);
                    if (iVar2 != 0) {
LAB_005c5fd9:
                      FUN_004b7b50(lVar11);
                      goto LAB_005c5a60;
                    }
                    iVar2 = FUN_004b8190(uVar8,1);
                    if (iVar2 == 0) goto LAB_005c5a50;
                  }
                  iVar2 = FUN_004b9090(uVar6,uVar8,param_3,param_4);
                  if ((iVar2 == 0) ||
                     (iVar2 = FUN_004b8fe0(uVar6,uVar6,uVar5,param_3,param_4), iVar2 == 0))
                  goto LAB_005c5a50;
                  iVar2 = FUN_004b8fe0(uVar8,uVar8,uVar5,param_3,param_4);
                  goto joined_r0x005c5dac;
                }
                break;
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 != 0x52);
            FUN_0051f420();
            FUN_0051f540("../crypto/bn/bn_sqrt.c",0xd7,"BN_mod_sqrt");
            FUN_0051f8f0(3,0x71,0);
          }
        }
LAB_005c5a50:
        if (param_1 != lVar11) goto LAB_005c5a55;
      }
    }
  }
  lVar11 = 0;
LAB_005c5a60:
  FUN_004b2d50(param_4);
  return lVar11;
joined_r0x005c5dac:
  if (iVar2 == 0) goto LAB_005c5a50;
  iVar2 = FUN_004b7cc0(uVar6);
  if (iVar2 != 0) {
    lVar4 = FUN_004b8260(lVar11,uVar8);
    goto joined_r0x005c5bbf;
  }
  iVar14 = 1;
  while( true ) {
    if (iVar1 == iVar14) {
      FUN_0051f420();
      uVar5 = 0x142;
      goto LAB_005c5c08;
    }
    if (iVar14 == 1) {
      iVar2 = FUN_004b9090(uVar7,uVar6,param_3,param_4);
    }
    else {
      iVar2 = FUN_004b8fe0(uVar7,uVar7,uVar7,param_3,param_4);
    }
    if (iVar2 == 0) goto LAB_005c5a50;
    iVar2 = FUN_004b7cc0(uVar7);
    if (iVar2 != 0) break;
    iVar14 = iVar14 + 1;
  }
  lVar4 = FUN_004b8260(uVar7,lVar9);
  if (lVar4 == 0) goto LAB_005c5a50;
  iVar1 = iVar1 - iVar14;
  while (iVar1 = iVar1 + -1, 0 < iVar1) {
    iVar2 = FUN_004b9090(uVar7,uVar7,param_3,param_4);
    if (iVar2 == 0) goto LAB_005c5a50;
  }
  iVar1 = FUN_004b8fe0(lVar9,uVar7,uVar7,param_3,param_4);
  if ((iVar1 == 0) || (iVar1 = FUN_004b8fe0(uVar8,uVar8,uVar7,param_3,param_4), iVar1 == 0))
  goto LAB_005c5a50;
  iVar2 = FUN_004b8fe0(uVar6,uVar6,lVar9,param_3,param_4);
  iVar1 = iVar14;
  goto joined_r0x005c5dac;
}


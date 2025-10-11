
/* WARNING: Type propagation algorithm not settling */

bool FUN_0050c5a0(long *param_1,undefined8 param_2,undefined8 param_3,int param_4,long param_5)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  
  lVar8 = 0;
  if ((param_5 == 0) && (lVar8 = FUN_004b2a70(param_1[0x15]), param_5 = lVar8, lVar8 == 0)) {
    return false;
  }
  FUN_004b2c00(param_5);
  uVar4 = FUN_004b2df0(param_5);
  lVar5 = FUN_004b2df0(param_5);
  uVar6 = FUN_004b2df0(param_5);
  lVar7 = FUN_004b2df0(param_5);
  if ((lVar7 != 0) && (iVar2 = FUN_004b8a20(uVar6,param_3,param_1[8],param_5), iVar2 != 0)) {
    if (*(long *)(*param_1 + 0x120) == 0) {
      iVar2 = (**(code **)(*param_1 + 0x100))(param_1,lVar5,param_3,param_5);
      if (iVar2 != 0) {
        iVar2 = (**(code **)(*param_1 + 0xf8))(param_1,uVar4,lVar5,param_3,param_5);
        goto joined_r0x0050c6d1;
      }
    }
    else {
      iVar2 = FUN_004b9090(lVar5,param_3,param_1[8],param_5);
      if (iVar2 != 0) {
        iVar2 = FUN_004b8fe0(uVar4,lVar5,param_3,param_1[8],param_5);
joined_r0x0050c6d1:
        if (iVar2 != 0) {
          if ((int)param_1[0xe] == 0) {
            pcVar1 = *(code **)(*param_1 + 0x120);
            if (pcVar1 == (code *)0x0) {
              iVar2 = (**(code **)(*param_1 + 0xf8))(param_1,lVar5,param_1[0xc],uVar6,param_5);
            }
            else {
              iVar2 = (*pcVar1)(param_1,lVar5,param_1[0xc],param_5);
              if (iVar2 == 0) goto LAB_0050c650;
              iVar2 = FUN_004b8fe0(lVar5,lVar5,uVar6,param_1[8],param_5);
            }
            if (iVar2 != 0) {
              iVar2 = FUN_004b8d50(uVar4,uVar4,lVar5,param_1[8]);
              goto joined_r0x0050c73f;
            }
          }
          else {
            iVar2 = FUN_004b9110(lVar5,uVar6,param_1[8]);
            if ((iVar2 != 0) && (iVar2 = FUN_004b8d50(lVar5,lVar5,uVar6,param_1[8]), iVar2 != 0)) {
              iVar2 = FUN_004b8f90(uVar4,uVar4,lVar5,param_1[8]);
joined_r0x0050c73f:
              if (iVar2 != 0) {
                lVar11 = param_1[0xd];
                if (*(code **)(*param_1 + 0x120) == (code *)0x0) {
                  lVar10 = param_1[8];
                }
                else {
                  iVar2 = (**(code **)(*param_1 + 0x120))(param_1,lVar5,lVar11,param_5);
                  if (iVar2 == 0) goto LAB_0050c650;
                  lVar10 = param_1[8];
                  lVar11 = lVar5;
                }
                iVar2 = FUN_004b8d50(uVar4,uVar4,lVar11,lVar10);
                if (iVar2 != 0) {
                  FUN_0051f000();
                  lVar5 = FUN_005c5800(lVar7,uVar4,param_1[8],param_5);
                  if (lVar5 == 0) {
                    uVar9 = FUN_0051e9f0();
                    if ((((uVar9 & 0x80000000) != 0) || ((char)(uVar9 >> 0x17) != '\x03')) ||
                       (((uint)uVar9 & 0x7fffff) != 0x6f)) {
                      FUN_0051f1a0();
                      bVar12 = false;
                      FUN_0051f420();
                      FUN_0051f540("../crypto/ec/ecp_oct.c",0x75,
                                   "ossl_ec_GFp_simple_set_compressed_coordinates");
                      FUN_0051f8f0(0x10,0x80003,0);
                      goto LAB_0050c653;
                    }
                    FUN_0051f050();
                    FUN_0051f420();
                    uVar4 = 0x70;
LAB_0050c816:
                    bVar12 = false;
                    FUN_0051f540("../crypto/ec/ecp_oct.c",uVar4,
                                 "ossl_ec_GFp_simple_set_compressed_coordinates");
                    FUN_0051f8f0(0x10,0x6e,0);
                    goto LAB_0050c653;
                  }
                  FUN_0051f1a0();
                  uVar3 = FUN_004b7d40(lVar7);
                  if (uVar3 == (param_4 != 0)) {
LAB_0050c8fd:
                    uVar3 = FUN_004b7d40(lVar7);
                    if (uVar3 == (param_4 != 0)) {
                      iVar2 = FUN_004f0f80(param_1,param_2,uVar6,lVar7,param_5);
                      bVar12 = iVar2 != 0;
                    }
                    else {
                      FUN_0051f420();
                      bVar12 = false;
                      FUN_0051f540("../crypto/ec/ecp_oct.c",0x90,
                                   "ossl_ec_GFp_simple_set_compressed_coordinates");
                      FUN_0051f8f0(0x10,0xc0103,0);
                    }
                    goto LAB_0050c653;
                  }
                  iVar2 = FUN_004b7ba0(lVar7);
                  if (iVar2 == 0) {
                    iVar2 = FUN_004b16e0(lVar7,param_1[8]);
                    if (iVar2 != 0) goto LAB_0050c8fd;
                  }
                  else {
                    iVar2 = FUN_005c2570(uVar6,param_1[8],param_5);
                    if (iVar2 != -2) {
                      if (iVar2 != 1) {
                        FUN_0051f420();
                        uVar4 = 0x89;
                        goto LAB_0050c816;
                      }
                      FUN_0051f420();
                      FUN_0051f540("../crypto/ec/ecp_oct.c",0x84,
                                   "ossl_ec_GFp_simple_set_compressed_coordinates");
                      FUN_0051f8f0(0x10,0x6d,0);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0050c650:
  bVar12 = false;
LAB_0050c653:
  FUN_004b2d50(param_5);
  FUN_004b2b50(lVar8);
  return bVar12;
}


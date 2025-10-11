
undefined8
FUN_0058fa00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            long param_5,ulong *param_6)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  long local_c8;
  long local_c0;
  long local_b8;
  undefined8 local_40 [2];
  
  local_40[0] = param_3;
  uVar6 = FUN_004ee2d0();
  uVar7 = FUN_0058ee70(uVar6);
  iVar4 = FUN_0040ac10(param_2);
  uVar8 = FUN_004ee2a0(param_1);
  uVar9 = FUN_004ee2b0(param_1);
  if ((uVar7 == 0) || (iVar4 < 1)) {
    local_c8 = 0;
    lVar15 = 0;
    puVar10 = (undefined8 *)0x0;
    lVar16 = 0;
    local_b8 = 0;
    lVar12 = 0;
    local_c0 = 0;
    goto LAB_0058fea4;
  }
  thunk_FUN_00713720(param_5,0xff,*param_6);
  puVar10 = (undefined8 *)FUN_0058ef20(0,local_40,param_4);
  if (puVar10 == (undefined8 *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/sm2/sm2_crypt.c",0x12f,"ossl_sm2_decrypt");
    uVar6 = 100;
LAB_0058fef7:
    lVar16 = 0;
    lVar12 = 0;
    FUN_0051f8f0(0x35,uVar6,0);
    local_c8 = 0;
    lVar15 = 0;
    local_b8 = 0;
    local_c0 = 0;
  }
  else {
    if (*(int *)puVar10[2] != iVar4) {
      FUN_0051f420();
      FUN_0051f540("../crypto/sm2/sm2_crypt.c",0x134,"ossl_sm2_decrypt");
      uVar6 = 0x68;
      goto LAB_0058fef7;
    }
    uVar2 = *(undefined8 *)((int *)puVar10[2] + 2);
    lVar3 = *(long *)((uint *)puVar10[3] + 2);
    uVar1 = *(uint *)puVar10[3];
    uVar11 = (ulong)(int)uVar1;
    if (*param_6 < uVar11) {
      FUN_0051f420();
      FUN_0051f540("../crypto/sm2/sm2_crypt.c",0x13c,"ossl_sm2_decrypt");
      uVar6 = 0x6b;
      goto LAB_0058fef7;
    }
    lVar12 = FUN_004b2a70(uVar8);
    if (lVar12 == 0) {
      FUN_0051f420();
      lVar16 = 0;
      FUN_0051f540("../crypto/sm2/sm2_crypt.c",0x142,"ossl_sm2_decrypt");
      FUN_0051f8f0(0x35,0xc0100,0);
      local_c8 = 0;
      lVar15 = 0;
      local_b8 = 0;
      local_c0 = 0;
    }
    else {
      FUN_004b2c00(lVar12);
      uVar13 = FUN_004b2df0(lVar12);
      lVar14 = FUN_004b2df0(lVar12);
      if (lVar14 == 0) {
        FUN_0051f420();
        lVar16 = 0;
        FUN_0051f540("../crypto/sm2/sm2_crypt.c",0x14b,"ossl_sm2_decrypt");
        FUN_0051f8f0(0x35,0x80003,0);
        lVar15 = 0;
        local_b8 = 0;
        local_c0 = 0;
        local_c8 = 0;
      }
      else {
        lVar15 = FUN_0041aec0(uVar11,"../crypto/sm2/sm2_crypt.c",0x14f);
        local_c0 = FUN_0041aec0(uVar7 * 2,"../crypto/sm2/sm2_crypt.c",0x150);
        local_b8 = FUN_0041aec0((long)iVar4,"../crypto/sm2/sm2_crypt.c",0x151);
        if ((lVar15 == 0 || local_c0 == 0) || (local_b8 == 0)) {
          lVar16 = 0;
          FUN_0051f420();
          FUN_0051f540("../crypto/sm2/sm2_crypt.c",0x154,"ossl_sm2_decrypt");
          FUN_0051f8f0(0x35,0xc0100,0);
          local_c8 = 0;
        }
        else {
          lVar16 = FUN_004efb90(uVar6);
          if (lVar16 == 0) {
            FUN_0051f420();
            FUN_0051f540("../crypto/sm2/sm2_crypt.c",0x15a,"ossl_sm2_decrypt");
            uVar6 = 0xc0100;
          }
          else {
            iVar5 = FUN_004f0f80(uVar6,lVar16,*puVar10,puVar10[1],lVar12);
            if (iVar5 != 0) {
              uVar17 = FUN_004ee2e0(param_1);
              iVar5 = FUN_004f1750(uVar6,lVar16,0,lVar16,uVar17,lVar12);
              if ((iVar5 != 0) &&
                 (iVar5 = FUN_004f0d70(uVar6,lVar16,uVar13,lVar14,lVar12), iVar5 != 0)) {
                iVar5 = FUN_004b87b0(uVar13,local_c0,uVar7 & 0xffffffff);
                if (-1 < iVar5) {
                  iVar5 = FUN_004b87b0(lVar14,local_c0 + uVar7,uVar7 & 0xffffffff);
                  if ((-1 < iVar5) &&
                     (iVar5 = FUN_004f5db0(lVar15,uVar11,local_c0,uVar7 * 2,0,0,param_2,uVar8,uVar9)
                     , iVar5 != 0)) {
                    uVar18 = 0;
                    if (uVar1 != 0) {
                      do {
                        *(byte *)(param_5 + uVar18) =
                             *(byte *)(lVar3 + uVar18) ^ *(byte *)(lVar15 + uVar18);
                        uVar18 = uVar18 + 1;
                      } while (uVar18 != uVar1);
                    }
                    local_c8 = FUN_00405f40();
                    if (local_c8 == 0) {
                      FUN_0051f420();
                      FUN_0051f540("../crypto/sm2/sm2_crypt.c",0x174,"ossl_sm2_decrypt");
                      FUN_0051f8f0(0x35,0xc0100,0);
                    }
                    else {
                      iVar5 = FUN_00407400(local_c8,param_2);
                      if ((((iVar5 == 0) ||
                           (iVar5 = FUN_00405f60(local_c8,local_c0,uVar7), iVar5 == 0)) ||
                          (iVar5 = FUN_00405f60(local_c8,param_5,uVar11), iVar5 == 0)) ||
                         ((iVar5 = FUN_00405f60(local_c8,local_c0 + uVar7,uVar7), iVar5 == 0 ||
                          (iVar5 = FUN_00406ca0(local_c8,local_b8,0), iVar5 == 0)))) {
                        FUN_0051f420();
                        FUN_0051f540("../crypto/sm2/sm2_crypt.c",0x17d,"ossl_sm2_decrypt");
                        FUN_0051f8f0(0x35,0x80006,0);
                      }
                      else {
                        iVar4 = FUN_00422820(local_b8,uVar2,(long)iVar4);
                        if (iVar4 == 0) {
                          uVar6 = 1;
                          *param_6 = uVar11;
                          goto LAB_0058fe0b;
                        }
                        FUN_0051f420();
                        FUN_0051f540("../crypto/sm2/sm2_crypt.c",0x182,"ossl_sm2_decrypt");
                        FUN_0051f8f0(0x35,0x66,0);
                      }
                    }
                    goto LAB_0058fea4;
                  }
                }
                FUN_0051f420();
                FUN_0051f540("../crypto/sm2/sm2_crypt.c",0x16b,"ossl_sm2_decrypt");
                uVar6 = 0xc0103;
                goto LAB_0058ffcd;
              }
            }
            FUN_0051f420();
            FUN_0051f540("../crypto/sm2/sm2_crypt.c",0x163,"ossl_sm2_decrypt");
            uVar6 = 0x80010;
          }
LAB_0058ffcd:
          FUN_0051f8f0(0x35,uVar6,0);
          local_c8 = 0;
        }
      }
    }
  }
LAB_0058fea4:
  uVar6 = 0;
  thunk_FUN_00713720(param_5,0,*param_6);
LAB_0058fe0b:
  FUN_0041ad60(lVar15,"../crypto/sm2/sm2_crypt.c",0x18d);
  FUN_0041ad60(local_c0,"../crypto/sm2/sm2_crypt.c",0x18e);
  FUN_0041ad60(local_b8,"../crypto/sm2/sm2_crypt.c",399);
  FUN_004efcc0(lVar16);
  FUN_004b2b50(lVar12);
  FUN_0058efa0(puVar10);
  FUN_00406b90(local_c8);
  return uVar6;
}


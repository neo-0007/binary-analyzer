
undefined4
FUN_0058f0f0(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,undefined8 param_5,
            long *param_6)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined4 uVar19;
  long in_FS_OFFSET;
  long local_100;
  long local_f8;
  long local_f0;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = param_5;
  lVar3 = FUN_00405f40();
  uVar4 = FUN_004ee2d0(param_1);
  uVar5 = FUN_004ef7e0(uVar4);
  uVar6 = FUN_004ee3f0(param_1);
  iVar1 = FUN_0040ac10(param_2);
  uVar7 = FUN_004ee2a0(param_1);
  uVar8 = FUN_004ee2b0(param_1);
  local_50 = 0;
  local_58 = 0;
  if ((lVar3 == 0) || (iVar1 < 1)) {
    FUN_0051f420();
    uVar4 = 0x8e;
  }
  else {
    uVar9 = FUN_0058ee70(uVar4);
    if (uVar9 != 0) {
      lVar10 = FUN_004efb90(uVar4);
      local_f8 = FUN_004efb90(uVar4);
      lVar11 = FUN_004b2a70(uVar7);
      if ((lVar10 == 0 || local_f8 == 0) || (lVar11 == 0)) {
        lVar18 = 0;
        uVar19 = 0;
        FUN_0051f420();
        FUN_0051f540("../crypto/sm2/sm2_crypt.c",0x9c,"ossl_sm2_encrypt");
        FUN_0051f8f0(0x35,0xc0100,0);
        lVar16 = 0;
        local_f0 = 0;
        local_100 = 0;
        goto LAB_0058f3eb;
      }
      FUN_004b2c00(lVar11);
      uVar12 = FUN_004b2df0(lVar11);
      uVar13 = FUN_004b2df0(lVar11);
      uVar14 = FUN_004b2df0(lVar11);
      uVar15 = FUN_004b2df0(lVar11);
      lVar16 = FUN_004b2df0(lVar11);
      if (lVar16 == 0) {
        lVar18 = 0;
        uVar19 = 0;
        FUN_0051f420();
        FUN_0051f540("../crypto/sm2/sm2_crypt.c",0xa8,"ossl_sm2_encrypt");
        FUN_0051f8f0(0x35,0x80003,0);
        local_f0 = 0;
        local_100 = 0;
        lVar16 = 0;
        goto LAB_0058f3eb;
      }
      local_100 = FUN_0041aec0(uVar9 * 2,"../crypto/sm2/sm2_crypt.c",0xac);
      local_f0 = FUN_0041aec0((long)iVar1,"../crypto/sm2/sm2_crypt.c",0xad);
      if ((local_100 == 0) || (local_f0 == 0)) {
        FUN_0051f420();
        FUN_0051f540("../crypto/sm2/sm2_crypt.c",0xb0,"ossl_sm2_encrypt");
        uVar4 = 0xc0100;
      }
      else {
        thunk_FUN_00713720(local_70,0,*param_6);
        iVar2 = FUN_004bb5a0(uVar12,uVar5,0,lVar11);
        if (iVar2 == 0) {
          FUN_0051f420();
          lVar18 = 0;
          FUN_0051f540("../crypto/sm2/sm2_crypt.c",0xb7,"ossl_sm2_encrypt");
          FUN_0051f8f0(0x35,0xc0103,0);
          lVar16 = 0;
          uVar19 = 0;
          goto LAB_0058f3eb;
        }
        iVar2 = FUN_004f1750(uVar4,lVar10,uVar12,0,0,lVar11);
        if ((((iVar2 == 0) || (iVar2 = FUN_004f0d70(uVar4,lVar10,uVar13,uVar15,lVar11), iVar2 == 0))
            || (iVar2 = FUN_004f1750(uVar4,local_f8,0,uVar6,uVar12,lVar11), iVar2 == 0)) ||
           (iVar2 = FUN_004f0d70(uVar4,local_f8,uVar14,lVar16,lVar11), iVar2 == 0)) {
          FUN_0051f420();
          FUN_0051f540("../crypto/sm2/sm2_crypt.c",0xbf,"ossl_sm2_encrypt");
          uVar4 = 0x80010;
        }
        else {
          iVar2 = FUN_004b87b0(uVar14,local_100,uVar9 & 0xffffffff);
          if (-1 < iVar2) {
            iVar2 = FUN_004b87b0(lVar16,local_100 + uVar9,uVar9 & 0xffffffff);
            if (-1 < iVar2) {
              lVar16 = FUN_0041aec0(param_4,"../crypto/sm2/sm2_crypt.c",0xc9);
              if (lVar16 == 0) {
                lVar18 = 0;
                uVar19 = 0;
                FUN_0051f420();
                FUN_0051f540("../crypto/sm2/sm2_crypt.c",0xcb,"ossl_sm2_encrypt");
                FUN_0051f8f0(0x35,0xc0100,0);
                goto LAB_0058f3eb;
              }
              iVar2 = FUN_004f5db0(lVar16,param_4,local_100,uVar9 * 2,0,0,param_2,uVar7,uVar8);
              if (iVar2 == 0) {
                lVar18 = 0;
                FUN_0051f420();
                FUN_0051f540("../crypto/sm2/sm2_crypt.c",0xd2,"ossl_sm2_encrypt");
                FUN_0051f8f0(0x35,0x80006,0);
                uVar19 = 0;
                goto LAB_0058f3eb;
              }
              uVar17 = 0;
              if (param_4 != 0) {
                do {
                  *(byte *)(lVar16 + uVar17) =
                       *(byte *)(lVar16 + uVar17) ^ *(byte *)(param_3 + uVar17);
                  uVar17 = uVar17 + 1;
                } while (param_4 != uVar17);
              }
              uVar4 = FUN_0040ab30(param_2);
              lVar18 = FUN_004069d0(uVar7,uVar4,uVar8);
              if (lVar18 == 0) {
                FUN_0051f420();
                uVar4 = 0xdb;
LAB_0058f99c:
                FUN_0051f540("../crypto/sm2/sm2_crypt.c",uVar4,"ossl_sm2_encrypt");
                uVar4 = 0xc0103;
              }
              else {
                iVar2 = FUN_00407400(lVar3,lVar18);
                if (((iVar2 == 0) || (iVar2 = FUN_00405f60(lVar3,local_100,uVar9), iVar2 == 0)) ||
                   ((iVar2 = FUN_00405f60(lVar3,param_3,param_4), iVar2 == 0 ||
                    ((iVar2 = FUN_00405f60(lVar3,local_100 + uVar9,uVar9), iVar2 == 0 ||
                     (iVar2 = FUN_00406ca0(lVar3,local_f0,0), iVar2 == 0)))))) {
                  FUN_0051f420();
                  FUN_0051f540("../crypto/sm2/sm2_crypt.c",0xe3,"ossl_sm2_encrypt");
                  uVar4 = 0x80006;
                }
                else {
                  local_68 = uVar13;
                  local_60 = uVar15;
                  local_58 = FUN_004a7670();
                  local_50 = FUN_004a7670();
                  if ((local_50 != 0) && (local_58 != 0)) {
                    iVar1 = thunk_FUN_004a1fa0(local_58,local_f0,iVar1);
                    if ((iVar1 == 0) ||
                       (iVar1 = thunk_FUN_004a1fa0(local_50,lVar16,param_4 & 0xffffffff), iVar1 == 0
                       )) {
                      FUN_0051f420();
                      uVar4 = 0xf2;
                    }
                    else {
                      iVar1 = FUN_0058ef50(&local_68,&local_70);
                      if (-1 < iVar1) {
                        uVar19 = 1;
                        *param_6 = (long)iVar1;
                        goto LAB_0058f3eb;
                      }
                      FUN_0051f420();
                      uVar4 = 0xf9;
                    }
                    goto LAB_0058f99c;
                  }
                  FUN_0051f420();
                  FUN_0051f540("../crypto/sm2/sm2_crypt.c",0xed,"ossl_sm2_encrypt");
                  uVar4 = 0xc0100;
                }
              }
              uVar19 = 0;
              FUN_0051f8f0(0x35,uVar4,0);
              goto LAB_0058f3eb;
            }
          }
          FUN_0051f420();
          FUN_0051f540("../crypto/sm2/sm2_crypt.c",0xc5,"ossl_sm2_encrypt");
          uVar4 = 0xc0103;
        }
      }
      lVar18 = 0;
      uVar19 = 0;
      FUN_0051f8f0(0x35,uVar4,0);
      lVar16 = 0;
      goto LAB_0058f3eb;
    }
    FUN_0051f420();
    uVar4 = 0x94;
  }
  lVar18 = 0;
  lVar10 = 0;
  lVar11 = 0;
  uVar19 = 0;
  FUN_0051f540("../crypto/sm2/sm2_crypt.c",uVar4,"ossl_sm2_encrypt");
  FUN_0051f8f0(0x35,0xc0103,0);
  lVar16 = 0;
  local_f0 = 0;
  local_100 = 0;
  local_f8 = 0;
LAB_0058f3eb:
  FUN_00406a50(lVar18);
  thunk_FUN_004a2270(local_50);
  thunk_FUN_004a2270(local_58);
  FUN_0041ad60(lVar16,"../crypto/sm2/sm2_crypt.c",0x104);
  FUN_0041ad60(local_100,"../crypto/sm2/sm2_crypt.c",0x105);
  FUN_0041ad60(local_f0,"../crypto/sm2/sm2_crypt.c",0x106);
  FUN_00406b90(lVar3);
  FUN_004b2b50(lVar11);
  FUN_004efcc0(lVar10);
  FUN_004efcc0(local_f8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar19;
}


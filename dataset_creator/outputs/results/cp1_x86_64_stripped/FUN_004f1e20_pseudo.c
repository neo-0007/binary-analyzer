
long FUN_004f1e20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long in_FS_OFFSET;
  int local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_74 = -1;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  lVar4 = thunk_FUN_0041cdd0(param_1,"group");
  if (lVar4 != 0) {
    local_48 = 0;
    if (*(int *)(lVar4 + 8) == 4) {
      local_48 = *(long *)(lVar4 + 0x10);
      if (local_48 != 0) goto LAB_004f1ec8;
    }
    else if ((*(int *)(lVar4 + 8) == 6) && (iVar2 = FUN_0041e310(lVar4,&local_48), iVar2 != 0)) {
LAB_004f1ec8:
      iVar2 = FUN_005357d0(local_48);
      if (iVar2 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/ec/ec_lib.c",0x5d3,"group_new_from_name");
        FUN_0051f8f0(0x10,0x8d,0);
        lVar4 = 0;
        goto LAB_004f1f0b;
      }
      lVar4 = FUN_004ec9c0(param_2,param_3);
      if ((lVar4 == 0) || (iVar2 = FUN_004f1ca0(lVar4,param_1), iVar2 != 0)) goto LAB_004f1f0b;
      FUN_004efd00(lVar4);
    }
    lVar4 = 0;
    goto LAB_004f1f0b;
  }
  lVar5 = FUN_004b2a70(param_2);
  lVar4 = 0;
  if (lVar5 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_lib.c",0x61d,"EC_GROUP_new_from_params");
    FUN_0051f8f0(0x10,0xc0100,0);
    goto LAB_004f1f0b;
  }
  FUN_004b2c00(lVar5);
  local_70 = FUN_004b2df0(lVar5);
  local_68 = FUN_004b2df0(lVar5);
  local_60 = FUN_004b2df0(lVar5);
  local_58 = FUN_004b2df0(lVar5);
  if (local_58 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_lib.c",0x627,"EC_GROUP_new_from_params");
    FUN_0051f8f0(0x10,0xc0100,0);
    lVar7 = 0;
    lVar6 = 0;
    goto LAB_004f1fe6;
  }
  lVar6 = thunk_FUN_0041cdd0(param_1,"field-type");
  if ((lVar6 == 0) || (*(int *)(lVar6 + 8) != 4)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_lib.c",0x62d,"EC_GROUP_new_from_params");
    uVar12 = 0x67;
LAB_004f1fd5:
    lVar6 = 0;
    FUN_0051f8f0(0x10,uVar12,0);
    lVar7 = 0;
LAB_004f1fe6:
    FUN_004efd00(lVar6);
    lVar6 = lVar4;
  }
  else {
    iVar2 = FUN_0041c9c0(*(undefined8 *)(lVar6 + 0x10),"prime-field");
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = FUN_0041c9c0(*(undefined8 *)(lVar6 + 0x10),"characteristic-two-field");
      if (iVar2 != 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/ec/ec_lib.c",0x637,"EC_GROUP_new_from_params");
        uVar12 = 0x83;
        goto LAB_004f1fd5;
      }
    }
    uVar12 = thunk_FUN_0041cdd0(param_1,"a");
    iVar3 = FUN_0041dc20(uVar12,&local_68);
    if (iVar3 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/ec/ec_lib.c",0x63d,"EC_GROUP_new_from_params");
      uVar12 = 0xa8;
      goto LAB_004f1fd5;
    }
    uVar12 = thunk_FUN_0041cdd0(param_1,"b");
    iVar3 = FUN_0041dc20(uVar12,&local_60);
    if (iVar3 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/ec/ec_lib.c",0x642,"EC_GROUP_new_from_params");
      uVar12 = 0xa9;
      goto LAB_004f1fd5;
    }
    uVar12 = thunk_FUN_0041cdd0(param_1,"p");
    iVar3 = FUN_0041dc20(uVar12,&local_70);
    if (iVar3 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/ec/ec_lib.c",0x649,"EC_GROUP_new_from_params");
      uVar12 = 0xac;
      goto LAB_004f1fd5;
    }
    if (iVar2 != 0) {
      iVar2 = FUN_004b7d60();
      if ((iVar2 == 0) && (iVar2 = FUN_004b7ba0(local_70), iVar2 == 0)) {
        iVar2 = FUN_004b7bb0(local_70);
        if (iVar2 < 0x296) {
          lVar6 = FUN_004ed500(local_70,local_68,local_60,lVar5);
          if (lVar6 == 0) goto LAB_004f23aa;
          goto LAB_004f2136;
        }
        FUN_0051f420();
        FUN_0051f540("../crypto/ec/ec_lib.c",0x654,"EC_GROUP_new_from_params");
        uVar12 = 0x8f;
      }
      else {
        FUN_0051f420();
        FUN_0051f540("../crypto/ec/ec_lib.c",0x64f,"EC_GROUP_new_from_params");
        uVar12 = 0xac;
      }
      goto LAB_004f1fd5;
    }
    lVar6 = FUN_004ed580(local_70,local_68,local_60,0);
    if (lVar6 == 0) {
LAB_004f23aa:
      FUN_0051f420();
      FUN_0051f540("../crypto/ec/ec_lib.c",0x66c,"EC_GROUP_new_from_params");
      uVar12 = 0x80010;
      goto LAB_004f1fd5;
    }
    iVar2 = FUN_004efad0(lVar6);
    if (0x295 < iVar2) {
      FUN_0051f420();
      FUN_0051f540("../crypto/ec/ec_lib.c",0x664,"EC_GROUP_new_from_params");
      FUN_0051f8f0(0x10,0x8f,0);
      lVar7 = 0;
      goto LAB_004f1fe6;
    }
LAB_004f2136:
    lVar7 = thunk_FUN_0041cdd0(param_1,"seed");
    if (lVar7 != 0) {
      if (*(int *)(lVar7 + 8) == 5) {
        lVar7 = FUN_004ef8e0(lVar6,*(undefined8 *)(lVar7 + 0x10),*(undefined8 *)(lVar7 + 0x18));
        if (lVar7 != 0) goto LAB_004f23d3;
        lVar7 = 0;
      }
      else {
        FUN_0051f420();
        FUN_0051f540("../crypto/ec/ec_lib.c",0x674,"EC_GROUP_new_from_params");
        FUN_0051f8f0(0x10,0xaf,0);
        lVar7 = 0;
      }
      goto LAB_004f1fe6;
    }
LAB_004f23d3:
    lVar8 = thunk_FUN_0041cdd0(param_1,"generator");
    if ((lVar8 == 0) || (*(int *)(lVar8 + 8) != 5)) {
      FUN_0051f420();
      FUN_0051f540("../crypto/ec/ec_lib.c",0x67f,"EC_GROUP_new_from_params");
      FUN_0051f8f0(0x10,0xad,0);
      lVar7 = 0;
      goto LAB_004f1fe6;
    }
    pbVar1 = *(byte **)(lVar8 + 0x10);
    lVar7 = FUN_004efb90(lVar6);
    if (lVar7 == 0) goto LAB_004f1fe6;
    FUN_004ef8c0(lVar6,*pbVar1 & 0xfe);
    iVar3 = FUN_004f4d10(lVar6,lVar7,pbVar1,*(undefined8 *)(lVar8 + 0x18),lVar5);
    if (iVar3 == 0) {
      FUN_0051f420();
      uVar12 = 0x688;
LAB_004f2793:
      FUN_0051f540("../crypto/ec/ec_lib.c",uVar12,"EC_GROUP_new_from_params");
      FUN_0051f8f0(0x10,0xad,0);
      goto LAB_004f1fe6;
    }
    uVar12 = thunk_FUN_0041cdd0(param_1,"order");
    iVar3 = FUN_0041dc20(uVar12,&local_58);
    if ((((iVar3 == 0) || (iVar3 = FUN_004b7d60(local_58), iVar3 != 0)) ||
        (iVar3 = FUN_004b7ba0(local_58), iVar3 != 0)) ||
       (iVar3 = FUN_004b7bb0(local_58), iVar2 + 1 < iVar3)) {
      FUN_0051f420();
      FUN_0051f540("../crypto/ec/ec_lib.c",0x691,"EC_GROUP_new_from_params");
      FUN_0051f8f0(0x10,0x7a,0);
      goto LAB_004f1fe6;
    }
    lVar8 = thunk_FUN_0041cdd0(param_1,"cofactor");
    if ((lVar8 != 0) &&
       ((local_50 = FUN_004b2df0(lVar5), local_50 == 0 ||
        (iVar2 = FUN_0041dc20(lVar8,&local_50), iVar2 == 0)))) {
      FUN_0051f420();
      FUN_0051f540("../crypto/ec/ec_lib.c",0x69a,"EC_GROUP_new_from_params");
      FUN_0051f8f0(0x10,0xab,0);
      goto LAB_004f1fe6;
    }
    iVar2 = FUN_004f03b0(lVar6,lVar7,local_58,local_50);
    if (iVar2 == 0) {
      FUN_0051f420();
      uVar12 = 0x6a1;
      goto LAB_004f2793;
    }
    uVar12 = FUN_004ef780(lVar6);
    uVar9 = FUN_004ef7e0(lVar6);
    lVar8 = FUN_004ef9b0(lVar6);
    lVar10 = FUN_004f0340(lVar6);
    if (((lVar10 == 0) || (lVar11 = FUN_004ef8e0(lVar10,0,0), lVar11 != 1)) ||
       (iVar2 = FUN_004f03b0(lVar10,uVar12,uVar9,0), iVar2 == 0)) {
LAB_004f28c7:
      lVar11 = 0;
LAB_004f28ca:
      FUN_004efd00(lVar10);
      FUN_004efd00(lVar11);
      FUN_0051f420();
      FUN_0051f540("../crypto/ec/ec_lib.c",0x6a7,"EC_GROUP_new_from_params");
      FUN_0051f8f0(0x10,0xae,0);
      goto LAB_004f1fe6;
    }
    iVar2 = FUN_004ed170(lVar10,lVar5);
    if (iVar2 != 0) {
      if (iVar2 == 0x2e9) {
        iVar2 = 0x2c9;
      }
      lVar11 = FUN_004ec9c0(param_2,param_3,iVar2);
      if (lVar11 == 0) goto LAB_004f28c7;
      FUN_004ef8a0(lVar11,0);
      if ((lVar8 != 0) || (lVar8 = FUN_004ef8e0(lVar11,0,0), lVar8 == 1)) {
        FUN_004efd00(lVar10);
        if (lVar11 == lVar6) goto LAB_004f27ce;
        FUN_004efd00(lVar6);
        lVar6 = lVar11;
        goto LAB_004f1ff8;
      }
      goto LAB_004f28ca;
    }
    FUN_004efd00(lVar10);
LAB_004f27ce:
    lVar8 = thunk_FUN_0041cdd0(param_1,"encoding");
    if ((lVar8 != 0) && (iVar2 = FUN_004ebf20(lVar8,&local_74), iVar2 == 0)) {
      FUN_0051f420();
      uVar12 = 0x6b2;
LAB_004f2836:
      FUN_0051f540("../crypto/ec/ec_lib.c",uVar12,"EC_GROUP_new_from_params");
      FUN_0051f8f0(0x10,0x66,0);
      goto LAB_004f1fe6;
    }
    if (local_74 == 1) {
      FUN_0051f420();
      uVar12 = 0x6b6;
      goto LAB_004f2836;
    }
    FUN_004ef8a0(lVar6,0);
  }
LAB_004f1ff8:
  FUN_004efcc0(lVar7);
  FUN_004b2d50(lVar5);
  FUN_004b2b50(lVar5);
  lVar4 = lVar6;
LAB_004f1f0b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return lVar4;
}


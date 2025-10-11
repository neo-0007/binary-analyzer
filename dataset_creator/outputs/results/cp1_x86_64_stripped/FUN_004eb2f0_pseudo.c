
undefined8
FUN_004eb2f0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6,undefined8 *param_7)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *local_48;
  
  if (param_1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_backend.c",0x12a,"ossl_ec_group_todata");
    FUN_0051f8f0(0x10,0x86,0);
    return 0;
  }
  uVar1 = FUN_004ef8d0();
  lVar5 = FUN_004eb2c0(uVar1);
  if ((lVar5 == 0) || (iVar2 = FUN_00548b40(param_2,param_3,"point-format",lVar5), iVar2 == 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_backend.c",0x134,"ossl_ec_group_todata");
    FUN_0051f8f0(0x10,0x68,0);
    return 0;
  }
  uVar3 = FUN_004ef8b0(param_1);
  if (((&PTR_s_explicit_00903648)[(ulong)(uVar3 & 1) * 2] == (undefined *)0x0) ||
     (iVar2 = FUN_00548b40(param_2,param_3,"encoding"), iVar2 == 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_backend.c",0x13d,"ossl_ec_group_todata");
    FUN_0051f8f0(0x10,0x66,0);
    return 0;
  }
  iVar2 = FUN_004ef870(param_1);
  if ((param_2 == 0) || (iVar2 == 0)) {
    iVar4 = FUN_004ef890(param_1);
    if (iVar4 == 0x196) {
      local_48 = "prime-field";
    }
    else {
      local_48 = "characteristic-two-field";
      if (iVar4 != 0x197) {
        FUN_0051f420();
        FUN_0051f540("../crypto/ec/ec_backend.c",0xb3,"ec_group_explicit_todata");
        FUN_0051f8f0(0x10,0x67,0);
        return 0;
      }
    }
    lVar5 = thunk_FUN_0041cdd0(param_3,"p");
    lVar6 = thunk_FUN_0041cdd0(param_3,"a");
    lVar7 = thunk_FUN_0041cdd0(param_3,"b");
    if (lVar7 != 0 || ((lVar5 != 0 || lVar6 != 0) || param_2 != 0)) {
      uVar9 = FUN_004b2df0(param_6);
      uVar8 = FUN_004b2df0(param_6);
      lVar5 = FUN_004b2df0(param_6);
      if (lVar5 == 0) {
        FUN_0051f420();
        uVar9 = 0xc1;
LAB_004eb742:
        FUN_0051f540("../crypto/ec/ec_backend.c",uVar9,"ec_group_explicit_todata");
        FUN_0051f8f0(0x10,0xc0100,0);
        return 0;
      }
      iVar4 = FUN_004efa30(param_1,uVar9,uVar8,lVar5,param_6);
      if (iVar4 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/ec/ec_backend.c",0xc6,"ec_group_explicit_todata");
        FUN_0051f8f0(0x10,0x8d,0);
        return 0;
      }
      iVar4 = FUN_00548c90(param_2,param_3,"p",uVar9);
      if (((iVar4 == 0) || (iVar4 = FUN_00548c90(param_2,param_3,"a",uVar8), iVar4 == 0)) ||
         (iVar4 = FUN_00548c90(param_2,param_3,"b",lVar5), iVar4 == 0)) {
        FUN_0051f420();
        uVar9 = 0xcc;
        goto LAB_004eb742;
      }
    }
    lVar5 = thunk_FUN_0041cdd0(param_3,"order");
    if (lVar5 == 0 && param_2 == 0) {
LAB_004eb581:
      lVar5 = thunk_FUN_0041cdd0(param_3,"field-type");
      if ((lVar5 == 0 && param_2 == 0) ||
         (iVar4 = FUN_00548b40(param_2,param_3,"field-type",local_48), iVar4 != 0)) {
        lVar5 = thunk_FUN_0041cdd0(param_3,"generator");
        if (lVar5 != 0 || param_2 != 0) {
          lVar5 = FUN_004ef780(param_1);
          uVar1 = FUN_004ef8d0(param_1);
          if (lVar5 == 0) {
            FUN_0051f420();
            uVar9 = 0xf1;
LAB_004eb89d:
            FUN_0051f540("../crypto/ec/ec_backend.c",uVar9,"ec_group_explicit_todata");
            FUN_0051f8f0(0x10,0xad,0);
            return 0;
          }
          lVar5 = FUN_004f4df0(param_1,lVar5,uVar1,param_7,param_6);
          if (lVar5 == 0) {
            FUN_0051f420();
            uVar9 = 0xf6;
            goto LAB_004eb89d;
          }
          iVar4 = FUN_00548b90(param_2,param_3,"generator",*param_7);
          if (iVar4 == 0) {
            FUN_0051f420();
            uVar9 = 0xfc;
            goto LAB_004eb863;
          }
        }
        lVar5 = thunk_FUN_0041cdd0(param_3,"cofactor");
        if (((lVar5 == 0 && param_2 == 0) || (lVar5 = FUN_004ef840(param_1), lVar5 == 0)) ||
           (iVar4 = FUN_00548c90(param_2,param_3,"cofactor",lVar5), iVar4 != 0)) {
          lVar5 = thunk_FUN_0041cdd0(param_3,"seed");
          if (lVar5 != 0 || param_2 != 0) {
            lVar5 = FUN_004ef9b0(param_1);
            lVar6 = FUN_004ef9c0(param_1);
            if (((lVar5 != 0) && (lVar6 != 0)) &&
               (iVar4 = FUN_00548b90(param_2,param_3,"seed",lVar5,lVar6), iVar4 == 0)) {
              FUN_0051f420();
              uVar9 = 0x117;
              goto LAB_004eb863;
            }
          }
          if (iVar2 != 0) goto LAB_004eb41c;
          goto LAB_004eb442;
        }
        FUN_0051f420();
        uVar9 = 0x108;
      }
      else {
        FUN_0051f420();
        uVar9 = 0xe5;
      }
    }
    else {
      lVar5 = FUN_004ef7e0(param_1);
      if (lVar5 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/ec/ec_backend.c",0xd6,"ec_group_explicit_todata");
        FUN_0051f8f0(0x10,0x7a,0);
        return 0;
      }
      iVar4 = FUN_00548c90(param_2,param_3,"order");
      if (iVar4 != 0) goto LAB_004eb581;
      FUN_0051f420();
      uVar9 = 0xdb;
    }
LAB_004eb863:
    FUN_0051f540("../crypto/ec/ec_backend.c",uVar9,"ec_group_explicit_todata");
    FUN_0051f8f0(0x10,0xc0100,0);
    uVar9 = 0;
  }
  else {
LAB_004eb41c:
    lVar5 = FUN_005356e0(iVar2);
    if ((lVar5 == 0) || (iVar2 = FUN_00548b40(param_2,param_3,"group",lVar5), iVar2 == 0)) {
      FUN_0051f420();
      FUN_0051f540("../crypto/ec/ec_backend.c",0x154,"ossl_ec_group_todata");
      FUN_0051f8f0(0x10,0x8d,0);
      return 0;
    }
LAB_004eb442:
    uVar9 = 1;
  }
  return uVar9;
}



ulong FUN_004f15c0(long *param_1,long *param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar6 = *param_1;
  if ((*param_2 == lVar6) &&
     (((iVar1 = (int)param_1[4], iVar1 == 0 || (iVar1 == (int)param_2[1])) || ((int)param_2[1] == 0)
      ))) {
    if (param_3 == 0 && param_4 == 0) {
      uVar5 = FUN_004f0830();
      return uVar5;
    }
    lVar7 = 0;
    if (param_4 != 0) {
      do {
        plVar3 = *(long **)(param_5 + lVar7 * 8);
        if ((lVar6 != *plVar3) ||
           (((iVar1 != 0 && (iVar2 = (int)plVar3[1], iVar2 != 0)) && (iVar1 != iVar2)))) {
          FUN_0051f420();
          uVar8 = 0x440;
          goto LAB_004f15e8;
        }
        lVar7 = lVar7 + 1;
      } while (param_4 != lVar7);
    }
    lVar7 = 0;
    if (param_7 == 0) {
      lVar7 = FUN_004b2b40();
      if (lVar7 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/ec/ec_lib.c",0x44a,"EC_POINTs_mul");
        FUN_0051f8f0(0x10,0xc0103,0);
        return 0;
      }
      lVar6 = *param_1;
    }
    if (*(code **)(lVar6 + 0xe0) == (code *)0x0) {
      uVar4 = FUN_004f3350(param_1,param_2,param_3,param_4,param_5,param_6);
    }
    else {
      uVar4 = (**(code **)(lVar6 + 0xe0))();
    }
    FUN_004b2b50(lVar7);
    uVar5 = (ulong)uVar4;
  }
  else {
    FUN_0051f420();
    uVar8 = 0x437;
LAB_004f15e8:
    FUN_0051f540("../crypto/ec/ec_lib.c",uVar8,"EC_POINTs_mul");
    FUN_0051f8f0(0x10,0x65,0);
    uVar5 = 0;
  }
  return uVar5;
}


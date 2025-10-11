
undefined8 FUN_004f10c0(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *param_1;
  if (*(code **)(lVar2 + 200) == (code *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_lib.c",0x3fa,"EC_POINT_cmp");
    FUN_0051f8f0(0x10,0xc0101,0);
  }
  else {
    if (lVar2 == *param_2) {
      iVar1 = (int)param_1[4];
      if (iVar1 == 0) {
        if (lVar2 == *param_3) goto LAB_004f1148;
      }
      else if ((((iVar1 == (int)param_2[1]) || ((int)param_2[1] == 0)) && (lVar2 == *param_3)) &&
              ((iVar1 == (int)param_3[1] || ((int)param_3[1] == 0)))) {
LAB_004f1148:
                    /* WARNING: Could not recover jumptable at 0x004f114c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(lVar2 + 200))();
        return uVar3;
      }
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_lib.c",0x3fe,"EC_POINT_cmp");
    FUN_0051f8f0(0x10,0x65,0);
  }
  return 0xffffffff;
}



undefined8 FUN_004f0a30(long *param_1,long *param_2,long *param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *param_1;
  if (*(code **)(lVar2 + 0xa0) == (code *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_lib.c",0x3ae,"EC_POINT_add");
    FUN_0051f8f0(0x10,0xc0101,0);
  }
  else {
    if (lVar2 == *param_2) {
      iVar1 = (int)param_1[4];
      if (iVar1 == 0) {
        if ((lVar2 == *param_3) && (lVar2 == *param_4)) goto LAB_004f0acb;
      }
      else if ((((int)param_2[1] == 0) || (iVar1 == (int)param_2[1])) &&
              ((lVar2 == *param_3 &&
               ((((iVar1 == (int)param_3[1] || ((int)param_3[1] == 0)) && (lVar2 == *param_4)) &&
                (((int)param_4[1] == 0 || (iVar1 == (int)param_4[1])))))))) {
LAB_004f0acb:
                    /* WARNING: Could not recover jumptable at 0x004f0acf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(lVar2 + 0xa0))();
        return uVar3;
      }
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_lib.c",0x3b3,"EC_POINT_add");
    FUN_0051f8f0(0x10,0x65,0);
  }
  return 0;
}


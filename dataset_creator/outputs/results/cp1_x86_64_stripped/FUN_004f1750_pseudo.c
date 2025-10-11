
ulong FUN_004f1750(long *param_1,long *param_2,long param_3,long *param_4,long param_5,long param_6)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long local_18;
  long *local_10;
  
  lVar3 = *param_1;
  local_18 = param_5;
  local_10 = param_4;
  if (((*param_2 == lVar3) &&
      (((iVar1 = (int)param_1[4], iVar1 == 0 || (iVar1 == (int)param_2[1])) ||
       ((int)param_2[1] == 0)))) &&
     ((param_4 == (long *)0x0 ||
      ((lVar3 == *param_4 &&
       (((iVar1 == 0 || ((int)param_4[1] == 0)) || (iVar1 == (int)param_4[1])))))))) {
    if (param_5 == 0 && param_3 == 0) {
      uVar4 = FUN_004f0830();
    }
    else {
      lVar5 = 0;
      if (param_6 == 0) {
        lVar5 = FUN_004b2b40();
        if (lVar5 == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/ec/ec_lib.c",0x472,"EC_POINT_mul");
          FUN_0051f8f0(0x10,0xc0103,0);
          return 0;
        }
        lVar3 = *param_1;
      }
      if (*(code **)(lVar3 + 0xe0) == (code *)0x0) {
        uVar2 = FUN_004f3350(param_1,param_2,param_3,local_18 != 0 && local_10 != (long *)0x0,
                             &local_10,&local_18);
      }
      else {
        uVar2 = (**(code **)(lVar3 + 0xe0))();
      }
      FUN_004b2b50(lVar5);
      uVar4 = (ulong)uVar2;
    }
  }
  else {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_lib.c",0x466,"EC_POINT_mul");
    FUN_0051f8f0(0x10,0x65,0);
    uVar4 = 0;
  }
  return uVar4;
}


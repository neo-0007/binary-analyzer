
int FUN_004ec600(long param_1,int param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_check.c",0x1a,"EC_GROUP_check_named_curve");
    FUN_0051f8f0(0x10,0xc0102,0);
    iVar1 = 0;
  }
  else {
    lVar3 = 0;
    if ((param_3 == 0) && (lVar3 = FUN_004b2a70(0,0), lVar3 == 0)) {
      FUN_0051f420();
      iVar1 = 0;
      FUN_0051f540("../crypto/ec/ec_check.c",0x21,"EC_GROUP_check_named_curve");
      FUN_0051f8f0(0x10,0xc0100,0);
    }
    else {
      iVar1 = FUN_004ed170(param_1);
      if (((0 < iVar1) && (param_2 != 0)) && (lVar2 = thunk_FUN_00535730(iVar1), lVar2 == 0)) {
        iVar1 = 0;
      }
      FUN_004b2b50(lVar3);
    }
  }
  return iVar1;
}



int FUN_004ec6f0(undefined8 *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if ((param_1 != (undefined8 *)0x0) && ((uint *)*param_1 != (uint *)0x0)) {
    if ((*(uint *)*param_1 & 2) == 0) {
      iVar2 = 0;
      lVar5 = 0;
      if ((param_2 == 0) && (param_2 = FUN_004b2b10(), lVar5 = param_2, param_2 == 0)) {
        FUN_0051f420();
        lVar3 = 0;
        FUN_0051f540("../crypto/ec/ec_check.c",0x48,"EC_GROUP_check");
        FUN_0051f8f0(0x10,0xc0100,0);
      }
      else {
        iVar1 = FUN_004efb30(param_1,param_2);
        if (iVar1 == 0) {
          FUN_0051f420();
          iVar2 = 0;
          lVar3 = 0;
          FUN_0051f540("../crypto/ec/ec_check.c",0x4f,"EC_GROUP_check");
          FUN_0051f8f0(0x10,0x76,0);
        }
        else if (param_1[1] == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/ec/ec_check.c",0x55,"EC_GROUP_check");
          FUN_0051f8f0(0x10,0x71,0);
          lVar3 = 0;
        }
        else {
          iVar1 = FUN_004f0ed0(param_1,param_1[1],param_2);
          if (iVar1 < 1) {
            FUN_0051f420();
            lVar3 = 0;
            FUN_0051f540("../crypto/ec/ec_check.c",0x59,"EC_GROUP_check");
            FUN_0051f8f0(0x10,0x6b,0);
          }
          else {
            lVar3 = FUN_004efb90(param_1);
            if ((lVar3 != 0) && (lVar4 = FUN_004ef7e0(param_1), lVar4 != 0)) {
              iVar1 = FUN_004b7ba0(lVar4);
              if (iVar1 == 0) {
                iVar2 = FUN_004f1750(param_1,lVar3,lVar4,0,0,param_2);
                if (iVar2 != 0) {
                  iVar2 = FUN_004f0cc0(param_1,lVar3);
                  if (iVar2 == 0) {
                    FUN_0051f420();
                    FUN_0051f540("../crypto/ec/ec_check.c",0x6b,"EC_GROUP_check");
                    FUN_0051f8f0(0x10,0x7a,0);
                    iVar2 = 0;
                  }
                  else {
                    iVar2 = 1;
                  }
                }
              }
              else {
                FUN_0051f420();
                FUN_0051f540("../crypto/ec/ec_check.c",100,"EC_GROUP_check");
                FUN_0051f8f0(0x10,0x80,0);
              }
            }
          }
        }
      }
      FUN_004b2b50(lVar5);
      FUN_004efcc0(lVar3);
      return iVar2;
    }
    return 1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/ec/ec_check.c",0x3d,"EC_GROUP_check");
  FUN_0051f8f0(0x10,0xc0102,0);
  return 0;
}


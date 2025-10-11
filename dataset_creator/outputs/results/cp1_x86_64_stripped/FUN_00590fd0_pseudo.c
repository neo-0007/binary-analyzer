
long FUN_00590fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  lVar3 = FUN_00405f40();
  iVar1 = FUN_0040ac10(param_1);
  uVar4 = FUN_004ee2a0(param_2);
  uVar5 = FUN_004ee2b0(param_2);
  if (iVar1 < 0) {
    lVar8 = 0;
    lVar9 = 0;
    lVar6 = 0;
    FUN_0051f420();
    FUN_0051f540("../crypto/sm2/sm2_sign.c",0x9c,"sm2_compute_msg_hash");
    FUN_0051f8f0(0x35,0x66,0);
  }
  else {
    lVar6 = FUN_0041aec0((long)iVar1,"../crypto/sm2/sm2_sign.c",0xa0);
    if ((lVar3 == 0) || (lVar6 == 0)) {
      FUN_0051f420();
      lVar8 = 0;
      lVar9 = 0;
      FUN_0051f540("../crypto/sm2/sm2_sign.c",0xa2,"sm2_compute_msg_hash");
      FUN_0051f8f0(0x35,0xc0100,0);
    }
    else {
      uVar7 = FUN_0040ab30(param_1);
      lVar8 = FUN_004069d0(uVar4,uVar7,uVar5);
      if (lVar8 == 0) {
        FUN_0051f420();
        lVar9 = 0;
        FUN_0051f540("../crypto/sm2/sm2_sign.c",0xa8,"sm2_compute_msg_hash");
        FUN_0051f8f0(0x35,0xc0103,0);
      }
      else {
        lVar9 = 0;
        iVar2 = FUN_00590a10(lVar6,lVar8,param_3,param_4,param_2);
        if (iVar2 != 0) {
          iVar2 = FUN_00407400(lVar3,lVar8);
          if (iVar2 != 0) {
            iVar2 = FUN_00405f60(lVar3,lVar6,(long)iVar1);
            if (iVar2 != 0) {
              iVar2 = FUN_00405f60(lVar3,param_5,param_6);
              if (iVar2 != 0) {
                iVar2 = FUN_00406ca0(lVar3,lVar6,0);
                if (iVar2 != 0) {
                  lVar9 = FUN_004b84d0(lVar6,iVar1,0);
                  if (lVar9 == 0) {
                    FUN_0051f420();
                    FUN_0051f540("../crypto/sm2/sm2_sign.c",0xbc,"sm2_compute_msg_hash");
                    FUN_0051f8f0(0x35,0xc0103,0);
                  }
                  goto LAB_0059110d;
                }
              }
            }
          }
          FUN_0051f420();
          lVar9 = 0;
          FUN_0051f540("../crypto/sm2/sm2_sign.c",0xb6,"sm2_compute_msg_hash");
          FUN_0051f8f0(0x35,0x80006,0);
        }
      }
    }
  }
LAB_0059110d:
  FUN_00406a50(lVar8);
  FUN_0041ad60(lVar6,"../crypto/sm2/sm2_sign.c",0xc0);
  FUN_00406b90(lVar3);
  return lVar9;
}



bool FUN_005906c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = FUN_004ee2d0();
  uVar3 = FUN_004ef7e0(uVar2);
  local_50 = 0;
  local_48 = 0;
  uVar4 = FUN_004ee2a0(param_1);
  lVar5 = FUN_004b2a70(uVar4);
  lVar6 = FUN_004efb90(uVar2);
  if ((lVar5 == 0) || (lVar6 == 0)) {
    FUN_0051f420();
    uVar2 = 0x149;
  }
  else {
    FUN_004b2c00(lVar5);
    uVar4 = FUN_004b2df0(lVar5);
    lVar7 = FUN_004b2df0(lVar5);
    if (lVar7 != 0) {
      FUN_004eafc0(param_2,&local_50,&local_48);
      uVar8 = FUN_004b75a0();
      iVar1 = FUN_004b7840(local_50,uVar8);
      if (iVar1 < 0) {
LAB_005908a0:
        FUN_0051f420();
        uVar2 = 0x165;
      }
      else {
        uVar8 = FUN_004b75a0();
        iVar1 = FUN_004b7840(local_48,uVar8);
        if (iVar1 < 0) goto LAB_005908a0;
        iVar1 = FUN_004b7840(uVar3,local_50);
        if (iVar1 < 1) goto LAB_005908a0;
        iVar1 = FUN_004b7840(uVar3,local_48);
        if (iVar1 < 1) goto LAB_005908a0;
        iVar1 = FUN_004b8aa0(uVar4,local_50,local_48,uVar3,lVar5);
        if (iVar1 == 0) {
          FUN_0051f420();
          uVar2 = 0x16a;
LAB_00590991:
          bVar9 = false;
          FUN_0051f540("../crypto/sm2/sm2_sign.c",uVar2,"sm2_sig_verify");
          FUN_0051f8f0(0x35,0x80003,0);
          goto LAB_005908d3;
        }
        iVar1 = FUN_004b7ba0(uVar4);
        if (iVar1 == 0) {
          uVar8 = FUN_004ee3f0(param_1);
          iVar1 = FUN_004f1750(uVar2,lVar6,local_48,uVar8,uVar4,lVar5);
          if (iVar1 != 0) {
            iVar1 = FUN_004f0d70(uVar2,lVar6,lVar7,0,lVar5);
            if (iVar1 != 0) {
              iVar1 = FUN_004b8aa0(uVar4,param_3,lVar7,uVar3,lVar5);
              if (iVar1 != 0) {
                iVar1 = FUN_004b7840(local_50,uVar4);
                bVar9 = iVar1 == 0;
                goto LAB_005908d3;
              }
              FUN_0051f420();
              uVar2 = 0x17a;
              goto LAB_00590991;
            }
          }
          FUN_0051f420();
          FUN_0051f540("../crypto/sm2/sm2_sign.c",0x175,"sm2_sig_verify");
          FUN_0051f8f0(0x35,0x80010,0);
          bVar9 = false;
          goto LAB_005908d3;
        }
        FUN_0051f420();
        uVar2 = 0x16f;
      }
      bVar9 = false;
      FUN_0051f540("../crypto/sm2/sm2_sign.c",uVar2,"sm2_sig_verify");
      FUN_0051f8f0(0x35,0x65,0);
      goto LAB_005908d3;
    }
    FUN_0051f420();
    uVar2 = 0x151;
  }
  bVar9 = false;
  FUN_0051f540("../crypto/sm2/sm2_sign.c",uVar2,"sm2_sig_verify");
  FUN_0051f8f0(0x35,0xc0100,0);
LAB_005908d3:
  FUN_004efcc0(lVar6);
  FUN_004b2b50(lVar5);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}



undefined8
FUN_00612c40(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
            undefined4 param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  
  lVar1 = *(long *)(param_4 + 0x10);
  uVar4 = *(undefined8 *)(param_4 + 8);
  if (lVar1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/v3_san.c",0x263,"v2i_GENERAL_NAME_ex");
    FUN_0051f8f0(0x22,0x7c,0);
    return 0;
  }
  iVar2 = FUN_0059d800(uVar4,"email");
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  else {
    iVar3 = FUN_0059d800(uVar4,&DAT_0081bcc6);
    iVar2 = 6;
    if (iVar3 != 0) {
      iVar3 = FUN_0059d800(uVar4,&PTR_LAB_0080d55d,extraout_RDX,6);
      iVar2 = 2;
      if (iVar3 != 0) {
        iVar3 = FUN_0059d800(uVar4,&DAT_0081bdc6,extraout_RDX_00,2);
        iVar2 = 8;
        if (iVar3 != 0) {
          iVar3 = FUN_0059d800(uVar4,&DAT_007d53b4,extraout_RDX_01,8);
          iVar2 = 7;
          if (iVar3 != 0) {
            iVar3 = FUN_0059d800(uVar4,"dirName",extraout_RDX_02,7);
            iVar2 = 4;
            if ((iVar3 != 0) &&
               (iVar2 = FUN_0059d800(uVar4,"otherName",extraout_RDX_03,4), iVar2 != 0)) {
              FUN_0051f420();
              FUN_0051f540("../crypto/x509/v3_san.c",0x276,"v2i_GENERAL_NAME_ex");
              FUN_0051f8f0(0x22,0x75,"name=%s",uVar4);
              return 0;
            }
          }
        }
      }
    }
  }
  uVar4 = FUN_00612790(param_1,param_2,param_3,iVar2,lVar1,param_5);
  return uVar4;
}



undefined8 FUN_00465520(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  iVar1 = FUN_0043b840();
  if (((iVar1 != 0) && (param_1 != (undefined8 *)0x0)) && (param_2 != 0)) {
    uVar4 = param_1[1];
    lVar2 = FUN_004ee2d0(uVar4);
    lVar3 = FUN_004ee2d0(param_2);
    uVar4 = FUN_004ee2a0(uVar4);
    lVar5 = FUN_004b2a70(uVar4);
    if (lVar5 == 0) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/exchange/ecdh_exch.c",0x81,"ecdh_match_params");
      FUN_0051f8f0(0x39,0xc0100,0);
    }
    else {
      if (((lVar2 == 0) || (lVar3 == 0)) || (iVar1 = FUN_004f1190(lVar2,lVar3,lVar5), iVar1 != 0)) {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/exchange/ecdh_exch.c",0x88,"ecdh_match_params");
        FUN_0051f8f0(0x39,0xcb,0);
        FUN_004b2b50(lVar5);
        return 0;
      }
      FUN_004b2b50(lVar5);
      iVar1 = FUN_005b1f40(*param_1,param_2,1);
      if ((iVar1 != 0) && (iVar1 = FUN_004ed9e0(param_2), iVar1 != 0)) {
        FUN_004ed620(param_1[2]);
        param_1[2] = param_2;
        return 1;
      }
    }
  }
  return 0;
}


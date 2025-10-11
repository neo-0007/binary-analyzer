
bool FUN_0047dc30(undefined8 *param_1,long param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_0043b840();
  if ((param_1 != (undefined8 *)0x0) && (iVar1 != 0)) {
    if (param_2 == 0) {
      if (param_1[2] != 0) {
LAB_0047dc99:
        *(int *)(param_1 + 0x2d) = param_4;
        iVar1 = FUN_0047d960(param_1,param_3);
        return iVar1 != 0;
      }
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/signature/ecdsa_sig.c",0x8a,"ecdsa_signverify_init"
                  );
      FUN_0051f8f0(0x39,0x72,0);
    }
    else {
      iVar1 = FUN_005b1f40(*param_1,param_2,param_4 == 0x10);
      if (iVar1 != 0) {
        iVar1 = FUN_004ed9e0(param_2);
        if (iVar1 != 0) {
          FUN_004ed620(param_1[2]);
          param_1[2] = param_2;
          goto LAB_0047dc99;
        }
      }
    }
  }
  return false;
}


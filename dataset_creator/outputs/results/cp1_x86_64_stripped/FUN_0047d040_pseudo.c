
bool FUN_0047d040(undefined8 *param_1,long param_2,long param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  
  if (param_2 == 0) {
    if (param_1[2] == 0) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/signature/dsa_sig.c",0xc4,"dsa_signverify_init");
      FUN_0051f8f0(0x39,0x72,0);
      return false;
    }
  }
  else {
    iVar1 = FUN_005b1f50(*param_1,param_2,param_4 == 0x10);
    if (iVar1 == 0) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/signature/dsa_sig.c",0xcb,"dsa_signverify_init");
      FUN_0051f8f0(0x39,0x69,0);
      return false;
    }
    iVar1 = FUN_004d8ca0(param_2);
    if (iVar1 == 0) {
      return false;
    }
    FUN_004d8960(param_1[2]);
    param_1[2] = param_2;
  }
  *(int *)(param_1 + 0x2e) = param_4;
  bVar2 = true;
  if (param_3 != 0) {
    iVar1 = FUN_0047ccb0(param_1,param_3);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}



undefined8 FUN_0047f030(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  if (param_3 == 0) {
    param_3 = param_1[1];
  }
  lVar3 = FUN_004069d0(*param_1,param_2,param_3);
  if (lVar3 != 0) {
    iVar1 = FUN_005b1fa0(*param_1,lVar3,1);
    if (iVar1 < 1) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/signature/rsa_sig.c",0x16e,"rsa_setup_mgf1_md");
      FUN_0051f8f0(0x39,0xae,"digest=%s",param_2);
    }
    else {
      iVar2 = FUN_0047eee0(param_1,0,param_2,iVar1);
      if (iVar2 != 0) {
        uVar4 = FUN_0041c470((long)param_1 + 0x7c,param_2,0x32);
        if (uVar4 < 0x32) {
          FUN_00406a50(param_1[0xe]);
          param_1[0xe] = lVar3;
          *(int *)(param_1 + 0xf) = iVar1;
          *(byte *)((long)param_1 + 0x1c) = *(byte *)((long)param_1 + 0x1c) | 2;
          return 1;
        }
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/signature/rsa_sig.c",0x175,"rsa_setup_mgf1_md");
        FUN_0051f8f0(0x39,0x7a,"%s exceeds name buffer length",param_2);
      }
    }
    FUN_00406a50(lVar3);
    return 0;
  }
  FUN_0051f420();
  FUN_0051f540("../providers/implementations/signature/rsa_sig.c",0x166,"rsa_setup_mgf1_md");
  FUN_0051f8f0(0x39,0x7a,"%s could not be fetched",param_2);
  return 0;
}


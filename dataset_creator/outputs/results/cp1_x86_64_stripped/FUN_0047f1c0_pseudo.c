
undefined4 FUN_0047f1c0(undefined8 *param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  if (param_3 == 0) {
    param_3 = param_1[1];
  }
  if (param_2 == 0) {
    return 1;
  }
  lVar3 = FUN_004069d0(*param_1,param_2,param_3);
  iVar1 = FUN_005b1fa0(*param_1,lVar3,*(int *)(param_1 + 3) != 0x10);
  uVar4 = thunk_FUN_007129d0(param_2);
  if (lVar3 == 0) {
LAB_0047f2b0:
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/signature/rsa_sig.c",0x12d,"rsa_setup_md");
    FUN_0051f8f0(0x39,0x7a,"%s could not be fetched",param_2);
    if (iVar1 < 1) {
LAB_0047f367:
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/signature/rsa_sig.c",0x130,"rsa_setup_md");
      FUN_0051f8f0(0x39,0xae,"digest=%s",param_2);
    }
LAB_0047f2f3:
    if (uVar4 < 0x32) goto LAB_0047f2f9;
  }
  else {
    if (iVar1 < 1) {
      if (lVar3 == 0) goto LAB_0047f2b0;
      goto LAB_0047f367;
    }
    iVar2 = FUN_0047eee0(param_1,param_2,0,iVar1);
    if (uVar4 < 0x32) {
      if (iVar2 != 0) {
        if ((*(byte *)((long)param_1 + 0x1c) & 1) != 0) {
          if ((*(byte *)((long)param_1 + 0x1c) & 2) == 0) {
            iVar2 = FUN_00406a10(lVar3);
            if (iVar2 == 0) {
              FUN_00406a50(lVar3);
              return 0;
            }
            FUN_00406a50(param_1[0xe]);
            param_1[0xe] = lVar3;
            *(int *)(param_1 + 0xf) = iVar1;
            FUN_0041c470((long)param_1 + 0x7c,param_2,0x32);
          }
          FUN_00406b90(param_1[5]);
          FUN_00406a50(param_1[4]);
          param_1[4] = lVar3;
          param_1[5] = 0;
          *(int *)(param_1 + 6) = iVar1;
          FUN_0041c470((long)param_1 + 0x34,param_2,0x32);
          return 1;
        }
        if (*(char *)((long)param_1 + 0x34) != '\0') {
          iVar1 = FUN_0040ab70(lVar3,(long)param_1 + 0x34);
          if (iVar1 == 0) {
            FUN_0051f420();
            FUN_0051f540("../providers/implementations/signature/rsa_sig.c",0x13b,"rsa_setup_md");
            FUN_0051f8f0(0x39,0xae,"digest %s != %s",param_2,(long)param_1 + 0x34);
            FUN_00406a50(lVar3);
            return 0;
          }
        }
        FUN_00406a50(lVar3);
        return 1;
      }
      goto LAB_0047f2f3;
    }
  }
  FUN_0051f420();
  FUN_0051f540("../providers/implementations/signature/rsa_sig.c",0x133,"rsa_setup_md");
  FUN_0051f8f0(0x39,0x7a,"%s exceeds name buffer length",param_2);
LAB_0047f2f9:
  FUN_00406a50(lVar3);
  return 0;
}


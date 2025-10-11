
uint FUN_004374a0(undefined8 *param_1)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  char *pcVar5;
  char cVar6;
  
  pcVar5 = (char *)*param_1;
  iVar2 = FUN_005466b0((int)*pcVar5,3);
  if (iVar2 == 0) {
    cVar6 = *pcVar5;
  }
  else {
    if (*pcVar5 == '\0') goto LAB_004374d6;
    iVar2 = FUN_005466b0((int)*pcVar5,3);
    if (iVar2 == 0) goto LAB_004375ff;
    do {
      do {
        do {
          pcVar1 = pcVar5 + 1;
          pcVar5 = pcVar5 + 1;
          if (*pcVar1 == '\0') goto LAB_004374d6;
          iVar2 = FUN_005466b0((int)*pcVar1,3);
        } while (iVar2 != 0);
LAB_004375ff:
        iVar2 = FUN_005466e0((int)*pcVar5);
      } while (iVar2 != 0);
      cVar6 = *pcVar5;
      lVar4 = thunk_FUN_00712710(&DAT_007dd6b9);
    } while (lVar4 != 0);
  }
  if (cVar6 != '\0') {
    FUN_0051f420();
    FUN_0051f540("../crypto/store/store_register.c",0xb5,"ossl_store_register_loader_int");
    FUN_0051f8f0(0x2c,0x6a,"scheme=%s",*param_1);
    return 0;
  }
LAB_004374d6:
  if ((((param_1[2] == 0) || (param_1[7] == 0)) || (param_1[8] == 0)) ||
     ((param_1[9] == 0 || (param_1[10] == 0)))) {
    FUN_0051f420();
    uVar3 = 0;
    FUN_0051f540("../crypto/store/store_register.c",0xbd,"ossl_store_register_loader_int");
    FUN_0051f8f0(0x2c,0x74,0);
  }
  else {
    iVar2 = FUN_00422340(&DAT_0093fda4,FUN_004372d0);
    if ((iVar2 == 0) || (DAT_0093fda0 == 0)) {
      FUN_0051f420();
      FUN_0051f540("../crypto/store/store_register.c",0xc2,"ossl_store_register_loader_int");
      FUN_0051f8f0(0x2c,0xc0100,0);
      return 0;
    }
    uVar3 = FUN_004222c0(DAT_0093fda8);
    if (uVar3 != 0) {
      if ((DAT_0093fd98 == 0) &&
         (DAT_0093fd98 = FUN_00545610(FUN_00437310,FUN_00437300), DAT_0093fd98 == 0)) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
        lVar4 = FUN_005457f0(DAT_0093fd98,param_1);
        if (lVar4 == 0) {
          iVar2 = FUN_00545d90(DAT_0093fd98);
          uVar3 = (uint)(iVar2 == 0);
        }
      }
      FUN_004222e0(DAT_0093fda8);
    }
  }
  return uVar3;
}


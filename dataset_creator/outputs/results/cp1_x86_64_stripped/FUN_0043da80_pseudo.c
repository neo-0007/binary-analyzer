
ulong FUN_0043da80(undefined8 *param_1,long param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar4 = FUN_0043b840();
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  if (param_2 == 0) {
    iVar1 = FUN_0056b040(param_1[1]);
    lVar5 = (long)iVar1;
    if (lVar5 == 0) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/asymciphers/rsa_enc.c",0x97,"rsa_encrypt");
      FUN_0051f8f0(0x39,0x9e,0);
      return 0;
    }
  }
  else {
    if (*(int *)(param_1 + 2) == 4) {
      iVar1 = FUN_0056b040(param_1[1]);
      lVar5 = FUN_0041ad90((long)iVar1,"../providers/implementations/asymciphers/rsa_enc.c",0xa2);
      if (lVar5 == 0) {
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/asymciphers/rsa_enc.c",0xa3,"rsa_encrypt");
        FUN_0051f8f0(0x39,0xc0100,0);
        return 0;
      }
      if (param_1[3] == 0) {
        FUN_0041ad60(lVar5,"../providers/implementations/asymciphers/rsa_enc.c",0xa7);
        uVar6 = FUN_004069d0(*param_1,"SHA-1",0);
        param_1[3] = uVar6;
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/asymciphers/rsa_enc.c",0xa9,"rsa_encrypt");
        FUN_0051f8f0(0x39,0xc0103,0);
        return 0;
      }
      iVar2 = FUN_0056c270(*param_1,lVar5,iVar1,param_5,param_6,param_1[5],param_1[6],param_1[3],
                           param_1[4]);
      if (iVar2 == 0) {
        FUN_0041ad60(lVar5,"../providers/implementations/asymciphers/rsa_enc.c",0xb5);
        return 0;
      }
      uVar3 = FUN_0056b070(iVar1,lVar5,param_2,param_1[1],3);
      FUN_0041ad60(lVar5,"../providers/implementations/asymciphers/rsa_enc.c",0xba);
      uVar4 = (ulong)uVar3;
    }
    else {
      uVar4 = FUN_0056b070(param_6,param_5,param_2);
    }
    if ((int)uVar4 < 0) {
      return uVar4;
    }
    lVar5 = (long)(int)uVar4;
  }
  *param_3 = lVar5;
  return 1;
}


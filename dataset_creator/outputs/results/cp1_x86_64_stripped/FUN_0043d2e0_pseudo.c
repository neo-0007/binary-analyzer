
ulong FUN_0043d2e0(undefined8 *param_1,long param_2,ulong *param_3,ulong param_4,undefined8 param_5,
                  undefined4 param_6)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  iVar1 = FUN_0056b040(param_1[1]);
  uVar3 = FUN_0043b840();
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  iVar2 = *(int *)(param_1 + 2);
  uVar3 = (ulong)iVar1;
  if (iVar2 == 7) {
    if (param_2 == 0) {
      *param_3 = 0x30;
      return 1;
    }
    if (param_4 < 0x30) {
      FUN_0051f420();
      uVar6 = 0xd7;
      goto LAB_0043d4a1;
    }
  }
  else {
    if (param_2 == 0) {
      if (uVar3 != 0) {
        *param_3 = uVar3;
        return 1;
      }
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/asymciphers/rsa_enc.c",0xdd,"rsa_decrypt");
      FUN_0051f8f0(0x39,0x9e,0);
      return 0;
    }
    if (param_4 < uVar3) {
      FUN_0051f420();
      uVar6 = 0xe5;
LAB_0043d4a1:
      FUN_0051f540("../providers/implementations/asymciphers/rsa_enc.c",uVar6,"rsa_decrypt");
      FUN_0051f8f0(0x39,0x8e,0);
      return 0;
    }
    if (iVar2 != 4) {
      if ((*(int *)(param_1 + 8) == 0) && (iVar2 == 1)) {
        iVar2 = 8;
      }
      iVar1 = FUN_0056b090(param_6,param_5,param_2,param_1[1],iVar2);
      goto LAB_0043d369;
    }
  }
  lVar4 = FUN_0041ad90(uVar3,"../providers/implementations/asymciphers/rsa_enc.c",0xee);
  if (lVar4 == 0) {
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/asymciphers/rsa_enc.c",0xef,"rsa_decrypt");
    FUN_0051f8f0(0x39,0xc0100,0);
    return 0;
  }
  iVar2 = FUN_0056b090(param_6,param_5,lVar4,param_1[1],3);
  if (iVar1 != iVar2) {
    FUN_0041ad60(lVar4,"../providers/implementations/asymciphers/rsa_enc.c",0xf9);
    FUN_0051f420();
    FUN_0051f540("../providers/implementations/asymciphers/rsa_enc.c",0xfa,"rsa_decrypt");
    FUN_0051f8f0(0x39,0xa2,0);
    return 0;
  }
  if (*(int *)(param_1 + 2) == 4) {
    lVar5 = param_1[3];
    if (lVar5 == 0) {
      lVar5 = FUN_004069d0(*param_1,"SHA-1",0);
      param_1[3] = lVar5;
      if (lVar5 == 0) {
        FUN_0041ad60(lVar4,"../providers/implementations/asymciphers/rsa_enc.c",0x101);
        FUN_0051f420();
        FUN_0051f540("../providers/implementations/asymciphers/rsa_enc.c",0x102,"rsa_decrypt");
        FUN_0051f8f0(0x39,0xc0103,0);
        return 0;
      }
    }
    iVar1 = FUN_0056c670(param_2,param_4 & 0xffffffff,lVar4,iVar1,iVar1,param_1[5],param_1[6],lVar5,
                         param_1[4]);
  }
  else {
    if (*(int *)(param_1 + 7) == 0) {
      FUN_0051f420();
      FUN_0051f540("../providers/implementations/asymciphers/rsa_enc.c",0x10f,"rsa_decrypt");
      FUN_0051f8f0(0x39,0xa1,0);
      FUN_0041ad60(lVar4,"../providers/implementations/asymciphers/rsa_enc.c",0x110);
      return 0;
    }
    iVar1 = FUN_00430920(*param_1,param_2,param_4,lVar4,uVar3,*(int *)(param_1 + 7),
                         *(undefined4 *)((long)param_1 + 0x3c));
  }
  FUN_0041ad60(lVar4,"../providers/implementations/asymciphers/rsa_enc.c",0x117);
LAB_0043d369:
  uVar3 = (long)iVar1 >> 0x3f;
  *param_3 = uVar3 & *param_3 | (long)iVar1 & ~uVar3;
  return (ulong)(~(iVar1 >> 0x1f) & 1);
}


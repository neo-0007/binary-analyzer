
int FUN_004343b0(undefined8 param_1,undefined8 param_2,char *param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  int iVar5;
  
  if ((param_5 != param_4) || (1 < (byte)(*param_3 + 0x96U))) {
    FUN_0051f420();
    FUN_0051f540("../crypto/rsa/rsa_x931.c",0x43,"RSA_padding_check_X931");
    FUN_0051f8f0(4,0x89,0);
    return -1;
  }
  pcVar3 = param_3 + 1;
  iVar5 = param_5 + -2;
  if (*param_3 == 'k') {
    param_5 = param_5 + -3;
    if (param_5 < 1) {
LAB_00434428:
      FUN_0051f420();
      uVar4 = 0x56;
LAB_00434451:
      FUN_0051f540("../crypto/rsa/rsa_x931.c",uVar4,"RSA_padding_check_X931");
      FUN_0051f8f0(4,0x8a,0);
      return -1;
    }
    iVar2 = 0;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      if (cVar1 == -0x46) {
        iVar5 = param_5 - iVar2;
        if (iVar2 != 0) goto LAB_004343da;
        goto LAB_00434428;
      }
      if (cVar1 != -0x45) {
        FUN_0051f420();
        uVar4 = 0x4e;
        goto LAB_00434451;
      }
      iVar2 = iVar2 + 1;
    } while (param_5 != iVar2);
    iVar5 = 0;
  }
LAB_004343da:
  if (pcVar3[iVar5] == -0x34) {
    thunk_FUN_00713a50(param_1,pcVar3,iVar5);
    return iVar5;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/rsa/rsa_x931.c",0x5f,"RSA_padding_check_X931");
  FUN_0051f8f0(4,0x8b,0);
  return -1;
}


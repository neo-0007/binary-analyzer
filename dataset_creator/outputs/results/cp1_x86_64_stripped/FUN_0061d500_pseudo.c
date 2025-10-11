
undefined8
FUN_0061d500(undefined8 param_1,long param_2,int param_3,undefined4 param_4,char *param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  
  if (param_3 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/v3_conf.c",0x58,"do_ext_nconf");
    FUN_0051f8f0(0x22,0x82,0);
    return 0;
  }
  lVar2 = FUN_0060f1c0(param_3);
  if (lVar2 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/v3_conf.c",0x5c,"do_ext_nconf");
    FUN_0051f8f0(0x22,0x81,0);
    return 0;
  }
  if (*(long *)(lVar2 + 0x48) == 0) {
    pcVar7 = *(code **)(lVar2 + 0x38);
    if (pcVar7 == (code *)0x0) {
      pcVar7 = *(code **)(lVar2 + 0x58);
      if (pcVar7 == (code *)0x0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/x509/v3_conf.c",0x7c,"do_ext_nconf");
        uVar5 = FUN_00423b00(param_3);
        FUN_0051f8f0(0x22,0x67,"name=%s",uVar5);
        return 0;
      }
      if ((*(long *)(param_2 + 0x30) == 0) || (*(long *)(param_2 + 0x28) == 0)) {
        FUN_0051f420();
        FUN_0051f540("../crypto/x509/v3_conf.c",0x76,"do_ext_nconf");
        FUN_0051f8f0(0x22,0x88,0);
        return 0;
      }
    }
    lVar4 = (*pcVar7)(lVar2,param_2,param_5);
  }
  else {
    if (*param_5 == '@') {
      lVar3 = FUN_004cca80(param_1,param_5 + 1);
    }
    else {
      lVar3 = FUN_0059d500(param_5);
    }
    if ((lVar3 == 0) || (iVar1 = FUN_00436480(lVar3), iVar1 < 1)) {
      FUN_0051f420();
      FUN_0051f540("../crypto/x509/v3_conf.c",0x66,"do_ext_nconf");
      uVar5 = FUN_00423b00(param_3);
      FUN_0051f8f0(0x22,0x69,"name=%s,section=%s",uVar5,param_5);
      if (*param_5 == '@') {
        return 0;
      }
      FUN_00436430(lVar3,FUN_0059cb40);
      return 0;
    }
    lVar4 = (**(code **)(lVar2 + 0x48))(lVar2,param_2,lVar3);
    if (*param_5 != '@') {
      FUN_00436430(lVar3,FUN_0059cb40);
    }
  }
  if (lVar4 == 0) {
    return 0;
  }
  uVar5 = FUN_0061d380(lVar2,param_3,param_4,lVar4);
  if (*(code **)(lVar2 + 8) == (code *)0x0) {
    (**(code **)(lVar2 + 0x18))(lVar4);
    return uVar5;
  }
  uVar6 = (**(code **)(lVar2 + 8))();
  FUN_004a6ba0(lVar4,uVar6);
  return uVar5;
}


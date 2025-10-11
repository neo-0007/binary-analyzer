
ulong FUN_00595a80(long param_1,undefined8 param_2,undefined8 param_3,char *param_4,long param_5,
                  undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  
  if (param_4 == (char *)0x0) {
    FUN_0051f420();
    uVar7 = 0xa0;
  }
  else {
    if (param_5 != 0) {
      cVar2 = *param_4;
      pcVar6 = param_4;
      while (cVar2 != '\0') {
        lVar3 = thunk_FUN_00712710(param_5);
        if (lVar3 != 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/ui/ui_lib.c",0xa6,"general_allocate_boolean");
          FUN_0051f8f0(0x28,0x68,0);
        }
        pcVar1 = pcVar6 + 1;
        pcVar6 = pcVar6 + 1;
        cVar2 = *pcVar1;
      }
      lVar3 = FUN_005959b0(param_2,param_6,3,param_7,param_8);
      if (lVar3 == 0) {
        return 0xffffffff;
      }
      lVar5 = *(long *)(param_1 + 8);
      if (lVar5 == 0) {
        lVar5 = FUN_00436410();
        *(long *)(param_1 + 8) = lVar5;
        if (lVar5 == 0) {
          FUN_00595890(lVar3);
          return 0xffffffff;
        }
      }
      *(char **)(lVar3 + 0x30) = param_4;
      *(long *)(lVar3 + 0x38) = param_5;
      *(undefined8 *)(lVar3 + 0x28) = param_3;
      uVar4 = FUN_00435f80(lVar5,lVar3);
      if ((int)uVar4 < 1) {
        FUN_00595890(lVar3);
        return (ulong)((int)uVar4 - 1);
      }
      return uVar4;
    }
    FUN_0051f420();
    uVar7 = 0xa2;
  }
  FUN_0051f540("../crypto/ui/ui_lib.c",uVar7,"general_allocate_boolean");
  FUN_0051f8f0(0x28,0xc0102,0);
  return 0xffffffff;
}


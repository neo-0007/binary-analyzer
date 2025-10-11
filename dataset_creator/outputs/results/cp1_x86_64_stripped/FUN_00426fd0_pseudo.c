
undefined8 FUN_00426fd0(undefined8 param_1,char *param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  byte bVar6;
  char *pcVar7;
  char *local_40 [2];
  
  if ((param_2 == (char *)0x0) ||
     (local_40[0] = param_2, lVar3 = FUN_00436420(&LAB_004260b0), lVar3 == 0)) {
    uVar5 = 0;
  }
  else {
    while (iVar2 = FUN_005466b0((int)*param_2,8), iVar2 != 0) {
      param_2 = param_2 + 1;
    }
    pcVar7 = param_2;
    local_40[0] = param_2;
    if (*param_2 == '\0') {
LAB_00427121:
      lVar4 = 0;
      uVar5 = FUN_004260f0(param_1,lVar3);
    }
    else {
      while (local_40[0] = pcVar7,
            lVar4 = FUN_0041ad90(0x18,"../crypto/property/property_parse.c",0x184), lVar4 != 0) {
        *(undefined8 *)(lVar4 + 0x10) = 0;
        pcVar7 = local_40[0];
        if (*local_40[0] == '-') {
          do {
            pcVar1 = pcVar7 + 1;
            pcVar7 = pcVar7 + 1;
            iVar2 = FUN_005466b0((int)*pcVar1,8);
          } while (iVar2 != 0);
          *(byte *)(lVar4 + 0xc) = *(byte *)(lVar4 + 0xc) & 0xfe;
          *(undefined4 *)(lVar4 + 8) = 2;
          local_40[0] = pcVar7;
          iVar2 = FUN_00426790(param_1,local_40,1,lVar4);
          if (iVar2 == 0) break;
        }
        else {
          if (*local_40[0] == '?') {
            do {
              pcVar1 = pcVar7 + 1;
              pcVar7 = pcVar7 + 1;
              iVar2 = FUN_005466b0((int)*pcVar1,8);
            } while (iVar2 != 0);
            bVar6 = 1;
            local_40[0] = pcVar7;
          }
          else {
            bVar6 = 0;
          }
          *(byte *)(lVar4 + 0xc) = *(byte *)(lVar4 + 0xc) & 0xfe | bVar6;
          iVar2 = FUN_00426790(param_1,local_40,1,lVar4);
          if (iVar2 == 0) break;
          pcVar7 = local_40[0];
          if (*local_40[0] == '=') {
            do {
              pcVar1 = pcVar7 + 1;
              pcVar7 = pcVar7 + 1;
              iVar2 = FUN_005466b0((int)*pcVar1,8);
            } while (iVar2 != 0);
          }
          else {
            pcVar7 = local_40[0] + 2;
            iVar2 = FUN_0041ca00(local_40[0],&DAT_007dc4cc,2);
            if (iVar2 != 0) {
              *(undefined8 *)(lVar4 + 4) = 0;
              *(undefined4 *)(lVar4 + 0x10) = 1;
              goto LAB_004270f8;
            }
            while (iVar2 = FUN_005466b0((int)*pcVar7,8), iVar2 != 0) {
              pcVar7 = pcVar7 + 1;
            }
            iVar2 = 1;
          }
          *(int *)(lVar4 + 8) = iVar2;
          local_40[0] = pcVar7;
          iVar2 = FUN_00426970(param_1,local_40,lVar4,param_3);
          if (iVar2 == 0) {
            *(undefined4 *)(lVar4 + 4) = 2;
          }
        }
LAB_004270f8:
        iVar2 = FUN_00435f80(lVar3,lVar4);
        pcVar7 = local_40[0];
        if (iVar2 == 0) break;
        if (*local_40[0] != ',') {
          if (*local_40[0] == '\0') goto LAB_00427121;
          FUN_0051f420();
          lVar4 = 0;
          FUN_0051f540("../crypto/property/property_parse.c",0x1a9,"ossl_parse_query");
          uVar5 = 0;
          FUN_0051f8f0(0x37,0x6e,"HERE-->%s",pcVar7);
          goto LAB_00427183;
        }
        do {
          pcVar1 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
          iVar2 = FUN_005466b0((int)*pcVar1,8);
        } while (iVar2 != 0);
      }
      uVar5 = 0;
    }
LAB_00427183:
    FUN_0041ad60(lVar4,"../crypto/property/property_parse.c",0x1b0);
    FUN_00436430(lVar3,FUN_004260d0);
  }
  return uVar5;
}


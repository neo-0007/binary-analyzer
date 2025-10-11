
undefined8 FUN_00426d10(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  undefined8 uVar5;
  char *pcVar6;
  long in_FS_OFFSET;
  char *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_2;
  if ((param_2 == (char *)0x0) || (lVar3 = FUN_00436420(&LAB_004260b0), lVar3 == 0)) {
    uVar5 = 0;
  }
  else {
    while (iVar2 = FUN_005466b0((int)*param_2,8), iVar2 != 0) {
      param_2 = param_2 + 1;
    }
    local_48 = param_2;
    if (*param_2 == '\0') {
LAB_00426e2f:
      piVar4 = (int *)0x0;
      uVar5 = FUN_004260f0(param_1,lVar3);
    }
    else {
      while (local_48 = param_2,
            piVar4 = (int *)FUN_0041ad90(0x18,"../crypto/property/property_parse.c",0x14b),
            piVar4 != (int *)0x0) {
        *(byte *)(piVar4 + 3) = *(byte *)(piVar4 + 3) & 0xfe;
        piVar4[4] = 0;
        piVar4[5] = 0;
        iVar2 = FUN_00426790(param_1,&local_48,1,piVar4);
        if (iVar2 == 0) break;
        piVar4[2] = 0;
        if (*piVar4 == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/property/property_parse.c",0x154,"ossl_parse_property");
          uVar5 = 0;
          FUN_0051f8f0(0x37,0x6c,"Unknown name HERE-->%s",param_2);
          goto LAB_00426ef3;
        }
        pcVar6 = local_48;
        if (*local_48 == '=') {
          do {
            pcVar1 = pcVar6 + 1;
            pcVar6 = pcVar6 + 1;
            iVar2 = FUN_005466b0((int)*pcVar1,8);
          } while (iVar2 != 0);
          local_48 = pcVar6;
          iVar2 = FUN_00426970(param_1,&local_48,piVar4,1);
          if (iVar2 == 0) {
            FUN_0051f420();
            FUN_0051f540("../crypto/property/property_parse.c",0x15a,"ossl_parse_property");
            uVar5 = 0;
            FUN_0051f8f0(0x37,0x6b,"HERE-->%s",param_2);
            goto LAB_00426ef3;
          }
        }
        else {
          piVar4[1] = 0;
          piVar4[4] = 1;
        }
        iVar2 = FUN_00435f80(lVar3,piVar4);
        pcVar6 = local_48;
        if (iVar2 == 0) break;
        param_2 = local_48;
        if (*local_48 != ',') {
          if (*local_48 == '\0') goto LAB_00426e2f;
          FUN_0051f420();
          piVar4 = (int *)0x0;
          FUN_0051f540("../crypto/property/property_parse.c",0x16a,"ossl_parse_property");
          uVar5 = 0;
          FUN_0051f8f0(0x37,0x6e,"HERE-->%s",pcVar6);
          goto LAB_00426ef3;
        }
        do {
          pcVar6 = param_2 + 1;
          param_2 = param_2 + 1;
          iVar2 = FUN_005466b0((int)*pcVar6,8);
        } while (iVar2 != 0);
      }
      uVar5 = 0;
    }
LAB_00426ef3:
    FUN_0041ad60(piVar4,"../crypto/property/property_parse.c",0x171);
    FUN_00436430(lVar3,FUN_004260d0);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar5;
}



uint FUN_004265a0(undefined8 param_1,undefined8 *param_2,long param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  long in_FS_OFFSET;
  undefined1 local_428 [1000];
  long local_40;
  
  pcVar8 = (char *)*param_2;
  cVar1 = *pcVar8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((cVar1 == '\0') || (cVar1 == ',')) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    uVar5 = 0;
    while( true ) {
      iVar3 = FUN_005466b0((int)cVar1,0x100);
      iVar6 = (int)*pcVar8;
      if (iVar3 == 0) break;
      iVar3 = FUN_005466b0(iVar6,8);
      iVar6 = (int)*pcVar8;
      if ((iVar3 != 0) || (*pcVar8 == ',')) break;
      if (uVar5 < 999) {
        uVar2 = FUN_00546710();
        local_428[uVar5] = uVar2;
        uVar5 = uVar5 + 1;
      }
      else {
        uVar7 = 1;
      }
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 1;
    }
    iVar3 = FUN_005466b0(iVar6,8);
    if ((iVar3 == 0) && ((*pcVar8 != ',' && (*pcVar8 != '\0')))) {
      FUN_0051f420();
      FUN_0051f540("../crypto/property/property_parse.c",0xd3,"parse_unquoted");
      FUN_0051f8f0(0x37,0x65,"HERE-->%s",pcVar8);
      uVar7 = 0;
    }
    else {
      local_428[uVar5] = 0;
      if (uVar7 == 0) {
        uVar4 = FUN_00428180(param_1,local_428,param_4);
        *(undefined4 *)(param_3 + 0x10) = uVar4;
      }
      else {
        FUN_0051f420();
        FUN_0051f540("../crypto/property/property_parse.c",0xd9,"parse_unquoted");
        FUN_0051f8f0(0x37,0x6d,"HERE-->%s",*param_2);
      }
      while( true ) {
        iVar3 = FUN_005466b0((int)*pcVar8,8);
        if (iVar3 == 0) break;
        pcVar8 = pcVar8 + 1;
      }
      *param_2 = pcVar8;
      *(undefined4 *)(param_3 + 4) = 0;
      uVar7 = uVar7 ^ 1;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


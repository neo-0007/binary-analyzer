
undefined8
FUN_00426790(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  long in_FS_OFFSET;
  undefined1 local_a8 [104];
  long local_40;
  
  uVar6 = 0;
  bVar1 = false;
  uVar5 = 0;
  pcVar8 = (char *)*param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    iVar3 = FUN_005466b0((int)*pcVar8,3);
    if (iVar3 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/property/property_parse.c",0x42,"parse_name");
      FUN_0051f8f0(0x37,0x67,"HERE-->%s",*param_2);
      uVar6 = 0;
LAB_004268a7:
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        FUN_00771f60();
      }
      return uVar6;
    }
    do {
      pcVar7 = pcVar8;
      if (uVar5 < 99) {
        uVar2 = FUN_00546710((int)*pcVar7);
        local_a8[uVar5] = uVar2;
        uVar5 = uVar5 + 1;
      }
      else {
        bVar1 = true;
      }
      pcVar8 = pcVar7 + 1;
    } while ((pcVar7[1] == '_') || (iVar3 = FUN_005466b0((int)pcVar7[1],7), iVar3 != 0));
    if (*pcVar8 != '.') {
      local_a8[uVar5] = 0;
      if (bVar1) {
        FUN_0051f420();
        FUN_0051f540("../crypto/property/property_parse.c",0x57,"parse_name");
        FUN_0051f8f0(0x37,100,"HERE-->%s",*param_2);
        uVar6 = 0;
      }
      else {
        while (iVar3 = FUN_005466b0((int)*pcVar8,8), iVar3 != 0) {
          pcVar8 = pcVar8 + 1;
        }
        *param_2 = pcVar8;
        uVar4 = FUN_00428100(param_1,local_a8,uVar6);
        uVar6 = 1;
        *param_4 = uVar4;
      }
      goto LAB_004268a7;
    }
    if (uVar5 < 99) {
      local_a8[uVar5] = 0x2e;
      uVar5 = uVar5 + 1;
    }
    else {
      bVar1 = true;
    }
    pcVar8 = pcVar7 + 2;
    uVar6 = 1;
  } while( true );
}


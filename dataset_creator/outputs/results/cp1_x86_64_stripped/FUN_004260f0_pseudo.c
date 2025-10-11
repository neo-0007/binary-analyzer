
int * FUN_004260f0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  
  iVar2 = FUN_00436480(param_2);
  if (iVar2 < 1) {
    piVar3 = (int *)FUN_0041ad90(0x20,"../crypto/property/property_parse.c",0x122);
    if (piVar3 != (int *)0x0) {
      FUN_00436510(param_2);
      *(byte *)(piVar3 + 1) = *(byte *)(piVar3 + 1) & 0xfe;
LAB_004261ed:
      *piVar3 = iVar2;
      return piVar3;
    }
  }
  else {
    piVar3 = (int *)FUN_0041ad90((long)(iVar2 + -1) * 0x18 + 0x20,
                                 "../crypto/property/property_parse.c",0x122);
    if (piVar3 != (int *)0x0) {
      iVar8 = 0;
      FUN_00436510(param_2);
      *(byte *)(piVar3 + 1) = *(byte *)(piVar3 + 1) & 0xfe;
      puVar4 = (undefined8 *)FUN_004364a0(param_2,0);
      uVar5 = puVar4[1];
      *(undefined8 *)(piVar3 + 2) = *puVar4;
      *(undefined8 *)(piVar3 + 4) = uVar5;
      *(undefined8 *)(piVar3 + 6) = puVar4[2];
      *(byte *)(piVar3 + 1) =
           *(byte *)(piVar3 + 1) & 0xfe | (*(byte *)(piVar3 + 5) | *(byte *)(piVar3 + 1)) & 1;
      piVar7 = piVar3 + 8;
      iVar1 = piVar3[2];
      do {
        iVar6 = iVar1;
        iVar8 = iVar8 + 1;
        if (iVar8 == iVar2) goto LAB_004261ed;
        puVar4 = (undefined8 *)FUN_004364a0(param_2,iVar8);
        uVar5 = puVar4[1];
        *(undefined8 *)piVar7 = *puVar4;
        *(undefined8 *)(piVar7 + 2) = uVar5;
        *(undefined8 *)(piVar7 + 4) = puVar4[2];
        *(byte *)(piVar3 + 1) =
             *(byte *)(piVar3 + 1) & 0xfe |
             (*(byte *)(piVar3 + (long)iVar8 * 6 + 5) | *(byte *)(piVar3 + 1)) & 1;
        iVar1 = *piVar7;
        piVar7 = piVar7 + 6;
      } while (iVar1 != iVar6);
      FUN_0041ad60(piVar3,"../crypto/property/property_parse.c",0x12e);
      FUN_0051f420();
      FUN_0051f540("../crypto/property/property_parse.c",0x12f,"stack_to_property_list");
      uVar5 = FUN_00428160(param_1,iVar6);
      FUN_0051f8f0(0x37,0x6c,"Duplicated name `%s\'",uVar5);
    }
  }
  return (int *)0x0;
}


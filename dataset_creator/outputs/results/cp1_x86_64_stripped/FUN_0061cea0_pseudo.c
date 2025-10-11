
long FUN_0061cea0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined4 *puVar7;
  
  iVar6 = 0;
  lVar3 = FUN_004a7820();
  if (lVar3 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/v3_bitst.c",0x43,"v2i_ASN1_BIT_STRING");
    FUN_0051f8f0(0x22,0xc0100,0);
  }
  else {
    for (; iVar2 = FUN_00436480(param_3), iVar6 < iVar2; iVar6 = iVar6 + 1) {
      lVar4 = FUN_004364a0(param_3,iVar6);
      puVar7 = *(undefined4 **)(param_1 + 0x60);
      lVar5 = *(long *)(puVar7 + 2);
      if (lVar5 == 0) {
LAB_0061cf60:
        FUN_0051f420();
        FUN_0051f540("../crypto/x509/v3_bitst.c",0x54,"v2i_ASN1_BIT_STRING");
        FUN_0051f8f0(0x22,0x6f,&DAT_007e3d61,*(undefined8 *)(lVar4 + 8));
        thunk_FUN_004a2270(lVar3);
        return 0;
      }
      uVar1 = *(undefined8 *)(lVar4 + 8);
      while ((iVar2 = thunk_FUN_00712780(*(undefined8 *)(puVar7 + 4),uVar1), iVar2 != 0 &&
             (iVar2 = thunk_FUN_00712780(lVar5,uVar1), iVar2 != 0))) {
        lVar5 = *(long *)(puVar7 + 8);
        puVar7 = puVar7 + 6;
        if (lVar5 == 0) goto LAB_0061cf60;
      }
      iVar2 = FUN_005b3fd0(lVar3,*puVar7,1);
      if (iVar2 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/x509/v3_bitst.c",0x4c,"v2i_ASN1_BIT_STRING");
        FUN_0051f8f0(0x22,0xc0100,0);
        thunk_FUN_004a2270(lVar3);
        return 0;
      }
      if (*(long *)(puVar7 + 2) == 0) goto LAB_0061cf60;
    }
  }
  return lVar3;
}


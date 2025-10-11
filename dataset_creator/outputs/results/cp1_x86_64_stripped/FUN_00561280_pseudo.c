
bool FUN_00561280(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  
  iVar3 = FUN_00423da0(*(undefined8 *)(param_1 + 0x18));
  if ((iVar3 != 0x16) && (iVar3 != 0x18)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/pkcs7/pk7_lib.c",0xcf,"PKCS7_add_signer");
    FUN_0051f8f0(0x21,0x71,0);
    return false;
  }
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = **(undefined8 **)(param_2 + 0x10);
  for (iVar3 = 0; iVar4 = FUN_00436480(uVar8), iVar3 < iVar4; iVar3 = iVar3 + 1) {
    puVar5 = (undefined8 *)FUN_004364a0(uVar8,iVar3);
    iVar4 = FUN_00424ba0(uVar2,*puVar5);
    if (iVar4 == 0) goto LAB_005613a0;
  }
  plVar6 = (long *)FUN_004a87c0();
  if (plVar6 != (long *)0x0) {
    lVar7 = FUN_004a7f10();
    plVar6[1] = lVar7;
    if (lVar7 != 0) {
      iVar3 = FUN_00423da0(uVar2);
      if (iVar3 == 0) {
        lVar7 = FUN_00424a40(uVar2);
      }
      else {
        lVar7 = FUN_004239c0(iVar3);
      }
      *plVar6 = lVar7;
      *(undefined4 *)plVar6[1] = 5;
      if ((lVar7 == 0) || (iVar3 = FUN_00435f80(uVar8,plVar6), iVar3 == 0)) {
        FUN_004a87e0(plVar6);
        return false;
      }
LAB_005613a0:
      uVar8 = FUN_00561260(param_1);
      *(undefined8 *)(param_2 + 0x40) = uVar8;
      iVar3 = FUN_00435f80(uVar1,param_2);
      return iVar3 != 0;
    }
  }
  FUN_004a87e0(plVar6);
  FUN_0051f420();
  FUN_0051f540("../crypto/pkcs7/pk7_lib.c",0xe3,"PKCS7_add_signer");
  FUN_0051f8f0(0x21,0xc0100,0);
  return false;
}


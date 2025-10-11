
bool FUN_0060a590(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 local_40;
  
  lVar6 = 0;
  lVar11 = 0;
  iVar2 = 0;
  do {
    iVar1 = FUN_00436480(*(undefined8 *)(param_1 + 8));
    if (iVar1 + -1 <= iVar2) {
      iVar2 = FUN_00436480(*(undefined8 *)(param_1 + 8));
      bVar8 = true;
      piVar4 = (int *)FUN_004364a0(*(undefined8 *)(param_1 + 8),iVar2 + -1);
      if ((piVar4 != (int *)0x0) && (*piVar4 == 1)) {
        iVar2 = FUN_0049f320(**(undefined8 **)(piVar4 + 2),(*(undefined8 **)(piVar4 + 2))[1]);
        bVar8 = iVar2 < 1;
      }
      goto LAB_0060a6cb;
    }
    piVar4 = (int *)FUN_004364a0(*(undefined8 *)(param_1 + 8),iVar2);
    piVar5 = (int *)FUN_004364a0(*(undefined8 *)(param_1 + 8),iVar2 + 1);
    lVar3 = lVar11;
    if (piVar4 == (int *)0x0) break;
    if (*piVar4 == 0) {
      uVar7 = *(undefined8 *)(piVar4 + 2);
      uVar10 = uVar7;
    }
    else {
      if (*piVar4 != 1) break;
      uVar7 = **(undefined8 **)(piVar4 + 2);
      uVar10 = (*(undefined8 **)(piVar4 + 2))[1];
    }
    if (piVar5 == (int *)0x0) break;
    if (*piVar5 == 0) {
      uVar9 = *(undefined8 *)(piVar5 + 2);
      local_40 = uVar9;
    }
    else {
      if (*piVar5 != 1) break;
      uVar9 = **(undefined8 **)(piVar5 + 2);
      local_40 = (*(undefined8 **)(piVar5 + 2))[1];
    }
    iVar1 = FUN_0049f320(uVar7,uVar9);
    if (-1 < iVar1) break;
    iVar1 = FUN_0049f320(uVar7,uVar10);
    if (0 < iVar1) break;
    iVar1 = FUN_0049f320(uVar9,local_40);
    if (0 < iVar1) break;
    if (lVar6 == 0) {
      lVar6 = FUN_004b7690();
      if (lVar6 != 0) goto LAB_0060a62d;
LAB_0060a718:
      FUN_0051f420();
      uVar7 = 0x130;
LAB_0060a729:
      bVar8 = false;
      FUN_0051f540("../crypto/x509/v3_asid.c",uVar7,"ASIdentifierChoice_is_canonical");
      FUN_0051f8f0(0x22,0xc0100,0);
      goto LAB_0060a6cb;
    }
LAB_0060a62d:
    lVar3 = FUN_0049fa70(uVar10,lVar6);
    if (lVar3 == 0) goto LAB_0060a718;
    iVar1 = FUN_004bcc70(lVar6,1);
    if (iVar1 == 0) goto LAB_0060a718;
    lVar3 = FUN_0049fa60(lVar6,lVar11);
    if (lVar3 == 0) {
      FUN_0051f420();
      uVar7 = 0x137;
      goto LAB_0060a729;
    }
    iVar1 = FUN_0049f320(lVar3,uVar9);
    lVar11 = lVar3;
    iVar2 = iVar2 + 1;
  } while (iVar1 < 0);
  bVar8 = false;
  lVar11 = lVar3;
LAB_0060a6cb:
  thunk_FUN_004a2270(lVar11);
  FUN_004b7fa0(lVar6);
  return bVar8;
}



uint FUN_0060a910(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 local_58;
  long local_50;
  int local_48;
  undefined8 local_40;
  
  if (param_1 == (int *)0x0) {
    return 1;
  }
  if (*param_1 == 0) {
    return 1;
  }
  if ((*param_1 != 1) || (iVar1 = FUN_00436480(*(undefined8 *)(param_1 + 2)), iVar1 == 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/v3_asid.c",0x177,"ASIdentifierChoice_canonize");
    FUN_0051f8f0(0x22,0x74,0);
    return 0;
  }
  lVar7 = 0;
  FUN_00436510(*(undefined8 *)(param_1 + 2));
  local_48 = 0;
  local_50 = 0;
  iVar1 = local_48;
  while( true ) {
    local_48 = iVar1;
    iVar1 = FUN_00436480(*(undefined8 *)(param_1 + 2));
    if (iVar1 + -1 <= local_48) break;
    piVar4 = (int *)FUN_004364a0(*(undefined8 *)(param_1 + 2),local_48);
    iVar1 = local_48 + 1;
    piVar5 = (int *)FUN_004364a0(*(undefined8 *)(param_1 + 2),iVar1);
    if (piVar4 == (int *)0x0) {
LAB_0060ab60:
      uVar3 = 0;
      goto LAB_0060ab63;
    }
    if (*piVar4 == 0) {
      uVar9 = *(undefined8 *)(piVar4 + 2);
      local_58 = uVar9;
    }
    else {
      if (*piVar4 != 1) goto LAB_0060ab60;
      uVar9 = (*(undefined8 **)(piVar4 + 2))[1];
      local_58 = **(undefined8 **)(piVar4 + 2);
    }
    if (piVar5 == (int *)0x0) goto LAB_0060ab60;
    if (*piVar5 == 0) {
      uVar10 = *(undefined8 *)(piVar5 + 2);
      local_40 = uVar10;
    }
    else {
      if (*piVar5 != 1) goto LAB_0060ab60;
      uVar10 = **(undefined8 **)(piVar5 + 2);
      local_40 = (*(undefined8 **)(piVar5 + 2))[1];
    }
    iVar2 = FUN_0049f320(local_58,uVar10);
    if (((0 < iVar2) || (iVar2 = FUN_0049f320(local_58,uVar9), 0 < iVar2)) ||
       (iVar2 = FUN_0049f320(uVar10,local_40), 0 < iVar2)) goto LAB_0060ab60;
    iVar2 = FUN_0049f320(uVar9,uVar10);
    if (-1 < iVar2) {
      FUN_0051f420();
      uVar3 = 0;
      FUN_0051f540("../crypto/x509/v3_asid.c",0x19f,"ASIdentifierChoice_canonize");
      FUN_0051f8f0(0x22,0x74,0);
      goto LAB_0060ab63;
    }
    if (((lVar7 == 0) && (lVar7 = FUN_004b7690(), lVar7 == 0)) ||
       ((lVar6 = FUN_0049fa70(uVar9,lVar7), lVar6 == 0 ||
        (iVar2 = FUN_004bcc70(lVar7,1), iVar2 == 0)))) {
      FUN_0051f420();
      uVar9 = 0x1a9;
LAB_0060abe9:
      uVar3 = 0;
      FUN_0051f540("../crypto/x509/v3_asid.c",uVar9,"ASIdentifierChoice_canonize");
      FUN_0051f8f0(0x22,0xc0100,0);
      goto LAB_0060ab63;
    }
    lVar6 = FUN_0049fa60(lVar7,local_50);
    if (lVar6 == 0) {
      FUN_0051f420();
      uVar9 = 0x1b0;
      goto LAB_0060abe9;
    }
    iVar2 = FUN_0049f320(lVar6,uVar10);
    local_50 = lVar6;
    if (iVar2 == 0) {
      if (*piVar4 == 0) {
        puVar8 = (undefined8 *)FUN_0041ad90(0x10,"../crypto/x509/v3_asid.c",0x1bb);
        if (puVar8 == (undefined8 *)0x0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/x509/v3_asid.c",0x1bc,"ASIdentifierChoice_canonize");
          FUN_0051f8f0(0x22,0xc0100,0);
          uVar3 = 0;
          goto LAB_0060ab63;
        }
        *puVar8 = local_58;
        puVar8[1] = local_40;
        *piVar4 = 1;
        *(undefined8 **)(piVar4 + 2) = puVar8;
      }
      else if (*piVar4 == 1) {
        thunk_FUN_004a2270(*(undefined8 *)(*(long *)(piVar4 + 2) + 8));
        *(undefined8 *)(*(long *)(piVar4 + 2) + 8) = local_40;
      }
      if (*piVar5 == 0) {
        piVar5[2] = 0;
        piVar5[3] = 0;
      }
      else if (*piVar5 == 1) {
        *(undefined8 *)(*(long *)(piVar5 + 2) + 8) = 0;
      }
      FUN_0060a8f0(piVar5);
      FUN_00435ec0(*(undefined8 *)(param_1 + 2),iVar1);
      iVar1 = local_48;
    }
  }
  iVar1 = FUN_00436480(*(undefined8 *)(param_1 + 2));
  piVar4 = (int *)FUN_004364a0(*(undefined8 *)(param_1 + 2),iVar1 + -1);
  if ((piVar4 != (int *)0x0) && (*piVar4 == 1)) {
    uVar3 = 0;
    iVar1 = FUN_0049f320(**(undefined8 **)(piVar4 + 2),(*(undefined8 **)(piVar4 + 2))[1]);
    if (0 < iVar1) goto LAB_0060ab63;
  }
  uVar3 = 1;
  if (((*param_1 != 0) && (uVar3 = 0, *param_1 == 1)) &&
     (uVar3 = FUN_00436480(*(undefined8 *)(param_1 + 2)), uVar3 != 0)) {
    iVar1 = FUN_0060a590(param_1);
    uVar3 = (uint)(iVar1 != 0);
  }
LAB_0060ab63:
  thunk_FUN_004a2270(local_50);
  FUN_004b7fa0(lVar7);
  return uVar3;
}


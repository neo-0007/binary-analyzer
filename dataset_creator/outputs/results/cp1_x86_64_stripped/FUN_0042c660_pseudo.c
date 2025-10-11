
undefined8 FUN_0042c660(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  if ((((param_3 != 0 && param_4 != 0) && (param_2 != 0)) &&
      (iVar2 = FUN_00436480(param_2), 1 < iVar2)) &&
     ((iVar3 = FUN_00436480(param_3), iVar2 == iVar3 &&
      (iVar3 = FUN_00436480(param_4), iVar2 == iVar3 + 1)))) {
    uVar4 = FUN_004364a0(param_2,1);
    uVar5 = FUN_004364a0(param_2,0);
    iVar3 = FUN_0042c040(param_1,uVar5,uVar4);
    if (iVar3 != 0) {
      uVar4 = FUN_004364a0(param_4,0);
      uVar5 = FUN_004364a0(param_3,1);
      uVar6 = FUN_004364a0(param_3,0);
      iVar3 = FUN_0042c0f0(param_1,uVar6,uVar5,uVar4);
      if (iVar3 != 0) {
        lVar1 = *(long *)(param_1 + 0x88);
        if (iVar2 == 2) {
LAB_0042c885:
          if (lVar1 != 0) {
            FUN_00436430(lVar1,FUN_0042d3f0);
          }
          *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
          *(uint *)(param_1 + 0x10) = (uint)(2 < iVar2);
          return 1;
        }
        lVar7 = FUN_004363b0(0,iVar2);
        if (lVar7 != 0) {
          iVar3 = 2;
          do {
            lVar9 = FUN_004364a0(param_2,iVar3);
            lVar10 = FUN_004364a0(param_3,iVar3);
            lVar11 = FUN_004364a0(param_4,iVar3 + -1);
            if ((lVar9 == 0 || lVar10 == 0) || (lVar11 == 0)) goto LAB_0042c86f;
            plVar8 = (long *)FUN_0041aec0(0x28,"../crypto/rsa/rsa_lib.c",0x316);
            if (plVar8 == (long *)0x0) {
              FUN_0051f420();
              FUN_0051f540("../crypto/rsa/rsa_lib.c",0x317,"ossl_rsa_set0_all_params");
              FUN_0051f8f0(4,0xc0100,0);
              goto LAB_0042c86f;
            }
            *plVar8 = lVar9;
            iVar3 = iVar3 + 1;
            plVar8[2] = lVar11;
            plVar8[1] = lVar10;
            FUN_004b7e70(lVar9,4);
            FUN_004b7e70(plVar8[1],4);
            FUN_004b7e70(plVar8[2],4);
            FUN_00435f80(lVar7,plVar8);
          } while (iVar3 < iVar2);
          *(long *)(param_1 + 0x88) = lVar7;
          iVar3 = FUN_0042d520(param_1);
          if (iVar3 != 0) goto LAB_0042c885;
          *(long *)(param_1 + 0x88) = lVar1;
LAB_0042c86f:
          FUN_00436430(lVar7,FUN_0042d3c0);
        }
      }
    }
  }
  return 0;
}


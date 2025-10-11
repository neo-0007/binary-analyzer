
long FUN_0042ae10(long param_1,ulong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  int iVar10;
  
  iVar4 = FUN_0042add0();
  if (iVar4 != 0) {
    return 0;
  }
  lVar5 = FUN_0042bce0(*(undefined8 *)(param_1 + 8));
  if (lVar5 == 0) {
    return 0;
  }
  if ((param_2 & 3) != 0) {
    if (*(long *)(param_1 + 0x28) != 0) {
      lVar6 = FUN_004b82e0();
      *(long *)(lVar5 + 0x28) = lVar6;
      if (lVar6 == 0) goto LAB_0042af18;
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      lVar6 = FUN_004b82e0();
      *(long *)(lVar5 + 0x30) = lVar6;
      if (lVar6 == 0) goto LAB_0042af18;
    }
  }
  if ((param_2 & 1) == 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x68);
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    *(undefined4 *)(lVar5 + 0x10) = *(undefined4 *)(param_1 + 0x10);
    uVar1 = *(undefined4 *)(param_1 + 0xa4);
    *(undefined8 *)(lVar5 + 0x68) = uVar9;
    *(undefined8 *)(lVar5 + 0x70) = uVar2;
    *(undefined4 *)(lVar5 + 0xa4) = uVar1;
    *(undefined4 *)(lVar5 + 0x78) = *(undefined4 *)(param_1 + 0x78);
  }
  else {
    if (*(long *)(param_1 + 0x38) != 0) {
      lVar6 = FUN_004b82e0();
      *(long *)(lVar5 + 0x38) = lVar6;
      if (lVar6 == 0) goto LAB_0042af18;
    }
    if (*(long *)(param_1 + 0x40) != 0) {
      lVar6 = FUN_004b82e0();
      *(long *)(lVar5 + 0x40) = lVar6;
      if (lVar6 == 0) goto LAB_0042af18;
    }
    if (*(long *)(param_1 + 0x48) != 0) {
      lVar6 = FUN_004b82e0();
      *(long *)(lVar5 + 0x48) = lVar6;
      if (lVar6 == 0) goto LAB_0042af18;
    }
    if (*(long *)(param_1 + 0x50) != 0) {
      lVar6 = FUN_004b82e0();
      *(long *)(lVar5 + 0x50) = lVar6;
      if (lVar6 == 0) goto LAB_0042af18;
    }
    if (*(long *)(param_1 + 0x58) != 0) {
      lVar6 = FUN_004b82e0();
      *(long *)(lVar5 + 0x58) = lVar6;
      if (lVar6 == 0) goto LAB_0042af18;
    }
    if (*(long *)(param_1 + 0x60) != 0) {
      lVar6 = FUN_004b82e0();
      *(long *)(lVar5 + 0x60) = lVar6;
      if (lVar6 == 0) goto LAB_0042af18;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    uVar3 = *(undefined8 *)(param_1 + 0x70);
    uVar9 = *(undefined8 *)(param_1 + 0x88);
    *(undefined4 *)(lVar5 + 0x10) = *(undefined4 *)(param_1 + 0x10);
    uVar1 = *(undefined4 *)(param_1 + 0xa4);
    *(undefined8 *)(lVar5 + 0x68) = uVar2;
    *(undefined8 *)(lVar5 + 0x70) = uVar3;
    *(undefined4 *)(lVar5 + 0xa4) = uVar1;
    *(undefined4 *)(lVar5 + 0x78) = *(undefined4 *)(param_1 + 0x78);
    iVar4 = FUN_00436480(uVar9);
    if (0 < iVar4) {
      lVar6 = FUN_004363b0(0,iVar4);
      *(long *)(lVar5 + 0x88) = lVar6;
      if (lVar6 == 0) goto LAB_0042af18;
      iVar10 = 0;
      do {
        plVar7 = (long *)FUN_0041aec0(0x28,"../crypto/rsa/rsa_backend.c",0x191);
        if (plVar7 == (long *)0x0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/rsa/rsa_backend.c",0x192,"ossl_rsa_dup");
          FUN_0051f8f0(4,0xc0100,0);
          goto LAB_0042af18;
        }
        FUN_00435f80(*(undefined8 *)(lVar5 + 0x88),plVar7);
        plVar8 = (long *)FUN_004364a0(*(undefined8 *)(param_1 + 0x88),iVar10);
        if (*plVar8 != 0) {
          lVar6 = FUN_004b82e0();
          *plVar7 = lVar6;
          if (lVar6 == 0) goto LAB_0042af18;
        }
        if (plVar8[1] != 0) {
          lVar6 = FUN_004b82e0();
          plVar7[1] = lVar6;
          if (lVar6 == 0) goto LAB_0042af18;
        }
        if (plVar8[2] != 0) {
          lVar6 = FUN_004b82e0();
          plVar7[2] = lVar6;
          if (lVar6 == 0) goto LAB_0042af18;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 != iVar4);
      iVar4 = FUN_0042d520(lVar5);
      if (iVar4 == 0) goto LAB_0042af18;
    }
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    lVar6 = FUN_0056a4c0();
    *(long *)(lVar5 + 0x80) = lVar6;
    if ((*(long *)(*(long *)(param_1 + 0x80) + 8) != 0) && (*(long *)(lVar6 + 8) == 0)) {
      uVar9 = FUN_004a8ba0();
      *(undefined8 *)(lVar6 + 0x20) = uVar9;
      if (*(long *)(*(long *)(lVar5 + 0x80) + 0x20) == 0) goto LAB_0042af18;
    }
  }
  iVar4 = FUN_004196d0(9,lVar5 + 0x90,param_1 + 0x90);
  if (iVar4 != 0) {
    return lVar5;
  }
LAB_0042af18:
  FUN_0042b980(lVar5);
  return 0;
}


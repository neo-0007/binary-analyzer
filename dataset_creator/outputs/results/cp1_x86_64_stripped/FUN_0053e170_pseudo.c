
long FUN_0053e170(undefined4 param_1,long param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  piVar6 = *(int **)(param_2 + 0x10);
  lVar3 = FUN_0041aec0(0xe0,"../crypto/evp/keymgmt_meth.c",0x18);
  if (lVar3 != 0) {
    lVar4 = FUN_00422240();
    *(long *)(lVar3 + 0x28) = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(undefined4 *)(lVar3 + 0x20) = 1;
      UNLOCK();
      *(undefined4 *)(lVar3 + 4) = param_1;
      lVar4 = FUN_00417d20();
      *(long *)(lVar3 + 8) = lVar4;
      if (lVar4 == 0) {
        FUN_0053e0f0(lVar3);
        return 0;
      }
      lVar4 = *(long *)(lVar3 + 0x38);
      uVar7 = 0;
      uVar8 = 0;
      uVar9 = 0;
      uVar5 = 0;
      uVar10 = 0;
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(param_2 + 0x18);
      iVar2 = *piVar6;
      while (iVar2 != 0) {
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(iVar2) {
        case 1:
          if (*(long *)(lVar3 + 0x30) == 0) {
            *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)(piVar6 + 2);
          }
          break;
        case 2:
          if (*(long *)(lVar3 + 0x60) == 0) {
            *(undefined8 *)(lVar3 + 0x60) = *(undefined8 *)(piVar6 + 2);
          }
          break;
        case 3:
          if (*(long *)(lVar3 + 0x68) == 0) {
            *(undefined8 *)(lVar3 + 0x68) = *(undefined8 *)(piVar6 + 2);
          }
          break;
        case 4:
          if (*(long *)(lVar3 + 0x70) == 0) {
            uVar9 = uVar9 + 1;
            *(undefined8 *)(lVar3 + 0x70) = *(undefined8 *)(piVar6 + 2);
          }
          break;
        case 5:
          if (*(long *)(lVar3 + 0x78) == 0) {
            uVar9 = uVar9 + 1;
            *(undefined8 *)(lVar3 + 0x78) = *(undefined8 *)(piVar6 + 2);
          }
          break;
        case 6:
          if (*(long *)(lVar3 + 0x80) == 0) {
            *(undefined8 *)(lVar3 + 0x80) = *(undefined8 *)(piVar6 + 2);
          }
          break;
        case 7:
          if (*(long *)(lVar3 + 0x88) == 0) {
            *(undefined8 *)(lVar3 + 0x88) = *(undefined8 *)(piVar6 + 2);
          }
          break;
        case 8:
          if (*(long *)(lVar3 + 0x90) == 0) {
            *(undefined8 *)(lVar3 + 0x90) = *(undefined8 *)(piVar6 + 2);
          }
          break;
        case 10:
          if (lVar4 == 0) {
            lVar4 = *(long *)(piVar6 + 2);
            *(long *)(lVar3 + 0x38) = lVar4;
          }
          break;
        case 0xb:
          if (*(long *)(lVar3 + 0x40) == 0) {
            uVar5 = uVar5 + 1;
            *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)(piVar6 + 2);
          }
          break;
        case 0xc:
          if (*(long *)(lVar3 + 0x48) == 0) {
            uVar5 = uVar5 + 1;
            *(undefined8 *)(lVar3 + 0x48) = *(undefined8 *)(piVar6 + 2);
          }
          break;
        case 0xd:
          if (*(long *)(lVar3 + 0x50) == 0) {
            uVar10 = uVar10 + 1;
            *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)(piVar6 + 2);
          }
          break;
        case 0xe:
          if (*(long *)(lVar3 + 0x58) == 0) {
            uVar10 = uVar10 + 1;
            *(undefined8 *)(lVar3 + 0x58) = *(undefined8 *)(piVar6 + 2);
          }
          break;
        case 0x14:
          if (*(long *)(lVar3 + 0x98) == 0) {
            *(undefined8 *)(lVar3 + 0x98) = *(undefined8 *)(piVar6 + 2);
          }
          break;
        case 0x15:
          if (*(long *)(lVar3 + 0xa0) == 0) {
            *(undefined8 *)(lVar3 + 0xa0) = *(undefined8 *)(piVar6 + 2);
          }
          break;
        case 0x16:
          if (*(long *)(lVar3 + 0xa8) == 0) {
            *(undefined8 *)(lVar3 + 0xa8) = *(undefined8 *)(piVar6 + 2);
          }
          break;
        case 0x17:
          if (*(long *)(lVar3 + 0xb0) == 0) {
            *(undefined8 *)(lVar3 + 0xb0) = *(undefined8 *)(piVar6 + 2);
          }
          break;
        case 0x28:
          if (*(long *)(lVar3 + 0xb8) == 0) {
            uVar8 = uVar8 + 1;
            *(undefined8 *)(lVar3 + 0xb8) = *(undefined8 *)(piVar6 + 2);
          }
          break;
        case 0x29:
          if (*(long *)(lVar3 + 0xc0) == 0) {
            uVar8 = uVar8 + 1;
            *(undefined8 *)(lVar3 + 0xc0) = *(undefined8 *)(piVar6 + 2);
          }
          break;
        case 0x2a:
          if (*(long *)(lVar3 + 200) == 0) {
            uVar7 = uVar7 + 1;
            *(undefined8 *)(lVar3 + 200) = *(undefined8 *)(piVar6 + 2);
          }
          break;
        case 0x2b:
          if (*(long *)(lVar3 + 0xd0) == 0) {
            uVar7 = uVar7 + 1;
            *(undefined8 *)(lVar3 + 0xd0) = *(undefined8 *)(piVar6 + 2);
          }
          break;
        case 0x2c:
          if (*(long *)(lVar3 + 0xd8) == 0) {
            *(undefined8 *)(lVar3 + 0xd8) = *(undefined8 *)(piVar6 + 2);
          }
        }
        piVar1 = piVar6 + 4;
        piVar6 = piVar6 + 4;
                    /* WARNING: This code block may not be properly labeled as switch case */
        iVar2 = *piVar1;
      }
      if (((lVar4 != 0) &&
          ((((*(long *)(lVar3 + 0x30) != 0 || (*(long *)(lVar3 + 0x80) != 0)) ||
            (*(long *)(lVar3 + 0x90) != 0)) &&
           ((*(long *)(lVar3 + 0xa0) != 0 &&
            (((uVar5 | uVar10 | uVar9 | uVar8 | uVar7) & 0xfffffffd) == 0)))))) &&
         ((*(long *)(lVar3 + 0x80) == 0 ||
          ((*(long *)(lVar3 + 0x60) != 0 && (*(long *)(lVar3 + 0x88) != 0)))))) {
        *(long *)(lVar3 + 0x18) = param_3;
        if (param_3 == 0) {
          return lVar3;
        }
        FUN_00420ec0(param_3);
        return lVar3;
      }
      FUN_0053e0f0(lVar3);
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/keymgmt_meth.c",0xc4,"keymgmt_from_algorithm");
      FUN_0051f8f0(6,0xc1,0);
      return 0;
    }
  }
  FUN_0053e0f0(lVar3);
  FUN_0051f420();
  FUN_0051f540("../crypto/evp/keymgmt_meth.c",0x1b,"keymgmt_new");
  FUN_0051f8f0(6,0xc0100,0);
  return 0;
}


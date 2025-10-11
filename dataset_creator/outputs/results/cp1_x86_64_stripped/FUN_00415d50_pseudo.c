
undefined4 * FUN_00415d50(undefined4 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  piVar5 = *(int **)(param_2 + 0x10);
  puVar2 = (undefined4 *)FUN_0041aec0(0xf8,"../crypto/evp/signature.c",0x17);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/signature.c",0x1a,"evp_signature_new");
    FUN_0051f8f0(6,0xc0100,0);
  }
  else {
    lVar3 = FUN_00422240();
    *(long *)(puVar2 + 10) = lVar3;
    if (lVar3 != 0) {
      *(undefined8 *)(puVar2 + 6) = param_3;
      FUN_00420ec0(param_3);
      LOCK();
      puVar2[8] = 1;
      UNLOCK();
      *puVar2 = param_1;
      lVar3 = FUN_00417d20();
      *(long *)(puVar2 + 2) = lVar3;
      if (lVar3 == 0) goto LAB_00415eac;
      *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(param_2 + 0x18);
      iVar1 = *piVar5;
      if (iVar1 != 0) {
        uVar12 = 0;
        uVar13 = 0;
        uVar14 = 0;
        uVar6 = 0;
        uVar8 = 0;
        uVar7 = 0;
        uVar9 = 0;
        uVar4 = 0;
        uVar10 = 0;
        iVar11 = 0;
        do {
          switch(iVar1) {
          case 1:
            if (*(long *)(puVar2 + 0xc) == 0) {
              iVar11 = iVar11 + 1;
              *(undefined8 *)(puVar2 + 0xc) = *(undefined8 *)(piVar5 + 2);
            }
            break;
          case 2:
            if (*(long *)(puVar2 + 0xe) == 0) {
              uVar10 = uVar10 + 1;
              *(undefined8 *)(puVar2 + 0xe) = *(undefined8 *)(piVar5 + 2);
            }
            break;
          case 3:
            if (*(long *)(puVar2 + 0x10) == 0) {
              uVar10 = uVar10 + 1;
              *(undefined8 *)(puVar2 + 0x10) = *(undefined8 *)(piVar5 + 2);
            }
            break;
          case 4:
            if (*(long *)(puVar2 + 0x12) == 0) {
              uVar4 = uVar4 + 1;
              *(undefined8 *)(puVar2 + 0x12) = *(undefined8 *)(piVar5 + 2);
            }
            break;
          case 5:
            if (*(long *)(puVar2 + 0x14) == 0) {
              uVar4 = uVar4 + 1;
              *(undefined8 *)(puVar2 + 0x14) = *(undefined8 *)(piVar5 + 2);
            }
            break;
          case 6:
            if (*(long *)(puVar2 + 0x16) == 0) {
              uVar9 = uVar9 + 1;
              *(undefined8 *)(puVar2 + 0x16) = *(undefined8 *)(piVar5 + 2);
            }
            break;
          case 7:
            if (*(long *)(puVar2 + 0x18) == 0) {
              uVar9 = uVar9 + 1;
              *(undefined8 *)(puVar2 + 0x18) = *(undefined8 *)(piVar5 + 2);
            }
            break;
          case 8:
            if (*(long *)(puVar2 + 0x1a) == 0) {
              *(undefined8 *)(puVar2 + 0x1a) = *(undefined8 *)(piVar5 + 2);
            }
            break;
          case 9:
            if (*(long *)(puVar2 + 0x1c) == 0) {
              uVar7 = uVar7 + 1;
              *(undefined8 *)(puVar2 + 0x1c) = *(undefined8 *)(piVar5 + 2);
            }
            break;
          case 10:
            if (*(long *)(puVar2 + 0x1e) == 0) {
              uVar7 = uVar7 + 1;
              *(undefined8 *)(puVar2 + 0x1e) = *(undefined8 *)(piVar5 + 2);
            }
            break;
          case 0xb:
            if (*(long *)(puVar2 + 0x20) == 0) {
              *(undefined8 *)(puVar2 + 0x20) = *(undefined8 *)(piVar5 + 2);
            }
            break;
          case 0xc:
            if (*(long *)(puVar2 + 0x22) == 0) {
              *(undefined8 *)(puVar2 + 0x22) = *(undefined8 *)(piVar5 + 2);
            }
            break;
          case 0xd:
            if (*(long *)(puVar2 + 0x24) == 0) {
              uVar8 = uVar8 + 1;
              *(undefined8 *)(puVar2 + 0x24) = *(undefined8 *)(piVar5 + 2);
            }
            break;
          case 0xe:
            if (*(long *)(puVar2 + 0x26) == 0) {
              uVar8 = uVar8 + 1;
              *(undefined8 *)(puVar2 + 0x26) = *(undefined8 *)(piVar5 + 2);
            }
            break;
          case 0xf:
            if (*(long *)(puVar2 + 0x28) == 0) {
              *(undefined8 *)(puVar2 + 0x28) = *(undefined8 *)(piVar5 + 2);
            }
            break;
          case 0x10:
            if (*(long *)(puVar2 + 0x2a) == 0) {
              iVar11 = iVar11 + 1;
              *(undefined8 *)(puVar2 + 0x2a) = *(undefined8 *)(piVar5 + 2);
            }
            break;
          case 0x11:
            if (*(long *)(puVar2 + 0x2c) == 0) {
              *(undefined8 *)(puVar2 + 0x2c) = *(undefined8 *)(piVar5 + 2);
            }
            break;
          case 0x12:
            if (*(long *)(puVar2 + 0x2e) == 0) {
              uVar6 = uVar6 + 1;
              *(undefined8 *)(puVar2 + 0x2e) = *(undefined8 *)(piVar5 + 2);
            }
            break;
          case 0x13:
            if (*(long *)(puVar2 + 0x30) == 0) {
              uVar6 = uVar6 + 1;
              *(undefined8 *)(puVar2 + 0x30) = *(undefined8 *)(piVar5 + 2);
            }
            break;
          case 0x14:
            if (*(long *)(puVar2 + 0x32) == 0) {
              uVar14 = uVar14 + 1;
              *(undefined8 *)(puVar2 + 0x32) = *(undefined8 *)(piVar5 + 2);
            }
            break;
          case 0x15:
            if (*(long *)(puVar2 + 0x34) == 0) {
              uVar14 = uVar14 + 1;
              *(undefined8 *)(puVar2 + 0x34) = *(undefined8 *)(piVar5 + 2);
            }
            break;
          case 0x16:
            if (*(long *)(puVar2 + 0x36) == 0) {
              uVar13 = uVar13 + 1;
              *(undefined8 *)(puVar2 + 0x36) = *(undefined8 *)(piVar5 + 2);
            }
            break;
          case 0x17:
            if (*(long *)(puVar2 + 0x38) == 0) {
              uVar13 = uVar13 + 1;
              *(undefined8 *)(puVar2 + 0x38) = *(undefined8 *)(piVar5 + 2);
            }
            break;
          case 0x18:
            if (*(long *)(puVar2 + 0x3a) == 0) {
              uVar12 = uVar12 + 1;
              *(undefined8 *)(puVar2 + 0x3a) = *(undefined8 *)(piVar5 + 2);
            }
            break;
          case 0x19:
            if (*(long *)(puVar2 + 0x3c) == 0) {
              uVar12 = uVar12 + 1;
              *(undefined8 *)(puVar2 + 0x3c) = *(undefined8 *)(piVar5 + 2);
            }
          }
          iVar1 = piVar5[4];
          piVar5 = piVar5 + 4;
        } while (iVar1 != 0);
        if (iVar11 == 2) {
          if ((((uVar10 == 0 && uVar4 == 0) && uVar9 == 0) && uVar7 == 0) && uVar8 == 0) {
            if ((*(long *)(puVar2 + 0x20) != 0) || (*(long *)(puVar2 + 0x28) != 0))
            goto LAB_00415edf;
          }
          else if ((((uVar10 & 0xfffffffd) == 0) && (((uVar4 | uVar9 | uVar7) & 0xfffffffd) == 0))
                  && (((uVar7 != 2 || (*(long *)(puVar2 + 0x1a) != 0)) &&
                      ((uVar8 & 0xfffffffd) == 0)))) {
LAB_00415edf:
            if ((((uVar8 != 2) || (*(long *)(puVar2 + 0x22) != 0)) &&
                ((*(long *)(puVar2 + 0x20) == 0 || (*(long *)(puVar2 + 0x1a) != 0)))) &&
               (((*(long *)(puVar2 + 0x28) == 0 || (*(long *)(puVar2 + 0x22) != 0)) &&
                (((uVar6 | uVar14 | uVar13 | uVar12) & 0xfffffffd) == 0)))) {
              return puVar2;
            }
          }
        }
      }
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/signature.c",0x10e,"evp_signature_from_algorithm");
      FUN_0051f8f0(6,0xc1,0);
      goto LAB_00415eac;
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/signature.c",0x20,"evp_signature_new");
    FUN_0051f8f0(6,0xc0100,0);
    FUN_0041ad60(puVar2,"../crypto/evp/signature.c",0x21);
  }
  FUN_0051f420();
  puVar2 = (undefined4 *)0x0;
  FUN_0051f540("../crypto/evp/signature.c",0x36,"evp_signature_from_algorithm");
  FUN_0051f8f0(6,0xc0100,0);
LAB_00415eac:
  FUN_00415cd0(puVar2);
  return (undefined4 *)0x0;
}



/* WARNING: Type propagation algorithm not settling */

bool FUN_005a8ff0(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  
  if (param_2 == 0) {
    return true;
  }
  uVar6 = *(uint *)(param_1 + 0x10) | *(uint *)(param_2 + 0x10);
  if ((uVar6 & 0x10) != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if ((uVar6 & 8) != 0) {
    return true;
  }
  iVar7 = *(int *)(param_2 + 0x20);
  iVar1 = *(int *)(param_2 + 0x24);
  if ((uVar6 & 1) == 0) {
    if ((uVar6 & 2) != 0) {
      bVar5 = false;
      goto LAB_005a91b6;
    }
    if ((iVar7 != 0) && (*(int *)(param_1 + 0x20) == 0)) {
      *(int *)(param_1 + 0x20) = iVar7;
    }
    iVar7 = *(int *)(param_2 + 0x28);
    if ((iVar1 == 0) || (*(int *)(param_1 + 0x24) != 0)) {
      if (iVar7 != -1) goto LAB_005a9160;
LAB_005a916a:
      iVar1 = *(int *)(param_2 + 0x2c);
joined_r0x005a916e:
      if (iVar1 != -1) goto LAB_005a9170;
    }
    else {
      *(int *)(param_1 + 0x24) = iVar1;
      if (iVar7 != -1) {
LAB_005a9160:
        if (*(int *)(param_1 + 0x28) != -1) goto LAB_005a916a;
        iVar1 = *(int *)(param_2 + 0x2c);
        *(int *)(param_1 + 0x28) = iVar7;
        goto joined_r0x005a916e;
      }
      if (*(int *)(param_2 + 0x2c) == -1) {
        bVar5 = false;
        goto LAB_005a9068;
      }
LAB_005a9170:
      if (*(int *)(param_1 + 0x2c) == -1) {
        iVar7 = *(int *)(param_2 + 0x2c);
        bVar5 = false;
        goto LAB_005a9065;
      }
    }
    uVar9 = *(ulong *)(param_1 + 0x18);
    bVar5 = false;
joined_r0x005a9184:
    if ((uVar9 & 2) == 0) {
      bVar4 = false;
      goto LAB_005a9077;
    }
    if ((uVar6 & 4) == 0) {
      lVar8 = *(long *)(param_2 + 0x30);
      *(ulong *)(param_1 + 0x18) = uVar9 | *(ulong *)(param_2 + 0x18);
    }
    else {
      *(undefined8 *)(param_1 + 0x18) = 0;
      lVar8 = *(long *)(param_2 + 0x30);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    }
LAB_005a90a9:
    if (lVar8 == 0) {
LAB_005a92c0:
      if (*(int *)(param_2 + 0x40) == 0) {
        if (*(long *)(param_2 + 0x38) != 0) {
          lVar8 = *(long *)(param_1 + 0x38);
          if (bVar5) goto LAB_005a92ff;
          goto LAB_005a90dc;
        }
LAB_005a933b:
        lVar8 = *(long *)(param_2 + 0x50);
        if (lVar8 != 0) {
          if (!bVar5) goto LAB_005a90f1;
          goto LAB_005a934d;
        }
      }
      else {
        if (!bVar5) goto LAB_005a91e8;
        lVar8 = *(long *)(param_2 + 0x38);
        *(int *)(param_1 + 0x40) = *(int *)(param_2 + 0x40);
        if (lVar8 != 0) {
          lVar8 = *(long *)(param_1 + 0x38);
          goto LAB_005a92ff;
        }
        lVar8 = *(long *)(param_2 + 0x50);
        if (lVar8 == 0) {
          lVar8 = *(long *)(param_2 + 0x60);
          if (lVar8 == 0) {
            return true;
          }
          goto LAB_005a927a;
        }
LAB_005a934d:
        iVar7 = FUN_005a8f60(param_1,lVar8,*(undefined8 *)(param_2 + 0x58));
        if (iVar7 == 0) {
          return false;
        }
      }
      lVar8 = *(long *)(param_2 + 0x60);
      if (lVar8 == 0) {
        return true;
      }
      if (bVar5) goto LAB_005a927a;
    }
    else {
      if ((bVar5) || (*(long *)(param_1 + 0x30) == 0)) {
        iVar7 = FUN_005a8d60(param_1);
        if (iVar7 == 0) {
          return false;
        }
        goto LAB_005a92c0;
      }
      if (*(int *)(param_2 + 0x40) == 0) {
        lVar8 = *(long *)(param_2 + 0x38);
      }
      else {
LAB_005a91e8:
        lVar8 = *(long *)(param_2 + 0x38);
        if (*(int *)(param_1 + 0x40) == 0) {
          *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
        }
      }
      if (lVar8 != 0) {
        lVar8 = *(long *)(param_1 + 0x38);
LAB_005a90dc:
        if (lVar8 == 0) {
          bVar5 = false;
          lVar8 = 0;
LAB_005a92ff:
          FUN_00436430(lVar8,&LAB_005a8810);
          *(undefined8 *)(param_1 + 0x38) = 0;
          if (*(long *)(param_2 + 0x38) != 0) {
            lVar8 = FUN_00436200(*(long *)(param_2 + 0x38),FUN_005a8830,&LAB_005a8810);
            *(long *)(param_1 + 0x38) = lVar8;
            if (lVar8 == 0) {
              return false;
            }
          }
          goto LAB_005a933b;
        }
      }
      lVar8 = *(long *)(param_2 + 0x50);
      if (lVar8 != 0) {
LAB_005a90f1:
        if (*(long *)(param_1 + 0x50) == 0) {
          bVar5 = false;
          goto LAB_005a934d;
        }
      }
      if (*(long *)(param_2 + 0x60) == 0) {
        return true;
      }
    }
    if (*(long *)(param_1 + 0x60) != 0) {
      return true;
    }
  }
  else {
    if ((uVar6 & 2) == 0) {
      if (iVar7 != 0) {
        *(int *)(param_1 + 0x20) = iVar7;
      }
      iVar7 = *(int *)(param_2 + 0x28);
      if (iVar1 != 0) {
        *(int *)(param_1 + 0x24) = iVar1;
      }
      if (iVar7 != -1) {
        *(int *)(param_1 + 0x28) = iVar7;
      }
      iVar7 = *(int *)(param_2 + 0x2c);
      bVar5 = true;
      if (iVar7 != -1) {
LAB_005a9065:
        *(int *)(param_1 + 0x2c) = iVar7;
      }
LAB_005a9068:
      uVar9 = *(ulong *)(param_1 + 0x18);
      goto joined_r0x005a9184;
    }
    bVar5 = true;
LAB_005a91b6:
    *(int *)(param_1 + 0x24) = iVar1;
    uVar2 = *(undefined4 *)(param_2 + 0x28);
    *(int *)(param_1 + 0x20) = iVar7;
    bVar4 = true;
    *(undefined4 *)(param_1 + 0x28) = uVar2;
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
    uVar9 = *(ulong *)(param_1 + 0x18);
LAB_005a9077:
    uVar3 = *(undefined8 *)(param_2 + 8);
    uVar9 = uVar9 & 0xfffffffffffffffd;
    *(ulong *)(param_1 + 0x18) = uVar9;
    *(undefined8 *)(param_1 + 8) = uVar3;
    if ((uVar6 & 4) != 0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      uVar9 = 0;
    }
    lVar8 = *(long *)(param_2 + 0x30);
    *(ulong *)(param_1 + 0x18) = uVar9 | *(ulong *)(param_2 + 0x18);
    if (!bVar4) goto LAB_005a90a9;
    iVar7 = FUN_005a8d60(param_1);
    if (iVar7 == 0) {
      return false;
    }
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    FUN_00436430(*(undefined8 *)(param_1 + 0x38),&LAB_005a8810);
    *(undefined8 *)(param_1 + 0x38) = 0;
    if (*(long *)(param_2 + 0x38) != 0) {
      lVar8 = FUN_00436200(*(long *)(param_2 + 0x38),FUN_005a8830,&LAB_005a8810);
      *(long *)(param_1 + 0x38) = lVar8;
      if (lVar8 == 0) {
        return false;
      }
    }
    iVar7 = FUN_005a8f60(param_1,*(undefined8 *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x58));
    if (iVar7 == 0) {
      return false;
    }
  }
  lVar8 = *(long *)(param_2 + 0x60);
LAB_005a927a:
  iVar7 = FUN_005a8fb0(param_1,lVar8,*(undefined8 *)(param_2 + 0x68));
  return iVar7 != 0;
}


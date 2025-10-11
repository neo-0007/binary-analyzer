
int FUN_00608f20(long param_1,long param_2,long param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int local_4c;
  
  if ((param_2 == 0) || (iVar2 = FUN_00436480(param_2), iVar2 < 1)) {
    if (param_1 == 0) {
      return 0;
    }
LAB_00609125:
    *(undefined4 *)(param_1 + 0xb0) = 1;
    return 0;
  }
  if (param_1 == 0 && param_3 == 0) {
    return 0;
  }
  if ((param_1 != 0) && (*(long *)(param_1 + 0x38) == 0)) goto LAB_00609125;
  if (param_3 == 0) {
    lVar7 = FUN_004364a0(param_2,0);
    param_3 = *(long *)(lVar7 + 0x128);
    if (param_3 == 0) {
      local_4c = 1;
      lVar6 = 0;
      goto LAB_00609112;
    }
    iVar2 = FUN_00608bf0(param_3);
    if (iVar2 == 0) goto LAB_00608f97;
    iVar2 = 0;
LAB_00609184:
    FUN_00435d20(param_3,FUN_00607580);
    lVar6 = FUN_00436100(param_3);
    local_4c = 1;
    if (lVar6 != 0) {
LAB_00608ff0:
      while( true ) {
        iVar2 = iVar2 + 1;
        iVar3 = FUN_00436480(param_2);
        if (iVar3 <= iVar2) break;
        lVar7 = FUN_004364a0(param_2,iVar2);
        iVar3 = FUN_00608bf0(*(undefined8 *)(lVar7 + 0x128));
        if (iVar3 == 0) {
          if (param_1 == 0) goto LAB_0060931e;
          *(undefined4 *)(param_1 + 0xb0) = 0x29;
          *(int *)(param_1 + 0xac) = iVar2;
          *(long *)(param_1 + 0xb8) = lVar7;
          local_4c = (**(code **)(param_1 + 0x38))(0,param_1);
          if (local_4c == 0) goto LAB_00609112;
        }
        if (*(long *)(lVar7 + 0x128) == 0) {
          iVar4 = 0;
          iVar3 = FUN_00436480(lVar6);
          if (0 < iVar3) {
            do {
              lVar8 = FUN_004364a0(lVar6,iVar4);
              if (**(int **)(lVar8 + 8) != 0) goto LAB_006090db;
              iVar4 = iVar4 + 1;
              iVar3 = FUN_00436480(lVar6);
            } while (iVar4 < iVar3);
          }
        }
        else {
          FUN_00435d20(*(long *)(lVar7 + 0x128),FUN_00607580);
          for (iVar3 = 0; iVar4 = FUN_00436480(lVar6), iVar3 < iVar4; iVar3 = iVar3 + 1) {
            lVar8 = FUN_004364a0(lVar6,iVar3);
            uVar5 = FUN_00435f40(*(undefined8 *)(lVar7 + 0x128),lVar8);
            lVar9 = FUN_004364a0(*(undefined8 *)(lVar7 + 0x128),uVar5);
            if (lVar9 == 0) {
              if (**(int **)(lVar8 + 8) == 1) goto LAB_006090db;
            }
            else if (**(int **)(lVar9 + 8) == 1) {
              if (**(int **)(lVar8 + 8) != 0) {
                iVar4 = FUN_00608560(lVar8);
                lVar10 = 4;
                if (iVar4 != 1) {
                  lVar10 = (ulong)(iVar4 == 2) << 4;
                }
                lVar8 = *(long *)(*(long *)(lVar8 + 8) + 8);
                lVar1 = *(long *)(*(long *)(lVar9 + 8) + 8);
                if (((lVar8 != 0) && (lVar8 != lVar1)) &&
                   ((lVar1 == 0 || (iVar4 = FUN_00607c10(lVar1,lVar8,lVar10), iVar4 == 0)))) {
                  if (param_1 != 0) {
                    *(undefined4 *)(param_1 + 0xb0) = 0x2e;
                    *(int *)(param_1 + 0xac) = iVar2;
                    *(long *)(param_1 + 0xb8) = lVar7;
                    local_4c = (**(code **)(param_1 + 0x38))(0,param_1);
                    if (local_4c != 0) goto LAB_0060908d;
                    goto LAB_00609112;
                  }
                  goto LAB_0060931e;
                }
              }
              FUN_004364d0(lVar6,iVar3,lVar9);
            }
LAB_0060908d:
          }
        }
      }
      lVar8 = *(long *)(lVar7 + 0x128);
      iVar3 = 0;
      if (lVar8 != 0) goto LAB_0060934a;
      goto LAB_00609112;
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/v3_addr.c",0x4b5,"addr_validate_path_internal");
    FUN_0051f8f0(0x22,0xc0100,0);
    if (param_1 == 0) goto LAB_00609200;
  }
  else {
    lVar7 = 0;
    iVar2 = -1;
    iVar3 = FUN_00608bf0(param_3);
    if (iVar3 != 0) goto LAB_00609184;
    if (param_1 == 0) goto LAB_00609200;
LAB_00608f97:
    *(undefined4 *)(param_1 + 0xb0) = 0x29;
    *(int *)(param_1 + 0xac) = iVar2;
    *(long *)(param_1 + 0xb8) = lVar7;
    local_4c = (**(code **)(param_1 + 0x38))(0,param_1);
    if (local_4c == 0) goto LAB_00609200;
    FUN_00435d20(param_3,FUN_00607580);
    lVar6 = FUN_00436100(param_3);
    if (lVar6 != 0) goto LAB_00608ff0;
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/v3_addr.c",0x4b5,"addr_validate_path_internal");
    FUN_0051f8f0(0x22,0xc0100,0);
  }
  *(undefined4 *)(param_1 + 0xb0) = 0x11;
LAB_00609200:
  FUN_004360b0(0);
  return 0;
LAB_0060934a:
  iVar4 = FUN_00436480(lVar8);
  if (iVar4 <= iVar3) goto LAB_00609112;
  lVar8 = FUN_004364a0(*(undefined8 *)(lVar7 + 0x128),iVar3);
  if ((**(int **)(lVar8 + 8) == 0) && (iVar4 = FUN_00435f40(lVar6,lVar8), -1 < iVar4)) {
    if (param_1 == 0) goto LAB_0060931e;
    *(undefined4 *)(param_1 + 0xb0) = 0x2e;
    *(int *)(param_1 + 0xac) = iVar2;
    *(long *)(param_1 + 0xb8) = lVar7;
    local_4c = (**(code **)(param_1 + 0x38))(0,param_1);
    if (local_4c == 0) goto LAB_00609112;
  }
  lVar8 = *(long *)(lVar7 + 0x128);
  iVar3 = iVar3 + 1;
  goto LAB_0060934a;
LAB_006090db:
  if (param_1 == 0) goto LAB_0060931e;
  *(undefined4 *)(param_1 + 0xb0) = 0x2e;
  *(int *)(param_1 + 0xac) = iVar2;
  *(long *)(param_1 + 0xb8) = lVar7;
  local_4c = (**(code **)(param_1 + 0x38))(0,param_1);
  if (local_4c == 0) goto LAB_00609112;
  goto LAB_00608ff0;
LAB_0060931e:
  local_4c = 0;
LAB_00609112:
  FUN_004360b0(lVar6);
  return local_4c;
}



ulong FUN_004d3ca0(long param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  iVar1 = FUN_004d4b10();
  *param_2 = 0;
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = FUN_004b7bb0(*(undefined8 *)(param_1 + 8));
  if (0x8000 < iVar1) {
    FUN_0051f420();
    FUN_0051f540("../crypto/dh/dh_check.c",0x9d,"DH_check");
    FUN_0051f8f0(5,0x67,0);
    return 0;
  }
  uVar3 = FUN_004d39f0(param_1,param_2);
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  lVar4 = FUN_004b2b10();
  if (lVar4 != 0) {
    FUN_004b2c00(lVar4);
    uVar5 = FUN_004b2df0(lVar4);
    lVar6 = FUN_004b2df0(lVar4);
    if (lVar6 != 0) {
      uVar7 = *(undefined8 *)(param_1 + 8);
      if (*(long *)(param_1 + 0x10) != 0) {
        iVar1 = FUN_004b77f0(uVar7);
        if (0 < iVar1) {
          uVar7 = FUN_004b75a0();
          iVar1 = FUN_004b7840(*(undefined8 *)(param_1 + 0x18),uVar7);
          if ((iVar1 < 1) ||
             (iVar1 = FUN_004b7840(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 8)),
             -1 < iVar1)) {
LAB_004d3e25:
            *param_2 = *param_2 | 8;
          }
          else {
            iVar1 = FUN_004b5a10(uVar5,*(undefined8 *)(param_1 + 0x18),
                                 *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8),lVar4)
            ;
            if (iVar1 == 0) goto LAB_004d3dd0;
            iVar1 = FUN_004b7cc0(uVar5);
            if (iVar1 == 0) goto LAB_004d3e25;
          }
          iVar1 = FUN_005c4db0(*(undefined8 *)(param_1 + 0x10),lVar4,0);
          if (-1 < iVar1) {
            if (iVar1 == 0) {
              *param_2 = *param_2 | 0x10;
            }
            iVar1 = FUN_004b34a0(uVar5,lVar6,*(undefined8 *)(param_1 + 8),
                                 *(undefined8 *)(param_1 + 0x10),lVar4);
            if (iVar1 != 0) {
              iVar1 = FUN_004b7cc0(lVar6);
              if (iVar1 == 0) {
                *param_2 = *param_2 | 0x20;
              }
              if ((*(long *)(param_1 + 0x20) != 0) &&
                 (iVar1 = FUN_004b7840(*(long *)(param_1 + 0x20),uVar5), iVar1 != 0)) {
                *param_2 = *param_2 | 0x40;
              }
              uVar7 = *(undefined8 *)(param_1 + 8);
              goto LAB_004d3d5d;
            }
          }
          goto LAB_004d3dd0;
        }
        *param_2 = *param_2 | 0x20;
        uVar7 = *(undefined8 *)(param_1 + 8);
      }
LAB_004d3d5d:
      iVar1 = FUN_005c4db0(uVar7,lVar4,0);
      if (-1 < iVar1) {
        if (iVar1 == 0) {
          *param_2 = *param_2 | 1;
          uVar2 = 1;
          goto LAB_004d3dd2;
        }
        if (*(long *)(param_1 + 0x10) != 0) {
LAB_004d3d7c:
          uVar2 = 1;
          goto LAB_004d3dd2;
        }
        iVar1 = FUN_004bbff0(uVar5,*(undefined8 *)(param_1 + 8));
        if (iVar1 != 0) {
          iVar1 = FUN_005c4db0(uVar5,lVar4,0);
          if (-1 < iVar1) {
            if (iVar1 == 0) {
              *param_2 = *param_2 | 2;
            }
            goto LAB_004d3d7c;
          }
        }
      }
    }
  }
LAB_004d3dd0:
  uVar2 = 0;
LAB_004d3dd2:
  FUN_004b2d50(lVar4);
  FUN_004b2b50(lVar4);
  return (ulong)uVar2;
}


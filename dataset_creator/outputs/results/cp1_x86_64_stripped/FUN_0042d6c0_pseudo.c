
int FUN_0042d6c0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  long local_58 [5];
  
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  FUN_004b2c00(param_4);
  uVar5 = FUN_004b2df0(param_4);
  uVar6 = FUN_004b2df0(param_4);
  uVar7 = FUN_004b2df0(param_4);
  lVar8 = FUN_004b2df0(param_4);
  if ((lVar8 != 0) &&
     ((iVar3 = 0, *(int *)(param_3 + 0x10) != 1 ||
      (iVar3 = FUN_00436480(*(undefined8 *)(param_3 + 0x88)), iVar3 - 1U < 3)))) {
    uVar1 = *(uint *)(param_3 + 0xa4);
    if ((uVar1 & 4) != 0) {
      lVar9 = FUN_004b7690();
      if (lVar9 == 0) goto LAB_0042d76c;
      FUN_004b7d90(lVar9,*(undefined8 *)(param_3 + 0x40),4);
      lVar10 = FUN_004b9bc0(param_3 + 0xb0,*(undefined8 *)(param_3 + 0xd0),lVar9,param_4);
      if (lVar10 != 0) {
        FUN_004b7d90(lVar9,*(undefined8 *)(param_3 + 0x48),4);
        lVar10 = FUN_004b9bc0(param_3 + 0xb8,*(undefined8 *)(param_3 + 0xd0),lVar9,param_4);
        if (lVar10 != 0) {
          iVar2 = 0;
          if (iVar3 != 0) {
            do {
              puVar12 = (undefined8 *)FUN_004364a0(*(undefined8 *)(param_3 + 0x88),iVar2);
              FUN_004b7d90(lVar9,*puVar12,4);
              lVar10 = FUN_004b9bc0(puVar12 + 4,*(undefined8 *)(param_3 + 0xd0),lVar9,param_4);
              if (lVar10 == 0) goto LAB_0042dcb2;
              iVar2 = iVar2 + 1;
            } while (iVar3 != iVar2);
            FUN_004b7fa0(lVar9);
            uVar1 = *(uint *)(param_3 + 0xa4);
            goto LAB_0042d749;
          }
          FUN_004b7fa0(lVar9);
          if (*(code **)(*(long *)(param_3 + 0x18) + 0x30) != FUN_004b4eb0) {
LAB_0042dd75:
            uVar1 = *(uint *)(param_3 + 0xa4);
            goto LAB_0042d749;
          }
          iVar2 = FUN_004b7bb0(*(undefined8 *)(param_3 + 0x48));
          iVar4 = FUN_004b7bb0(*(undefined8 *)(param_3 + 0x40));
          if (iVar2 != iVar4) goto LAB_0042dd75;
          if ((((((((*(byte *)(param_3 + 0xa4) & 2) != 0) &&
                  (lVar9 = FUN_004b9bc0(param_3 + 0xa8,*(undefined8 *)(param_3 + 0xd0),
                                        *(undefined8 *)(param_3 + 0x28),param_4), lVar9 == 0)) ||
                 (iVar3 = FUN_004b9680(uVar7,param_2,*(undefined8 *)(param_3 + 0xb8),param_4),
                 iVar3 == 0)) ||
                ((iVar3 = FUN_004b9720(uVar7,uVar7,*(undefined8 *)(param_3 + 0xb8),param_4),
                 iVar3 == 0 ||
                 (iVar3 = FUN_004b9680(uVar5,param_2,*(undefined8 *)(param_3 + 0xb0),param_4),
                 iVar3 == 0)))) ||
               ((iVar3 = FUN_004b9720(uVar5,uVar5,*(undefined8 *)(param_3 + 0xb0),param_4),
                iVar3 == 0 ||
                ((iVar3 = FUN_004b5f70(uVar7,uVar7,*(undefined8 *)(param_3 + 0x58),
                                       *(undefined8 *)(param_3 + 0x48),
                                       *(undefined8 *)(param_3 + 0xb8),uVar5,uVar5,
                                       *(undefined8 *)(param_3 + 0x50),
                                       *(undefined8 *)(param_3 + 0x40),
                                       *(undefined8 *)(param_3 + 0xb0),param_4), iVar3 == 0 ||
                 (iVar3 = FUN_004b8dd0(uVar5,uVar5,uVar7,*(undefined8 *)(param_3 + 0x40)),
                 iVar3 == 0)))))) ||
              (iVar3 = FUN_004b9720(uVar5,uVar5,*(undefined8 *)(param_3 + 0xb0),param_4), iVar3 == 0
              )) || (((iVar3 = FUN_004b9520(uVar5,uVar5,*(undefined8 *)(param_3 + 0x60),
                                            *(undefined8 *)(param_3 + 0xb0),param_4), iVar3 == 0 ||
                      (iVar3 = FUN_004baa30(param_1,uVar5,*(undefined8 *)(param_3 + 0x48),param_4),
                      iVar3 == 0)) ||
                     (iVar3 = FUN_004b8ae0(param_1,param_1,uVar7,*(undefined8 *)(param_3 + 0x28)),
                     iVar3 == 0)))) goto LAB_0042d76c;
          goto LAB_0042dad7;
        }
      }
LAB_0042dcb2:
      FUN_004b7fa0(lVar9);
      iVar2 = 0;
      goto LAB_0042d76e;
    }
LAB_0042d749:
    if ((((uVar1 & 2) == 0) ||
        (lVar9 = FUN_004b9bc0(param_3 + 0xa8,*(undefined8 *)(param_3 + 0xd0),
                              *(undefined8 *)(param_3 + 0x28),param_4), lVar9 != 0)) &&
       (lVar9 = FUN_004b7690(), lVar9 != 0)) {
      FUN_004b7d90(lVar9,param_2,4);
      iVar2 = FUN_004b34a0(0,uVar5,lVar9,*(undefined8 *)(param_3 + 0x48),param_4);
      if (iVar2 == 0) goto LAB_0042dcc8;
      lVar10 = FUN_004b7690();
      if (lVar10 == 0) goto LAB_0042dcb2;
      FUN_004b7d90(lVar10,*(undefined8 *)(param_3 + 0x58),4);
      iVar2 = (**(code **)(*(long *)(param_3 + 0x18) + 0x30))
                        (uVar7,uVar5,lVar10,*(undefined8 *)(param_3 + 0x48),param_4,
                         *(undefined8 *)(param_3 + 0xb8));
      if (iVar2 == 0) {
        FUN_004b7fa0(lVar9);
        FUN_004b7fa0(lVar10);
        iVar2 = 0;
        goto LAB_0042d76e;
      }
      FUN_004b7fa0(lVar10);
      iVar2 = FUN_004b34a0(0,uVar5,lVar9,*(undefined8 *)(param_3 + 0x40),param_4);
      if (iVar2 == 0) {
LAB_0042dcc8:
        FUN_004b7fa0(lVar9);
        goto LAB_0042d76e;
      }
      FUN_004b7fa0(lVar9);
      lVar9 = FUN_004b7690();
      if (lVar9 != 0) {
        FUN_004b7d90(lVar9,*(undefined8 *)(param_3 + 0x50),4);
        iVar2 = (**(code **)(*(long *)(param_3 + 0x18) + 0x30))
                          (param_1,uVar5,lVar9,*(undefined8 *)(param_3 + 0x40),param_4,
                           *(undefined8 *)(param_3 + 0xb0));
        if (iVar2 == 0) goto LAB_0042dcc8;
        FUN_004b7fa0(lVar9);
        if (iVar3 != 0) {
          lVar9 = FUN_004b7690();
          lVar10 = FUN_004b7690();
          if ((lVar10 == 0) || (uVar13 = 0, lVar9 == 0)) {
LAB_0042dd80:
            FUN_004b7fa0(lVar10);
            FUN_004b7fa0(lVar9);
            goto LAB_0042d76c;
          }
          do {
            lVar11 = FUN_004b2df0(param_4);
            local_58[uVar13] = lVar11;
            if (lVar11 == 0) goto LAB_0042dd80;
            puVar12 = (undefined8 *)
                      FUN_004364a0(*(undefined8 *)(param_3 + 0x88),uVar13 & 0xffffffff);
            FUN_004b7d90(lVar10,param_2,4);
            FUN_004b7d90(lVar9,puVar12[1],4);
            iVar2 = FUN_004b34a0(0,uVar5,lVar10,*puVar12,param_4);
            if ((iVar2 == 0) ||
               (iVar2 = (**(code **)(*(long *)(param_3 + 0x18) + 0x30))
                                  (lVar11,uVar5,lVar9,*puVar12,param_4,puVar12[4]), iVar2 == 0)) {
              FUN_004b7fa0(lVar10);
              FUN_004b7fa0(lVar9);
              goto LAB_0042d76e;
            }
            uVar13 = uVar13 + 1;
          } while ((int)uVar13 < iVar3);
          FUN_004b7fa0(lVar10);
          FUN_004b7fa0(lVar9);
        }
        iVar2 = FUN_004b18d0(param_1,param_1,uVar7);
        if (((iVar2 != 0) &&
            (((iVar2 = FUN_004b7d60(param_1), iVar2 == 0 ||
              (iVar2 = FUN_004b1810(param_1,param_1,*(undefined8 *)(param_3 + 0x40)), iVar2 != 0))
             && (iVar2 = FUN_004bacf0(uVar5,param_1,*(undefined8 *)(param_3 + 0x60),param_4),
                iVar2 != 0)))) && (lVar9 = FUN_004b7690(), lVar9 != 0)) {
          FUN_004b7d90(lVar9,uVar5,4);
          iVar2 = FUN_004b34a0(0,param_1,lVar9,*(undefined8 *)(param_3 + 0x40),param_4);
          if (iVar2 == 0) goto LAB_0042dcc8;
          FUN_004b7fa0(lVar9);
          iVar2 = FUN_004b7d60(param_1);
          if (((iVar2 == 0) ||
              (iVar2 = FUN_004b1810(param_1,param_1,*(undefined8 *)(param_3 + 0x40)), iVar2 != 0))
             && ((iVar2 = FUN_004bacf0(uVar5,param_1,*(undefined8 *)(param_3 + 0x48),param_4),
                 iVar2 != 0 && (iVar2 = FUN_004b1810(param_1,uVar5,uVar7), iVar2 != 0)))) {
            if (iVar3 != 0) {
              lVar9 = FUN_004b7690();
              if (lVar9 == 0) goto LAB_0042d76c;
              uVar13 = 0;
              do {
                puVar12 = (undefined8 *)
                          FUN_004364a0(*(undefined8 *)(param_3 + 0x88),uVar13 & 0xffffffff);
                iVar2 = FUN_004b18d0(uVar5,local_58[uVar13],param_1);
                if ((iVar2 == 0) ||
                   (iVar2 = FUN_004bacf0(uVar6,uVar5,puVar12[2],param_4), iVar2 == 0))
                goto LAB_0042dcc8;
                FUN_004b7d90(lVar9,uVar6,4);
                iVar2 = FUN_004b34a0(0,uVar5,lVar9,*puVar12,param_4);
                if ((iVar2 == 0) ||
                   ((((iVar2 = FUN_004b7d60(uVar5), iVar2 != 0 &&
                      (iVar2 = FUN_004b1810(uVar5,uVar5,*puVar12), iVar2 == 0)) ||
                     (iVar2 = FUN_004bacf0(uVar5,uVar5,puVar12[3],param_4), iVar2 == 0)) ||
                    (iVar2 = FUN_004b1810(param_1,param_1,uVar5), iVar2 == 0)))) goto LAB_0042dcc8;
                uVar13 = uVar13 + 1;
              } while ((int)uVar13 < iVar3);
              FUN_004b7fa0(lVar9);
            }
LAB_0042dad7:
            if ((*(long *)(param_3 + 0x30) != 0) && (*(long *)(param_3 + 0x28) != 0)) {
              if (*(code **)(*(long *)(param_3 + 0x18) + 0x30) == FUN_004b4eb0) {
                iVar3 = FUN_004b4eb0(lVar8,param_1,*(long *)(param_3 + 0x30),
                                     *(long *)(param_3 + 0x28),param_4,
                                     *(undefined8 *)(param_3 + 0xa8));
              }
              else {
                FUN_004b8490(param_1);
                iVar3 = (**(code **)(*(long *)(param_3 + 0x18) + 0x30))
                                  (lVar8,param_1,*(undefined8 *)(param_3 + 0x30),
                                   *(undefined8 *)(param_3 + 0x28),param_4,
                                   *(undefined8 *)(param_3 + 0xa8));
              }
              if ((iVar3 == 0) || (iVar3 = FUN_004b18d0(lVar8,lVar8,param_2), iVar3 == 0))
              goto LAB_0042d76c;
              iVar3 = FUN_004b7ba0(lVar8);
              if (iVar3 == 0) {
                iVar3 = FUN_004b34a0(0,lVar8,lVar8,*(undefined8 *)(param_3 + 0x28),param_4);
                if ((iVar3 == 0) ||
                   ((iVar3 = FUN_004b7d60(lVar8), iVar3 != 0 &&
                    (iVar3 = FUN_004b1810(lVar8,lVar8,*(undefined8 *)(param_3 + 0x28)), iVar3 == 0))
                   )) goto LAB_0042d76c;
                iVar3 = FUN_004b7ba0(lVar8);
                if (iVar3 == 0) {
                  lVar9 = FUN_004b7690();
                  if (lVar9 == 0) goto LAB_0042d76c;
                  FUN_004b7d90(lVar9,*(undefined8 *)(param_3 + 0x38),4);
                  iVar2 = (**(code **)(*(long *)(param_3 + 0x18) + 0x30))
                                    (param_1,param_2,lVar9,*(undefined8 *)(param_3 + 0x28),param_4,
                                     *(undefined8 *)(param_3 + 0xa8));
                  if (iVar2 == 0) goto LAB_0042dcc8;
                  FUN_004b7fa0(lVar9);
                }
              }
            }
            FUN_004b8490(param_1);
            iVar2 = 1;
            goto LAB_0042d76e;
          }
        }
      }
    }
  }
LAB_0042d76c:
  iVar2 = 0;
LAB_0042d76e:
  FUN_004b2d50(param_4);
  if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}


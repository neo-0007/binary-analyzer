
bool FUN_004b6d50(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  bool bVar11;
  int local_44;
  
  iVar1 = FUN_004b7ba0(param_3);
  if ((iVar1 == 0) && (iVar1 = FUN_004b7ba0(param_2,param_2), param_2 = param_3, iVar1 == 0)) {
    FUN_004b2c00(param_4);
    uVar5 = FUN_004b2df0(param_4);
    plVar6 = (long *)FUN_004b2df0(param_4);
    bVar11 = false;
    if ((plVar6 != (long *)0x0) &&
       ((iVar1 = FUN_004bbf30(plVar6,param_3), iVar1 != 0 &&
        (iVar1 = FUN_004bbf30(param_1), iVar1 != 0)))) {
      if (*(int *)((long)param_1 + 0xc) < 1) {
        iVar1 = 0;
      }
      else {
        iVar1 = 0;
        lVar10 = 0;
        uVar8 = 1;
        do {
          if (*(int *)((long)plVar6 + 0xc) <= (int)lVar10) break;
          iVar9 = 0x40;
          uVar7 = ~(*(ulong *)(*param_1 + lVar10 * 8) | *(ulong *)(*plVar6 + lVar10 * 8));
          do {
            uVar8 = uVar8 & (uint)uVar7;
            uVar7 = uVar7 >> 1;
            iVar1 = iVar1 + uVar8;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
          lVar10 = lVar10 + 1;
        } while (*(int *)((long)param_1 + 0xc) != lVar10);
      }
      iVar9 = FUN_004bc3b0(param_1,param_1,iVar1);
      if ((iVar9 != 0) && (iVar9 = FUN_004bc3b0(plVar6,plVar6,iVar1), iVar9 != 0)) {
        iVar9 = (int)param_1[1];
        if ((int)param_1[1] < (int)plVar6[1]) {
          iVar9 = (int)plVar6[1];
        }
        iVar9 = iVar9 + 1;
        lVar10 = FUN_004b8240(param_1,iVar9);
        if (((lVar10 != 0) && (lVar10 = FUN_004b8240(plVar6,iVar9), lVar10 != 0)) &&
           (lVar10 = FUN_004b8240(uVar5,iVar9), lVar10 != 0)) {
          FUN_004b7a20(~(uint)*(undefined8 *)*param_1 & 1,param_1,plVar6,iVar9);
          iVar2 = FUN_004b7bb0(param_1);
          iVar3 = FUN_004b7bb0(plVar6);
          if (iVar2 < iVar3) {
            iVar2 = iVar3;
          }
          iVar2 = iVar2 * 3 + 4;
          if (0 < iVar2) {
            local_44 = 0;
            uVar8 = 1;
            do {
              uVar4 = ~((int)plVar6[1] + -1 >> 0x1f) & (int)-uVar8 >> 0x1f & *(uint *)*plVar6 & 1;
              *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) ^ uVar4;
              FUN_004b7a20(uVar4,param_1,plVar6,iVar9);
              uVar8 = (-uVar8 & -uVar4 | uVar4 - 1 & uVar8) + 1;
              iVar3 = FUN_004b1810(uVar5,plVar6,param_1);
              if (iVar3 == 0) goto LAB_004b6dc0;
              FUN_004b7a20(~((int)plVar6[1] + -1 >> 0x1f) & (uint)*(undefined8 *)*plVar6 & 1,plVar6,
                           uVar5,iVar9);
              iVar3 = FUN_004bbff0(plVar6,plVar6);
              if (iVar3 == 0) goto LAB_004b6dc0;
              local_44 = local_44 + 1;
            } while (iVar2 != local_44);
          }
          *(undefined4 *)(param_1 + 2) = 0;
          iVar1 = FUN_004bc220(param_1,param_1,iVar1);
          if (iVar1 != 0) {
            iVar1 = FUN_004bbff0(param_1,param_1);
            bVar11 = iVar1 != 0;
          }
        }
      }
    }
LAB_004b6dc0:
    FUN_004b2d50(param_4);
  }
  else {
    lVar10 = FUN_004b8260(param_1,param_2);
    *(undefined4 *)(param_1 + 2) = 0;
    bVar11 = lVar10 != 0;
  }
  return bVar11;
}


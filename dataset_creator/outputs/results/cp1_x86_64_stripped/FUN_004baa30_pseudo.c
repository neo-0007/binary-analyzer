
bool FUN_004baa30(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  int iVar11;
  bool bVar12;
  undefined8 uStack_60;
  
  iVar2 = *(int *)(param_2 + 1);
  iVar3 = *(int *)(param_3 + 1);
  if ((iVar2 == 0) || (iVar3 == 0)) {
    FUN_004b7b50(param_1);
    return true;
  }
  iVar1 = iVar2 + iVar3;
  FUN_004b2c00(param_4);
  if (((param_2 != param_1) && (puVar10 = param_1, param_3 != param_1)) ||
     (puVar10 = (undefined8 *)FUN_004b2df0(param_4), puVar10 != (undefined8 *)0x0)) {
    iVar7 = iVar2 - iVar3;
    if ((iVar7 == 0) && (iVar2 == 8)) {
      lVar9 = FUN_004b8240(puVar10,0x10);
      if (lVar9 != 0) {
        uVar4 = *param_2;
        *(undefined4 *)(puVar10 + 1) = 0x10;
        FUN_005c10a0(*puVar10,uVar4,*param_3);
        uStack_60 = extraout_RDX_01;
LAB_004babc5:
        bVar12 = true;
        *(uint *)(puVar10 + 2) = *(uint *)(param_2 + 2) ^ *(uint *)(param_3 + 2);
        if (puVar10 != param_1) {
          lVar9 = FUN_004b8260(param_1,puVar10,uStack_60);
          bVar12 = lVar9 != 0;
        }
        goto LAB_004babf3;
      }
    }
    else if ((iVar2 < 0x10) || ((iVar3 < 0x10 || (2 < iVar7 + 1U)))) {
      lVar9 = FUN_004b8240(puVar10,iVar1);
      if (lVar9 != 0) {
        uVar4 = *param_2;
        *(int *)(puVar10 + 1) = iVar1;
        FUN_004b9e30(*puVar10,uVar4,iVar2,*param_3,iVar3);
        uStack_60 = extraout_RDX_00;
        goto LAB_004babc5;
      }
    }
    else {
      if (iVar7 == -1) {
        cVar6 = FUN_004b75b0((long)iVar3);
      }
      else {
        cVar6 = FUN_004b75b0((long)iVar2);
      }
      iVar11 = 2 << (cVar6 - 1U & 0x1f);
      iVar7 = 1 << (cVar6 - 1U & 0x1f);
      puVar8 = (undefined8 *)FUN_004b2df0(param_4);
      if (puVar8 != (undefined8 *)0x0) {
        iVar5 = iVar3;
        if (iVar3 <= iVar2) {
          iVar5 = iVar2;
        }
        if (iVar7 < iVar5) {
          iVar11 = iVar11 << 2;
          lVar9 = FUN_004b8240(puVar8,iVar11);
          if ((lVar9 != 0) && (lVar9 = FUN_004b8240(puVar10,iVar11), lVar9 != 0)) {
            FUN_004ba490(*puVar10,*param_2,*param_3,iVar7,iVar2 - iVar7,iVar3 - iVar7,*puVar8);
            uStack_60 = extraout_RDX;
LAB_004bab7d:
            *(int *)(puVar10 + 1) = iVar1;
            goto LAB_004babc5;
          }
        }
        else {
          lVar9 = FUN_004b8240(puVar8);
          if (lVar9 != 0) {
            uStack_60 = 0x4bacb0;
            lVar9 = FUN_004b8240(puVar10,iVar11 * 2);
            if (lVar9 != 0) {
              FUN_004b9f50(*puVar10,*param_2,*param_3,iVar7,iVar2 - iVar7,iVar3 - iVar7,*puVar8);
              goto LAB_004bab7d;
            }
          }
        }
      }
    }
  }
  bVar12 = false;
LAB_004babf3:
  FUN_004b2d50(param_4);
  return bVar12;
}


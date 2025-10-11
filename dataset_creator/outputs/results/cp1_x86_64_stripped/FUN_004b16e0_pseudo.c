
undefined8 FUN_004b16e0(long *param_1,long *param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = (int)param_2[1];
  iVar1 = *(int *)(param_3 + 1);
  iVar9 = iVar8 - iVar1;
  if (-1 < iVar9) {
    lVar3 = FUN_004b8240(param_1,iVar8);
    uVar6 = 0;
    if (lVar3 != 0) {
      lVar3 = *param_2;
      lVar5 = *param_1;
      uVar4 = FUN_005c1070(lVar5,lVar3,*param_3,iVar1);
      plVar7 = (long *)(lVar5 + (long)iVar1 * 8);
      if (iVar9 != 0) {
        lVar5 = 0;
        do {
          lVar2 = *(long *)(lVar3 + (long)iVar1 * 8 + lVar5 * 8);
          plVar7[lVar5] = lVar2 - uVar4;
          lVar5 = lVar5 + 1;
          uVar4 = uVar4 & lVar2 == 0;
        } while (lVar5 != iVar9);
        plVar7 = plVar7 + lVar5;
      }
      while ((iVar8 != 0 && (plVar7 = plVar7 + -1, *plVar7 == 0))) {
        iVar8 = iVar8 + -1;
      }
      *(int *)(param_1 + 1) = iVar8;
      uVar6 = 1;
      *(undefined4 *)(param_1 + 2) = 0;
    }
    return uVar6;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/bn/bn_add.c",0x8b,"BN_usub");
  FUN_0051f8f0(3,100,0);
  return 0;
}


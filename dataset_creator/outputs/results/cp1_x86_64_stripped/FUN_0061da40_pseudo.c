
undefined8 FUN_0061da40(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  
  iVar9 = 0;
  lVar3 = FUN_004cca80(param_1,param_3);
  if (lVar3 == 0) {
    return 0;
  }
  while( true ) {
    iVar2 = FUN_00436480(lVar3);
    if (iVar2 <= iVar9) {
      return 1;
    }
    puVar5 = (undefined8 *)FUN_004364a0(lVar3,iVar9);
    lVar6 = FUN_0061d7b0(param_1,param_2,*puVar5,puVar5[1],puVar5[2]);
    if (lVar6 == 0) break;
    if (param_4 != (undefined8 *)0x0) {
      if (*param_2 == 2) {
        uVar1 = *param_4;
        uVar7 = FUN_005a2b00(lVar6);
        while (iVar2 = FUN_005a2520(uVar1,uVar7,0xffffffff), -1 < iVar2) {
          uVar8 = FUN_005a26e0(uVar1,iVar2);
          FUN_005aca30(uVar8);
        }
      }
      lVar4 = FUN_005a2740(param_4,lVar6,0xffffffff);
      if (lVar4 == 0) {
        FUN_005aca30(lVar6);
        return 0;
      }
    }
    iVar9 = iVar9 + 1;
    FUN_005aca30(lVar6);
  }
  return 0;
}


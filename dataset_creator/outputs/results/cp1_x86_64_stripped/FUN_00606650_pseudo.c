
undefined4 FUN_00606650(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  uint *puVar6;
  int iVar7;
  undefined4 uVar8;
  
  iVar7 = 0;
  plVar1 = *(long **)(param_1 + 0x108);
  iVar4 = FUN_00436480(param_2);
  if (iVar4 == 0) {
LAB_00606748:
    uVar8 = 0xffffffff;
  }
  else {
    for (; iVar4 = FUN_00436480(param_2), iVar7 < iVar4; iVar7 = iVar7 + 1) {
      puVar5 = (undefined8 *)FUN_004364a0(param_2,iVar7);
      iVar4 = FUN_00423da0(puVar5[1]);
      if ((iVar4 == 0x2ea) || (iVar4 = FUN_00423da0(*puVar5), iVar4 == 0x2ea)) goto LAB_00606748;
      puVar6 = (uint *)FUN_00606420(plVar1,*puVar5);
      if (puVar6 == (uint *)0x0) {
        if ((uint *)*plVar1 != (uint *)0x0) {
          puVar6 = (uint *)FUN_006064f0(0,*puVar5,*(uint *)*plVar1 & 0x10);
          if (puVar6 == (uint *)0x0) goto LAB_00606770;
          lVar2 = plVar1[1];
          uVar3 = *(undefined8 *)(*plVar1 + 0x10);
          *puVar6 = *puVar6 | 6;
          *(undefined8 *)(puVar6 + 4) = uVar3;
          iVar4 = FUN_00435f80(lVar2,puVar6);
          if (iVar4 != 0) goto LAB_00606683;
          FUN_00606480(puVar6);
          uVar8 = 0;
          goto LAB_0060674e;
        }
      }
      else {
        *puVar6 = *puVar6 | 1;
LAB_00606683:
        iVar4 = FUN_00435f80(*(undefined8 *)(puVar6 + 6),puVar5[1]);
        if (iVar4 == 0) {
LAB_00606770:
          uVar8 = 0;
          goto LAB_0060674e;
        }
        puVar5[1] = 0;
      }
    }
    uVar8 = 1;
  }
LAB_0060674e:
  FUN_00436430(param_2,&LAB_00611ae0);
  return uVar8;
}


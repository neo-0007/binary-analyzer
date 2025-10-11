
undefined8 FUN_0042c1b0(long param_1,long param_2,long param_3,long param_4,int param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  if ((((param_2 != 0) && (param_3 != 0)) && (param_4 != 0)) &&
     ((param_5 != 0 && (lVar5 = FUN_004363b0(0,param_5), lVar5 != 0)))) {
    lVar2 = *(long *)(param_1 + 0x88);
    if (0 < param_5) {
      lVar7 = 0;
      do {
        puVar6 = (undefined8 *)FUN_0042d420();
        if (puVar6 == (undefined8 *)0x0) goto LAB_0042c2e1;
        if (((*(long *)(param_2 + lVar7 * 8) == 0) || (*(long *)(param_3 + lVar7 * 8) == 0)) ||
           (*(long *)(param_4 + lVar7 * 8) == 0)) {
          FUN_0042d3f0(puVar6);
          FUN_00436430(lVar5,FUN_0042d3c0);
          return 0;
        }
        FUN_004b7f20(*puVar6);
        FUN_004b7f20(puVar6[1]);
        FUN_004b7f20(puVar6[2]);
        uVar3 = *(undefined8 *)(param_2 + lVar7 * 8);
        *puVar6 = uVar3;
        puVar6[1] = *(undefined8 *)(param_3 + lVar7 * 8);
        lVar1 = lVar7 * 8;
        lVar7 = lVar7 + 1;
        puVar6[2] = *(undefined8 *)(param_4 + lVar1);
        FUN_004b7e70(uVar3,4);
        FUN_004b7e70(puVar6[1],4);
        FUN_004b7e70(puVar6[2],4);
        FUN_00435f80(lVar5,puVar6);
      } while (lVar7 != param_5);
    }
    *(long *)(param_1 + 0x88) = lVar5;
    iVar4 = FUN_0042d520(param_1);
    if (iVar4 != 0) {
      if (lVar2 != 0) {
        FUN_00436430(lVar2,FUN_0042d3f0);
      }
      *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    *(long *)(param_1 + 0x88) = lVar2;
LAB_0042c2e1:
    FUN_00436430(lVar5,FUN_0042d3c0);
  }
  return 0;
}


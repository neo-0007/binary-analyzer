
undefined8 FUN_0060d4b0(long *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uVar7;
  
  lVar2 = FUN_0059d500(param_2);
  if (lVar2 == 0) {
    uVar7 = 0;
  }
  else {
    if (*param_1 == 0) {
      iVar6 = 0;
      iVar1 = FUN_00436480(lVar2);
      if (0 < iVar1) {
        do {
          lVar3 = FUN_004364a0(lVar2,iVar6);
          uVar7 = *(undefined8 *)(lVar3 + 8);
          if (*param_1 == 0) {
            lVar3 = FUN_004a7820();
            *param_1 = lVar3;
            if (lVar3 == 0) goto LAB_0060d4e0;
          }
          pcVar5 = "unused";
          puVar4 = &DAT_00917140;
          while (iVar1 = thunk_FUN_00712780(pcVar5,uVar7), iVar1 != 0) {
            if (*(long *)(puVar4 + 8) == 0) goto LAB_0060d4e0;
            pcVar5 = *(char **)(puVar4 + 10);
            puVar4 = puVar4 + 6;
          }
          iVar1 = FUN_005b3fd0(*param_1,*puVar4,1);
          if ((iVar1 == 0) || (*(long *)(puVar4 + 2) == 0)) goto LAB_0060d4e0;
          iVar6 = iVar6 + 1;
          iVar1 = FUN_00436480(lVar2);
        } while (iVar6 < iVar1);
      }
      uVar7 = 1;
    }
    else {
LAB_0060d4e0:
      uVar7 = 0;
    }
    FUN_00436430(lVar2,FUN_0059cb40);
  }
  return uVar7;
}


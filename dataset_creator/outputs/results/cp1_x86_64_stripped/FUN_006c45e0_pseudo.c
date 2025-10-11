
void FUN_006c45e0(long param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  
  iVar2 = FUN_0070a340();
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004021c3();
  }
  puVar3 = *(undefined8 **)(param_1 + 0x30);
  lVar5 = (long)*(undefined8 **)(param_1 + 0x38) - (long)puVar3;
  lVar4 = lVar5 >> 3;
  while (0 < lVar5) {
    while( true ) {
      lVar5 = lVar4 >> 1;
      if (*(int *)puVar3[lVar5] < param_2) break;
      lVar4 = lVar5;
      if (lVar5 < 1) goto LAB_006c464a;
    }
    puVar3 = puVar3 + lVar5 + 1;
    lVar4 = (lVar4 - lVar5) + -1;
    lVar5 = lVar4;
  }
LAB_006c464a:
  if ((*(undefined8 **)(param_1 + 0x38) == puVar3) || (piVar1 = (int *)*puVar3, *piVar1 != param_2))
  {
    iVar2 = FUN_0070abb0(param_1);
    if (iVar2 == 0) {
      return;
    }
    puVar3 = (undefined8 *)FUN_006231b0(8);
    *puVar3 = &PTR_FUN_00933a00;
                    /* WARNING: Subroutine does not return */
    FUN_00624060(puVar3,&PTR_PTR_009339b0,FUN_00622f20);
  }
  FUN_007104f0(*(undefined8 *)(piVar1 + 2));
  FUN_00625980(piVar1 + 4);
  thunk_FUN_007104f0(piVar1);
  puVar6 = puVar3 + 1;
  if (*(undefined8 **)(param_1 + 0x38) != puVar6) {
    thunk_FUN_00713610(puVar3,puVar6,(long)*(undefined8 **)(param_1 + 0x38) - (long)puVar6);
    puVar6 = *(undefined8 **)(param_1 + 0x38);
  }
  *(undefined8 **)(param_1 + 0x38) = puVar6 + -1;
  if (*(int *)(param_1 + 0x28) + -1 == param_2) {
    *(int *)(param_1 + 0x28) = param_2;
    iVar2 = FUN_0070abb0(param_1);
  }
  else {
    iVar2 = FUN_0070abb0(param_1);
  }
  if (iVar2 == 0) {
    return;
  }
  puVar3 = (undefined8 *)FUN_006231b0(8);
  *puVar3 = &PTR_FUN_00933a00;
                    /* WARNING: Subroutine does not return */
  FUN_00624060(puVar3,&PTR_PTR_009339b0,FUN_00622f20);
}



int * FUN_006c4700(long param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  
  iVar1 = FUN_0070a340();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004021c3();
  }
  puVar2 = *(undefined8 **)(param_1 + 0x30);
  lVar4 = (long)*(undefined8 **)(param_1 + 0x38) - (long)puVar2;
  lVar3 = lVar4 >> 3;
  while (0 < lVar4) {
    while( true ) {
      lVar4 = lVar3 >> 1;
      if (*(int *)puVar2[lVar4] < param_2) break;
      lVar3 = lVar4;
      if (lVar4 < 1) goto LAB_006c4769;
    }
    puVar2 = puVar2 + lVar4 + 1;
    lVar3 = (lVar3 - lVar4) + -1;
    lVar4 = lVar3;
  }
LAB_006c4769:
  if (*(undefined8 **)(param_1 + 0x38) == puVar2) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)*puVar2;
    if (*(int *)*puVar2 != param_2) {
      piVar5 = (int *)0x0;
    }
  }
  iVar1 = FUN_0070abb0(param_1);
  if (iVar1 == 0) {
    return piVar5;
  }
  puVar2 = (undefined8 *)FUN_006231b0(8);
  *puVar2 = &PTR_FUN_00933a00;
                    /* WARNING: Subroutine does not return */
  FUN_00624060(puVar2,&PTR_PTR_009339b0,FUN_00622f20);
}


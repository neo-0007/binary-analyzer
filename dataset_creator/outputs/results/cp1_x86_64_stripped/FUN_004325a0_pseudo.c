
int FUN_004325a0(long param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  
  puVar1 = *(undefined4 **)(param_1 + 0x98);
  if (*(long *)(puVar1 + 2) == 0) {
    lVar3 = FUN_004b7690();
    *(long *)(puVar1 + 2) = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
    iVar2 = FUN_004b8190(lVar3,0x10001);
    if (iVar2 == 0) {
      return 0;
    }
  }
  lVar3 = FUN_0042bcc0();
  if (lVar3 == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x60) == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_004b7dd0();
    if (lVar4 == 0) goto LAB_00432638;
    FUN_00412200(lVar4,param_1);
  }
  iVar2 = FUN_0056b490(lVar3,*puVar1,puVar1[4],*(undefined8 *)(puVar1 + 2),lVar4);
  FUN_004b7e40(lVar4);
  if (iVar2 < 1) {
    FUN_0042b980(lVar3);
    return iVar2;
  }
  lVar4 = *(long *)(param_1 + 0x98);
  iVar6 = **(int **)(param_1 + 0x78);
  if (iVar6 == 0x390) {
    iVar5 = *(int *)(lVar4 + 0x30);
    if ((*(long *)(lVar4 + 0x20) == 0) && (*(long *)(lVar4 + 0x28) == 0)) {
      if (iVar5 == -2) goto LAB_004326cb;
    }
    else if (iVar5 == -2) {
      iVar5 = 0;
    }
    lVar4 = FUN_00569860(*(long *)(lVar4 + 0x20),*(long *)(lVar4 + 0x28),iVar5);
    *(long *)(lVar3 + 0x80) = lVar4;
    if (lVar4 == 0) {
LAB_00432638:
      FUN_0042b980(lVar3);
      return 0;
    }
    iVar6 = **(int **)(param_1 + 0x78);
  }
LAB_004326cb:
  FUN_0040f1c0(param_2,iVar6,lVar3);
  return iVar2;
}


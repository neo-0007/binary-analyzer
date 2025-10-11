
void FUN_00425200(undefined8 param_1,long param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  bool bVar6;
  
  iVar2 = FUN_00436480(*(undefined8 *)(param_2 + 8));
  if (0 < iVar2) {
    iVar2 = iVar2 + -1;
    iVar5 = 0;
    do {
      while( true ) {
        plVar3 = (long *)FUN_004364a0(*(undefined8 *)(param_2 + 8),iVar2);
        if (*plVar3 != param_3[1]) break;
        iVar5 = iVar5 + 1;
        (*(code *)plVar3[4])(plVar3[2]);
        FUN_0041ad60(plVar3,"../crypto/property/property.c",0xc6);
        FUN_00435ec0(*(undefined8 *)(param_2 + 8),iVar2);
        bVar6 = iVar2 == 0;
        iVar2 = iVar2 + -1;
        if (bVar6) goto LAB_00425288;
      }
      bVar6 = iVar2 != 0;
      iVar2 = iVar2 + -1;
    } while (bVar6);
LAB_00425288:
    if (iVar5 != 0) {
      lVar1 = *param_3;
      lVar4 = FUN_00545d60(*(undefined8 *)(param_2 + 0x10));
      *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) - lVar4;
      FUN_00545bd0(*(undefined8 *)(param_2 + 0x10),FUN_00424f90);
      FUN_00545700(*(undefined8 *)(param_2 + 0x10));
      return;
    }
  }
  return;
}



undefined8 FUN_004257f0(long param_1,int param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (((param_3 != 0 && param_1 != 0) && (0 < param_2)) &&
     (iVar1 = FUN_004222c0(*(undefined8 *)(param_1 + 0x10)), iVar1 != 0)) {
    lVar3 = FUN_0054a470(*(undefined8 *)(param_1 + 8),(long)param_2);
    if (lVar3 != 0) {
      lVar4 = FUN_00545d60(*(undefined8 *)(lVar3 + 0x10));
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) - lVar4;
      FUN_00545bd0(*(undefined8 *)(lVar3 + 0x10),FUN_00424f90);
      FUN_00545700(*(undefined8 *)(lVar3 + 0x10));
    }
    iVar1 = 0;
    lVar3 = FUN_0054a470(*(undefined8 *)(param_1 + 8),(long)param_2);
    if (lVar3 != 0) {
      for (; iVar2 = FUN_00436480(*(undefined8 *)(lVar3 + 8)), iVar1 < iVar2; iVar1 = iVar1 + 1) {
        lVar4 = FUN_004364a0(*(undefined8 *)(lVar3 + 8),iVar1);
        if (param_3 == *(long *)(lVar4 + 0x10)) {
          (**(code **)(lVar4 + 0x20))(param_3);
          FUN_0041ad60(lVar4,"../crypto/property/property.c",0xc6);
          FUN_00435ec0(*(undefined8 *)(lVar3 + 8),iVar1);
          FUN_004222e0(*(undefined8 *)(param_1 + 0x10));
          return 1;
        }
      }
    }
    FUN_004222e0(*(undefined8 *)(param_1 + 0x10));
  }
  return 0;
}



int * FUN_00427410(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  byte bVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar12 = *param_2 + *param_1;
  lVar9 = 0x20;
  if (iVar12 != 0) {
    lVar9 = (long)(iVar12 + -1) * 0x18 + 0x20;
  }
  piVar4 = (int *)FUN_0041ad90(lVar9,"../crypto/property/property_parse.c",0x206);
  if (piVar4 == (int *)0x0) {
    return (int *)0x0;
  }
  bVar7 = 0;
  iVar11 = 0;
  iVar8 = 0;
  iVar10 = 0;
  piVar6 = piVar4 + 2;
  do {
    *(byte *)(piVar4 + 1) = *(byte *)(piVar4 + 1) & 0xfe | bVar7;
    if (iVar10 < *param_1) {
      lVar9 = (long)iVar10;
      if (iVar8 < *param_2) {
        piVar5 = param_2 + (long)iVar8 * 6 + 2;
        iVar1 = *piVar5;
        iVar2 = param_1[lVar9 * 6 + 2];
        if (iVar2 != iVar1 && iVar1 <= iVar2) {
          iVar8 = iVar8 + 1;
          goto LAB_00427496;
        }
        iVar8 = iVar8 + (uint)(iVar2 == iVar1);
      }
      iVar10 = iVar10 + 1;
      piVar5 = param_1 + lVar9 * 6 + 2;
    }
    else {
      if (*param_2 <= iVar8) {
        *piVar4 = iVar11;
        if (iVar11 == iVar12) {
          return piVar4;
        }
        piVar4 = (int *)FUN_0041ade0(piVar4,(long)(iVar11 + -1) * 0x18 + 0x20,
                                     "../crypto/property/property_parse.c",0x21d);
        return piVar4;
      }
      lVar9 = (long)iVar8;
      iVar8 = iVar8 + 1;
      piVar5 = param_2 + lVar9 * 6 + 2;
    }
LAB_00427496:
    uVar3 = *(undefined8 *)(piVar5 + 2);
    iVar11 = iVar11 + 1;
    *(undefined8 *)piVar6 = *(undefined8 *)piVar5;
    *(undefined8 *)(piVar6 + 2) = uVar3;
    *(undefined8 *)(piVar6 + 4) = *(undefined8 *)(piVar5 + 4);
    bVar7 = (*(byte *)(piVar5 + 3) | *(byte *)(piVar4 + 1)) & 1;
    piVar6 = piVar6 + 6;
  } while( true );
}



int * ossl_property_merge(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  int *piVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar12 = *param_2 + *param_1;
  iVar9 = 0x20;
  if (iVar12 != 0) {
    iVar9 = (iVar12 + -1) * 0x18 + 0x20;
  }
  piVar4 = (int *)CRYPTO_malloc(iVar9,"../crypto/property/property_parse.c",0x206);
  if (piVar4 == (int *)0x0) {
    return (int *)0x0;
  }
  bVar8 = 0;
  iVar11 = 0;
  iVar9 = 0;
  iVar10 = 0;
  piVar7 = piVar4 + 2;
  do {
    *(byte *)(piVar4 + 1) = *(byte *)(piVar4 + 1) & 0xfe | bVar8;
    if (iVar10 < *param_1) {
      lVar6 = (long)iVar10;
      if (iVar9 < *param_2) {
        piVar5 = param_2 + (long)iVar9 * 6 + 2;
        iVar1 = *piVar5;
        iVar2 = param_1[lVar6 * 6 + 2];
        if (iVar2 != iVar1 && iVar1 <= iVar2) {
          iVar9 = iVar9 + 1;
          goto LAB_0042da76;
        }
        iVar9 = iVar9 + (uint)(iVar2 == iVar1);
      }
      iVar10 = iVar10 + 1;
      piVar5 = param_1 + lVar6 * 6 + 2;
    }
    else {
      if (*param_2 <= iVar9) {
        *piVar4 = iVar11;
        if (iVar11 == iVar12) {
          return piVar4;
        }
        piVar4 = (int *)CRYPTO_realloc(piVar4,(iVar11 + -1) * 0x18 + 0x20,
                                       "../crypto/property/property_parse.c",0x21d);
        return piVar4;
      }
      lVar6 = (long)iVar9;
      iVar9 = iVar9 + 1;
      piVar5 = param_2 + lVar6 * 6 + 2;
    }
LAB_0042da76:
    uVar3 = *(undefined8 *)(piVar5 + 2);
    iVar11 = iVar11 + 1;
    *(undefined8 *)piVar7 = *(undefined8 *)piVar5;
    *(undefined8 *)(piVar7 + 2) = uVar3;
    *(undefined8 *)(piVar7 + 4) = *(undefined8 *)(piVar5 + 4);
    bVar8 = (*(byte *)(piVar5 + 3) | *(byte *)(piVar4 + 1)) & 1;
    piVar7 = piVar7 + 6;
  } while( true );
}


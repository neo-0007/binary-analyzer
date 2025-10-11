
long FUN_0055a560(long *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  
  puVar1 = (undefined4 *)*param_1;
  lVar4 = FUN_0042bcc0();
  if ((lVar4 == 0) || (lVar5 = FUN_004b7690(), lVar5 == 0)) {
    lVar11 = 0;
    lVar10 = 0;
    lVar9 = 0;
    lVar8 = 0;
    lVar7 = 0;
    lVar12 = 0;
    lVar6 = 0;
    lVar5 = 0;
    goto LAB_0055a7ae;
  }
  iVar3 = FUN_004b8190(lVar5,*puVar1);
  if (iVar3 == 0) {
    lVar11 = 0;
    lVar10 = 0;
    lVar9 = 0;
    lVar8 = 0;
    lVar7 = 0;
    lVar12 = 0;
    lVar6 = 0;
    goto LAB_0055a7ae;
  }
  puVar1 = puVar1 + 1;
  uVar15 = param_2 + 7U >> 3;
  lVar6 = FUN_004b8810(puVar1,uVar15,0);
  if (lVar6 == 0) {
    lVar11 = 0;
    lVar10 = 0;
    lVar9 = 0;
    lVar8 = 0;
    lVar7 = 0;
    lVar12 = 0;
    goto LAB_0055a7ae;
  }
  lVar13 = (long)puVar1 + (ulong)uVar15;
  if (param_3 == 0) {
    uVar14 = param_2 + 0xfU >> 4;
    lVar7 = FUN_004b8810(lVar13,uVar14,0);
    if (lVar7 == 0) {
      lVar11 = 0;
      lVar10 = 0;
      lVar9 = 0;
      lVar8 = 0;
      lVar12 = 0;
      goto LAB_0055a7ae;
    }
    uVar2 = (ulong)uVar14;
    lVar8 = FUN_004b8810(uVar2 + lVar13,uVar2,0);
    if (lVar8 == 0) {
      lVar11 = 0;
      lVar10 = 0;
      lVar9 = 0;
      lVar12 = 0;
      goto LAB_0055a7ae;
    }
    lVar13 = uVar2 + lVar13 + uVar2;
    lVar9 = FUN_004b8810(lVar13,uVar14,0);
    if (lVar9 == 0) {
      lVar11 = 0;
      lVar10 = 0;
      lVar12 = 0;
      goto LAB_0055a7ae;
    }
    lVar13 = lVar13 + uVar2;
    lVar10 = FUN_004b8810(lVar13,uVar14,0);
    if (lVar10 == 0) {
      lVar11 = 0;
      lVar12 = 0;
      goto LAB_0055a7ae;
    }
    lVar13 = lVar13 + uVar2;
    lVar11 = FUN_004b8810(lVar13,uVar14,0);
    if (lVar11 == 0) {
      lVar12 = 0;
      goto LAB_0055a7ae;
    }
    lVar13 = lVar13 + uVar2;
    lVar12 = FUN_004b8810(lVar13,uVar15,0);
    if ((lVar12 == 0) || (iVar3 = FUN_0042c040(lVar4,lVar7,lVar8), iVar3 == 0)) goto LAB_0055a7ae;
    iVar3 = FUN_0042c0f0(lVar4,lVar9,lVar10,lVar11);
    if (iVar3 != 0) {
      lVar13 = lVar13 + (ulong)uVar15;
      goto LAB_0055a873;
    }
  }
  else {
    lVar12 = 0;
LAB_0055a873:
    iVar3 = FUN_0042bf80(lVar4,lVar6,lVar5,lVar12);
    if (iVar3 != 0) {
      *param_1 = lVar13;
      return lVar4;
    }
    lVar11 = 0;
    lVar10 = 0;
    lVar9 = 0;
  }
  lVar8 = 0;
  lVar7 = 0;
LAB_0055a7ae:
  FUN_0051f420();
  FUN_0051f540("../crypto/pem/pvkfmt.c",0x1e8,"ossl_b2i_RSA_after_header");
  FUN_0051f8f0(9,0xc0100,0);
  FUN_004b7fa0(lVar5);
  FUN_004b7fa0(lVar6);
  FUN_004b7fa0(lVar7);
  FUN_004b7fa0(lVar8);
  FUN_004b7fa0(lVar9);
  FUN_004b7fa0(lVar10);
  FUN_004b7fa0(lVar11);
  FUN_004b7fa0(lVar12);
  FUN_0042b980(lVar4);
  return 0;
}


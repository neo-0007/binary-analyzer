
long FUN_0055a2d0(long *param_1,int param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  long local_50;
  
  uVar10 = param_2 + 7U >> 3;
  local_50 = *param_1;
  lVar2 = FUN_004d8c90();
  if ((lVar2 == 0) || (lVar3 = FUN_004b8810(local_50,uVar10,0), lVar3 == 0)) {
    lVar8 = 0;
    lVar7 = 0;
    lVar6 = 0;
    lVar5 = 0;
    lVar3 = 0;
    lVar9 = 0;
    goto LAB_0055a450;
  }
  uVar4 = (ulong)uVar10;
  local_50 = local_50 + uVar4;
  lVar5 = FUN_004b8810(local_50,0x14,0);
  if (lVar5 == 0) {
    lVar8 = 0;
    lVar7 = 0;
    lVar6 = 0;
    lVar9 = 0;
    goto LAB_0055a450;
  }
  local_50 = local_50 + 0x14;
  lVar6 = FUN_004b8810(local_50,uVar10,0);
  if (lVar6 == 0) {
    lVar8 = 0;
    lVar7 = 0;
    lVar9 = 0;
    goto LAB_0055a450;
  }
  local_50 = local_50 + uVar4;
  if (param_3 == 0) {
    lVar7 = FUN_004b8810(local_50,0x14,0);
    if (lVar7 == 0) {
      lVar8 = 0;
      lVar9 = 0;
      goto LAB_0055a450;
    }
    FUN_004b7e70(lVar7,4);
    lVar8 = FUN_004b7690();
    if (lVar8 != 0) {
      lVar9 = FUN_004b2b10();
      if ((lVar9 == 0) || (iVar1 = FUN_004b5a10(lVar8,lVar6,lVar7,lVar3), iVar1 == 0))
      goto LAB_0055a450;
      local_50 = local_50 + 0x14;
      FUN_004b2b50(lVar9);
      goto LAB_0055a3f9;
    }
  }
  else {
    lVar8 = FUN_004b8810(local_50,uVar10,0);
    if (lVar8 == 0) {
      lVar7 = 0;
      lVar9 = 0;
      goto LAB_0055a450;
    }
    local_50 = local_50 + uVar4;
    lVar7 = 0;
LAB_0055a3f9:
    iVar1 = FUN_004d8ce0(lVar2,lVar3,lVar5,lVar6);
    if (iVar1 != 0) {
      iVar1 = FUN_004d8da0(lVar2,lVar8,lVar7);
      if (iVar1 != 0) {
        *param_1 = local_50;
        return lVar2;
      }
      lVar6 = 0;
      lVar5 = 0;
      lVar3 = 0;
    }
  }
  lVar9 = 0;
LAB_0055a450:
  FUN_0051f420();
  FUN_0051f540("../crypto/pem/pvkfmt.c",0x1ad,"ossl_b2i_DSA_after_header");
  FUN_0051f8f0(9,0xc0100,0);
  FUN_004d8960(lVar2);
  FUN_004b7fa0(lVar3);
  FUN_004b7fa0(lVar5);
  FUN_004b7fa0(lVar6);
  FUN_004b7fa0(lVar8);
  FUN_004b7fa0(lVar7);
  FUN_004b2b50(lVar9);
  return 0;
}


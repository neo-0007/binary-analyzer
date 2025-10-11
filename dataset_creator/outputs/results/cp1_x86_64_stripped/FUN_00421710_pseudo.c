
undefined8 FUN_00421710(undefined8 param_1,code *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  undefined8 uVar8;
  int iVar9;
  bool bVar10;
  
  lVar5 = FUN_00417730(param_1,1,&DAT_008de180);
  if (lVar5 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/provider_core.c",0x154,"get_provider_store");
    FUN_0051f8f0(0xf,0xc0103,0);
    iVar2 = FUN_00417590(param_1);
    if (iVar2 != 0) {
      FUN_00419fe0(0x40,0);
    }
    return 1;
  }
  iVar2 = FUN_00417590(param_1);
  if (iVar2 != 0) {
    FUN_00419fe0(0x40,0);
  }
  iVar2 = FUN_004215d0(lVar5);
  if ((iVar2 == 0) || (iVar2 = FUN_004222a0(*(undefined8 *)(lVar5 + 0x20)), iVar2 == 0)) {
    return 0;
  }
  lVar6 = FUN_00436100(*(undefined8 *)(lVar5 + 8));
  if (lVar6 == 0) {
    FUN_004222e0(*(undefined8 *)(lVar5 + 0x20));
    return 0;
  }
  iVar3 = FUN_00436480(lVar6);
  iVar2 = iVar3 + -1;
  if (-1 < iVar2) {
    do {
      pbVar7 = (byte *)FUN_004364a0(lVar6,iVar2);
      iVar4 = FUN_004222c0(*(undefined8 *)(pbVar7 + 8));
      if (iVar4 == 0) {
LAB_004218b0:
        FUN_004222e0(*(undefined8 *)(lVar5 + 0x20));
        goto LAB_004218b9;
      }
      if ((*pbVar7 & 2) == 0) {
        iVar3 = iVar3 + -1;
        FUN_00435ec0(lVar6,iVar2);
      }
      else {
        LOCK();
        *(int *)(pbVar7 + 0x10) = *(int *)(pbVar7 + 0x10) + 1;
        UNLOCK();
        iVar4 = FUN_0041f700(pbVar7,0,0);
        if (iVar4 < 0) {
          LOCK();
          *(int *)(pbVar7 + 0x10) = *(int *)(pbVar7 + 0x10) + -1;
          UNLOCK();
          FUN_004222e0(*(undefined8 *)(pbVar7 + 8));
          goto LAB_004218b0;
        }
      }
      FUN_004222e0(*(undefined8 *)(pbVar7 + 8));
      bVar10 = iVar2 != 0;
      iVar2 = iVar2 + -1;
    } while (bVar10);
  }
  FUN_004222e0(*(undefined8 *)(lVar5 + 0x20));
  if (iVar3 < 1) {
    uVar8 = 1;
    goto LAB_00421903;
  }
  iVar2 = 0;
  do {
    iVar9 = iVar2 + 1;
    uVar8 = FUN_004364a0(lVar6,iVar2);
    iVar4 = (*param_2)(uVar8,param_3);
    if (iVar4 == 0) goto LAB_004218b9;
    iVar2 = iVar9;
  } while (iVar9 != iVar3);
  uVar8 = 1;
  iVar2 = 0;
LAB_004218d8:
  do {
    while( true ) {
      lVar5 = FUN_004364a0(lVar6,iVar2);
      FUN_0041ffb0(lVar5,0,1);
      LOCK();
      piVar1 = (int *)(lVar5 + 0x10);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) break;
      iVar2 = iVar2 + 1;
      if (iVar3 <= iVar2) goto LAB_00421903;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < iVar3);
LAB_00421903:
  FUN_004360b0(lVar6);
  return uVar8;
LAB_004218b9:
  iVar2 = iVar2 + 1;
  uVar8 = 0;
  if (iVar3 <= iVar2) goto LAB_00421903;
  goto LAB_004218d8;
}


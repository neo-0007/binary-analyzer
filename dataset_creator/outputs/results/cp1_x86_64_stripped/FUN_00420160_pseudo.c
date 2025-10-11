
int FUN_00420160(long param_1,code *param_2,code *param_3,code *param_4,long param_5)

{
  byte bVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  byte *pbVar8;
  undefined8 uVar9;
  int iVar10;
  bool bVar11;
  
  uVar9 = *(undefined8 *)(param_1 + 0x50);
  lVar5 = FUN_00417730(uVar9,1,&DAT_008de180);
  if (lVar5 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/provider_core.c",0x154,"get_provider_store");
    FUN_0051f8f0(0xf,0xc0103,0);
    return 0;
  }
  plVar6 = (long *)FUN_0041ad90(0x28,"../crypto/provider_core.c",0x6b2);
  if (plVar6 == (long *)0x0) {
    return 0;
  }
  uVar2 = *(undefined8 *)(lVar5 + 0x20);
  *plVar6 = param_1;
  plVar6[3] = (long)param_4;
  plVar6[1] = (long)param_2;
  plVar6[4] = param_5;
  plVar6[2] = (long)param_3;
  iVar3 = FUN_004222c0(uVar2);
  if (iVar3 == 0) {
    FUN_0041ad60(plVar6,"../crypto/provider_core.c",0x6bc);
    return 0;
  }
  lVar7 = FUN_00408f60(uVar9,0);
  if (lVar7 != 0) {
    (*param_4)(lVar7,param_5);
    FUN_0041ad60(lVar7,"../crypto/provider_core.c",0x6c3);
  }
  iVar3 = FUN_00436480(*(undefined8 *)(lVar5 + 8));
  if (iVar3 < 1) {
    if (iVar3 == 0) goto LAB_00420360;
    uVar9 = FUN_004364a0(*(undefined8 *)(lVar5 + 8),0);
    (*param_3)(uVar9,param_5);
  }
  else {
    iVar10 = 0;
    do {
      pbVar8 = (byte *)FUN_004364a0(*(undefined8 *)(lVar5 + 8),iVar10);
      iVar4 = FUN_004222a0(*(undefined8 *)(pbVar8 + 8));
      if ((iVar4 == 0) ||
         ((bVar1 = *pbVar8, FUN_004222e0(*(undefined8 *)(pbVar8 + 8)), (bVar1 >> 1 & 1) != 0 &&
          (iVar4 = (*param_2)(pbVar8,param_5), iVar4 == 0)))) goto LAB_004202a8;
      iVar10 = iVar10 + 1;
    } while (iVar10 != iVar3);
LAB_00420360:
    iVar4 = FUN_00435f80(*(undefined8 *)(lVar5 + 0x10),plVar6);
    iVar10 = iVar3;
    if (0 < iVar4) goto LAB_004202dc;
LAB_004202a8:
    do {
      uVar9 = FUN_004364a0(*(undefined8 *)(lVar5 + 8),iVar10);
      (*param_3)(uVar9,param_5);
      bVar11 = iVar10 != 0;
      iVar10 = iVar10 + -1;
    } while (bVar11);
  }
  FUN_0041ad60(plVar6,"../crypto/provider_core.c",0x6e5);
  iVar4 = 0;
LAB_004202dc:
  FUN_004222e0(*(undefined8 *)(lVar5 + 0x20));
  return iVar4;
}


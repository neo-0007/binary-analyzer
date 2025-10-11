
long FUN_00611b20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  
  iVar1 = FUN_00436480(param_3);
  lVar2 = FUN_004363b0(0,iVar1);
  if (lVar2 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/v3_pmaps.c",0x4c,"v2i_POLICY_MAPPINGS");
    FUN_0051f8f0(0x22,0xc0100,0);
  }
  else {
    iVar7 = 0;
    if (0 < iVar1) {
      do {
        lVar6 = FUN_004364a0(param_3,iVar7);
        if ((*(long *)(lVar6 + 0x10) == 0) || (*(long *)(lVar6 + 8) == 0)) {
          FUN_0051f420();
          lVar4 = 0;
          lVar3 = 0;
          FUN_0051f540("../crypto/x509/v3_pmaps.c",0x53,"v2i_POLICY_MAPPINGS");
          FUN_0051f8f0(0x22,0x6e,&DAT_007e3d61,*(undefined8 *)(lVar6 + 8));
LAB_00611c16:
          FUN_004a06b0(lVar3);
          FUN_004a06b0(lVar4);
          FUN_00436430(lVar2,&LAB_00611ae0);
          return 0;
        }
        lVar3 = FUN_00424530(*(long *)(lVar6 + 8),0);
        lVar4 = FUN_00424530(*(undefined8 *)(lVar6 + 0x10),0);
        if ((lVar3 == 0) || (lVar4 == 0)) {
          FUN_0051f420();
          FUN_0051f540("../crypto/x509/v3_pmaps.c",0x5a,"v2i_POLICY_MAPPINGS");
          FUN_0051f8f0(0x22,0x6e,&DAT_007e3d61,*(undefined8 *)(lVar6 + 8));
          goto LAB_00611c16;
        }
        plVar5 = (long *)FUN_00611b00();
        if (plVar5 == (long *)0x0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/x509/v3_pmaps.c",0x60,"v2i_POLICY_MAPPINGS");
          FUN_0051f8f0(0x22,0xc0100,0);
          goto LAB_00611c16;
        }
        *plVar5 = lVar3;
        iVar7 = iVar7 + 1;
        plVar5[1] = lVar4;
        FUN_00435f80(lVar2);
      } while (iVar1 != iVar7);
    }
  }
  return lVar2;
}


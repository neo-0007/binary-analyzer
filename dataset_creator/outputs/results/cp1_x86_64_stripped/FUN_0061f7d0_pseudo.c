
long FUN_0061f7d0(long *param_1,undefined8 *param_2,long param_3)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  if (param_3 - 2U < 0xfffe) {
    uVar1 = *(ushort *)*param_2;
    *param_2 = (ushort *)*param_2 + 1;
    uVar6 = (ulong)(ushort)(uVar1 << 8 | uVar1 >> 8);
    if (param_3 - 2U == uVar6) {
      if ((param_1 == (long *)0x0) || (lVar3 = *param_1, lVar3 == 0)) {
        lVar3 = FUN_00436410();
        if (lVar3 == 0) {
          return 0;
        }
      }
      else {
        while (lVar4 = FUN_00436020(lVar3), lVar4 != 0) {
          FUN_00620220();
        }
      }
      do {
        if (uVar6 == 0) {
          if (param_1 == (long *)0x0) {
            return lVar3;
          }
          if (*param_1 == 0) {
            *param_1 = lVar3;
            return lVar3;
          }
          return lVar3;
        }
        if (uVar6 == 1) {
          FUN_0051f420();
          uVar7 = 0x123;
LAB_0061f8f1:
          FUN_0051f540("../crypto/ct/ct_oct.c",uVar7,"o2i_SCT_LIST");
          FUN_0051f8f0(0x32,0x69,0);
          goto LAB_0061f910;
        }
        uVar1 = *(ushort *)*param_2;
        *param_2 = (ushort *)*param_2 + 1;
        uVar5 = (ulong)(ushort)(uVar1 << 8 | uVar1 >> 8);
        if ((uVar5 == 0) || (uVar6 - 2 < uVar5)) {
          FUN_0051f420();
          uVar7 = 0x12a;
          goto LAB_0061f8f1;
        }
        uVar6 = (uVar6 - 2) - uVar5;
        lVar4 = FUN_0061f130(0,param_2);
        if (lVar4 == 0) goto LAB_0061f910;
        iVar2 = FUN_00435f80(lVar3,lVar4);
      } while (iVar2 != 0);
      FUN_00620220(lVar4);
LAB_0061f910:
      if ((param_1 == (long *)0x0) || (*param_1 == 0)) {
        FUN_00620320(lVar3);
      }
      return 0;
    }
    FUN_0051f420();
    uVar7 = 0x10e;
  }
  else {
    FUN_0051f420();
    uVar7 = 0x108;
  }
  FUN_0051f540("../crypto/ct/ct_oct.c",uVar7,"o2i_SCT_LIST");
  FUN_0051f8f0(0x32,0x69,0);
  return 0;
}


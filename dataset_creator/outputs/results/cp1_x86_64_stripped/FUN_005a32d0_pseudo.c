
ulong FUN_005a32d0(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  if (*(long *)(param_1 + 0xd8) == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x98);
    if (*(int *)(param_1 + 0xf8) == 0) {
LAB_005a331d:
      iVar1 = FUN_00606970(param_1 + 0xa0,param_1 + 0xa8,uVar5,
                           *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30),
                           *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x18));
      if (*(int *)(param_1 + 0xf8) != 0) {
        FUN_00436020(*(undefined8 *)(param_1 + 0x98));
      }
      if (iVar1 != 0) {
        if (iVar1 == -1) {
          uVar6 = 0;
          for (iVar1 = 0; iVar3 = FUN_00436480(*(undefined8 *)(param_1 + 0x98)), iVar1 < iVar3;
              iVar1 = iVar1 + 1) {
            lVar4 = FUN_004364a0(*(undefined8 *)(param_1 + 0x98),iVar1);
            if ((*(byte *)(lVar4 + 0xe9) & 8) != 0) {
              *(int *)(param_1 + 0xac) = iVar1;
              *(long *)(param_1 + 0xb8) = lVar4;
              *(undefined4 *)(param_1 + 0xb0) = 0x2a;
              uVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
              if (uVar2 == 0) {
                return (ulong)uVar2;
              }
              uVar6 = 1;
            }
          }
          if ((int)uVar6 == 0) {
            FUN_0051f420();
            FUN_0051f540("../crypto/x509/x509_vfy.c",0x688,"check_policy");
            FUN_0051f8f0(0xb,0xc0103,0);
            return uVar6;
          }
        }
        else {
          if (iVar1 == -2) {
            *(undefined8 *)(param_1 + 0xb8) = 0;
            *(undefined4 *)(param_1 + 0xb0) = 0x2b;
                    /* WARNING: Could not recover jumptable at 0x005a34ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar6 = (**(code **)(param_1 + 0x38))(0,param_1);
            return uVar6;
          }
          if (iVar1 != 1) {
            FUN_0051f420();
            FUN_0051f540("../crypto/x509/x509_vfy.c",0x694,"check_policy");
            FUN_0051f8f0(0xb,0xc0103,0);
            return 0;
          }
          if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x19) & 8) != 0) {
            *(undefined8 *)(param_1 + 0xb8) = 0;
            iVar1 = (**(code **)(param_1 + 0x38))(2,param_1);
            return (ulong)(iVar1 != 0);
          }
        }
        goto LAB_005a32e2;
      }
    }
    else {
      iVar1 = FUN_00435f80(uVar5,0);
      if (iVar1 != 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x98);
        goto LAB_005a331d;
      }
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/x509_vfy.c",0x6a7,"check_policy");
    uVar6 = 0xffffffff;
    FUN_0051f8f0(0xb,0xc0100,0);
    *(undefined4 *)(param_1 + 0xb0) = 0x11;
  }
  else {
LAB_005a32e2:
    uVar6 = 1;
  }
  return uVar6;
}


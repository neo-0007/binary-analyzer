
undefined8 FUN_005a6db0(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  if (param_1 == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/x509_vfy.c",0x10a,"X509_verify_cert");
    FUN_0051f8f0(0xb,0xc0102,0);
    return 0xffffffff;
  }
  if (*(long *)(param_1 + 8) == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/x509_vfy.c",0x10e,"X509_verify_cert");
    uVar5 = 0x69;
LAB_005a70e4:
    FUN_0051f8f0(0xb,uVar5,0);
    *(undefined4 *)(param_1 + 0xb0) = 0x45;
    return 0xffffffff;
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/x509/x509_vfy.c",0x118,"X509_verify_cert");
    uVar5 = 0xc0101;
    goto LAB_005a70e4;
  }
  iVar2 = FUN_0059e930(param_1 + 0x98,*(long *)(param_1 + 8),1);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0xb0) = 0x11;
    return 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x94) = 1;
  lVar4 = FUN_0059ef80(*(undefined8 *)(param_1 + 8));
  iVar2 = *(int *)(*(long *)(param_1 + 0x20) + 0x2c);
  if (0 < iVar2) {
    if (lVar4 != 0) {
      iVar3 = FUN_0040de40();
      if (5 < iVar2) {
        iVar2 = 5;
      }
      if (*(int *)(&DAT_0080d2b0 + (long)(iVar2 + -1) * 4) <= iVar3) goto LAB_005a6e51;
    }
    *(undefined4 *)(param_1 + 0xac) = 0;
    lVar4 = *(long *)(param_1 + 8);
    if (lVar4 == 0) {
      lVar4 = FUN_004364a0(*(undefined8 *)(param_1 + 0x98),0);
    }
    *(long *)(param_1 + 0xb8) = lVar4;
    *(undefined4 *)(param_1 + 0xb0) = 0x42;
    uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
  }
LAB_005a6e51:
  if ((*(long *)(param_1 + 0xf0) == 0) ||
     (iVar2 = FUN_00436480(*(undefined8 *)(*(long *)(param_1 + 0xf0) + 8)), iVar2 < 1)) {
LAB_005a6e6a:
    uVar5 = FUN_005a5d90(param_1);
  }
  else {
    lVar4 = *(long *)(param_1 + 0xf0);
    lVar7 = *(long *)(param_1 + 8);
    FUN_005b0200(*(undefined8 *)(lVar4 + 0x20));
    *(undefined8 *)(lVar4 + 0x2c) = 0xffffffffffffffff;
    uVar5 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(lVar4 + 0x20) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0xf0);
    *(undefined8 *)(lVar4 + 0x18) = 0;
    iVar2 = FUN_005a2e20(*(undefined4 *)(param_1 + 0x94),uVar1,uVar5,0);
    if (iVar2 == 0) {
      if (((*(byte *)(lVar4 + 0x28) & 5) != 0) || (-1 < *(int *)(lVar4 + 0x2c))) goto LAB_005a6e6a;
      iVar2 = FUN_005a5c40(0,*(undefined8 *)(param_1 + 0x98));
      if (iVar2 == 0) goto LAB_005a7215;
      iVar2 = FUN_0059f100(0,lVar7,0,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
      *(undefined4 *)(param_1 + 0xac) = 0;
      if (iVar2 != 0) {
        if (lVar7 == 0) {
          uVar5 = FUN_004364a0(*(undefined8 *)(param_1 + 0x98),0);
          *(int *)(param_1 + 0xb0) = iVar2;
          *(undefined8 *)(param_1 + 0xb8) = uVar5;
          iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
          if (iVar2 != 0) {
            *(undefined4 *)(param_1 + 0xac) = 0;
            goto LAB_005a719c;
          }
        }
        else {
          *(long *)(param_1 + 0xb8) = lVar7;
          *(int *)(param_1 + 0xb0) = iVar2;
          iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
          if (iVar2 != 0) {
            *(undefined4 *)(param_1 + 0xac) = 0;
            goto LAB_005a6f2b;
          }
        }
LAB_005a6fe8:
        uVar5 = 0;
        goto LAB_005a6ff0;
      }
      if (lVar7 == 0) {
LAB_005a719c:
        lVar7 = FUN_004364a0(*(undefined8 *)(param_1 + 0x98),0);
      }
LAB_005a6f2b:
      *(long *)(param_1 + 0xb8) = lVar7;
      *(undefined4 *)(param_1 + 0xb0) = 0x41;
      uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
    }
    else {
      iVar3 = FUN_005a5c40(0,*(undefined8 *)(param_1 + 0x98));
      if (iVar3 == 0) {
LAB_005a7215:
        uVar5 = 0xffffffff;
        goto LAB_005a6ff0;
      }
      if (iVar2 < 1) {
        *(long *)(param_1 + 0xb8) = lVar7;
        *(undefined8 *)(param_1 + 0xac) = 0x1100000000;
        return 0xffffffff;
      }
      iVar2 = FUN_0059f100(0,lVar7,0,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
      if (iVar2 != 0) {
        *(undefined4 *)(param_1 + 0xac) = 0;
        lVar6 = lVar7;
        if (lVar7 == 0) {
          lVar6 = FUN_004364a0(*(undefined8 *)(param_1 + 0x98),0);
        }
        *(long *)(param_1 + 0xb8) = lVar6;
        *(int *)(param_1 + 0xb0) = iVar2;
        iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
        if (iVar2 == 0) {
          uVar5 = 0;
          goto LAB_005a6ff0;
        }
      }
      if (((*(byte *)(lVar4 + 0x38) & 1) == 0) && (iVar2 = FUN_005a3830(param_1), iVar2 == 0))
      goto LAB_005a6fe8;
      *(long *)(param_1 + 0xb8) = lVar7;
      *(undefined4 *)(param_1 + 0xac) = 0;
      uVar5 = (**(code **)(param_1 + 0x38))(1,param_1);
    }
  }
  if (0 < (int)uVar5) {
    return uVar5;
  }
LAB_005a6ff0:
  if (*(int *)(param_1 + 0xb0) != 0) {
    return uVar5;
  }
  *(undefined4 *)(param_1 + 0xb0) = 1;
  return uVar5;
}



uint FUN_004f5130(long param_1,int param_2,int param_3,long *param_4)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  plVar1 = *(long **)(param_1 + 0x98);
  if (param_2 < 0xe) {
    if (0 < param_2) {
      if ((1L << ((byte)param_2 & 0x3f) & 0x8a4U) != 0) {
        return 1;
      }
      if (param_2 == 0xd) {
        *param_4 = plVar1[1];
        return 1;
      }
      if (param_2 == 1) {
        iVar2 = FUN_0040aaf0(param_4);
        if ((((((iVar2 != 0x40) && (iVar2 = FUN_0040aaf0(param_4), iVar2 != 0x1a0)) &&
              (iVar2 = FUN_0040aaf0(param_4), iVar2 != 0x2a3)) &&
             ((iVar2 = FUN_0040aaf0(param_4), iVar2 != 0x2a0 &&
              (iVar2 = FUN_0040aaf0(param_4), iVar2 != 0x2a1)))) &&
            ((iVar2 = FUN_0040aaf0(param_4), iVar2 != 0x2a2 &&
             ((iVar2 = FUN_0040aaf0(param_4), iVar2 != 0x448 &&
              (iVar2 = FUN_0040aaf0(param_4), iVar2 != 0x449)))))) &&
           ((iVar2 = FUN_0040aaf0(param_4), iVar2 != 0x44a &&
            ((iVar2 = FUN_0040aaf0(param_4), iVar2 != 1099 &&
             (iVar2 = FUN_0040aaf0(param_4), iVar2 != 0x477)))))) {
          FUN_0051f420();
          FUN_0051f540("../crypto/ec/ec_pmeth.c",0x171,"pkey_ec_ctrl");
          FUN_0051f8f0(0x10,0x8a,0);
          return 0;
        }
        plVar1[1] = (long)param_4;
        return 1;
      }
    }
    goto LAB_004f5184;
  }
  if (9 < param_2 - 0x1001U) goto LAB_004f5184;
  switch(param_2) {
  case 0x1002:
    if (*plVar1 == 0) {
      FUN_0051f420();
      uVar3 = 0;
      FUN_0051f540("../crypto/ec/ec_pmeth.c",0x10c,"pkey_ec_ctrl");
      FUN_0051f8f0(0x10,0x8b,0);
    }
    else {
      uVar3 = 1;
      FUN_004ef8a0(*plVar1,param_3);
    }
    break;
  case 0x1003:
    if (param_3 == -2) {
      if ((char)plVar1[3] != -1) {
        return (int)(char)plVar1[3];
      }
      uVar5 = thunk_FUN_00541030(*(undefined8 *)(param_1 + 0x88));
      uVar3 = FUN_004ee6c0(uVar5);
      return uVar3 >> 0xc & 1;
    }
    if (param_3 + 1U < 3) {
      *(char *)(plVar1 + 3) = (char)param_3;
      if (param_3 == -1) {
        FUN_004ed620(plVar1[2]);
        plVar1[2] = 0;
        return 1;
      }
      lVar4 = thunk_FUN_00541030(*(undefined8 *)(param_1 + 0x88));
      if (*(long *)(*(long *)(param_1 + 0x88) + 0x60) != 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/ec/ec_pmeth.c",0x126,"pkey_ec_ctrl");
        FUN_0051f8f0(0x10,0x8010c,0);
        return 0;
      }
      if (*(long *)(lVar4 + 0x18) != 0) {
        iVar2 = FUN_004b7cc0(*(undefined8 *)(*(long *)(lVar4 + 0x18) + 0x18));
        if (iVar2 != 0) {
          return 1;
        }
        lVar6 = plVar1[2];
        if (lVar6 == 0) {
          lVar6 = FUN_004ed9d0(lVar4);
          plVar1[2] = lVar6;
          if (lVar6 == 0) {
            return 0;
          }
        }
        if (param_3 != 0) {
          FUN_004ee8a0();
          return 1;
        }
        FUN_004ee930(lVar6,0x1000);
        return 1;
      }
    }
    goto LAB_004f5184;
  case 0x1004:
    if (param_3 == -2) {
      return (int)*(char *)((long)plVar1 + 0x19);
    }
    if (param_3 - 1U < 2) {
      *(char *)((long)plVar1 + 0x19) = (char)param_3;
      return 1;
    }
    goto LAB_004f5184;
  case 0x1005:
    plVar1[4] = (long)param_4;
    uVar3 = 1;
    break;
  case 0x1006:
    uVar3 = 1;
    *param_4 = plVar1[4];
    break;
  case 0x1007:
    if (0 < param_3) {
      plVar1[7] = (long)param_3;
      return 1;
    }
LAB_004f5184:
    uVar3 = 0xfffffffe;
    break;
  case 0x1008:
    uVar3 = 1;
    *(int *)param_4 = (int)plVar1[7];
    break;
  case 0x1009:
    FUN_0041ad60(plVar1[5],"../crypto/ec/ec_pmeth.c",0x159);
    plVar1[5] = (long)param_4;
    if (param_4 == (long *)0x0) {
      plVar1[6] = 0;
      uVar3 = 1;
    }
    else {
      plVar1[6] = (long)param_3;
      uVar3 = 1;
    }
    break;
  case 0x100a:
    uVar3 = *(uint *)(plVar1 + 6);
    *param_4 = plVar1[5];
    break;
  default:
    lVar4 = FUN_004ed0e0(param_3);
    if (lVar4 == 0) {
      FUN_0051f420();
      uVar3 = 0;
      FUN_0051f540("../crypto/ec/ec_pmeth.c",0x103,"pkey_ec_ctrl");
      FUN_0051f8f0(0x10,0x8d,0);
    }
    else {
      uVar3 = 1;
      FUN_004efd00(*plVar1);
      *plVar1 = lVar4;
    }
  }
  return uVar3;
}



undefined8 FUN_004eff90(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (*(long *)(*param_1 + 0x20) == 0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_lib.c",0xa4,"EC_GROUP_copy");
    FUN_0051f8f0(0x10,0xc0101,0);
  }
  else {
    if (*param_1 != *param_2) {
      FUN_0051f420();
      FUN_0051f540("../crypto/ec/ec_lib.c",0xa8,"EC_GROUP_copy");
      FUN_0051f8f0(0x10,0x65,0);
      return 0;
    }
    if (param_1 == param_2) {
      return 1;
    }
    param_1[0x15] = param_2[0x15];
    *(int *)(param_1 + 4) = (int)param_2[4];
    *(int *)(param_1 + 0x13) = (int)param_2[0x13];
    switch((int)param_2[0x13]) {
    case 0:
      param_1[0x14] = 0;
      break;
    case 1:
      lVar2 = FUN_004fc350(param_2[0x14]);
      param_1[0x14] = lVar2;
      break;
    case 2:
      lVar2 = FUN_00504790(param_2[0x14]);
      param_1[0x14] = lVar2;
      break;
    case 3:
      lVar2 = FUN_00509740(param_2[0x14]);
      param_1[0x14] = lVar2;
      break;
    case 4:
      lVar2 = FUN_0050bf90(param_2[0x14]);
      param_1[0x14] = lVar2;
      break;
    case 5:
      lVar2 = FUN_004f2940(param_2[0x14]);
      param_1[0x14] = lVar2;
    }
    lVar2 = param_2[0x12];
    lVar4 = param_1[0x12];
    if (lVar2 == 0) {
      FUN_004b9810();
      param_1[0x12] = 0;
    }
    else {
      if (lVar4 == 0) {
        lVar4 = FUN_004b9790();
        param_1[0x12] = lVar4;
        if (lVar4 == 0) {
          return 0;
        }
        lVar2 = param_2[0x12];
      }
      lVar2 = FUN_004b9b30(lVar4,lVar2);
      if (lVar2 == 0) {
        return 0;
      }
    }
    lVar2 = param_2[1];
    lVar4 = param_1[1];
    if (lVar2 == 0) {
      FUN_004efdb0();
      param_1[1] = 0;
    }
    else {
      if (lVar4 == 0) {
        lVar4 = FUN_004efb90(param_1);
        param_1[1] = lVar4;
        if (lVar4 == 0) {
          return 0;
        }
        lVar2 = param_2[1];
      }
      iVar1 = FUN_004efec0(lVar4,lVar2);
      if (iVar1 == 0) {
        return 0;
      }
    }
    if (((*(byte *)*param_2 & 2) != 0) ||
       ((lVar2 = FUN_004b8260(param_1[2],param_2[2]), lVar2 != 0 &&
        (lVar2 = FUN_004b8260(param_1[3],param_2[3]), lVar2 != 0)))) {
      lVar2 = param_2[6];
      *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)((long)param_2 + 0x24);
      *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)((long)param_2 + 0x2c);
      *(int *)(param_1 + 5) = (int)param_2[5];
      if (lVar2 == 0) {
        FUN_0041ad60(param_1[6],"../crypto/ec/ec_lib.c",0x102);
        lVar2 = 0;
        param_1[6] = 0;
      }
      else {
        FUN_0041ad60(param_1[6],"../crypto/ec/ec_lib.c",0xf9);
        lVar2 = FUN_0041ad90(param_2[7],"../crypto/ec/ec_lib.c",0xfa);
        param_1[6] = lVar2;
        if (lVar2 == 0) {
          FUN_0051f420(0);
          FUN_0051f540("../crypto/ec/ec_lib.c",0xfb,"EC_GROUP_copy");
          FUN_0051f8f0(0x10,0xc0100,0);
          return 0;
        }
        thunk_FUN_00713a50(lVar2,param_2[6],param_2[7]);
        lVar2 = param_2[7];
      }
      param_1[7] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x004f00ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*param_1 + 0x20))(param_1,param_2);
      return uVar3;
    }
  }
  return 0;
}


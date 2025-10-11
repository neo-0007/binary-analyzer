
undefined4
FUN_0040ee60(int *param_1,long param_2,int param_3,long param_4,undefined4 param_5,long param_6)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  bool bVar4;
  long local_40 [2];
  
  local_40[0] = param_2;
  if (param_2 == 0) {
    bVar4 = param_6 == 0;
    if ((param_3 != 0) && (!bVar4)) goto LAB_0040ee90;
    plVar3 = local_40;
  }
  else {
    if (param_6 != 0) {
LAB_0040ee90:
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/p_lib.c",0x5cb,"pkey_set_type");
      FUN_0051f8f0(6,0xc0103,0);
      return 0;
    }
    plVar3 = (long *)0x0;
    bVar4 = true;
  }
  if (param_1 != (int *)0x0) {
    if ((*(long *)(param_1 + 8) == 0) && (*(long *)(param_1 + 0x1a) == 0)) {
      if (((*param_1 != 0) && (param_1[1] == param_3)) && (*(long *)(param_1 + 2) != 0)) {
        return 1;
      }
    }
    else {
      FUN_0053d300(param_1,1);
      FUN_0040eda0(param_1);
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_0053e7e0(*(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x1a));
        FUN_0053e0f0(*(undefined8 *)(param_1 + 0x18));
        param_1[0x18] = 0;
        param_1[0x19] = 0;
        param_1[0x1a] = 0;
        param_1[0x1b] = 0;
      }
      *param_1 = 0;
    }
    FUN_0051a270(*(undefined8 *)(param_1 + 4));
    param_1[4] = 0;
    param_1[5] = 0;
    FUN_0051a270(*(undefined8 *)(param_1 + 6));
    param_1[6] = 0;
    param_1[7] = 0;
  }
  if (param_4 == 0) {
    piVar2 = (int *)0x0;
    if (param_3 != 0) {
      piVar2 = (int *)FUN_004a1430(plVar3,param_3,param_5);
      bVar4 = (bool)(bVar4 & piVar2 == (int *)0x0);
    }
  }
  else {
    piVar2 = (int *)FUN_004a14a0(plVar3,param_4);
    bVar4 = (bool)(bVar4 & piVar2 == (int *)0x0);
  }
  if ((param_1 == (int *)0x0) && (plVar3 != (long *)0x0)) {
    FUN_0051a270(local_40[0]);
    if (bVar4) {
LAB_0040f0a3:
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/p_lib.c",0x5fe,"pkey_set_type");
      FUN_0051f8f0(6,0x9c,0);
      return 0;
    }
  }
  else {
    if (bVar4) goto LAB_0040f0a3;
    if (param_1 != (int *)0x0) {
      if (param_6 == 0) {
        param_1[0x18] = 0;
        param_1[0x19] = 0;
        param_1[1] = param_3;
        *param_1 = param_3;
        *(int **)(param_1 + 2) = piVar2;
      }
      else {
        iVar1 = FUN_0053e0e0(param_6);
        if (iVar1 == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/evp/p_lib.c",0x604,"pkey_set_type");
          FUN_0051f8f0(6,0xc0103,0);
          return 0;
        }
        *(long *)(param_1 + 0x18) = param_6;
        param_1[1] = param_3;
        *param_1 = param_3;
      }
      if (piVar2 == (int *)0x0) {
        *param_1 = -1;
      }
      else if (param_3 == 0) {
        *param_1 = *piVar2;
      }
      if (((plVar3 == (long *)0x0) && (local_40[0] != 0)) && (iVar1 = FUN_0051a180(), iVar1 == 0)) {
        FUN_0051f420();
        FUN_0051f540("../crypto/evp/p_lib.c",0x626,"pkey_set_type");
        FUN_0051f8f0(6,0x86,0);
        return 0;
      }
      *(long *)(param_1 + 4) = local_40[0];
    }
  }
  return 1;
}


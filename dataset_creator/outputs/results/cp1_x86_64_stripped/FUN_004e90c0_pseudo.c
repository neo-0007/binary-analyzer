
int * FUN_004e90c0(undefined8 param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 == (int *)0x0) {
    param_2 = (int *)FUN_004e8560();
    if (param_2 == (int *)0x0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/ec/ec_asn1.c",0x1dd,"EC_GROUP_get_ecpkparameters");
      FUN_0051f8f0(0x10,0xc0100,0);
      return (int *)0x0;
    }
  }
  else if (*param_2 == 0) {
    FUN_004a06b0(*(undefined8 *)(param_2 + 2));
  }
  else if ((*param_2 == 1) && (*(long *)(param_2 + 2) != 0)) {
    FUN_004e84e0();
  }
  iVar1 = FUN_004ef8b0(param_1);
  if (iVar1 == 1) {
    iVar1 = FUN_004ef870(param_1);
    if (iVar1 != 0) {
      lVar2 = FUN_004239c0(iVar1);
      if ((lVar2 != 0) && (lVar3 = FUN_00424a00(lVar2), lVar3 != 0)) {
        *param_2 = 0;
        *(long *)(param_2 + 2) = lVar2;
        return param_2;
      }
      FUN_004a06b0(lVar2);
      FUN_0051f420();
      FUN_0051f540("../crypto/ec/ec_asn1.c",0x1f2,"EC_GROUP_get_ecpkparameters");
      FUN_0051f8f0(0x10,0xa7,0);
    }
  }
  else {
    *param_2 = 1;
    lVar2 = FUN_004e85e0(param_1,0);
    *(long *)(param_2 + 2) = lVar2;
    if (lVar2 != 0) {
      return param_2;
    }
  }
  FUN_004e8580(param_2);
  return (int *)0x0;
}


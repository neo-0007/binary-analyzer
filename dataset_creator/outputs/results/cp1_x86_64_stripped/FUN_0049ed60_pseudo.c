
int * FUN_0049ed60(undefined8 param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (param_2 == (int *)0x0) {
    piVar3 = (int *)FUN_004a2180(param_3);
    if (piVar3 == (int *)0x0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/asn1/a_int.c",0x1db,"bn_to_asn1_string");
      FUN_0051f8f0(0xd,0x8010a,0);
      return (int *)0x0;
    }
  }
  else {
    param_2[1] = param_3;
    piVar3 = param_2;
  }
  iVar1 = FUN_004b7d60(param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_004b7ba0(param_1);
    if (iVar1 == 0) {
      piVar3[1] = piVar3[1] | 0x102;
    }
  }
  iVar2 = FUN_004b7bb0(param_1);
  iVar1 = iVar2 + 7;
  if (iVar2 + 7 < 0) {
    iVar1 = iVar2 + 0xe;
  }
  iVar2 = 1;
  if (iVar1 >> 3 != 0) {
    iVar2 = iVar1 >> 3;
  }
  iVar1 = FUN_004a1fa0(piVar3,0,iVar2);
  if (iVar1 != 0) {
    iVar1 = FUN_004b7ba0(param_1);
    if (iVar1 == 0) {
      iVar2 = FUN_004b87d0(param_1,*(undefined8 *)(piVar3 + 2));
    }
    else {
      **(undefined1 **)(piVar3 + 2) = 0;
    }
    *piVar3 = iVar2;
    return piVar3;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/asn1/a_int.c",0x1e8,"bn_to_asn1_string");
  FUN_0051f8f0(0xd,0xc0100,0);
  if (param_2 != piVar3) {
    thunk_FUN_004a2270(piVar3);
  }
  return (int *)0x0;
}


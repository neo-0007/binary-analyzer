
undefined8 FUN_004f1b30(long param_1,int *param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = FUN_004ef890();
  if ((((iVar1 == 0x197) && (*(int *)(param_1 + 0x48) != 0)) && (*(int *)(param_1 + 0x4c) != 0)) &&
     (*(int *)(param_1 + 0x50) == 0)) {
    if (param_2 == (int *)0x0) {
      return 1;
    }
    *param_2 = *(int *)(param_1 + 0x4c);
    return 1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/ec/ec_lib.c",0x54b,"EC_GROUP_get_trinomial_basis");
  FUN_0051f8f0(0x10,0xc0101,0);
  return 0;
}


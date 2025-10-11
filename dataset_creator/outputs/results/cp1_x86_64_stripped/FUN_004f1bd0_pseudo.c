
undefined8 FUN_004f1bd0(long param_1,int *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    iVar1 = FUN_004ef890();
    if ((((iVar1 == 0x197) && (*(int *)(param_1 + 0x48) != 0)) && (*(int *)(param_1 + 0x4c) != 0))
       && (((*(int *)(param_1 + 0x50) != 0 && (*(int *)(param_1 + 0x54) != 0)) &&
           (*(int *)(param_1 + 0x58) == 0)))) {
      if (param_2 != (int *)0x0) {
        *param_2 = *(int *)(param_1 + 0x54);
      }
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(param_1 + 0x50);
      }
      uVar2 = 1;
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = *(undefined4 *)(param_1 + 0x4c);
      }
    }
    else {
      FUN_0051f420();
      FUN_0051f540("../crypto/ec/ec_lib.c",0x55f,"EC_GROUP_get_pentanomial_basis");
      FUN_0051f8f0(0x10,0xc0101,0);
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0;
}


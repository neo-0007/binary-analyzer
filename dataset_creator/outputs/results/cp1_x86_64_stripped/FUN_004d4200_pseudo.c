
undefined8 FUN_004d4200(long param_1,undefined8 param_2,uint *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_004b7bb0(*(undefined8 *)(param_1 + 8));
  if (0x8000 < iVar1) {
    FUN_0051f420();
    FUN_0051f540("../crypto/dh/dh_check.c",0xfd,"DH_check_pub_key");
    FUN_0051f8f0(5,0x67,0);
    *param_3 = 0x104;
    return 0;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar1 = FUN_004b77f0(*(undefined8 *)(param_1 + 8));
    if (iVar1 < 0) {
      *param_3 = *param_3 | 0x24;
      return 1;
    }
  }
  uVar2 = FUN_00541d40(param_1 + 8,param_2,param_3);
  return uVar2;
}



undefined8 FUN_0052db10(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00409860();
  iVar1 = FUN_0040a4b0(uVar2);
  if ((param_4 == 0) && (iVar1 - 1U < 2)) {
    uVar2 = FUN_004098f0(param_1);
    iVar1 = FUN_0040a180(param_1);
    iVar1 = FUN_0049de30(param_2,iVar1 * 8,uVar2);
  }
  else {
    uVar2 = FUN_004098f0(param_1);
    iVar1 = FUN_0040a180(param_1);
    iVar1 = FUN_0049d140(param_2,iVar1 * 8,uVar2);
  }
  if (-1 < iVar1) {
    return 1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/evp/e_aria.c",0x4c,"aria_init_key");
  FUN_0051f8f0(6,0xb0,0);
  return 0;
}


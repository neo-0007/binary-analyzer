
undefined8 FUN_004f4c40(undefined8 *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  
  pbVar1 = (byte *)*param_1;
  if ((*(code **)(pbVar1 + 0x90) == (code *)0x0) && ((*pbVar1 & 1) == 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_oct.c",0x4f,"EC_POINT_point2oct");
    FUN_0051f8f0(0x10,0xc0101,0);
  }
  else {
    if ((pbVar1 == (byte *)*param_2) &&
       (((*(int *)(param_1 + 4) == 0 || (*(int *)(param_2 + 1) == 0)) ||
        (*(int *)(param_1 + 4) == *(int *)(param_2 + 1))))) {
      if ((*pbVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x004f4d01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(pbVar1 + 0x90))();
        return uVar2;
      }
      if (*(int *)(pbVar1 + 4) != 0x196) {
        uVar2 = FUN_005ce180();
        return uVar2;
      }
      uVar2 = FUN_0050ca30();
      return uVar2;
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_oct.c",0x53,"EC_POINT_point2oct");
    FUN_0051f8f0(0x10,0x65,0);
  }
  return 0;
}


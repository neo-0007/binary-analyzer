
undefined8 FUN_004f4d10(undefined8 *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  
  pbVar1 = (byte *)*param_1;
  if ((*(code **)(pbVar1 + 0x98) == (code *)0x0) && ((*pbVar1 & 1) == 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_oct.c",0x6e,"EC_POINT_oct2point");
    FUN_0051f8f0(0x10,0xc0101,0);
  }
  else {
    if ((pbVar1 == (byte *)*param_2) &&
       (((*(int *)(param_1 + 4) == 0 || (*(int *)(param_2 + 1) == 0)) ||
        (*(int *)(param_1 + 4) == *(int *)(param_2 + 1))))) {
      if ((*pbVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x004f4ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(pbVar1 + 0x98))();
        return uVar2;
      }
      if (*(int *)(pbVar1 + 4) != 0x196) {
        uVar2 = FUN_005ce5b0();
        return uVar2;
      }
      uVar2 = FUN_0050ce20();
      return uVar2;
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_oct.c",0x72,"EC_POINT_oct2point");
    FUN_0051f8f0(0x10,0x65,0);
  }
  return 0;
}


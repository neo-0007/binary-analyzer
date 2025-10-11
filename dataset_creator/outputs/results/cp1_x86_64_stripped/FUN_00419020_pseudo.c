
undefined8 FUN_00419020(undefined8 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar2 = (undefined8 *)FUN_00417930();
  if (puVar2 == (undefined8 *)0x0) {
    return 0;
  }
  puVar3 = (undefined8 *)FUN_00418ef0(puVar2,param_2);
  if (puVar3 != (undefined8 *)0x0) {
    if (((param_3 < 0) || (iVar1 = FUN_00436480(*puVar3), iVar1 <= param_3)) ||
       (lVar4 = FUN_004364a0(*puVar3,param_3), lVar4 == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
      *(code **)(lVar4 + 0x18) = FUN_00418e50;
      *(code **)(lVar4 + 0x28) = FUN_00418e60;
      *(code **)(lVar4 + 0x20) = FUN_00418f70;
    }
    FUN_004222e0(*puVar2);
    return uVar5;
  }
  return 0;
}


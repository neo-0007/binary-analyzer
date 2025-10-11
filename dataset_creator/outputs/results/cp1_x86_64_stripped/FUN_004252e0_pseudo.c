
void FUN_004252e0(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_2 + 2) << 0xd ^ *(uint *)(param_2 + 2);
  uVar2 = uVar2 >> 0x11 ^ uVar2;
  uVar2 = uVar2 << 5 ^ uVar2;
  *(uint *)(param_2 + 2) = uVar2;
  if ((uVar2 & 1) == 0) {
    param_2[1] = param_2[1] + 1;
    return;
  }
  lVar1 = FUN_005459e0(*param_2,param_1);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x20))(*(undefined8 *)(lVar1 + 0x10));
    FUN_0041ad60(lVar1,"../crypto/property/property.c",0xce);
    return;
  }
  return;
}



bool FUN_005186d0(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  lVar1 = FUN_00516bf0(uVar2);
  uVar2 = FUN_00516c10(uVar2);
  lVar1 = (**(code **)(lVar1 + 0x78))(uVar2,*(undefined4 *)(param_2 + 8),param_1);
  *(long *)(param_2 + 0x20) = lVar1;
  return lVar1 != 0;
}


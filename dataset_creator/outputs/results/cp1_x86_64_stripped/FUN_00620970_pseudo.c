
undefined8 FUN_00620970(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  *(uint *)(param_1 + 0x5c) = param_2;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (param_2 == 2) {
    uVar1 = FUN_00620390(param_1,1);
    return uVar1;
  }
  if ((param_2 & 0xfffffffd) != 1) {
    return 1;
  }
  uVar1 = FUN_00620390(param_1,0);
  return uVar1;
}


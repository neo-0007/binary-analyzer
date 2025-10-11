
undefined8 FUN_004eeb60(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  if ((*(long **)(param_1 + 0x18) == (long *)0x0) ||
     (lVar1 = **(long **)(param_1 + 0x18), lVar1 == 0)) {
    return 0;
  }
  pcVar2 = *(code **)(lVar1 + 0x138);
  if (pcVar2 == (code *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ec/ec_key.c",0x3a4,"EC_KEY_oct2priv");
    FUN_0051f8f0(0x10,0xc0101,0);
    return 0;
  }
  uVar3 = (*pcVar2)();
  if ((int)uVar3 != 1) {
    return uVar3;
  }
  *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
  return uVar3;
}


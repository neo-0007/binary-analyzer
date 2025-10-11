
undefined8 WPACKET_allocate_bytes(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = WPACKET_reserve_bytes();
  if ((int)uVar1 != 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + param_2;
    uVar1 = 1;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  }
  return uVar1;
}


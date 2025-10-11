
void FUN_00547da0(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    FUN_0041ad60(puVar2,"../crypto/packet.c",0x1fd);
    puVar2 = puVar1;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}

